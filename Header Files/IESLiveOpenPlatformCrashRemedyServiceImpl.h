//
//     Generated by private class-dump
//

@class NSString;

@interface IESLiveOpenPlatformCrashRemedyServiceImpl : NSObject <IESLiveOpenPlatformCrashRemedyService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)prepareCrashRemedyWithAppID:(id)arg0 connectionId:(id)arg1 startID:(id)arg2;
- (void)clearCrashRemedy;
- (void)executeCrashRemedy;

@end
