//
//     Generated by private class-dump
//

@class IESLiveAdminManagerNewVC, NSString, UINavigationController, HTSLiveToolbarItem, IESLiveSensitiveStore, IESLivePresentNavController, UIViewController, IESLiveAdministerSettingApi;
@protocol IESLiveUserService;

@interface IESLiveAudienceAdminFragment : IESLiveRoomComponent <HTSLiveMessageSubscriber, IESLiveAdministerPrivilegeServiceRouter> {
    BOOL _diSettingEnable;
    IESLivePresentNavController *_managerNav;
    IESLiveAdminManagerNewVC *_managerVc;
    HTSLiveToolbarItem *_settingToolbarItem;
    HTSLiveToolbarItem *_landscapeSettingToolbarItem;
    HTSLiveToolbarItem *_promptToolbarItem;
    IESLivePresentNavController *_promptNav;
    UIViewController *_promptVc;
    HTSLiveToolbarItem *_giftVoteToolbarItem;
    HTSLiveToolbarItem *_wishListToolbarItem;
    IESLiveSensitiveStore *_sensitiveStore;
    UINavigationController *_audienceAdminNavigationController;
    IESLiveAdministerSettingApi *_administerSettingApi;
    id<IESLiveUserService> _userService;
}

@property (retain, nonatomic) IESLivePresentNavController *managerNav;
@property (retain, nonatomic) IESLiveAdminManagerNewVC *managerVc;
@property (retain, nonatomic) HTSLiveToolbarItem *settingToolbarItem;
@property (retain, nonatomic) HTSLiveToolbarItem *landscapeSettingToolbarItem;
@property (retain, nonatomic) HTSLiveToolbarItem *promptToolbarItem;
@property (retain, nonatomic) IESLivePresentNavController *promptNav;
@property (retain, nonatomic) UIViewController *promptVc;
@property (retain, nonatomic) HTSLiveToolbarItem *giftVoteToolbarItem;
@property (retain, nonatomic) HTSLiveToolbarItem *wishListToolbarItem;
@property (retain, nonatomic) IESLiveSensitiveStore *sensitiveStore;
@property (retain, nonatomic) UINavigationController *audienceAdminNavigationController;
@property (retain, nonatomic) IESLiveAdministerSettingApi *administerSettingApi;
@property (retain, nonatomic) id<IESLiveUserService> userService;
@property (nonatomic) BOOL diSettingEnable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentOrientationChanged:(long long)arg0;
- (id)userService;
- (void)setUserService:(id)arg0;
- (BOOL)isAdminNewStyle;
- (BOOL)isHavePrivilegeWithUser:(id)arg0 privilegeType:(int)arg1;
- (BOOL)isHavePrivilegeWithPrivilegeType:(int)arg0;
- (void)showAdministrateSettingWithUser:(id)arg0;
- (void)showAdministrateSheet;
- (void)setDiSettingEnable:(BOOL)arg0;
- (BOOL)diSettingEnable;
- (void)changePrivilege:(int)arg0 isAdd:(BOOL)arg1;
- (id)administerSettingApi;
- (void)setAdministerSettingApi:(id)arg0;
- (void)setManagerNav:(id)arg0;
- (id)managerVc;
- (void)pushAdminSetting;
- (void)setManagerVc:(id)arg0;
- (id)p_createUnflodListViewControllerWithtype:(long long)arg0;
- (id)managerNav;
- (void)p_pushOperateContainer:(id)arg0;
- (void)refreshAdminSetting:(long long)arg0;
- (BOOL)enableAdminOptV3;
- (void)insertPromptItem;
- (void)insertWishListItem;
- (void)insertGiftVoteItem;
- (BOOL)isShowSettingIcon;
- (void)insertSettingItem:(BOOL)arg0;
- (void)showAddAdminPrivilegeGuideTipIfNeededWithStyle:(BOOL)arg0;
- (void)trackAudiencePromptInfo:(BOOL)arg0 isAdmin:(BOOL)arg1;
- (void)trackPorpterBubbleShow;
- (void)loadLandscapeInMoreTool;
- (id)settingToolbarItem;
- (void)showAdminItemBubbleIfNeedWithText:(id)arg0 itemType:(int)arg1 delayTime:(double)arg2;
- (id)landscapeSettingToolbarItem;
- (id)promptToolbarItem;
- (id)giftVoteToolbarItem;
- (id)wishListToolbarItem;
- (void)removeSettingItem;
- (void)removePromptItem;
- (void)removeGiftVoteItem;
- (void)removeWishListItem;
- (id)sensitiveStore;
- (void)setPromptNav:(id)arg0;
- (void)setPromptVc:(id)arg0;
- (void)handleMemberMessage:(id)arg0;
- (void)handleAdminPrivilege:(id)arg0;
- (void)changeDanmakuStatus;
- (void)removeAllPrivilegeItem;
- (void)trackAddPrompterPrivilegeMessageShow;
- (void)trackDelPrompterPrivilegeMessageShow;
- (int)toolbarComponentTypeHasBubbleWithPrivilegeType:(int)arg0;
- (void)handleAdminPrivilegeType:(int)arg0 isAdd:(BOOL)arg1;
- (void)showNewStyleSettingWithLandScape:(BOOL)arg0;
- (void)adminPanelClickTrack;
- (void)trackPromptButtonWithAction:(id)arg0;
- (void)showPromptSheet;
- (id)audienceAdminNavigationController;
- (void)setAudienceAdminNavigationController:(id)arg0;
- (void)adminPanelShowTrack;
- (void)setSettingToolbarItem:(id)arg0;
- (void)setLandscapeSettingToolbarItem:(id)arg0;
- (void)setPromptToolbarItem:(id)arg0;
- (id)promptNav;
- (id)promptVc;
- (void)setGiftVoteToolbarItem:(id)arg0;
- (void)setWishListToolbarItem:(id)arg0;
- (void)setSensitiveStore:(id)arg0;
- (void).cxx_destruct;
- (void)messageReceived:(id)arg0;

@end