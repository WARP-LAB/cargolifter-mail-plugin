//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header


@interface SpotlightDiagnostics : NSObject
{
}

+ (void)_checkMessages:(id)arg1 resultHandler:(id)arg2;
+ (BOOL)_performVerificationWithActivity:(id)arg1;
+ (id)_randomMessagesFromMailbox:(id)arg1 sinceCutoffDate:(id)arg2 sampleSize:(NSUInteger)arg3;
+ (id)_verificationActivity;
+ (id)diagnosticStringForMessages:(id)arg1;
+ (id)log;
+ (void)scheduleVerification;

@end

