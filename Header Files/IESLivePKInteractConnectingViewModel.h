//
//     Generated by private class-dump
//

@class BattleShellConfig, NSString, NSAttributedString, IESLiveRevenueInteractBattleCustomViewController, IESLiveRevenueInteractBattleDesignatedGiftViewController, IESLiveRevenueInteractTitleIconViewController, NSMutableArray, NSDictionary, IESLiveRevenueInteractApi;
@protocol IESLiveCompoundSubscription, IESLiveInteractiveExtendUserService, IESLivePKProvider;

@interface IESLivePKInteractConnectingViewModel : NSObject <IESLivePKStateAction, IESLiveInteractiveUserServiceDelegate, IESLiveKTVChorusActions, IESLiveRevenueInteractConnectingViewModel> {
    BOOL hasFeedBackEntrance;
    BOOL battleCustomSwitch;
    BOOL needRefresh;
    BOOL isAdmin;
    BOOL isInChorus;
    BOOL isChorusOpen;
    NSAttributedString *_titleStr;
    NSMutableArray *_tabListArray;
    NSMutableArray *_items;
    NSMutableArray *_timeLimitItems;
    unsigned long long inviteButtonStatus;
    NSString *feedbackEntranceText;
    unsigned long long selectTabType;
    NSString *fromPage;
    NSDictionary *extraDic;
    id<IESLiveInteractiveExtendUserService> userService;
    unsigned long long inviteBattleButtonStatus;
    NSString *revenueInteractSource;
    NSString *customBottomEntranceTag;
    IESLiveRevenueInteractApi *_revenueInteractApi;
    id<IESLivePKProvider> _pkProvider;
    id<IESLiveCompoundSubscription> _disposable;
    IESLiveRevenueInteractBattleCustomViewController *_customPlayVC;
    IESLiveRevenueInteractTitleIconViewController *_titleIconVC;
    IESLiveRevenueInteractBattleDesignatedGiftViewController *_designatedGiftVC;
    BattleShellConfig *_tempShellConfig;
}

@property (retain, nonatomic) IESLiveRevenueInteractApi *revenueInteractApi;
@property (weak, nonatomic) id<IESLivePKProvider> pkProvider;
@property (retain, nonatomic) id<IESLiveCompoundSubscription> disposable;
@property (weak, nonatomic) IESLiveRevenueInteractBattleCustomViewController *customPlayVC;
@property (weak, nonatomic) IESLiveRevenueInteractTitleIconViewController *titleIconVC;
@property (weak, nonatomic) IESLiveRevenueInteractBattleDesignatedGiftViewController *designatedGiftVC;
@property (retain, nonatomic) BattleShellConfig *tempShellConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSAttributedString *titleStr;
@property (copy, nonatomic) NSString *feedbackEntranceText;
@property (retain, nonatomic) NSMutableArray *tabListArray;
@property (retain, nonatomic) NSMutableArray *items;
@property (retain, nonatomic) NSMutableArray *timeLimitItems;
@property (nonatomic) BOOL hasFeedBackEntrance;
@property (nonatomic) BOOL battleCustomSwitch;
@property (nonatomic) BOOL needRefresh;
@property (nonatomic) BOOL isAdmin;
@property (nonatomic) BOOL isInChorus;
@property (nonatomic) BOOL isChorusOpen;
@property (nonatomic) unsigned long long selectTabType;
@property (nonatomic) unsigned long long inviteButtonStatus;
@property (nonatomic) unsigned long long inviteBattleButtonStatus;
@property (copy, nonatomic) NSDictionary *extraDic;
@property (copy, nonatomic) NSString *fromPage;
@property (weak, nonatomic) id<IESLiveInteractiveExtendUserService> userService;
@property (copy, nonatomic) NSString *customBottomEntranceTag;
@property (copy, nonatomic) NSString *revenueInteractSource;

