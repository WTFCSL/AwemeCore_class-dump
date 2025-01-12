//
//     Generated by private class-dump
//

@class AWEFeedChannelTopBarEntranceModel, NSString, NSTimer, AWEFeedChannelTopBarBadgeModel, NSMutableDictionary, AWEMultiTabMallIconModel2, FBKVOController, AWEMultiTabMallBadgeModel, UIViewController;
@protocol AWEFeedTabItemViewControllerProtocol, AWETabMallChannelProtocol, AWEECMallChannelBarConfigProtocol, AWEHPChannelControllerConfigProtocol;

@interface AWEFeedMallChannelController : NSObject <AWETabMallVisibleDelegate, AWETabMallChannelProtocol, AWEECMallBubbleAndRedDotProtocol, AWEHPChannelControllerProtocol> {
    BOOL _isViewAppeared;
    BOOL _isTextBadgeShowing;
    BOOL _isNormalRedBadgeShowing;
    BOOL _isVisible;
    BOOL _enterMallByBubbleClick;
    BOOL _isEnterMallCycle;
    id<AWEHPChannelControllerConfigProtocol> _config;
    UIViewController<AWEFeedTabItemViewControllerProtocol, AWETabMallChannelProtocol> *_contentVC;
    AWEFeedChannelTopBarEntranceModel *_currentSegmentItem;
    AWEFeedChannelTopBarBadgeModel *_textBadge;
    AWEFeedChannelTopBarBadgeModel *_redDotBadge;
    NSMutableDictionary *_trackerInfo;
    AWEMultiTabMallIconModel2 *_iconModel;
    AWEMultiTabMallBadgeModel *_badgeModel;
    double _startTime;
    unsigned long long _scope;
    FBKVOController *_kvoCtrl;
    long long _showDotInterval;
    NSString *_lastTheme;
    NSTimer *_hideTextBadgeTimer;
    NSTimer *_fireReloadChannelTabTimer;
    NSString *_topRightEntranceImageLight;
    NSString *_topRightEntranceImageDark;
    id<AWEECMallChannelBarConfigProtocol> _configHandler;
    AWEFeedChannelTopBarBadgeModel *_lastMallMessageRedTag;
}

@property (retain, nonatomic) UIViewController<AWEFeedTabItemViewControllerProtocol, AWETabMallChannelProtocol> *contentVC;
@property (retain, nonatomic) AWEFeedChannelTopBarEntranceModel *currentSegmentItem;
@property (retain, nonatomic) AWEFeedChannelTopBarBadgeModel *textBadge;
@property (retain, nonatomic) AWEFeedChannelTopBarBadgeModel *redDotBadge;
@property (retain, nonatomic) NSMutableDictionary *trackerInfo;
@property (retain, nonatomic) AWEMultiTabMallIconModel2 *iconModel;
@property (retain, nonatomic) AWEMultiTabMallBadgeModel *badgeModel;
@property (nonatomic) double startTime;
@property (nonatomic) unsigned long long scope;
@property (retain, nonatomic) FBKVOController *kvoCtrl;
@property (nonatomic) BOOL isViewAppeared;
@property (nonatomic) BOOL isTextBadgeShowing;
@property (nonatomic) BOOL isNormalRedBadgeShowing;
@property (nonatomic) BOOL isVisible;
@property (nonatomic) BOOL enterMallByBubbleClick;
@property (nonatomic) long long showDotInterval;
@property (copy, nonatomic) NSString *lastTheme;
@property (retain, nonatomic) NSTimer *hideTextBadgeTimer;
@property (retain, nonatomic) NSTimer *fireReloadChannelTabTimer;
@property (nonatomic) BOOL isEnterMallCycle;
@property (copy, nonatomic) NSString *topRightEntranceImageLight;
@property (copy, nonatomic) NSString *topRightEntranceImageDark;
@property (retain, nonatomic) id<AWEECMallChannelBarConfigProtocol> configHandler;
@property (retain, nonatomic) AWEFeedChannelTopBarBadgeModel *lastMallMessageRedTag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWEHPChannelControllerConfigProtocol> config;

+ (Class)aAWEFeedMallChannelControllerDOUYINLiteAdapterClass;

