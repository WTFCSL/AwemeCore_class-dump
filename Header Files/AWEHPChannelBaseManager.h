//
//     Generated by private class-dump
//

@class AWEFeedChannelObject, NSString, AWEHPChannelFactoryEnvConfig, NSArray, NSDictionary, NSObject, AWEHomePageContextTabNode;
@protocol AWEHPXTabUIDelegate, AWEHPCommonTabUIDelegate, AWEHPChannelControllerConfigProtocol, AWEHPTabBarUIDelegate, AWEHPChannelControllerProtocol, AWEHPTopTabUIDelegate, AWEHPChannelFactoryProtocol, AWEHPRootChanennlManagerDelegate;

@interface AWEHPChannelBaseManager : NSObject <AWEHPChannelBubbleAbilityImpl, AWEHPChannelEditAbilityImpl, AWEHPChannelPageAbilityImpl, AWEHPChannelTabItemAbilityImpl, AWEHPChannelTopBarAbilityImpl, AWEHPChannelControllerProtocol> {
    BOOL _isLoaded;
    id<AWEHPChannelControllerConfigProtocol> _config;
    NSObject<AWEHPChannelControllerProtocol> *_channelController;
    AWEHPChannelFactoryEnvConfig *_factoryEnvConfig;
    AWEFeedChannelObject *_selfChannel;
    AWEFeedChannelObject *_selectedChannel;
    NSArray *_availableTabIDList;
    NSArray *_currentTabIDList;
    NSArray *_currentChannels;
    NSDictionary *_currentChannelMap;
    NSArray *_allChannels;
    NSDictionary *_allChannelMap;
    NSObject<AWEHPTabBarUIDelegate> *_tabBarUIDelegate;
    NSObject<AWEHPTopTabUIDelegate> *_topTabUIDelegate;
    NSObject<AWEHPXTabUIDelegate> *_xTabUIDelegate;
    NSObject<AWEHPCommonTabUIDelegate> *_commonTabUIDelegate;
    NSObject<AWEHPRootChanennlManagerDelegate> *_rootManagerDelegate;
    id<AWEHPChannelFactoryProtocol> _factory;
    AWEHomePageContextTabNode *_tabNode;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) id<AWEHPChannelFactoryProtocol> factory;
