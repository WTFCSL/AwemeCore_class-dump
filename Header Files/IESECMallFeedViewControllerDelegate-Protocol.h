//
//     Generated by private class-dump
//

@protocol IESECMallFeedViewControllerDelegate <IESECMallJSBridgeProvider>

- (BOOL)isNativeMallVisibleSupport;
- (void)mediaCellDidDisplay;
- (void)tryShowDesktopGuide;
- (void)liveCardDidDisplay:(id)arg0;
- (id)mallListInnerNativeMonitor;
- (BOOL)feedViewControllerIsNativeCellCardMute:(id)arg0;
- (void)feedViewController:(id)arg0 itemCardSetVoiceMute:(BOOL)arg1;
- (void)feedViewController:(id)arg0 itemCardRouterSchema:(id)arg1;
- (id)feedViewControllerGetRootGlobalExtra:(id)arg0;
- (id)feedViewControllerGetGlobalExtra:(id)arg0;
- (id)feedViewControllerGetCurrentRequestContext:(id)arg0;
- (BOOL)feedViewControllerIsCacheData;
- (long long)loadmoreRangeSize;
- (void)feedViewController:(id)arg0 scrollViewDidScroll:(id)arg1;
- (void)feedViewController:(id)arg0 scrollViewDidEndDecelerating:(id)arg1;
- (void)feedViewController:(id)arg0 scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)feedViewController:(id)arg0 scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)feedViewController:(id)arg0 scrollViewWillBeginDragging:(id)arg1;
- (void)feedViewControllerLoadMoreData:(id)arg0 source:(unsigned long long)arg1;
- (BOOL)feedViewControllerDidFirstScreen:(id)arg0;
- (void)feedViewController:(id)arg0 mallReport:(id)arg1 isCacheData:(BOOL)arg2;
- (BOOL)loadingMoreFlag;
- (id)feedViewControllerdidEnvIdentifier:(id)arg0;
- (void)didCreateCellWith:(long long)arg0 totalInterval:(double)arg1 createCellInterval:(double)arg2 configCellInterval:(double)arg3;
- (void)feedViewController:(id)arg0 feedback:(id)arg1;

@end
