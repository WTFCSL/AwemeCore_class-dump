//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary;

@interface BDPNetworkBackgroundManager : NSObject <BDPContainerLifeCycleMessage, BDPWarmBootMessage> {
    NSMutableDictionary *_backgroundData;
}

@property (retain, nonatomic) NSMutableDictionary *backgroundData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;
+ (id)sharedManager;

- (void)applicationEnterWithUniqueID:(id)arg0;
- (void)applicationExitWithUniqueID:(id)arg0;
- (void)viewDidDisappear:(id)arg0 uniqueID:(id)arg1;
- (void)cleanWarmCacheWithUniqueID:(id)arg0;
- (id)backgroundData;
- (long long)useLifeCycleType:(id)arg0;
- (BOOL)canRequestForUniqueId:(id)arg0;
- (void)setBackgroundData:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end
