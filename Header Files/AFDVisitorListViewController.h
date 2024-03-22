//
//     Generated by private class-dump
//

@class UIView, NSString, AFDSuspendedShadowButton, AFDVisitorListViewModel, AWEUILoadingView, UITableView, AFDVisitorAuthorizationViewController, NSMutableSet, AFDVisitorListUnAuthorizedView, NSNumber;

@interface AFDVisitorListViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UITableViewDelegate, AWERouterViewControllerProtocol, AFDVisitorListUnAuthorizedViewDelegate, AFDVisitorListCellDelegate, AFDVisitorListViewModelDelegate> {
    BOOL _isFirstEntry;
    BOOL _isEnterProfileVisitor;
    AFDVisitorListUnAuthorizedView *_unAuthorizedView;
    AWEUILoadingView *_loadingView;
    UIView *_loadingBackGroundView;
    AFDVisitorAuthorizationViewController *_authorizationPopupVC;
    AFDSuspendedShadowButton *_publishCameraBtn;
    UITableView *_tableView;
    NSString *_enterFrom;
    NSString *_pushType;
    NSString *_insertId;
    NSString *_enterMethod;
    NSString *_noticeType;
    NSString *_visitorUserId;
    NSString *_backTarget;
    NSNumber *_visitorCount;
    long long _greetCount;
    NSMutableSet *_trackConsetutiveChatShowSet;
    long long _viewStatus;
    double _startTime;
    AFDVisitorListViewModel *_viewModel;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AFDVisitorListUnAuthorizedView *unAuthorizedView;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) UIView *loadingBackGroundView;
@property (retain, nonatomic) AFDVisitorAuthorizationViewController *authorizationPopupVC;
@property (retain, nonatomic) AFDSuspendedShadowButton *publishCameraBtn;
@property (retain, nonatomic) UITableView *tableView;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *pushType;
@property (copy, nonatomic) NSString *insertId;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *noticeType;
@property (copy, nonatomic) NSString *visitorUserId;
@property (copy, nonatomic) NSString *backTarget;
@property (retain, nonatomic) NSNumber *visitorCount;
@property (nonatomic) long long greetCount;
@property (retain, nonatomic) NSMutableSet *trackConsetutiveChatShowSet;
@property (nonatomic) long long viewStatus;
@property (nonatomic) double startTime;
@property (nonatomic) BOOL isFirstEntry;
@property (nonatomic) BOOL isEnterProfileVisitor;
@property (retain, nonatomic) AFDVisitorListViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAFDGreetCommonAdapterClass;

- (id)aweui_emptyPageConfigForState:(unsigned long long)arg0;
- (void)aweui_emptyPagePrimaryButtonTapped:(id)arg0;
- (void)setEnterFrom:(id)arg0;
- (void)setEnterMethod:(id)arg0;
- (BOOL)configWithRouterParamDict:(id)arg0;
- (id)enterMethod;
- (id)enterFrom;
- (id)aweui_emptyPageBelowView;
- (void)setNoticeType:(id)arg0;
- (void)setViewStatus:(long long)arg0;
- (long long)viewStatus;
- (void)p_fetchData;
- (void)p_showLoadingView;
- (void)p_dismissLoadingView;
- (void)p_setupViews;
- (void)loadMoreData;
- (void)p_endRefreshing;
- (id)visitorCount;
- (void)setVisitorCount:(id)arg0;
- (void)clickBackButton:(id)arg0;
- (void)p_setupFooter;
- (id)trackConsetutiveChatShowSet;
- (void)setTrackConsetutiveChatShowSet:(id)arg0;
- (void)addNavigationHeader;
- (id)textSettingsModel;
- (void)didTapFollowButtonOn:(id)arg0 withListItem:(id)arg1;
- (void)trackShowConsecutiveChat:(id)arg0 trackColor:(id)arg1;
- (id)aAFDGreetCommonAdapter;
- (void)performAuthActionChanged:(long long)arg0 withType:(long long)arg1;
- (void)setInsertId:(id)arg0;
- (void)setVisitorUserId:(id)arg0;
- (void)setGreetCount:(long long)arg0;
- (void)p_trackEventForExit;
- (void)setIsFirstEntry:(BOOL)arg0;
- (void)setIsEnterProfileVisitor:(BOOL)arg0;
- (void)p_appWillEnterBackgroud;
- (void)p_appDidEnterForeground;
- (void)p_startTimingForTrack;
- (void)p_trackEventForStayTime;
- (id)authorizationPopupVC;
- (id)insertId;
- (long long)greetCount;
- (BOOL)isFirstEntryWithNoAuth;
- (void)updateAuthorizationState:(BOOL)arg0;
- (void)tapPublishShoot;
- (void)p_trackPublishShootBtnWithActionType:(id)arg0;
- (BOOL)isFirstEntry;
- (id)publishCameraBtn;
- (void)displayUnAuthorizationView;
- (void)updatePublishBtnIfNeeded;
- (BOOL)isEnterProfileVisitor;
- (id)visitorUserId;
- (id)unAuthorizedView;
- (void)dismissUnAuthorizationView;
- (id)loadingBackGroundView;
- (BOOL)p_shouldShowPublishButton;
- (void)clickSettingButton:(id)arg0;
- (id)noMoreDataAttributedText:(id)arg0;
- (void)setUnAuthorizedView:(id)arg0;
- (void)hiddenTableViewAccessbility:(BOOL)arg0;
- (void)p_trackEnterChatWithUser:(id)arg0 isOnline:(BOOL)arg1;
- (void)p_unfollowUserWithCell:(id)arg0 listItem:(id)arg1;
- (void)p_followUserWithCell:(id)arg0 listItem:(id)arg1;
- (void)setLoadingBackGroundView:(id)arg0;
- (void)setAuthorizationPopupVC:(id)arg0;
- (void)setPublishCameraBtn:(id)arg0;
- (id)backTarget;
- (void)setBackTarget:(id)arg0;
- (id)init;
- (id)tableView:(id)arg0 viewForHeaderInSection:(long long)arg1;
- (void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg0;
- (void)setStartTime:(double)arg0;
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
- (double)tableView:(id)arg0 heightForHeaderInSection:(long long)arg1;
- (void)setTableView:(id)arg0;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)tableView;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (void)viewWillDisappear:(BOOL)arg0;
- (void)setViewModel:(id)arg0;
- (double)startTime;
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
- (id)viewModel;
- (void)viewWillAppear:(BOOL)arg0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)setPushType:(id)arg0;
- (id)pushType;
- (id)noticeType;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;

@end