- (void)channelLandingTabWithParams:(id)arg0;
- (void)channelEnterWithModel:(id)arg0;
- (id)iconConfig;
- (void)setBadgeModel:(id)arg0;
- (id)badgeModel;
- (void)onAWEUIThemeChangeNotification;
- (BOOL)isViewAppeared;
- (void)setIsViewAppeared:(BOOL)arg0;
- (id)contentVC;
- (void)channelDidLoad;
- (void)channelViewWillAppear;
- (void)channelViewWillDisappear;
- (void)channelViewDidDisappear;
- (void)channelTrackRefreshWithModel:(id)arg0;
- (BOOL)canShowLeftSlideInteractiveGuide;
- (id)getContentViewController;
- (void)setContentVC:(id)arg0;
- (void)removeWatchDog;
- (void)removeHideTextBadgeTimer;
- (void)setConfigHandler:(id)arg0;
- (id)configHandler;
- (void)onTopAndBottomMallPromptChangedMessageNotification:(id)arg0;
- (void)showBubble:(id)arg0;
- (void)hideBubble:(id)arg0;
- (void)appWillActive:(id)arg0;
- (void)trackBadgeTryShowWithModel:(id)arg0 source:(id)arg1;
- (void)trackBadgeShowResult:(long long)arg0 withModel:(id)arg1 source:(id)arg2;
- (void)setIsNormalRedBadgeShowing:(BOOL)arg0;
- (void)trackBadgeHidden:(long long)arg0 withModel:(id)arg1 source:(id)arg2;
- (void)trackBadgeDowngrade:(long long)arg0 withModel:(id)arg1 source:(id)arg2;
- (void)updateContentVCTheme;
- (void)tryHideBadge;
- (void)tryShowBadge;
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
- (void)setIsTextBadgeShowing:(BOOL)arg0;
- (void)tryShowTextBadge;
- (void)tryShowRedDotBadge;
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
- (BOOL)couldShowIcon;
- (void)addWatchDog;
- (long long)showDotInterval;
- (void)setShowDotInterval:(long long)arg0;
- (void)showBubbleWithInfo:(id)arg0 completion:(id /* block */)arg1;
- (void)hideBubbleWithInfo:(id)arg0 completion:(id /* block */)arg1;
- (void)showRedDotWithInfo:(id)arg0 completion:(id /* block */)arg1;
- (void)hideRedDotWithInfo:(id)arg0 completion:(id /* block */)arg1;
- (BOOL)checkEnterIsClickBubble;
- (id)lastMallMessageRedTag;
- (void)mallBecomeVisible;
- (void)mallBecomeInvisible;
- (void)bottomTabChangedWithMallVisible:(BOOL)arg0;
- (void)topTabChangedWithMallVisible:(BOOL)arg0;
- (void)appActiveCauseMallVisible:(BOOL)arg0;
- (id)topRightEntranceImageLight;
- (id)topRightEntranceImageDark;
- (void)resetChannelContext;
- (void)updateTopBarAlpha:(double)arg0;
- (void)showLiteMallGuideBubble:(id)arg0;
- (void)removeLiteMallGuideBubble:(id)arg0;
- (void)onXTabMallThemeChange;
- (id)getSegmentItem;
- (void)setCurrentSegmentItem:(id)arg0;
- (id)currentSegmentItem;
- (void)updateRightEntranceBadge:(id)arg0;
- (void)configShowRightEntrance;
- (id)aAWEFeedMallChannelControllerDOUYINLiteAdapter;
- (id)kvoCtrl;
- (void)configMallSearchHiddenActionIfNeeded;
- (void)setIsEnterMallCycle:(BOOL)arg0;
- (BOOL)isEnterMallCycle;
- (id)handleBubbleParams:(id)arg0;
- (void)setTopRightEntranceImageLight:(id)arg0;
- (void)setTopRightEntranceImageDark:(id)arg0;
- (void)updateRightEntranceWithTheme:(unsigned long long)arg0;
- (id)redDotBadge;
- (void)trackShowRedDot;
- (void)trackHiddenRedDot;
- (id)imageEntranceModel;
- (id)titleEntranceModel;
- (BOOL)isUseDartConfig;
- (id)getChannelRedBadge;
- (void)setRedDotBadge:(id)arg0;
- (unsigned long long)themeStyleWithThemeStr:(id)arg0;
- (void)setTrackerInfo:(id)arg0;
- (void)setKvoCtrl:(id)arg0;
- (id)iconModel;
- (id)trackerInfo;
- (void)setConfig:(id)arg0;
- (void)setStartTime:(double)arg0;
- (void).cxx_destruct;
- (void)setIsVisible:(BOOL)arg0;
- (id)config;
- (void)setScope:(unsigned long long)arg0;
- (id)initWithConfig:(id)arg0;
- (double)startTime;
- (void)setIconModel:(id)arg0;
- (void)dealloc;
- (void)appWillResignActive:(id)arg0;
- (unsigned long long)scope;
- (BOOL)isVisible;
- (void)updateTheme;
- (void)setTextBadge:(id)arg0;
- (id)textBadge;

@end
