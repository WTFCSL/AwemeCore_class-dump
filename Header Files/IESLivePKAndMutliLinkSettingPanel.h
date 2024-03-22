//
//     Generated by private class-dump
//

@class NSArray, HTSLiveInteractiveAPIV2, NSString, HTSLivePKApi, NSMutableArray, UITableView;

@interface IESLivePKAndMutliLinkSettingPanel : IESLiveRevenueInteractPopupViewController <UITableViewDelegate, UITableViewDataSource> {
    long long _settingType;
    NSArray *_pkItemInfos;
    NSArray *_multiLinkItemInfos;
    UITableView *_settingListView;
    HTSLivePKApi *_pkApi;
    HTSLiveInteractiveAPIV2 *_interactAPI;
    NSMutableArray *_pkSettingItems;
    NSArray *_multiLinkerSettingItems;
    NSMutableArray *_pkInviteSettingChildrenIndexList;
    long long _multiLinkerSubItemsCount;
    NSString *_inviteRejectTemporaryText;
}

@property (nonatomic) long long settingType;
@property (retain, nonatomic) NSArray *pkItemInfos;
@property (retain, nonatomic) NSArray *multiLinkItemInfos;
@property (retain, nonatomic) UITableView *settingListView;
@property (retain, nonatomic) HTSLivePKApi *pkApi;
@property (retain, nonatomic) HTSLiveInteractiveAPIV2 *interactAPI;
@property (retain, nonatomic) NSMutableArray *pkSettingItems;
@property (copy, nonatomic) NSArray *multiLinkerSettingItems;
@property (retain, nonatomic) NSMutableArray *pkInviteSettingChildrenIndexList;
@property (nonatomic) BOOL linkEnabled;
@property (nonatomic) BOOL multiLinkEnabled;
@property (nonatomic) BOOL defaultLargeLayoutEnabled;
@property (nonatomic) BOOL noFollowAuth;
@property (nonatomic) BOOL sendGiftToOthers;
@property (nonatomic) long long multiLinkerSubItemsCount;
@property (copy, nonatomic) NSString *inviteRejectTemporaryText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setSettingType:(long long)arg0;
- (void)p_reload;
- (void)onSetupNavBar:(id)arg0;
- (void)p_buildMultiLinkSettingDataSource;
- (id)multiLinkItemInfos;
- (void)p_builSettingView;
- (void)setSettingListView:(id)arg0;
- (id)interactAPI;
- (void)setFollowingFollowedLinkEnabled:(BOOL)arg0;
- (void)setHourlyRankLinkEnabled:(BOOL)arg0;
- (void)setPopularityRankLinkEnabled:(BOOL)arg0;
- (void)setSearchLinkEnabled:(BOOL)arg0;
- (void)setMultiLinkEnabled:(BOOL)arg0;
- (void)setNoFollowAuth:(BOOL)arg0;
- (void)setSendGiftToOthers:(BOOL)arg0;
- (id)p_makeSwitchItemWithTitle:(id)arg0 initialValue:(BOOL)arg1 style:(long long)arg2;
- (void)p_updateSetting:(id)arg0 completion:(id /* block */)arg1;
- (void)setMultiLinkerSettingItems:(id)arg0;
- (id)cellWithIndex:(long long)arg0 section:(long long)arg1;
- (id)settingListView;
- (id)pkSettingItems;
- (long long)multiLinkerSubItemsCount;
- (id)multiLinkerSettingItems;
- (void)setMultiLinkerSubItemsCount:(long long)arg0;
- (BOOL)noFollowAuth;
- (BOOL)sendGiftToOthers;
- (BOOL)multiLinkEnabled;
- (BOOL)followingFollowedLinkEnabled;
- (BOOL)hourlyRankLinkEnabled;
- (BOOL)popularityRankLinkEnabled;
- (BOOL)searchLinkEnabled;
- (void)setMultiLinkItemInfos:(id)arg0;
- (void)setInteractAPI:(id)arg0;
- (void)setPkSettingItems:(id)arg0;
- (id)pkInviteSettingChildrenIndexList;
- (void)setPkInviteSettingChildrenIndexList:(id)arg0;
- (id)inviteRejectTemporaryText;
- (void)setInviteRejectTemporaryText:(id)arg0;
- (void)trackActionWithItem:(id)arg0 isOn:(BOOL)arg1 partition:(id)arg2;
- (id)initWithSettingType:(long long)arg0;
- (void)setPkApi:(id)arg0;
- (id)pkApi;
- (void)p_buildPKSettingDataSource;
- (id)pkItemInfos;
- (void)p_updateBlockListDataSource;
- (void)setPKSwitchSettingFromSettings:(id)arg0 itemInfo:(id)arg1;
- (id)p_pkSettingCellFromItemInfo:(id)arg0;
- (void)p_updateSetting:(id)arg0 withValue:(id)arg1 completion:(id /* block */)arg2;
- (void)p_showSubPanelWithItem:(id)arg0;
- (void)setDefaultLargeLayoutEnabled:(BOOL)arg0;
- (void)trackDefualtLargeLayoutSettingClicked:(BOOL)arg0;
- (BOOL)defaultLargeLayoutEnabled;
- (void)p_animationUpdateWithValue:(BOOL)arg0 index:(long long)arg1;
- (void)p_showChangeTimeVC;
- (void)showPKTermDetailView;
- (void)p_showVolumeUpVC;
- (void)trackDefualtLargeLayoutSettingShow;
- (void)p_trackAntionWithItem:(id)arg0;
- (void)setPkItemInfos:(id)arg0;
- (id)tableView:(id)arg0 viewForHeaderInSection:(long long)arg1;
- (void)dismiss;
- (long long)numberOfSectionsInTableView:(id)arg0;
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
- (double)tableView:(id)arg0 heightForHeaderInSection:(long long)arg1;
- (void)viewDidAppear:(BOOL)arg0;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (void)setLinkEnabled:(BOOL)arg0;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (void)viewDidLoad;
- (double)tableView:(id)arg0 heightForFooterInSection:(long long)arg1;
- (id)tableView:(id)arg0 viewForFooterInSection:(long long)arg1;
- (long long)settingType;
- (BOOL)linkEnabled;

@end
