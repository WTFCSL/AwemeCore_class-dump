//
//     Generated by private class-dump
//

@protocol IESECMallMainViewControllerDelegate <IESECMallLifeCycle, IESECMallScrollViewDelegate>

- (void)mainViewConrtroller:(id)arg0 mallReport:(id)arg1 enterNewPage:(BOOL)arg2;

@optional

- (void)closeHalfMall;
- (double)mallContainerTopMargin;
- (BOOL)isHalfState;
- (BOOL)isMallMultiTab;
- (void)mainViewConrtroller:(id)arg0 finishRefreshMainList:(BOOL)arg1 isCacheData:(BOOL)arg2;
- (void)mainViewConrtroller:(id)arg0 finishRefreshMainList:(BOOL)arg1 error:(id)arg2;
- (void)mainViewConrtroller:(id)arg0 isShowingLoadingView:(BOOL)arg1;
- (BOOL)mainViewControllerShouldShowHeaderView:(id)arg0;
- (id)mainViewControllerUseCustomHeaderView:(id)arg0;
- (void)mainViewControllerStartRefreshMainList:(id)arg0;
- (id)mainViewControllerBackgroundDefaultColor:(id)arg0;
- (id)mainViewControllerFeedLynxCardLoadingBackgroundColor:(id)arg0;
- (id)customLoadingViewForMainViewController:(id)arg0;
- (id)globalPropsExtraForMainViewController:(id)arg0;
- (id)rootGlobalPropsExtraForMainViewController:(id)arg0;
- (id)currentRequestContextForMainViewController:(id)arg0 withTabId:(id)arg1;
- (id)currentPageInfoForMainViewController:(id)arg0;
- (unsigned long long)themeStyleForMainViewController:(id)arg0;
- (id)mallBundleConfigUrlForMainViewController:(id)arg0;
- (id)mallPageCardUrlForMainViewController:(id)arg0;
- (long long)userBehaviorChannelID;
- (BOOL)isADEventReportForbidPageChange;
- (BOOL)isNativeMallVisibleSupport;
- (void)mediaCellDidDisplay;
- (void)tryShowDesktopGuide;
- (void)mallMultiTabSelected;
- (void)requireLoginPanel;
- (id)mallEnvIdentifier;
- (void)mallDidFirstScreenStraightOut;
- (id)mallReferString;

@end