@property (retain, nonatomic) AWEHPChannelFactoryEnvConfig *factoryEnvConfig;
@property (retain, nonatomic) AWEHomePageContextTabNode *tabNode;
@property (nonatomic) BOOL isLoaded;
@property (weak, nonatomic) NSObject<AWEHPChannelControllerProtocol> *channelController;
@property (weak, nonatomic) AWEFeedChannelObject *selfChannel;
@property (readonly, nonatomic) AWEHPChannelBaseManager *parentManager;
@property (readonly, nonatomic) AWEFeedChannelObject *selectedChannel;
@property (readonly, nonatomic) NSArray *availableTabIDList;
@property (readonly, nonatomic) NSArray *currentTabIDList;
@property (readonly, nonatomic) NSArray *currentChannels;
@property (readonly, nonatomic) NSDictionary *currentChannelMap;
@property (readonly, nonatomic) NSArray *allChannels;
@property (readonly, nonatomic) NSDictionary *allChannelMap;
@property (weak, nonatomic) NSObject<AWEHPTabBarUIDelegate> *tabBarUIDelegate;
@property (weak, nonatomic) NSObject<AWEHPTopTabUIDelegate> *topTabUIDelegate;
@property (weak, nonatomic) NSObject<AWEHPXTabUIDelegate> *xTabUIDelegate;
@property (weak, nonatomic) NSObject<AWEHPCommonTabUIDelegate> *commonTabUIDelegate;
@property (weak, nonatomic) NSObject<AWEHPRootChanennlManagerDelegate> *rootManagerDelegate;
@property (weak, nonatomic) id<AWEHPChannelControllerConfigProtocol> config;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)channelLandingTabWithParams:(id)arg0;
- (void)channelTopTabDidSelect;
- (id)channelController;
- (void)setChannelController:(id)arg0;
- (BOOL)verticalPanGestureRecognizerShouldBegin:(id)arg0;
- (void)channelEnterWithModel:(id)arg0;
- (void)channelLeaveWithModel:(id)arg0;
- (id)callGetCustomTrackParamsWithChannel:(id)arg0 trackInfo:(id)arg1;
- (long long)canShowPinTopComponentWithChannelID:(id)arg0;
- (void)__handleTapGesture:(id)arg0;
- (BOOL)canShowLeftSlideNoviceGuide;
- (void)channelTabBarDidSelect;
- (void)channelTabBarDidUnSelect;
- (BOOL)channelTabBarShouldRepeatedClickTab;
- (BOOL)channelTabBarShouldDoubleClickTab;
- (BOOL)channelTabBarShouldLongPressTab;
- (void)channelTabBarDidSingleTap;
- (void)channelTabBarDidDoubleTap;
- (void)channelTabBarDidLongPress;
- (void)channelTopTabContainerDidAppear;
- (void)channelTopTabContainerDidDisappear;
- (BOOL)channelTopTabShouldRepeatedClickTab;
- (void)channelTopTabDidUnSelect;
- (BOOL)channelTopTabShouldInterceptCommonBubble;
- (BOOL)channelTopTabShouldInterceptCaptionBubble;
- (BOOL)channelTopTabShouldInterceptPauseEntrance;
- (void)channelTopTabItemTapGestureRecognizerShouldReceiveTouchWithParams:(id)arg0;
- (void)channelTopTabItemTapGestureRecognizerStateChangedWithParams:(id)arg0;
- (void)topTabScrollDidReachStableEnd;
- (void)channelDidLoad;
- (BOOL)channelAllowReloadWithConfig:(id)arg0;
- (void)channelWillReloadWithConfig:(id)arg0;
- (void)channelDidReload;
- (BOOL)channelIsAvailableWithError:(id *)arg0;
- (void)channelDidUnload;
- (void)channelViewDidLoad;
- (void)channelViewDidUnload;
- (void)channelViewWillAppear;
- (void)channelViewDidAppear;
- (void)channelViewWillDisappear;
- (void)channelViewDidDisappear;
- (BOOL)channelCanLandingTabWithParams:(id)arg0;
- (void)channelTrackEntranceShowWithModel:(id)arg0;
- (void)channelTrackContentVCStayTimeWithModel:(id)arg0;
- (void)channelTrackRefreshWithModel:(id)arg0;
- (BOOL)showTopTabRefreshAnimationWithModel:(id)arg0;
- (BOOL)showBottomTabRefreshAnimationWithModel:(id)arg0;
- (void)channelHideTopBarWithTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })arg0 alpha:(double)arg1;
- (void)channelShowTopBar;
- (BOOL)channelRefreshWithModel:(id)arg0 completion:(id /* block */)arg1;
- (void)channelRefreshGestureRecognizerBegin:(id)arg0;
- (void)channelRefreshGestureRecognizerEnd:(id)arg0;
- (void)channelRefreshGestureRecognizerStateChanged:(id)arg0;
- (unsigned long long)channelRefreshGestureRecognizerDirection:(id)arg0;
- (BOOL)slidingScrollViewShouldScrollWithPanGestureRecognizer:(id)arg0;
- (BOOL)canShowLeftSlideInteractiveGuide;
- (BOOL)awe_isSkylightOpen;
- (unsigned long long)channelXTabTopThemeStyle;
- (unsigned long long)channelXTabBottomThemeStyle;
- (BOOL)channelXTabBottomBarFillBackground;
- (BOOL)canShowFeedPendantWithChannelIDs:(id)arg0;
- (void)channelAppWillResignActive;
- (void)channelDidBecomeActive;
- (void)channelWillEnterForeground;
- (void)channelDidEnterBackground;
- (id)channelGetContentInfo;
- (BOOL)channelShouldHandleTransition_destinatedViewControllerForSlideDirection:(unsigned long long)arg0 gestureRecognizer:(id)arg1;
- (id)channelTransition_destinatedViewControllerForSlideDirection:(unsigned long long)arg0 gestureRecognizer:(id)arg1;
- (id)getContentViewController;
- (id)getPrePluginControllers;
- (id)getPostPluginControllers;
- (double)tabSegmentShowPercentWithChannelId:(id)arg0;
- (id)getTabNode;
- (void)callTabBarDidUnSelect;
- (void)callTabBarDidSelect;
- (id)getChannelWithIndex:(long long)arg0;
- (id)callChannelGetContentInfo;
- (void)reloadChannelWithChannelModels:(id)arg0 currentChannelIDList:(id)arg1 reloadType:(id)arg2 selectedChannelID:(id)arg3;
- (id)topTabUIDelegate;
- (id)getSubChannelUsingRecursiveWithChannelID:(id)arg0;
- (void)didSetupChannel:(id)arg0;
- (void)updateTopBarSegmentItemWithChannel:(id)arg0;
- (BOOL)callCanLandingTabWithConfig:(id)arg0;
- (id)getFeedHomePageContextWithChannel:(id)arg0;
- (id)currentTabIDList;
- (void)willSwitchSelectedChannelFromChannel:(id)arg0 toChannel:(id)arg1 config:(id)arg2;
- (void)channel:(id)arg0 topBarCancelPauseSearchEntranceWithCompletion:(id /* block */)arg1;
- (void)didSwitchSelectedChannelFromChannel:(id)arg0 toChannel:(id)arg1 config:(id)arg2;
- (void)channel:(id)arg0 updateBottomTabItem:(id)arg1;
- (void)channel:(id)arg0 updateBottomBarFillBackground:(BOOL)arg1;
- (void)channel:(id)arg0 updateBottomBarThemeStyle:(unsigned long long)arg1;
- (void)channel:(id)arg0 updateBottomBarBackgroundImages:(BOOL)arg1;
- (void)channel:(id)arg0 updateTopBarThemeStyle:(unsigned long long)arg1;
- (void)topBarHideRightEntranceWithChannel:(id)arg0;
- (void)channel:(id)arg0 topBarShowRightEntranceWithModel:(id)arg1;
- (void)channel:(id)arg0 updateViewControllerGreyMode:(BOOL)arg1;
- (void)callTopTabDidUnSelectWithChannel:(id)arg0;
- (void)callTopTabDidSelectWithChannel:(id)arg0;
- (void)didUpdateCurrentChannels:(id)arg0;
- (void)updateTopTabOrder:(long long)arg0 withChannel:(id)arg1;
- (id)getRootChannelUsingRecursiveWithChannelID:(id)arg0;
- (void)updateTopRecommendTabOrder:(long long)arg0 withChannel:(id)arg1;
- (void)setSelfChannel:(id)arg0;
- (BOOL)isLanding;
- (id)selfChannel;
- (void)callEnterUsingRecursiveWithChannel:(id)arg0 model:(id)arg1;
- (void)callLeaveUsingRecursiveWithChannel:(id)arg0 model:(id)arg1;
- (void)callEnterNotRecursiveWithChannel:(id)arg0 model:(id)arg1;
- (id)getChannelWithChannelID:(id)arg0;
- (void)callTopTabContainerDidAppear;
- (id)allChannelMap;
- (void)enumerateCurrentChannelsUsingBlock:(id /* block */)arg0;
- (id)rootManagerDelegate;
- (BOOL)callSaveEditTopTabWithAllChannelIDList:(id)arg0 currentChannelList:(id)arg1 reloadType:(id)arg2 completion:(id /* block */)arg3;
- (id)getHomePageContext;
- (id)getFactoryEnvConfig;
- (id)getDefaultChannelWithChannels:(id)arg0;
- (id)getTopBarStageWithChannel:(id)arg0;
- (void)callAllChannelDidLoad;
- (id)currentChannels;
- (void)callTrackEntranceShowWithChannel:(id)arg0 model:(id)arg1;
- (void)callTopTabContainerDidDisappear;
- (BOOL)callVerticalPanGestureRecognizerShouldBegin:(id)arg0;
- (BOOL)callChannelShouldHandleTransition_destinatedViewControllerForSlideDirection:(unsigned long long)arg0 gestureRecognizer:(id)arg1;
- (id)callChannelTransition_destinatedViewControllerForSlideDirection:(unsigned long long)arg0 gestureRecognizer:(id)arg1;
- (BOOL)callCanShowLeftSlideInteractiveGuide;
- (void)callTrackRefreshWithModel:(id)arg0;
- (void)setTopTabUIDelegate:(id)arg0;
- (void)setCommonTabUIDelegate:(id)arg0;
- (void)setTabBarUIDelegate:(id)arg0;
- (void)callViewDidLoadNotRecursiveWithChannel:(id)arg0;
- (void)callViewWillAppearNotRecursiveWithChannel:(id)arg0;
- (void)callViewDidAppearNotRecursiveWithChannel:(id)arg0;
- (void)callViewWillDisappearNotRecursiveWithChannel:(id)arg0;
- (void)callViewDidDisappearNotRecursiveWithChannel:(id)arg0;
- (void)awe_callTopSegmentControlHidden:(BOOL)arg0;
- (void)callShowTopBarWithChannel:(id)arg0;
- (void)callHideTopBarWithChannel:(id)arg0 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })arg1 alpha:(double)arg2;
- (BOOL)callTopTabShouldInterceptCommonBubble;
- (BOOL)callTopTabShouldInterceptPauseEntrance;
- (id)getReferStringUsingRecursiveWithChannel:(id)arg0;
- (id)getChannelInAllChannelsWithChannelID:(id)arg0;
- (id)getContentViewControllerWithChannel:(id)arg0;
- (BOOL)callTopTabShouldRepeatedClickTab;
- (BOOL)updateSelectedChannelWithIndex:(long long)arg0 configBlock:(id /* block */)arg1;
- (void)callAppWillResignActive;
- (void)callAppDidBecomeActive;
- (void)callAppWillEnterForeground;
- (void)callAppDidEnterBackground;
- (double)awe_callInteractionRightContainerHeight;
- (double)awe_callNextInteractionRightContainerHeight;
- (BOOL)callCanShowLeftSlideNoviceGuide;
- (void)callLandingTabWithConfig:(id)arg0;
- (id)getReferStringUsingRecursiveForSelectedChannel;
- (void)callBeginLanding;
- (void)callEndLanding;
- (id)getPageViewControllerWithChannel:(id)arg0;
- (void)callChannelTopTabItemTapGestureRecognizerShouldReceiveTouchWithChannel:(id)arg0 params:(id)arg1;
- (void)callChannelTopTabItemTapGestureRecognizerStateChangedWithChannel:(id)arg0 params:(id)arg1;
- (BOOL)callTopTabShouldInterceptCaptionBubble;
- (BOOL)callSlidingScrollViewShouldScrollWithChannel:(id)arg0 panGestureRecognizer:(id)arg1;
- (BOOL)awe_callCanLeftPanToUserProfileWithWidth:(double)arg0;
- (BOOL)callCanRightPanToImWithWidth:(double)arg0;
- (BOOL)callSelectedChannelCanInsertSplash;
- (BOOL)callSelectedChannelContainsChannelWithChannelID:(id)arg0;
- (id)getSelectedChannelUsingRecursive;
- (unsigned long long)callRefreshGestureRecognizerDirection:(id)arg0;
- (void)callRefreshGestureRecognizerStateChanged:(id)arg0;
- (void)callRefreshGestureRecognizerBegin:(id)arg0;
- (void)callRefreshGestureRecognizerEnd:(id)arg0;
- (BOOL)callTabBarShouldLongPressTab;
- (BOOL)callTabBarShouldRepeatedClickTab;
- (BOOL)callTabBarShouldDoubleClickTab;
- (id)tabNode;
- (struct CGPoint { double x0; double x1; })bottomCenterOfTabSegmentWithChannelId:(id)arg0;
- (id)callSelectedChannelReferString;
- (void)callSelectedChannelPlay;
- (void)callSelectedChannelStop;
- (void)callSelectedChannelPause;
- (void)callSelectedChannelReload;
- (void)callSelectedChannelAnimatedRefreshWithCompletion:(id /* block */)arg0;
- (void)callSelectedChannelCancelRefresh;
- (BOOL)callSelectedChannelCurrentTabIsTop;
- (BOOL)callSelectedChannelCanRefresh;
- (void)callSelectedChannelSetScrollEnabled:(BOOL)arg0;
- (void)callSelectedChannelPauseWithAnimation;
- (void)callSelectedChannelSeekPlayTimeWithItemID:(id)arg0;
- (void)callSelectedChannelOnAwemeMarkDislikeCanWithdraw:(id)arg0;
- (void)callSelectedChannelOnAwemeDeleted:(id)arg0 isDislike:(BOOL)arg1;
- (void)callSelectedChannelOnAwemeDeleted:(id)arg0 isLiveFinish:(BOOL)arg1 isDislike:(BOOL)arg2;
- (id)callSelectedChannelCurrentAwemeID;
- (id)callSelectedChannelCurrentAweme;
- (void)callSelectedChannelSetRefreshMethod:(id)arg0;
- (void)callSelectedChannelSetAccessoriesHidden:(BOOL)arg0;
- (void)p_appWillResignActiveWithChannel:(id)arg0;
- (void)enumerateChannels:(id)arg0 usingBlock:(id /* block */)arg1;
- (void)callTrackContentVCStayTimeWithChannel:(id)arg0 model:(id)arg1;
- (void)p_appDidBecomeActiveWithChannel:(id)arg0;
- (void)p_appWillEnterForegroundWithChannel:(id)arg0;
- (void)p_appDidEnterBackgroundWithChannel:(id)arg0;
- (id)tabBarUIDelegate;
- (void)p_channel:(id)arg0 tabBarShowBubbleWithTask:(id)arg1;
- (void)p_cancelBottomTabItemBubbleWithChannel:(id)arg0 task:(id)arg1;
- (void)channel:(id)arg0 showBottomTabItemBubbleWithModel:(id)arg1 showCallback:(id /* block */)arg2 clickCallback:(id /* block */)arg3 dismissCallback:(id /* block */)arg4;
- (void)cancelBottomTabItemBubbleWithChannel:(id)arg0 isContainerHide:(BOOL)arg1;
- (id)p_channelGetContentInfoWithChannel:(id)arg0;
- (id)callChannelGetContentInfoWithChannel:(id)arg0;
- (void)channel:(id)arg0 showPinTopComponentWithModel:(id)arg1 configModel:(id)arg2 showResult:(id /* block */)arg3 pinTopCompletion:(id /* block */)arg4;
- (id)p_channel:(id)arg0 generatePinTopTaskWithModel:(id)arg1;
- (id)channel:(id)arg0 generatePinTopTaskWithModel:(id)arg1;
- (id)getRootXTabWithChannelID:(id)arg0;
- (long long)p_canShowPinTopChannel:(id)arg0;
- (void)p_channel:(id)arg0 invokePinTopWithComponentTask:(id)arg1;
- (void)callTopTabPinTopWithChannel:(id)arg0 pinTopCallContext:(id)arg1 completion:(id /* block */)arg2;
- (void)p_channel:(id)arg0 showPinTopComponentWithConfig:(id)arg1 pinTopTask:(id)arg2 showResult:(id /* block */)arg3 pinTopCompletion:(id /* block */)arg4;
- (long long)p_getChannelPinTopIndexWithChannels:(id)arg0;
- (long long)p_checkTopTabStableWithAllChannelIDList:(id)arg0 currentChannelList:(id)arg1;
- (void)updateChannelsWithAllChannelIDList:(id)arg0 currentChannelList:(id)arg1 selectedChannelID:(id)arg2;
- (id)p_getChannelListAfterPinTopWithTargetChannel:(id)arg0 channelList:(id)arg1;
- (void)channel:(id)arg0 showPinTopComponentWithModel:(id)arg1 showResult:(id /* block */)arg2 pinTopCompletion:(id /* block */)arg3;
- (void)p_callBeginLanding;
- (void)p_callEndLanding;
- (BOOL)p_canLandingTabWithConfig:(id)arg0;
- (BOOL)p_callCanLandingTabNotRecursiveWithChannel:(id)arg0 config:(id)arg1;
- (id)p_generateEnterModelWithLeaveChannel:(id)arg0 enterChannel:(id)arg1 config:(id)arg2;
- (id)p_generateLeaveModelWithLeaveChannel:(id)arg0 enterChannel:(id)arg1 config:(id)arg2;
- (BOOL)updateSelectedChannelWithChannel:(id)arg0 configBlock:(id /* block */)arg1;
- (void)p_callLandingTabNotRecursiveWithChannel:(id)arg0 config:(id)arg1;
- (void)callChannelDidLoadWithChannel:(id)arg0;
- (BOOL)callChannelAllowReloadWithChannel:(id)arg0 config:(id)arg1;
- (void)callChannelWillReloadWithChannel:(id)arg0 config:(id)arg1;
- (void)callChannelDidReloadWithChannel:(id)arg0;
- (BOOL)callChannelIsAvailableWithChannel:(id)arg0;
- (void)callChannelDidUnloadWithChannel:(id)arg0;
- (id)xTabUIDelegate;
- (BOOL)removeChannelWithChannelID:(id)arg0;
- (id)factoryEnvConfig;
- (void)channel:(id)arg0 updateReferString:(id)arg1;
- (void)removeChannel:(id)arg0;
- (void)channel:(id)arg0 updateViewControllerSkylight:(id)arg1;
- (id)findLifeCycleControllerWithSelector:(SEL)arg0 usingBlock:(id /* block */)arg1;
- (void)enumLifeCycleControllerWithSelector:(SEL)arg0 usingBlock:(id /* block */)arg1;
- (BOOL)p_showTopTabRefreshAnimationWithModel:(id)arg0 channel:(id)arg1;
- (BOOL)p_showBottomTabRefreshAnimationWithModel:(id)arg0 channel:(id)arg1;
- (BOOL)callCanShowLeftSlideNoviceGuideWithChannel:(id)arg0;
- (BOOL)callCanShowLeftSlideInteractiveGuideWithChannel:(id)arg0;
- (BOOL)callCanRightPanToImWithWidth:(double)arg0 channel:(id)arg1;
- (BOOL)awe_callCanLeftPanToUserProfileWithWidth:(double)arg0 Channel:(id)arg1;
- (double)awe_callInteractionRightContainerHeightWithChannel:(id)arg0;
- (double)awe_callNextInteractionRightContainerHeightWithChannel:(id)arg0;
- (BOOL)callTabBarShouldRepeatedClickTabWithChannel:(id)arg0;
- (BOOL)callTabBarShouldDoubleClickTabWithChannel:(id)arg0;
- (BOOL)callTabBarShouldLongPressTabWithChannel:(id)arg0;
- (void)callTabBarDidSingleClickWithChannel:(id)arg0;
- (void)callTabBarDidDoubleClickWithChannel:(id)arg0;
- (void)callTabBarDidLongPressWithChannel:(id)arg0;
- (void)p_callTabBarDidSelect;
- (void)p_callTabBarDidSelectedWithChannel:(id)arg0;
- (void)p_callTabBarDidUnSelect;
- (void)p_callTabBarDidUnSelectedWithChannel:(id)arg0;
- (void)channel:(id)arg0 updateTopTabItemWithModel:(id)arg1;
- (void)channel:(id)arg0 showBottomTabItemActionPopoverWithActions:(id)arg1 preferDarkTheme:(BOOL)arg2 showCallback:(id /* block */)arg3;
- (void)channel:(id)arg0 showBottomTabItemImage:(id)arg1 withAnimateType:(long long)arg2 withCompletion:(id /* block */)arg3;
- (void)channel:(id)arg0 cancelBottomTabItemImageWithCompletion:(id /* block */)arg1;
- (void)consumeComponentWhenEnterIfNeed:(id)arg0 model:(id)arg1;
- (void)callLeaveNotRecursiveWithChannel:(id)arg0 model:(id)arg1;
- (void)p_callTrackRefreshWithModel:(id)arg0;
- (void)p_callTrackRefreshWithChannel:(id)arg0 model:(id)arg1;
- (BOOL)p_callChannelCanInsertSplashWithChannel:(id)arg0;
- (void)p_callTopSegmentControlHidden:(BOOL)arg0 withChannel:(id)arg1;
- (void)p_channel:(id)arg0 topTabShowBadgeWithTask:(id)arg1;
- (void)p_channel:(id)arg0 topTabShowBubbleWithTask:(id)arg1;
- (void)p_channel:(id)arg0 topBarCancelBubbleWithTask:(id)arg1 completion:(id /* block */)arg2 isContainerHide:(BOOL)arg3;
- (void)p_updateTopBarRightEntrance:(id)arg0 hide:(BOOL)arg1 channel:(id)arg2;
- (void)p_updateTopBarRightEntranceBadge:(id)arg0 channel:(id)arg1;
- (void)p_channel:(id)arg0 topBarShowPauseSearchEntranceWithTask:(id)arg1;
- (void)p_channel:(id)arg0 topBarCancelPauseSearchEntranceWithTask:(id)arg1 completion:(id /* block */)arg2;
- (BOOL)isCurrentChannelWithChannel:(id)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })topBarContainerFrameChannel:(id)arg0;
- (struct CGPoint { double x0; double x1; })channel:(id)arg0 topCenterPointOfWindowWithChannelId:(id)arg1;
- (id)p_generateTopBarRightEntranceWithImageInfo:(id)arg0;
- (void)channel:(id)arg0 topBarUpdateEntranceWithModel:(id)arg1 completion:(id /* block */)arg2;
- (void)channel:(id)arg0 topBarShowBadgeWithModel:(id)arg1 showCallBack:(id /* block */)arg2 hideCallBack:(id /* block */)arg3 downgradeCallBack:(id /* block */)arg4;
- (void)channel:(id)arg0 topBarHideBadgeWithCompletion:(id /* block */)arg1 isContainerHide:(BOOL)arg2;
- (void)channel:(id)arg0 topBarShowBubbleWithModel:(id)arg1 showCallback:(id /* block */)arg2 clickCallback:(id /* block */)arg3 dismissCallback:(id /* block */)arg4;
- (void)channel:(id)arg0 topBarCancelBubbleWithCompletion:(id /* block */)arg1 isContainerHide:(BOOL)arg2;
- (void)channel:(id)arg0 topBarShowEntranceBadgeWithModel:(id)arg1 showCallBack:(id /* block */)arg2;
- (void)channelHideRightEntranceBadge:(id)arg0;
- (void)channel:(id)arg0 topBarShowPauseSearchEntranceWithCompletion:(id /* block */)arg1 clickCallback:(id /* block */)arg2;
- (void)channel:(id)arg0 topBarHideCaptionEntranceWithCompletion:(id /* block */)arg1;
- (void)channel:(id)arg0 topBarChangeAlphaWith:(double)arg1;
- (void)channel:(id)arg0 scrollToTabSegmentWithChannelId:(id)arg1 animated:(BOOL)arg2;
- (void)enumLifeCycleControllerWithChannel:(id)arg0 selector:(SEL)arg1 usingBlock:(id /* block */)arg2;
- (void)p_callTopTabContainerDidAppear;
- (void)p_callTopTabContainerDidAppearWithChannel:(id)arg0;
- (void)p_callTopTabContainerDidDisappear;
- (void)p_callTopTabContainerDidDisAppearWithChannel:(id)arg0;
- (BOOL)p_callTopTabShouldRepeatedClickTab;
- (BOOL)p_callTopTabShouldRepeatedClickTabWithChannel:(id)arg0;
- (void)p_callTopTabDidSelectedWithChannel:(id)arg0;
- (void)p_callTopTabDidSelectUsingRecursive;
- (void)p_callTopTabDidUnSelectWithChannel:(id)arg0;
- (void)p_callTopTabDidUnSelectUsingRecursive;
- (BOOL)p_callTopTabShouldInterceptCommonBubble;
- (BOOL)p_callTopTabShouldInterceptCommonBubbleWithChannel:(id)arg0;
- (BOOL)p_callTopTabShouldInterceptCaptionBubble;
- (BOOL)p_callTopTabShouldInterceptCaptionBubbleWithChannel:(id)arg0;
- (void)p_topTabScrollDidReachStableEnd:(id)arg0;
- (BOOL)p_callTopTabShouldInterceptPauseEntrance;
- (BOOL)p_callTopTabShouldInterceptPauseEntranceWithChannel:(id)arg0;
- (BOOL)checkKeyConflictWithFirstParams:(id)arg0 secondParams:(id)arg1;
- (BOOL)p_callChannelShouldHandleTransition_destinatedViewControllerForSlideDirection:(unsigned long long)arg0 gestureRecognizer:(id)arg1 withChannel:(id)arg2;
- (id)p_callChannelTransition_destinatedViewControllerForSlideDirection:(unsigned long long)arg0 gestureRecognizer:(id)arg1 withChannel:(id)arg2;
- (BOOL)p_callVerticalPanGestureRecognizerShouldBegin:(id)arg0 withChannel:(id)arg1;
- (void)p_callXTabDidSelectedWithChannel:(id)arg0;
- (void)p_callXTabDidSelectUsingRecursive;
- (void)p_callXTabDidUnSelectWithChannel:(id)arg0;
- (void)p_callXTabDidUnSelectUsingRecursive;
- (void)callXTabDidSelectWithChannel:(id)arg0;
- (void)callXTabDidUnSelectWithChannel:(id)arg0;
- (id)currentChannelMap;
- (id)getSubEditTabNodes;
- (void)enumerateAllChannelsUsingBlock:(id /* block */)arg0;
- (id)findLifeCycleControllerWithChannel:(id)arg0 selector:(SEL)arg1 usingBlock:(id /* block */)arg2;
- (void)p_reloadChannelWithChannelModels:(id)arg0 currentChannelIDList:(id)arg1 reloadType:(id)arg2 selectedChannelID:(id)arg3;
- (void)p_updateAllChannels:(id)arg0;
- (void)p_updateCurrentChannelsWithChannelIDList:(id)arg0 selectedChannelID:(id)arg1;
- (id)getChannelIDStringWithChannels:(id)arg0;
- (void)p_updateCurrentChannels:(id)arg0;
- (id)commonTabUIDelegate;
- (void)p_switchSelectedChannel:(id)arg0 config:(id)arg1;
- (id)p_recursiveSearchNode:(id)arg0 forChannelID:(id)arg1;
- (id)p_getSelectedChannelUsingRecursiveWithChannel:(id)arg0;
- (BOOL)enumerateParentManagerWithChannel:(id)arg0 usingBlock:(id /* block */)arg1;
- (void)setTabNode:(id)arg0;
- (void)willUpdateCurrentChannels:(id)arg0;
- (id)p_deleteInvalidCurrentIDList:(id)arg0;
- (id)p_generateChannelWithModel:(id)arg0 reloadType:(id)arg1 index:(long long)arg2 prepareReloadChannel:(id)arg3;
- (void)p_removeAllResourceIfNeedWithChannel:(id)arg0;
- (BOOL)updateSelectedChannelWithChannelID:(id)arg0 configBlock:(id /* block */)arg1;
- (long long)p_prepareReloadChannel:(id)arg0 chanenlModel:(id)arg1 reloadType:(id)arg2 index:(long long)arg3;
- (id)p_createChannelWithModel:(id)arg0 controllerClass:(Class)arg1 reloadType:(id)arg2 index:(long long)arg3;
- (id)getCommonStageWithChannel:(id)arg0;
- (id)getBottomBarStageWithChannel:(id)arg0;
- (id)getXTabStageWithChannel:(id)arg0;
- (void)p_setupControllerWithChannel:(id)arg0;
- (void)updateCurrentChannelsWithChannelIDList:(id)arg0 selectedChannelID:(id)arg1;
- (id)getSelectedChannelUsingRecursiveWithChannel:(id)arg0;
- (long long)getChannelIndexWithChannelID:(id)arg0;
- (void)setFactoryEnvConfig:(id)arg0;
- (id)availableTabIDList;
- (void)setXTabUIDelegate:(id)arg0;
- (void)setRootManagerDelegate:(id)arg0;
- (BOOL)isLoaded;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (id)factory;
- (id)config;
- (void)setFactory:(id)arg0;
- (void)setIsLoaded:(BOOL)arg0;
- (id)initWithConfig:(id)arg0;
- (id)parentManager;
- (id)allChannels;
- (id)selectedChannel;

@end