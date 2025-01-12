//
//     Generated by private class-dump
//

@class NSString, NSMutableSet, NSMutableDictionary;

@interface AWELiveLifeLynxModuleManager : NSObject <AWEPOICubeViewDelegate> {
    NSMutableSet *_lynxModuleUnusedPool;
    NSMutableSet *_lynxModuleLoadingPool;
    NSMutableDictionary *_moduleStartTimeMap;
    struct __CFRunLoopObserver { } *_runLoopObserver;
}

@property (retain, nonatomic) NSMutableSet *lynxModuleUnusedPool;
@property (retain, nonatomic) NSMutableSet *lynxModuleLoadingPool;
@property (retain, nonatomic) NSMutableDictionary *moduleStartTimeMap;
@property (nonatomic) struct __CFRunLoopObserver { } *runLoopObserver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareManager;

- (void)stopRunLoopObserver;
- (void)cubeView:(id)arg0 viewDidChangeContentSize:(struct CGSize { double x0; double x1; })arg1;
- (void)cubeViewWillStartLoading:(id)arg0;
- (void)cubeView:(id)arg0 didStartFetchResourceWithURL:(id)arg1;
- (void)cubeView:(id)arg0 didFetchedResource:(id)arg1 error:(id)arg2;
- (void)cubeViewDidFirstScreen:(id)arg0;
- (void)cubeView:(id)arg0 didFinishLoadWithURL:(id)arg1;
- (void)cubeView:(id)arg0 didLoadFailedWithUrl:(id)arg1 error:(id)arg2;
- (void)cubeView:(id)arg0 didReceiveError:(id)arg1;
- (void)cleanCacheLynxModuleIfNeeded;
- (void)createLynxModule;
- (id)currentGeckoVersion;
- (void)preloadLynxMoudleIfNeeded;
- (id)acquireReadyLynxModule;
- (void)releaseLynxModule:(id)arg0;
- (void)setLynxModuleUnusedPool:(id)arg0;
- (void)setLynxModuleLoadingPool:(id)arg0;
- (void)setModuleStartTimeMap:(id)arg0;
- (id)lynxModuleUnusedPool;
- (id)lynxModuleLoadingPool;
- (id)moduleStartTimeMap;
- (void).cxx_destruct;
- (struct __CFRunLoopObserver { } *)runLoopObserver;
- (void)dealloc;
- (void)setRunLoopObserver:(struct __CFRunLoopObserver { } *)arg0;

@end
