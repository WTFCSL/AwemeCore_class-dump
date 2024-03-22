//
//     Generated by private class-dump
//

@class AWEIMOfficialSubCategoryDetailListViewController, NSURL, NSMutableDictionary, AWEUILoadingView, UITableView, AWENotificationModelNew, NSIndexPath, AWEIMDYNotificationListDataController, NSMutableArray, AWEIMOfficialDetailListBottomUnreadTipComponent, UIView, NSString, NSMutableSet, NSArray, UIImageView;
@protocol AWEIMDYOfficialDataManagerProtocol, AWEIMNetErrorViewProtocol;

@interface AWEOfficialDetailListViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, AWEIMDYOfficialTableViewContentImageCellDelegate, AWEIMDYNotificationListDataControllerDelegate, AWEIMOfficialDisturbSettingViewControllerDelegate, AWEIMOfficialNotificationSettingViewControllerDelegate, AWEUserMessage, BTMPageManagableProtocol, AWEOfficialDetailListUnreadBottomTipViewProtocol, AWEIMOfficialSubCategoryDetailListViewControllerDelegate, AWEOfficialFoldDetailListViewNoticeTipProtocol, AWERouterViewControllerProtocol> {
    BOOL _needTrackEvent;
    BOOL _showNav;
    BOOL _isStickOnTop;
    BOOL _canDisturb;
    BOOL _disturb;
    BOOL _foldStatus;
    BOOL _shouldHideBackUnreadCount;
    BOOL _isFold;
    BOOL _loadingData;
    BOOL _bottomCellDeleted;
    id<AWEIMDYOfficialDataManagerProtocol> _officialDataManager;
    UITableView *_tableView;
    AWEIMDYNotificationListDataController *_dataController;
    long long _unreadCount;
    long long _notificaitonType;
    NSString *_enterFrom;
    NSString *_navTitle;
    NSMutableSet *_visibleModelIDSet;
    NSString *_unsubscribeActionButtonText;
    NSString *_subscribeActionButtonText;
    AWENotificationModelNew *_actionSheetOperationModel;
    AWENotificationModelNew *_didEnterDetailModel;
    NSArray *_noticeTabs;
    NSArray *_noticeDisturbs;
    NSArray *_noticeSubscribes;
    NSArray *_noticeConfigs;
    NSArray *_noticeSubCategories;
    AWEIMOfficialSubCategoryDetailListViewController *_subCategoryVC;
    UIView *_menuView;
    UIImageView *_alertIconView;
    NSMutableDictionary *_hasReadMap;
    NSMutableDictionary *_displayTimeMap;
    UIView<AWEIMNetErrorViewProtocol> *_errorView;
    UIView *_emptyView;
    AWEUILoadingView *_businessLoadingView;
    NSIndexPath *_highlightIndexPath;
    long long _noticeDemoteState;
    NSURL *_noticeGroupIconUrl;
    long long _subsetScene;
    long long _reqeustState;
    NSMutableArray *_ironManTrackerList;
    AWEIMOfficialDetailListBottomUnreadTipComponent *_bottomTipComponent;
    long long _chatScene;
}

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) AWEIMDYNotificationListDataController *dataController;
@property (nonatomic) long long unreadCount;
@property (nonatomic) long long notificaitonType;
@property (nonatomic) BOOL needTrackEvent;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *navTitle;
@property (nonatomic) BOOL showNav;
@property (nonatomic) BOOL isStickOnTop;
@property (nonatomic) BOOL canDisturb;
@property (nonatomic) BOOL disturb;
@property (nonatomic) BOOL foldStatus;
@property (retain, nonatomic) NSMutableSet *visibleModelIDSet;
@property (copy, nonatomic) NSString *unsubscribeActionButtonText;
@property (copy, nonatomic) NSString *subscribeActionButtonText;
@property (nonatomic) BOOL shouldHideBackUnreadCount;
@property (retain, nonatomic) AWENotificationModelNew *actionSheetOperationModel;
@property (retain, nonatomic) AWENotificationModelNew *didEnterDetailModel;
@property (copy, nonatomic) NSArray *noticeTabs;
@property (copy, nonatomic) NSArray *noticeDisturbs;
@property (copy, nonatomic) NSArray *noticeSubscribes;
@property (copy, nonatomic) NSArray *noticeConfigs;
@property (copy, nonatomic) NSArray *noticeSubCategories;
@property (retain, nonatomic) AWEIMOfficialSubCategoryDetailListViewController *subCategoryVC;
@property (retain, nonatomic) UIView *menuView;
@property (retain, nonatomic) UIImageView *alertIconView;
@property (retain, nonatomic) NSMutableDictionary *hasReadMap;
@property (retain, nonatomic) NSMutableDictionary *displayTimeMap;
@property (retain, nonatomic) UIView<AWEIMNetErrorViewProtocol> *errorView;
@property (retain, nonatomic) UIView *emptyView;
@property (retain, nonatomic) AWEUILoadingView *businessLoadingView;
@property (retain, nonatomic) NSIndexPath *highlightIndexPath;
@property (nonatomic) BOOL isFold;
@property (nonatomic) long long noticeDemoteState;
@property (retain, nonatomic) NSURL *noticeGroupIconUrl;
@property (nonatomic) BOOL loadingData;
@property (nonatomic) long long subsetScene;
@property (nonatomic) BOOL bottomCellDeleted;
@property (nonatomic) long long reqeustState;
@property (retain, nonatomic) NSMutableArray *ironManTrackerList;
@property (retain, nonatomic) AWEIMOfficialDetailListBottomUnreadTipComponent *bottomTipComponent;
@property (nonatomic) long long chatScene;
@property (weak, nonatomic) id<AWEIMDYOfficialDataManagerProtocol> officialDataManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWENoticeInteractorLiteAdapterClass;

