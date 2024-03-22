//
//     Generated by private class-dump
//

@class NSString, NSTimer, BDPThreadSafeDictionary, BDPThreadSafeArray;

@interface BDPVideoContainerPreloadManager : NSObject <BDPAppConfigLoadProtocol> {
    BDPThreadSafeDictionary *_preloadVideoContainers;
    BDPThreadSafeArray *_preloadVideoApps;
    NSTimer *_cleanTimer;
}

@property (retain, nonatomic) BDPThreadSafeDictionary *preloadVideoContainers;
@property (retain, nonatomic) BDPThreadSafeArray *preloadVideoApps;
@property (retain, nonatomic) NSTimer *cleanTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;
+ (void)didPreloadAppConfig:(id)arg0 withSchema:(id)arg1 model:(id)arg2;
+ (void)didLoadAppConfig:(id)arg0 withSchema:(id)arg1 model:(id)arg2;
+ (long long)preloadDuration:(id)arg0;
+ (id)preloadedVideoContainerWithUniqueID:(id)arg0;
+ (void)removeVideoContainerWithUniqueID:(id)arg0;
+ (id)appConfigWithModel:(id)arg0;
+ (id)sharedManager;

- (void)reciveMemoryWarningNotification:(id)arg0;
- (void)setCleanTimer:(id)arg0;
- (void)setupAutoClean;
- (long long)getCacheCountLimit;
- (id)preloadVideoContainers;
- (id)preloadVideoContainerWithConfig:(id)arg0 model:(id)arg1 path:(id)arg2;
- (id)preloadVideoApps;
- (void)setPreloadVideoContainers:(id)arg0;
- (void)setPreloadVideoApps:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)cleanTimer;
- (void)removeAllObjects;

@end