- (void)setNeedRefresh:(BOOL)arg0;
- (void)didSetAttachingDIContext;
- (id)initWithDIContext:(id)arg0;
- (void)setFromPage:(id)arg0;
- (id)extraDic;
- (void)setExtraDic:(id)arg0;
- (id)titleStr;
- (void)setTitleStr:(id)arg0;
- (void)setDisposable:(id)arg0;
- (id)disposable;
- (void)bindActions;
- (id)userService;
- (void)setUserService:(id)arg0;
- (void)trackWithEvent:(id)arg0 extraParams:(id)arg1;
- (BOOL)hasGuestOnline;
- (void)didChangePKStateFrom:(long long)arg0 to:(long long)arg1;
- (BOOL)isPKing;
- (BOOL)isMultiAutoMatching;
- (unsigned long long)selectTabType;
- (void)setSelectTabType:(unsigned long long)arg0;
- (id)tabListArray;
- (BOOL)isInviting;
- (void)setIsAdmin:(BOOL)arg0;
- (void)buildTitleStr;
- (void)setInviteButtonStatus:(unsigned long long)arg0;
- (unsigned long long)inviteButtonStatus;
- (BOOL)isInChorus;
- (id)chorusInfo;
- (void)multiLinkerUserService:(id)arg0 didInteractiveListUpdated:(id)arg1;
- (void)hideRevenueInteractTitleIconView;
- (void)onClickRevenueInteractBattleItem;
- (void)notifyRevenueInteractNewCustomPKEvent:(unsigned long long)arg0;
- (id)revenueInteractApi;
- (void)setRevenueInteractApi:(id)arg0;
- (void)setRevenueInteractSource:(id)arg0;
- (id)pkDuration;
- (id)revenueInteractSource;
- (void)didChorusStarted:(id)arg0;
- (void)didChorusEnd:(id)arg0;
- (void)setCustomBottomEntranceTag:(id)arg0;
- (void)setBattleCustomSwitch:(BOOL)arg0;
- (void)buildDefaultBattleChooseList;
- (void)setTabListArray:(id)arg0;
- (void)buildNormalBattleItems:(id)arg0 autoMatchInfo:(id)arg1;
- (void)setTimeLimitItems:(id)arg0;
- (void)addDesignatedGiftBattleChooseEntrance:(id)arg0;
- (void)addSurvivalBattleChooseEntrance:(id)arg0;
- (void)rebuildBattleChooseEntrance;
- (void)showAnchorInteractInviteViewWithSource:(unsigned long long)arg0;
- (void)showRelinkAnchorPanel;
- (void)trackWithEvent:(id)arg0 extraParams:(id)arg1 containsTransReason:(BOOL)arg2;
- (BOOL)isLeadSinger;
- (void)setCustomPlayVC:(id)arg0;
- (void)hideRevenueInteractBattleCustomView;
- (id)customPlayVC;
- (void)setTitleIconVC:(id)arg0;
- (id)titleIconVC;
- (void)setDesignatedGiftVC:(id)arg0;
- (id)designatedGiftVC;
- (void)startNormalPKWithConnectingType:(long long)arg0 isOnceMore:(BOOL)arg1;
- (void)trackChorusViewClicked;
- (void)showChorusRemindDialog;
- (id)itemForEntrance:(long long)arg0 ignoreCustomDiff:(BOOL)arg1;
- (id)timeLimitItems;
- (void)setFeedbackEntranceText:(id)arg0;
- (void)setHasFeedBackEntrance:(BOOL)arg0;
- (BOOL)isShellPK;
- (void)addNormalPKChooseEntrance:(id)arg0;
- (void)addTeamBattleChooseEntrance:(id)arg0 entrance:(id)arg1;
- (void)addVoteChooseEntrance:(id)arg0;
- (void)addShellBattleChooseEntrance:(id)arg0;
- (void)addBreakthroughChooseEntrance:(id)arg0;
- (void)addNewCustomBattleChooseEntrance:(id)arg0;
- (void)showOpenVotePanel:(id)arg0;
- (id)tempShellConfig;
- (void)setTempShellConfig:(id)arg0;
- (id)itemForEntrance:(long long)arg0;
- (BOOL)isNewCustomBattleItemPKing:(id)arg0;
- (void)setIsChorusOpen:(BOOL)arg0;
- (void)fetchDynamicBattleChooseList:(id /* block */)arg0;
- (void)quitRevenueInteract;
- (void)showRevenueInteractInviteView;
- (void)showInteractSettingPanel;
- (void)onClickChorusView;
- (void)showPKFeedbackView;
- (BOOL)shouldShowChorusView;
- (void)showRevenueInteractBattleDesignatedGiftView;
- (void)hideRevenueInteractBattleDesignatedGiftView;
- (void)showRevenueInteractNewBattleCustomView;
- (void)showRevenueInteractTitleIconView:(id)arg0;
- (void)setupRevenueInteractSource;
- (void)updatePanelSettingStatus;
- (void)canLeaveWithTeamMate:(BOOL)arg0;
- (id)feedbackEntranceText;
- (BOOL)hasFeedBackEntrance;
- (BOOL)battleCustomSwitch;
- (void)setIsInChorus:(BOOL)arg0;
- (BOOL)isChorusOpen;
- (unsigned long long)inviteBattleButtonStatus;
- (void)setInviteBattleButtonStatus:(unsigned long long)arg0;
- (id)customBottomEntranceTag;
- (void)setPkProvider:(id)arg0;
- (id)pkProvider;
- (BOOL)isVoting;
- (BOOL)isBreakthroughing;
- (BOOL)isOnGoingForEntrance:(long long)arg0;
- (void)setupButtonType:(id)arg0 onGoing:(BOOL)arg1;
- (void)updateInviteBattleButtonStatus;
- (void)updateLinkerStatus;
- (BOOL)isNormalPK;
- (BOOL)isDesignatedPKing;
- (BOOL)isSurvivaling;
- (void)inviteBattle:(int)arg0 callback:(id /* block */)arg1;
- (void)setItems:(id)arg0;
- (void).cxx_destruct;
- (id)items;
- (BOOL)needRefresh;
- (void)build;
- (void)dealloc;
- (BOOL)isAdmin;
- (id)fromPage;

@end