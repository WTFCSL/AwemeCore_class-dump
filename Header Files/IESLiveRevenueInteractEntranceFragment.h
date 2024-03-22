//
//     Generated by private class-dump
//

@class HTSLivePopupNavigationController, NSString, UIView, IESLiveRevenueInteractConnectingPanelManager, IESLivePKCustomItemView, IESLiveRevenueInteractEntranceCacheManager, NSDictionary, IESLivePKGroupPanelMonitor, IESLiveRevenueInteractPerfMonitor, IESLivePKGroupPanelViewController;
@protocol IESLivePKProvider, IESLiveMultiLinkerProvider, IESLiveRevenueInteractConnectingVC, IESLiveBubbleGuide, IESLiveGameModuleAdapter, IESLiveRoomServiceAdapter;

@interface IESLiveRevenueInteractEntranceFragment : IESLiveRoomComponent <IESLiveComponentLifeCycleNotifier, IESLiveRevenueInteractModuleEntranceInterface, IESLiveRevenueInteractEntranceProvider, IESLiveRevenueInteractAction, IESLiveMessageInteractionModuleCommentAction> {
    BOOL isClickForceOpenLinkMic;
    BOOL _isLinkmicPanelToolbarItemMessage;
    BOOL _isAnchor;
    BOOL _isAudio;
    BOOL _isForceHidden;
    BOOL _isRevenueInteractPanelShowing;
    BOOL _shouldForbidInteract;
    unsigned long long entrancePKScene;
    long long lastPanelPKTabType;
    id<IESLiveRoomServiceAdapter> roomModel;
    double clickPKButtonTime;
    double invitePanelAppearTime;
    NSString *openSource;
    NSString *guideType;
    NSString *toUserGroup;
    long long _timesOfAutoOpenPanelWhenMultiLinkmicSuccess;
    IESLiveRevenueInteractEntranceCacheManager *cacheManager;
    IESLivePKGroupPanelMonitor *panelMonitor;
    double startLiveTiming;
    HTSLivePopupNavigationController *_navigationController;
    IESLivePKCustomItemView *_pkItemView;
    IESLivePKGroupPanelViewController *_pkGroupPanel;
    id<IESLiveRevenueInteractConnectingVC> _revenueInteractPanel;
    id<IESLiveGameModuleAdapter> _gameModule;
    UIView<IESLiveBubbleGuide> *_currentTip;
    NSString *_fobidInteractToast;
    id<IESLivePKProvider> _pkProvider;
    id<IESLiveMultiLinkerProvider> _multiLinkerProvider;
    IESLiveRevenueInteractPerfMonitor *_perfMonitor;
    NSDictionary *_extraParam;
    IESLiveRevenueInteractConnectingPanelManager *_lynxPlayPanelManager;
}

@property (retain, nonatomic) HTSLivePopupNavigationController *navigationController;
@property (nonatomic) BOOL isAnchor;
@property (nonatomic) BOOL isAudio;
@property (retain, nonatomic) IESLivePKCustomItemView *pkItemView;
@property (nonatomic) BOOL isForceHidden;
@property (weak, nonatomic) IESLivePKGroupPanelViewController *pkGroupPanel;
@property (weak, nonatomic) id<IESLiveRevenueInteractConnectingVC> revenueInteractPanel;
@property (nonatomic) BOOL isRevenueInteractPanelShowing;
@property (retain, nonatomic) id<IESLiveGameModuleAdapter> gameModule;
@property (weak, nonatomic) UIView<IESLiveBubbleGuide> *currentTip;
@property (retain, nonatomic) NSString *fobidInteractToast;
@property (nonatomic) BOOL shouldForbidInteract;
@property (retain, nonatomic) id<IESLivePKProvider> pkProvider;
@property (retain, nonatomic) id<IESLiveMultiLinkerProvider> multiLinkerProvider;
@property (retain, nonatomic) IESLiveRevenueInteractPerfMonitor *perfMonitor;
@property (retain, nonatomic) NSDictionary *extraParam;
@property (retain, nonatomic) IESLiveRevenueInteractConnectingPanelManager *lynxPlayPanelManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long entrancePKScene;
@property (retain, nonatomic) id<IESLiveRoomServiceAdapter> roomModel;
@property (nonatomic) long long lastPanelPKTabType;
@property (nonatomic) BOOL isClickForceOpenLinkMic;
@property (nonatomic) double clickPKButtonTime;
@property (nonatomic) double invitePanelAppearTime;
@property (copy, nonatomic) NSString *openSource;
@property (copy, nonatomic) NSString *guideType;
@property (copy, nonatomic) NSString *toUserGroup;
@property (nonatomic) double startLiveTiming;
@property (retain, nonatomic) IESLiveRevenueInteractEntranceCacheManager *cacheManager;
@property (retain, nonatomic) IESLivePKGroupPanelMonitor *panelMonitor;
@property (nonatomic) BOOL isLinkmicPanelToolbarItemMessage;
@property (nonatomic) BOOL isLastLinkmicInLinkPanel;
@property (nonatomic) long long timesOfAutoOpenPanelWhenMultiLinkmicSuccess;

