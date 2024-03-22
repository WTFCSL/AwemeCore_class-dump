//
//     Generated by private class-dump
//

@class NSString;

@interface HGSlardarMonitorPluginImpl : NSObject <HGMonitorPluginDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;
+ (void)bootstrapLaunch;

- (void)setupObserver;
- (void)reportEvent:(id)arg0 metric:(id)arg1 category:(id)arg2 extra:(id)arg3;
- (void)enterForeground:(id)arg0;
- (double)systemUsedMemoryBytes;
- (void)reportData:(id)arg0 logType:(id)arg1;
- (void)reportLogStartAt:(double)arg0 endAt:(double)arg1 scene:(id)arg2;
- (void)exitForeground:(id)arg0;
- (id)init;
- (void)dealloc;

@end