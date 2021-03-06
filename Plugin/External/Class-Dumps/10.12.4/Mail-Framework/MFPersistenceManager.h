//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header


@interface MFPersistenceManager : NSObject
{
}

+ (id)_adjustPath:(id)arg1 toVersion:(long long)arg2 usingMigrationVersion:(BOOL)arg3;
+ (id)adjustPath:(id)arg1 toMigrationDestinationVersion:(long long)arg2;
+ (id)adjustPath:(id)arg1 toVersion:(long long)arg2;
+ (id)autoDownloadDirectoryPath;
+ (id)baseMailDirectory;
+ (id)baseMailDirectoryURL;
+ (id)legacyDefaultMailDirectory;
+ (id)mailAccountDirectory;
+ (id)mailAccountDirectoryURL;
+ (id)mailDataDirectory;
+ (id)mailDataDirectoryName;
+ (id)mailDataDirectoryURL;
+ (id)mailDataSupportDirectory;
+ (id)mailDataSupportDirectoryURL;
+ (id)migrationDirectoryNameForDestinationPersistenceLayoutVersion:(long long)arg1;
+ (id)nonContainerizedMailRootDirectory;
+ (id)persistenceInfoFile;
+ (long long)persistenceLayout;
+ (long long)persistenceLayoutOfBaseMailDirectory:(id)arg1;
+ (void)resetPersistenceLayout;
+ (id)supportDirectory;
+ (id)supportDirectoryURL;
+ (id)tildeUnresolvedBaseMailDirectory;
+ (id)topLevelDirectoryNameForPersistenceLayoutVersion:(long long)arg1;
+ (id)unresolvedBaseMailDirectory;

@end

