//
//     Generated by private class-dump
//

@class NSString;

@interface HGHeartbeatTrackerPluginImpl : NSObject <HGHeartbeatTrackerPluginDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;
+ (void)bootstrapLaunch;

- (void)createHeatbeatTrackerWithAppId:(id)arg0 config:(id)arg1;

@end
