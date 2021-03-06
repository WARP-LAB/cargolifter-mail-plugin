#!/usr/bin/env bash

# This script builds and runs the unit tests and produces output in a format that is compatible with Jenkins.

base=`dirname $0`
pushd "$base/.." > /dev/null
build="$PWD/test-build"
ocunit2junit="$base/OCUnit2JUnit/bin/ocunit2junit"
popd > /dev/null

sym="$build/sym"
obj="$build/obj"

testout="$build/output.log"
testerr="$build/error.log"

rm -rf "$build"
mkdir -p "$build"

testMac()
{
	echo "Testing Mac"
	xcodebuild -workspace "DAVKit.xcworkspace" -scheme "DAVKit OS X" -sdk "macosx" -config "Debug" test OBJROOT="$obj" SYMROOT="$sym" > "$testout" 2> "$testerr"
	if [ $? != 0 ]; then
		echo "Mac build failed"
		cat "$testerr"
	else
		cd "$build"
		rm -rf test-reports
		"../$ocunit2junit" < "$testout"
		mv test-reports test-mac
		cd ..
	fi
}

testIOS()
{
	# have to build the project/target, not the workspace/scheme, since xcodebuild doesn't support
	# running unit tests on the ios simulator via workspace/scheme, for some bizarre reason
	echo "Testing iOS"
	xcodebuild -project "DAVKit.xcodeproj" -target "Tests iOS" -sdk "iphonesimulator" -arch i386 -config "Debug" build OBJROOT="$obj" SYMROOT="$sym" TEST_AFTER_BUILD=YES > "$testout" 2> "$testerr"
	if [ $? != 0 ]; then
		echo "iOS build failed"
		cat "$testerr"
	else
		cd "$build"
		rm -rf test-reports
		"../$ocunit2junit" < "$testout"
		mv test-reports test-ios
		cd ..
	fi
}


testIOS
testMac

cd "$build"
mkdir test-reports
mv test-mac test-reports/
mv test-ios test-reports/
