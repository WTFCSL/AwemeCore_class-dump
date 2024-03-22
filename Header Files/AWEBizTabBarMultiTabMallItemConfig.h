//
//     Generated by private class-dump
//

@class NSTimer, NSString, AWEECMallRootViewController, AWEBizTabBarItemConfigBadgeModel, AWETabbarGeneralButton, AWEMultiTabMallIconModel2, AWEFeedChannelEnterModel, AWEMultiTabMallBadgeModel;
@protocol AWEECMallBubbleProtocol, AWEECMallChannelBarConfigProtocol, AWEBizTabBarItemConfigAbility;

@interface AWEBizTabBarMultiTabMallItemConfig : NSObject <AWEBizTabBarMessage, AWEBizTabBarLightModeListenerProtocol, AWEECMallBubbleAndRedDotProtocol, AWEUserMessage, AWEBizTabBarItemConfigProtocol> {
    BOOL _isTextBadgeShowing;
    BOOL _isNormalRedBadgeShowing;
    BOOL _isInnerUIShowing;
    BOOL _enterMallByBubbleClick;
    AWETabbarGeneralButton *_mallItemButton;
    AWEECMallRootViewController *_mallController;
    id<AWEBizTabBarItemConfigAbility> _tabBarAbility;
    AWEFeedChannelEnterModel *_mallEnterModel;
    id<AWEECMallChannelBarConfigProtocol> _configHandler;
    AWEMultiTabMallIconModel2 *_iconModel;
    AWEMultiTabMallBadgeModel *_badgeModel;
    double _startTime;
    unsigned long long _scope;
    AWEBizTabBarItemConfigBadgeModel *_actTextBadgeModel;
    AWEBizTabBarItemConfigBadgeModel *_normalRedBadgeModel;
    long long _showDotInterval;
    NSString *_lastTheme;
    NSTimer *_hideTextBadgeTimer;
    NSTimer *_fireReloadChannelTabTimer;
    id<AWEECMallBubbleProtocol> _mallBubbleManager;
    AWEBizTabBarItemConfigBadgeModel *_lastMallMessageRedTag;
}

@property (retain, nonatomic) AWETabbarGeneralButton *mallItemButton;
@property (retain, nonatomic) AWEECMallRootViewController *mallController;
@property (retain, nonatomic) id<AWEBizTabBarItemConfigAbility> tabBarAbility;
@property (retain, nonatomic) AWEFeedChannelEnterModel *mallEnterModel;
@property (retain, nonatomic) id<AWEECMallChannelBarConfigProtocol> configHandler;
@property (retain, nonatomic) AWEMultiTabMallIconModel2 *iconModel;
@property (retain, nonatomic) AWEMultiTabMallBadgeModel *badgeModel;
@property (nonatomic) double startTime;
@property (nonatomic) unsigned long long scope;
@property (retain, nonatomic) AWEBizTabBarItemConfigBadgeModel *actTextBadgeModel;
@property (retain, nonatomic) AWEBizTabBarItemConfigBadgeModel *normalRedBadgeModel;
@property (nonatomic) BOOL isTextBadgeShowing;
@property (nonatomic) BOOL isNormalRedBadgeShowing;
@property (nonatomic) BOOL isInnerUIShowing;
@property (nonatomic) long long showDotInterval;
@property (copy, nonatomic) NSString *lastTheme;
@property (retain, nonatomic) NSTimer *hideTextBadgeTimer;
@property (retain, nonatomic) NSTimer *fireReloadChannelTabTimer;
@property (weak, nonatomic) id<AWEECMallBubbleProtocol> mallBubbleManager;
@property (retain, nonatomic) AWEBizTabBarItemConfigBadgeModel *lastMallMessageRedTag;
@property (nonatomic) BOOL enterMallByBubbleClick;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)currentBottomTag;
+ (id)sharedConfig;

