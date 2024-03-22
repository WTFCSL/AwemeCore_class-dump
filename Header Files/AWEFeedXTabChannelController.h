//
//     Generated by private class-dump
//

@class NSArray, NSString, AWEXTabContainerController;

@interface AWEFeedXTabChannelController : AWEFeedChannelBaseController <AWEXTabContainerControllerTopTabDelegate> {
    BOOL _isEnter;
    AWEXTabContainerController *_contentVC;
    NSArray *_pluginControllers;
}

@property (weak, nonatomic) AWEXTabContainerController *contentVC;
@property (nonatomic) BOOL isEnter;
@property (copy, nonatomic) NSArray *pluginControllers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)verticalPanGestureRecognizerShouldBegin:(id)arg0;
- (void)channelEnterWithModel:(id)arg0;
- (void)channelLeaveWithModel:(id)arg0;
- (id)homePageContextTabNode;
- (void)setIsEnter:(BOOL)arg0;
- (id)contentVC;
- (void)channelTopTabContainerDidAppear;
- (void)channelTopTabContainerDidDisappear;
- (BOOL)channelTopTabShouldRepeatedClickTab;
- (void)channelDidLoad;
- (BOOL)channelIsAvailableWithError:(id *)arg0;
- (void)channelTrackRefreshWithModel:(id)arg0;
- (BOOL)canShowLeftSlideInteractiveGuide;
- (BOOL)canLeftPanToUserProfileWithWidth:(double)arg0;
- (double)interactionRightContainerHeight;
- (double)nextInteractionRightContainerHeight;
- (unsigned long long)channelXTabTopThemeStyle;
- (unsigned long long)channelXTabBottomThemeStyle;
- (BOOL)channelXTabBottomBarFillBackground;
- (id)channelXTabGetSubEditTabNodes;
- (void)channelTopSegmentControllHidden:(BOOL)arg0;
- (id)getContentViewController;
- (id)getPostPluginControllers;
- (void)setContentVC:(id)arg0;
- (id)pluginControllers;
- (void)setPluginControllers:(id)arg0;
- (void)showXTabPubbleView;
- (BOOL)isTopDynamicTheme;
- (BOOL)isTopLightTheme;
- (BOOL)isBottomDynamicTheme;
- (BOOL)isBottomLightTheme;
- (void)traceXTabNotificationShow:(long long)arg0 content:(id)arg1 popoverChannel:(long long)arg2;
- (void)xTabController:(id)arg0 showTopTabBadgeWithModel:(id)arg1 showCallBack:(id /* block */)arg2 hideCallBack:(id /* block */)arg3 downgradeCallBack:(id /* block */)arg4;
- (void)xTabController:(id)arg0 hideTopTabBadgeWithCompletion:(id /* block */)arg1;
- (void)xTabController:(id)arg0 showBubbleWithModel:(id)arg1 completion:(id /* block */)arg2 clickCallback:(id /* block */)arg3 dismissCallback:(id /* block */)arg4;
- (void)xTabController:(id)arg0 hideBubbleWithCompletion:(id /* block */)arg1;
- (id)getFeedContext;
- (void)hideRightEntranceWithCompletion:(id /* block */)arg0;
- (void)showRightEntranceWithCompletion:(id /* block */)arg0;
- (double)topTabSegmentShowPercentWithChannelId:(id)arg0;
- (void)scrollToTopTabSegmentWithChannelId:(id)arg0 animated:(BOOL)arg1;
- (struct CGPoint { double x0; double x1; })bottomCenterOfTopTabSegmentWithChannelId:(id)arg0;
- (void)xTabController:(id)arg0 showPinTopComponentWithModel:(id)arg1 completion:(id /* block */)arg2;
- (BOOL)channelCanShowPauseEntrance;
- (void).cxx_destruct;
- (BOOL)isEnter;

@end