- (void)didFinishLogout;
- (void)setEnterFrom:(id)arg0;
- (BOOL)configWithRouterParamDict:(id)arg0;
- (BOOL)btm_autoManaged;
- (id)btm_pageIdentifier;
- (id)enterFrom;
- (void)setDataController:(id)arg0;
- (void)trackModel:(id)arg0;
- (void)showActionSheet:(id)arg0;
- (void)p_setupUI;
- (BOOL)loadingData;
- (id)titleForActionSheet;
- (id)buttonTexts;
- (void)didClickedButton:(id)arg0;
- (BOOL)isFold;
- (void)setIsFold:(BOOL)arg0;
- (void)backBtnClicked:(id)arg0;
- (void)p_fetchData;
- (void)p_endRefreshing;
- (void)p_loadMoreData;
- (void)setNotificaitonType:(long long)arg0;
- (void)setShowNav:(BOOL)arg0;
- (void)p_clearLocalUnreadCount;
- (BOOL)showNav;
- (long long)notificaitonType;
- (id)aAWENoticeInteractorLiteAdapter;
- (id)noticeTabs;
- (void)setNoticeTabs:(id)arg0;
- (id)noticeDisturbs;
- (void)setNoticeDisturbs:(id)arg0;
- (id)noticeSubscribes;
- (void)setNoticeSubscribes:(id)arg0;
- (id)noticeConfigs;
- (void)setNoticeConfigs:(id)arg0;
- (id)noticeSubCategories;
- (void)setNoticeSubCategories:(id)arg0;
- (void)setIsStickOnTop:(BOOL)arg0;
- (BOOL)canDisturb;
- (void)setCanDisturb:(BOOL)arg0;
- (BOOL)disturb;
- (void)setDisturb:(BOOL)arg0;
- (BOOL)foldStatus;
- (void)setFoldStatus:(BOOL)arg0;
- (void)onDatasourceChange;
- (long long)subsetScene;
- (BOOL)isStickOnTop;
- (void)setSubsetScene:(long long)arg0;
- (void)onDisturbStateChange:(id)arg0;
- (void)onSubscribeStateChange:(id)arg0;
- (void)didClickSubCategory:(long long)arg0;
- (void)onNoticeActionClick:(id)arg0 buttonModel:(id)arg1;
- (void)onCellLongPress:(id)arg0;
- (void)setNeedTrackEvent:(BOOL)arg0;
- (void)onTapMuteHint;
- (void)onNoticeTipsClick:(id)arg0;
- (BOOL)needTrackEvent;
- (void)onGotoDetailClickWithIndex:(unsigned long long)arg0 model:(id)arg1;
- (void)onSettingClick:(id)arg0;
- (void)onNoticeTextUnfoldCell:(id)arg0 animated:(BOOL)arg1;
- (void)didTapBottomUnreadView;
- (void)setNoticeDemoteState:(long long)arg0;
- (void)setNoticeGroupIconUrl:(id)arg0;
- (void)setShouldHideBackUnreadCount:(BOOL)arg0;
- (void)setChatScene:(long long)arg0;
- (long long)chatScene;
- (void)setOfficialDataManager:(id)arg0;
- (void)setReqeustState:(long long)arg0;
- (void)setHasReadMap:(id)arg0;
- (void)setDisplayTimeMap:(id)arg0;
- (void)setUnsubscribeActionButtonText:(id)arg0;
- (void)setSubscribeActionButtonText:(id)arg0;
- (void)p_setupRefreshHeader;
- (void)p_trackPushEnterEvent;
- (void)p_clearDeleteDate;
- (id)officialDataManager;
- (id)didEnterDetailModel;
- (void)setDidEnterDetailModel:(id)arg0;
- (id)ironManTrackerList;
- (void)trackIronManWithEvent:(id)arg0 schema:(id)arg1;
- (long long)reqeustState;
- (void)p_updateOfficialChatModel;
- (BOOL)bottomCellDeleted;
- (id)businessLoadingView;
- (void)configNoticeComponents;
- (void)p_setRightBarItem;
- (void)reloadTableHeaderView;
- (id)foldNoticeList:(id)arg0;
- (void)p_setupBottomUnreadTipView;
- (void)updateAlerView:(id)arg0;
- (id)alertIconView;
- (void)setBottomTipComponent:(id)arg0;
- (id)bottomTipComponent;
- (void)p_trackBottomUnreadMessageWithEvent:(id)arg0;
- (void)rightBarButtonItenAction;
- (void)addMenu;
- (void)addSubCategoryViewController;
- (id)noMoreDataView;
- (long long)noticeDemoteState;
- (void)onShowCell;
- (void)preloadSchemaWithSchemaUrl:(id)arg0;
- (void)setAlertIconView:(id)arg0;
- (void)setBusinessLoadingView:(id)arg0;
- (void)p_addNavigationBarUnreadView;
- (void)pushToSubscribeSettingController;
- (void)pushToDistubSettingController;
- (BOOL)shouldHideBackUnreadCount;
- (id)hasReadMap;
- (id)noticeCellCommonTrackingParamsForModel:(id)arg0;
- (void)trackMuteHintWithEventName:(id)arg0;
- (void)trackOrderFinishMessageWithEvent:(id)arg0 model:(id)arg1;
- (id)accountTypeWithModel:(id)arg0;
- (void)setActionSheetOperationModel:(id)arg0;
- (id)actionSheetOperationModel;
- (BOOL)enableReloadLatestChatListCell:(long long)arg0 lastIndex:(long long)arg1;
- (void)setBottomCellDeleted:(BOOL)arg0;
- (void)deleteNotice;
- (long long)unsubscribeState:(id)arg0;
- (id)unsubscribeActionButtonText;
- (void)onNoticeSubscribeClick:(id)arg0;
- (id)subscribeActionButtonText;
- (long long)disturbState:(id)arg0;
- (void)onNoticeRecoverClick:(id)arg0;
- (id)urlAddMonitorParams:(id)arg0;
- (void)trackClick:(id)arg0 schema:(id)arg1 index:(id)arg2;
- (id)noticeGroupIconUrl;
- (void)onMuteSwitchValueChangedWithIsSwitchOn:(BOOL)arg0 completionBlock:(id /* block */)arg1;
- (void)trackMuteValueChangeWithShouldMuteNotice:(BOOL)arg0;
- (void)setNoticeUnsubscribes:(id)arg0;
- (void)popoverMenuForOptimizeWithButton:(id)arg0 model:(id)arg1 tabName:(id)arg2;
- (id)subCategoryVC;
- (void)setSubCategoryVC:(id)arg0;
- (void)highlightNoticeUnreadCellWithIndex:(unsigned long long)arg0;
- (void)setHighlightIndexPath:(id)arg0;
- (id)highlightIndexPath;
- (void)highlightCellsWithIndexPath:(id)arg0;
- (void)didDeleteNoticeTipView;
- (void)onFoldSettingAction;
- (id)visibleModelIDSet;
- (void)setVisibleModelIDSet:(id)arg0;
- (id)displayTimeMap;
- (void)setIronManTrackerList:(id)arg0;
- (void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg0;
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
- (void)setTableView:(id)arg0;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)tableView;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (void)setUnreadCount:(long long)arg0;
- (void)viewWillDisappear:(BOOL)arg0;
- (void)scrollViewDidEndScrollingAnimation:(id)arg0;
- (BOOL)prefersStatusBarHidden;
- (void)viewWillAppear:(BOOL)arg0;
- (long long)unreadCount;
- (void)dealloc;
- (void)viewDidLoad;
- (id)menuView;
- (void)setMenuView:(id)arg0;
- (id)emptyView;
- (void)setEmptyView:(id)arg0;
- (id)navTitle;
- (id)dataController;
- (void)setNavTitle:(id)arg0;
- (double)footerInset;
- (id)errorView;
- (void)setErrorView:(id)arg0;
- (void)setLoadingData:(BOOL)arg0;

@end