- (void)didFinishLogin;
- (void)didFinishLogout;
- (id)mallBubbleManager;
- (void)switchToLightModeWithProgress:(double)arg0;
- (BOOL)canLandingWithTabId:(id)arg0 params:(id)arg1;
- (void)beginLandingTabWithTabId:(id)arg0 withParams:(id)arg1;
- (void)endLandingTabWithTabId:(id)arg0 withParams:(id)arg1;
- (id)tabBarItemButton;
- (id)tabBarItemViewController;
- (void)setupTabBarAbility:(id)arg0;
- (BOOL)loginIfNeededAtTabBarItemSelection:(BOOL)arg0;
- (id)loginInfoAtTabBarItemSelectionFromPreviousSelectedType:(long long)arg0;
- (id)selectInfoAtTabBarItemSelection;
- (BOOL)shouldHandleTabBarItemSelectionFromPreviousSelectedType:(long long)arg0 isByTap:(BOOL)arg1;
- (void)tabBarDidUnSelectItemToNextSelectedType:(long long)arg0 isByTap:(BOOL)arg1;
- (void)tabBarWillSelectItemWithEnterModel:(id)arg0;
- (void)tabBarDidSelectItemFromPreviousSelectedType:(long long)arg0 isByTap:(BOOL)arg1;
- (void)tabBarDidDeselectItem;
- (void)tabBarControllerDidChangedFrame:(id)arg0;
- (id)tabBarAbility;
- (void)setTabBarAbility:(id)arg0;
- (void)setBadgeModel:(id)arg0;
- (id)badgeModel;
- (void)tabBarController:(id)arg0 didSelectItemType:(long long)arg1 previousItemType:(long long)arg2;
- (void)removeWatchDog;
- (void)removeHideTextBadgeTimer;
- (void)setConfigHandler:(id)arg0;
- (id)configHandler;
- (void)setMallBubbleManager:(id)arg0;
- (void)onTopAndBottomMallPromptChangedMessageNotification:(id)arg0;
- (void)showBubble:(id)arg0;
- (void)hideBubble:(id)arg0;
- (void)appWillActive:(id)arg0;
- (id)normalRedBadgeModel;
- (void)trackBadgeTryShowWithModel:(id)arg0 source:(id)arg1;
- (void)trackBadgeShowResult:(long long)arg0 withModel:(id)arg1 source:(id)arg2;
- (void)setIsNormalRedBadgeShowing:(BOOL)arg0;
- (void)p_trackShowDot;
- (void)p_trackHiddenDot;
- (void)trackBadgeHidden:(long long)arg0 withModel:(id)arg1 source:(id)arg2;
- (void)trackBadgeDowngrade:(long long)arg0 withModel:(id)arg1 source:(id)arg2;
- (id)mallController;
- (id)mallItemButton;
- (void)updateContentVCTheme;
- (BOOL)landingToMallWithParams:(id)arg0;
- (void)setMallEnterModel:(id)arg0;
- (id)mallEnterModel;
- (BOOL)isInnerUIShowing;
- (void)tryHideBadge;
- (void)tryShowBadge;
- (void)tryUpdateInnerViewWithLottieModel;
- (void)trackBubbleShowResult:(long long)arg0 withBubbleInfo:(id)arg1 source:(id)arg2;
- (void)trackBubbleClickedWithBubbleInfo:(id)arg0 source:(id)arg1;
- (void)setEnterMallByBubbleClick:(BOOL)arg0;
- (void)trackBubbleDismiss:(long long)arg0 withBubbleInfo:(id)arg1 source:(id)arg2;
- (BOOL)isTextBadgeShowing;
- (void)trackBadgeFailWithModel:(id)arg0 source:(id)arg1 reason:(id)arg2;
- (void)setLastMallMessageRedTag:(id)arg0;
- (void)trackBubbleFailWithBubbleInfo:(id)arg0 source:(id)arg1 reason:(id)arg2;
- (BOOL)enterMallByBubbleClick;
- (BOOL)needShowRedDot;
- (void)showBubbleDisappearRedDot:(id)arg0 completion:(id /* block */)arg1 hideCallBack:(id /* block */)arg2;
- (id)getChannelTextBadge;
- (void)setActTextBadgeModel:(id)arg0;
- (void)setIsTextBadgeShowing:(BOOL)arg0;
- (void)tryShowTextBadge;
- (void)tryShowRedDotBadge;
- (id)actTextBadgeModel;
- (void)tryHideTextBadge;
- (void)setHideTextBadgeTimer:(id)arg0;
- (id)hideTextBadgeTimer;
- (void)tryHideRedDotBadge;
- (BOOL)isNormalRedBadgeShowing;
- (void)setLastTheme:(id)arg0;
- (id)lastTheme;
- (void)fireReloadChannelTab;
- (void)setFireReloadChannelTabTimer:(id)arg0;
- (id)fireReloadChannelTabTimer;
- (void)showInnerUI;
- (void)hideInnerUI;
- (BOOL)couldShowIcon;
- (void)setIsInnerUIShowing:(BOOL)arg0;
- (void)addWatchDog;
- (long long)showDotInterval;
- (void)setShowDotInterval:(long long)arg0;
- (void)showBubbleWithInfo:(id)arg0 completion:(id /* block */)arg1;
- (void)hideBubbleWithInfo:(id)arg0 completion:(id /* block */)arg1;
- (void)showRedDotWithInfo:(id)arg0 completion:(id /* block */)arg1;
- (void)hideRedDotWithInfo:(id)arg0 completion:(id /* block */)arg1;
- (BOOL)checkEnterIsClickBubble;
- (void)setMallItemButton:(id)arg0;
- (void)setMallController:(id)arg0;
- (void)setNormalRedBadgeModel:(id)arg0;
- (id)lastMallMessageRedTag;
- (id)init;
- (id)iconModel;
- (void)setStartTime:(double)arg0;
- (void).cxx_destruct;
- (void)setScope:(unsigned long long)arg0;
- (double)startTime;
- (void)setIconModel:(id)arg0;
- (void)dealloc;
- (void)appWillResignActive:(id)arg0;
- (unsigned long long)scope;
- (void)updateTheme;
- (void)setupConfig;

@end