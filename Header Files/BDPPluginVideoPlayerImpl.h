//
//     Generated by private class-dump
//

@class NSString;

@interface BDPPluginVideoPlayerImpl : NSObject <BDPVideoPlayerPluginDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;
+ (void)bootstrapLaunch;

- (id)bdp_videoPlayerWithModel:(id)arg0 uniqueID:(id)arg1 stateDelegate:(id)arg2;

@end
