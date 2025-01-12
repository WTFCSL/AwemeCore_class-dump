//
//     Generated by private class-dump
//

@class NSString, NSArray, AWEAwemeModel, UIViewController;
@protocol AWEFeedTableViewControllerProtocol, AWEFeedTabItemViewControllerProtocol, AWEHPChannelControllerConfigProtocol;

@interface AWEFeedRecommendChannelController : NSObject <AWEBasicModeMessage, AWEContentPreferenceMessage, AWEFeedRecommendChannelDelegate, AWEPadRecommendInterestViewControllerDelegate, AWEHPChannelControllerProtocol> {
    BOOL _onceOpenPersonalRecommendOn;
    BOOL _canEnterDoubleColumnChannel;
    BOOL _isEdderModeOn;
    BOOL _isRecommendChannelSelected;
    BOOL _isMainTabSelected;
    BOOL _isClickPanelRefresh;
    BOOL _isChannelAppearing;
    BOOL _isViewLoaded;
    id<AWEHPChannelControllerConfigProtocol> _config;
    UIViewController<AWEFeedTabItemViewControllerProtocol, AWEFeedTableViewControllerProtocol> *_contentVC;
    long long _recommendConsumeVideoCount;
    NSString *_lastConsumeItemID;
    AWEAwemeModel *_currentAweme;
    NSArray *_pluginControllers;
}

@property (retain, nonatomic) UIViewController<AWEFeedTabItemViewControllerProtocol, AWEFeedTableViewControllerProtocol> *contentVC;
@property (nonatomic) BOOL onceOpenPersonalRecommendOn;
@property (nonatomic) BOOL canEnterDoubleColumnChannel;
@property (nonatomic) BOOL isEdderModeOn;
@property (nonatomic) BOOL isRecommendChannelSelected;
@property (nonatomic) BOOL isMainTabSelected;
@property (nonatomic) BOOL isClickPanelRefresh;
@property (nonatomic) BOOL isChannelAppearing;
@property (nonatomic) BOOL isViewLoaded;
@property (nonatomic) long long recommendConsumeVideoCount;
@property (copy, nonatomic) NSString *lastConsumeItemID;
@property (retain, nonatomic) AWEAwemeModel *currentAweme;
@property (copy, nonatomic) NSArray *pluginControllers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWEHPChannelControllerConfigProtocol> config;

+ (Class)aAWEPadModuleAdapterClass;
+ (Class)aAWEFeedModuleServiceDOUYINHTSAdaperClass;
+ (Class)aAWEFeedModuleServiceCommonAdaperClass;