+ (BOOL)isMixed;

- (id)roomModel;
- (void)setIsAnchor:(BOOL)arg0;
- (id)getTopViewController;
- (id)extraParam;
- (void)setExtraParam:(id)arg0;
- (id)guideType;
- (void)setGuideType:(id)arg0;
- (void)setPerfMonitor:(id)arg0;
- (void)setRoomModel:(id)arg0;
- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)setIsAudio:(BOOL)arg0;
- (void)mountDidFinishForLevel:(long long)arg0;
- (void)showEntranceNavigationControllerWith:(id)arg0;
- (void)showEntranceNavigationControllerWith:(id)arg0 completion:(id /* block */)arg1;
- (void)dismissEntranceNavigationController;
- (id)perfMonitor;
- (id)gameModule;
- (void)setGameModule:(id)arg0;
- (void)showTipOnPKItem:(id)arg0;
- (void)enableEntryAccessibility:(BOOL)arg0;
- (id)entranceNavigationController;
- (double)entranceItemBottomOffset;
- (void)showPKItem:(BOOL)arg0;
- (void)updatePKItemAlpha:(double)arg0;
- (BOOL)isPKEnabled:(BOOL)arg0;
- (void)clickPKEntranceItemWithSpecificIndex:(long long)arg0;
- (void)clickPKEntranceItemWithSpecificIndex:(long long)arg0 extraParams:(id)arg1;
- (void)openPKDetailPanel:(id)arg0;
- (void)openPKPanelFromSource:(id)arg0 extraParams:(id)arg1;
- (void)clickPKEntranceItemWithSpecificIndex:(long long)arg0 source:(id)arg1;
- (void)showPKItemRedDot:(BOOL)arg0;
- (void)setOpenSource:(id)arg0;
- (id)openSource;
- (void)setPKEntranceEnabled:(BOOL)arg0 toast:(id)arg1;
- (void)popEntranceNavigationController;
- (void)retainPKCustomItemWithIneractiveScene:(unsigned long long)arg0;
- (void)releasePKCustomItem;
- (void)showBubbleOnPKItem:(id)arg0 didShow:(id /* block */)arg1;
- (void)showBubbleOnPKItemMessage:(id)arg0 didShow:(id /* block */)arg1 didClick:(id /* block */)arg2;
- (void)renderPKItemStatus:(unsigned long long)arg0;
- (void)renderPKItemOppositeUserIfNeed:(id)arg0;
- (void)updatePKItemWithAutoMatchRemianTime:(long long)arg0;
- (void)showPKGroupPanelViewWithIndex:(long long)arg0;
- (void)showPKGroupPanelSeasonEntryWith:(id)arg0;
- (void)setupPKEntranceItem;
- (void)updatePKItemRotationAnimationWithRemianTime:(long long)arg0;
- (void)dismissRevenueInteractPanel;
- (void)dismissRevenueInteractPanelWithCompletion:(id /* block */)arg0;
- (void)hideRevenueInteractTitleIconView;
- (void)onClickRevenueInteractBattleItem;
- (BOOL)showRevenueInteractPanelWithViewModel:(id)arg0;
- (void)notifyRevenueInteractBattleDesignatedGiftView:(unsigned long long)arg0;
- (void)handleBattlePanelAction:(long long)arg0 extraParams:(id)arg1;
- (void)handleBattleChorusAction:(long long)arg0;
- (void)openPlayPanel;
- (void)notifyRevenueInteractNewCustomPKEvent:(unsigned long long)arg0;
- (BOOL)isSingleTab;
- (unsigned long long)entrancePKScene;
- (void)setEntrancePKScene:(unsigned long long)arg0;
- (long long)lastPanelPKTabType;
- (void)setLastPanelPKTabType:(long long)arg0;
- (BOOL)isClickForceOpenLinkMic;
- (void)setIsClickForceOpenLinkMic:(BOOL)arg0;
- (double)clickPKButtonTime;
- (void)setClickPKButtonTime:(double)arg0;
- (double)invitePanelAppearTime;
- (void)setInvitePanelAppearTime:(double)arg0;
- (id)toUserGroup;
- (void)setToUserGroup:(id)arg0;
- (double)startLiveTiming;
- (void)setStartLiveTiming:(double)arg0;
- (id)panelMonitor;
- (void)setPanelMonitor:(id)arg0;
- (BOOL)isLinkmicPanelToolbarItemMessage;
- (void)setIsLinkmicPanelToolbarItemMessage:(BOOL)arg0;
- (BOOL)isLastLinkmicInLinkPanel;
- (void)setIsLastLinkmicInLinkPanel:(BOOL)arg0;
- (long long)timesOfAutoOpenPanelWhenMultiLinkmicSuccess;
- (void)setTimesOfAutoOpenPanelWhenMultiLinkmicSuccess:(long long)arg0;
- (void)p_setInteraciveDisabled:(id)arg0;
- (void)p_setInteraciveEnabled;
- (void)setFobidInteractToast:(id)arg0;
- (void)setShouldForbidInteract:(BOOL)arg0;
- (BOOL)shouldForbidInteract;
- (id)fobidInteractToast;
- (void)setMultiLinkerProvider:(id)arg0;
- (id)multiLinkerProvider;
- (void)setPkProvider:(id)arg0;
- (id)pkProvider;
- (BOOL)isPKItemShowing;
- (void)setupAnchorAudioEntrance;
- (void)setupAnchorVideoEntrance;
- (BOOL)isForceHidden;
- (id)pkItemView;
- (void)setPkItemView:(id)arg0;
- (void)p_makePKItemViewConstraint;
- (void)showEntranceNavigationControllerWith:(id)arg0 forceAnimated:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)setIsRevenueInteractPanelShowing:(BOOL)arg0;
- (void)loadNavigationControllerWith:(id)arg0 forceAnimated:(BOOL)arg1;
- (BOOL)isRevenueInteractPanelShowing;
- (void)dismissNavigationControllerWithCompletion:(id /* block */)arg0;
- (id)setupBubbleContentView:(id)arg0;
- (void)setIsForceHidden:(BOOL)arg0;
- (void)setLynxPlayPanelManager:(id)arg0;
- (void)showEntranceNavigationControllerWith:(id)arg0 forceAnimated:(BOOL)arg1;
- (void)setRevenueInteractPanel:(id)arg0;
- (id)lynxPlayPanelManager;
- (id)revenueInteractPanel;
- (void)setPkGroupPanel:(id)arg0;
- (id)pkGroupPanel;
- (void)interactionDisabledWithToast:(id)arg0;
- (void).cxx_destruct;
- (BOOL)isAnchor;
- (void)setNavigationController:(id)arg0;
- (id)navigationController;
- (void)keyboardWillHide;
- (void)keyboardWillShow;
- (void)dealloc;
- (BOOL)isAudio;
- (id)cacheManager;
- (void)setCacheManager:(id)arg0;
- (id)currentTip;
- (void)setCurrentTip:(id)arg0;

@end