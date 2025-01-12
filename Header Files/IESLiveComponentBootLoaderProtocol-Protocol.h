//
//     Generated by private class-dump
//

@protocol IESLiveComponentBootLoaderProtocol <NSObject>

+ (id)bootloader;

@optional

- (void)installForRoom:(id)arg0;
- (void)cancelAsyncComponentsLoading;
- (void)hideComponents;
- (void)showComponents;
- (BOOL)couldUnInstallAtLeastPriority:(long long)arg0;
- (id)commonTrackContext:(BOOL)arg0;
- (void)preloadInstallForRoom:(id)arg0;
- (void)interfaceOrientationTransitioning:(long long)arg0;
- (void)interfaceOrientationTransitionBegin:(long long)arg0;
- (void)interfaceOrientationTransitionEnd:(long long)arg0;
- (void)unInstall;
- (void)interfaceOrientationChange:(long long)arg0;
- (void)bootstrap;
- (void)viewDidAppear;
- (void)prepareForReuse;
- (void)viewWillAppear;
- (void)viewDidDisappear;
- (void)prepareForClose;
- (void)viewWillDisappear;

@end
