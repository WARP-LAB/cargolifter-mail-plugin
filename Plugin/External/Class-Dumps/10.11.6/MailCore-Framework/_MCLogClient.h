//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//
#pragma clang system_header


@interface _MCLogClient : NSObject
{
    int _fileDescriptor;
    struct __asl_object_s *_aslClient;
}

+ (id)_today;
+ (void)cleanUpOldLogs;
+ (void)initialize;
+ (void)logsDidRollOver:(id)arg1;
+ (void)setUpMidnightCleanupTimer;
@property(readonly, nonatomic) struct __asl_object_s *aslClient; // @synthesize aslClient=_aslClient;
- (void)dealloc;
@property(readonly, nonatomic) int fileDescriptor; // @synthesize fileDescriptor=_fileDescriptor;
- (id)init;
- (id)initWithCategory:(id)arg1;

@end

