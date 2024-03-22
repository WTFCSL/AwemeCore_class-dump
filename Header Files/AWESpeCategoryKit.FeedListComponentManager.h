//
//     Generated by private class-dump
//

@interface AWESpeCategoryKit.FeedListComponentManager : AWEBaseControllerManager <AWESpeCategoryKit.PlayerControlProtocol, AWESpeCategoryKit.DataChangeProtocol, AWESpeCategoryKit.TabContainerLifeCycleProtocol, AWESpeCategoryKit.ListContainerLifeCycleProtocol, AWESpeCategoryKit.ContainerLifeCycleProtocol, AWESpeCategoryKit.AppLifeCycleProtocol, AWESpeCategoryKit.ComponentProtocol> {
    void /* unknown type, empty encoding */ componentProvider;
    void /* unknown type, empty encoding */ cacheSelectorDict;
}

- (void)onPlay;
- (void)onPause;
- (void)onReplayWithTimes:(long long)arg0;
- (void)onLoadPlaceholderDataEndWithSuccess:(BOOL)arg0 response:(id)arg1 error:(id)arg2;
- (void)onFetchListDataEndWithReason:(long long)arg0 success:(BOOL)arg1 response:(id)arg2 error:(id)arg3;
- (void)onLoadMoreListDataEndWithReason:(long long)arg0 success:(BOOL)arg1 response:(id)arg2 error:(id)arg3;
- (void)onListDidReloadData;
- (void)onLoadPlaceholderDataStart;
- (void)onFetchListDataStartWithReason:(long long)arg0;
- (void)onLoadMoreListDataStartWithReason:(long long)arg0;
- (void)onTabContainerViewWillAppear;
- (void)onTabContainerViewDidAppear;
- (void)onTabContainerViewWillDisappear;
- (void)onTabContainerViewDidDisappear;
- (void)onTabContainerViewWillLayoutSubviews;
- (void)onTabContainerViewDidLayoutSubviews;
- (void)onScrollViewDidEndDeceleratingWithScrollView:(id)arg0;
- (void)onScrollViewDidEndDraggingWithScrollView:(id)arg0 willDecelerate:(BOOL)arg1;
- (void)onSetupCollectionViewWithCollectionView:(id)arg0;
- (void)onScrollViewDidScrollWithScrollView:(id)arg0;
- (void)onScrollViewWillBeginDraggingWithScrollView:(id)arg0;
- (void)onContainerViewWillDisappear;
- (void)onContainerViewDidLoad;
- (void)onContainerViewDidDisappear;
- (void)onContainerWillMoveToParent:(id)arg0;
- (void)onContainerDidMoveToParent:(id)arg0;
- (void)onContainerViewWillLayoutSubviews;
- (void)onContainerViewDidLayoutSubviews;
- (void)onContainerDidReceiveMemoryWarning;
- (void)onContainerViewWillAppear;
- (void)onContainerViewDidAppear;
- (void)appWillEnterForeground;
- (void)appDidEnterBackground;
- (void)appDidBecomeActive;
- (void)appWillResignActive;
- (void)addController:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end