- (id)currentAweme;
- (void)channelTopTabDidSelect;
- (id)aAWEPadModuleAdapter;
- (BOOL)canEnterDoubleColumnChannel;
- (void)channelEnterWithModel:(id)arg0;
- (void)channelLeaveWithModel:(id)arg0;
- (void)addNotification;
- (void)removeNotification;
- (void)basicModeDidChange:(BOOL)arg0;
- (void)contentPreferenceDidChange:(id)arg0;
- (id)contentVC;
- (id)topBarAbility;
- (id)pageAbility;
- (id)aAWEFeedModuleServiceDOUYINHTSAdaper;
- (id)editAbility;
- (void)channelTabBarDidSelect;
- (void)channelTabBarDidUnSelect;
- (BOOL)channelTabBarShouldRepeatedClickTab;
- (BOOL)channelTabBarShouldDoubleClickTab;
- (BOOL)channelTabBarShouldLongPressTab;
- (void)channelTopTabDidUnSelect;
- (void)channelTopTabItemTapGestureRecognizerStateChangedWithParams:(id)arg0;
- (void)channelDidLoad;
- (void)channelWillReloadWithConfig:(id)arg0;
- (void)channelViewDidLoad;
- (void)channelViewDidUnload;
- (void)channelViewDidAppear;
- (void)channelViewWillDisappear;
- (void)channelViewDidDisappear;
- (void)channelShowTopBar;
- (BOOL)channelRefreshWithModel:(id)arg0 completion:(id /* block */)arg1;
- (BOOL)slidingScrollViewShouldScrollWithPanGestureRecognizer:(id)arg0;
- (BOOL)canShowLeftSlideInteractiveGuide;
- (BOOL)canLeftPanToUserProfileWithWidth:(double)arg0;
- (double)interactionRightContainerHeight;
- (double)nextInteractionRightContainerHeight;
- (BOOL)canShowFeedPendantWithChannelIDs:(id)arg0;
- (BOOL)channelCanInsertSplash;
- (void)channelWillEnterForeground;
- (void)channelDidEnterBackground;
- (id)channelGetContentInfo;
- (id)getContentViewController;
- (id)getPrePluginControllers;
- (void)setContentVC:(id)arg0;
- (void)hideRightEntrance;
- (void)showRightEntranceWithModel:(id)arg0;
- (id)aAWEFeedModuleServiceCommonAdaper;
- (id)tabItemAbility;
- (id)bubbleAbility;
- (void)setCanEnterDoubleColumnChannel:(BOOL)arg0;
- (void)setCurrentAweme:(id)arg0;
- (void)updateTopBarEntranceTitle;
- (void)setOnceOpenPersonalRecommendOn:(BOOL)arg0;
- (BOOL)onceOpenPersonalRecommendOn;
- (void)updateTabBarDoubleColumnWithHide:(BOOL)arg0;
- (void)updateTopTabDoubleColumnWithHide:(BOOL)arg0;
- (BOOL)enablePadInterestViewController;
- (void)setIsViewLoaded:(BOOL)arg0;
- (void)setIsChannelAppearing:(BOOL)arg0;
- (BOOL)isReadyForDoubleColumnRefreshOptimize;
- (long long)recommendConsumeVideoCount;
- (void)setRecommendConsumeVideoCount:(long long)arg0;
- (void)trackEntranceStatus;
- (void)setIsMainTabSelected:(BOOL)arg0;
- (BOOL)isRecommendChannelSelected;
- (void)setIsRecommendChannelSelected:(BOOL)arg0;
- (BOOL)isMainTabSelected;
- (void)setIsClickPanelRefresh:(BOOL)arg0;
- (void)trackActionPopoverShowEvent;
- (void)hideIndicatorView;
- (void)onAWEMainNeedPersonalRecommendChangedNotification:(id)arg0;
- (void)onBackToFeedGuidePopoverShowNotification:(id)arg0;
- (void)showRadicalLeavePopover;
- (void)onLiteMallBackToFeedGuidePopoverShowNotification:(id)arg0;
- (void)feedTabelDidEndScroll:(id)arg0;
- (BOOL)isChannelAppearing;
- (void)trackLeavePopoverClicked;
- (void)showRadicalEntryGuideIfNeedWithAweme:(id)arg0 referString:(id)arg1;
- (id)lastConsumeItemID;
- (void)setLastConsumeItemID:(id)arg0;
- (void)showRefreshBubbleIfNeededWithAweme:(id)arg0;
- (BOOL)isTargetType:(id)arg0;
- (void)showClickRecommendGuideBubble;
- (void)showDoubleClickOrLongPressGuideBubble:(BOOL)arg0;
- (void)p_channelTrackRefreshWithModel:(id)arg0;
- (BOOL)isClickPanelRefresh;
- (void)hideCaptionEntranceWithCompletion:(id /* block */)arg0;
- (BOOL)handleRightSidebarShouldScrollWithPanGestureRecognizer:(id)arg0;
- (BOOL)isRecommendChannelOnRightmost;
- (void)updateArrowWithHide:(BOOL)arg0;
- (BOOL)channelShowSearchLongBarAbility;
- (void)updateLastShowLongBarIndex:(long long)arg0;
- (void)changeIndicatorViewToUp:(BOOL)arg0;
- (BOOL)isEdderModeOn;
- (void)setIsEdderModeOn:(BOOL)arg0;
- (id)pluginControllers;
- (void)setPluginControllers:(id)arg0;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (id)config;
- (id)initWithConfig:(id)arg0;
- (void)dealloc;
- (BOOL)isViewLoaded;
- (void)showIndicatorView;

@end
