//
//     Generated by private class-dump
//

@class NSDictionary, AWEAwemeModel, UIView, NSMutableArray, UIViewController;
@protocol AWEFeedTabItemViewControllerProtocol;

@protocol AWEFeedContainerViewControllerProtocol <AWEReferenceTrackable>

@property (nonatomic, readonly) UIViewController<AWEFeedTabItemViewControllerProtocol> *currentFeedVC;
@property (nonatomic, retain) NSMutableArray *orderedViewControllers;
@property (nonatomic, readonly) UIView *segmentControl;
@property (nonatomic, readonly) AWEAwemeModel *currentAweme;
@property (nonatomic, readonly) long long currentIndex;
@property (nonatomic) BOOL forbidHideStatusBar;
@property (nonatomic, copy) NSDictionary *insertRequestParams;
@property (nonatomic) BOOL isFromConcernToFeedButton;
@property (nonatomic) BOOL willRewardLynxVCOpen;

- (void)setAccessoriesHidden:(BOOL)arg0;
- (id)currentAweme;
- (id)currentTabReferString;
- (id)getTabCenterPointWithTabId:(id)arg0;
- (id)getTabCenterPointWithTabId:(id)arg0;
- (id)getFeedTabTitle;
- (void)hideYellowDotWhenEnterConcernTab;
- (void)switchToTab:(long long)arg0;
- (void)switchToTab:(long long)arg0;
- (void)switchToTabAtIndex:(long long)arg0 WithXTabTabType:(long long)arg1 param:(id)arg2;
- (void)switchToTabAtIndex:(long long)arg0 WithXTabTabType:(long long)arg1 param:(id)arg2;
- (id)followRedDotTrackString;
- (long long)followRedDotCount;
- (unsigned long long)launchIndex;
- (void)concernTabDidShowTrackWhenRedDotDidShowWithIndex:(long long)arg0;
- (void)concernTabDidShowTrackWhenRedDotDidShowWithIndex:(long long)arg0;
- (BOOL)hadShowConcernLeftPanGuide;
- (void)setAccessoriesAlpha:(double)arg0 animateDuration:(double)arg1;
- (BOOL)showSearchBubbleAwemeCaptionInfo:(id)arg0 aweme:(id)arg1;
- (void)hideSearchBubble;
- (void)checkNewCaptionMessage;
- (id)segmentViewForIndex:(long long)arg0;
- (id)segmentViewForIndex:(long long)arg0;
- (BOOL)isInNearbyFeedTab;
- (id)getPositionWithTabId:(id)arg0;
- (BOOL)canLandingWithTabId:(id)arg0 params:(id)arg1;
- (BOOL)canLandingWithTabId:(id)arg0 params:(id)arg1;
- (void)landingTabWithTabId:(id)arg0 params:(id)arg1 completionBlock:(id /* block */)arg2 exitBlock:(id /* block */)arg3 storeLanding:(BOOL)arg4;
- (void)landingTabWithTabId:(id)arg0 params:(id)arg1 completionBlock:(id /* block */)arg2 exitBlock:(id /* block */)arg3 storeLanding:(BOOL)arg4;
- (void)beginLandingTabWithTabId:(id)arg0 withParams:(id)arg1;
- (void)beginLandingTabWithTabId:(id)arg0 withParams:(id)arg1;
- (void)endLandingTabWithTabId:(id)arg0 withParams:(id)arg1;
- (void)endLandingTabWithTabId:(id)arg0 withParams:(id)arg1;
- (void)setOrderedViewControllers:(id)arg0;
- (BOOL)forbidHideStatusBar;
- (void)setForbidHideStatusBar:(BOOL)arg0;
- (id)insertRequestParams;
- (void)setInsertRequestParams:(id)arg0;
- (BOOL)isFromConcernToFeedButton;
- (void)setIsFromConcernToFeedButton:(BOOL)arg0;
- (BOOL)willRewardLynxVCOpen;
- (void)setWillRewardLynxVCOpen:(BOOL)arg0;
- (BOOL)isFollowTabBubbleShowing;
- (id)showFavoriteFirstGuidePopoverIfNeed;
- (void)topBarScrollToIndex:(long long)arg0;
- (void)topBarScrollToIndex:(long long)arg0;
- (struct CGPoint { double x0; double x1; })calculateTabCenterWithIndex:(long long)arg0;
- (struct CGPoint { double x0; double x1; })calculateTabCenterWithIndex:(long long)arg0;
- (id)currentFeedVC;
- (long long)currentIndex;
- (void)play;
- (void)pause;
- (id)segmentControl;
- (id)orderedViewControllers;

@end
