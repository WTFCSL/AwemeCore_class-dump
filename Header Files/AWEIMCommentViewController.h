//
//     Generated by private class-dump
//

@class AWEIMNotificationListDataController, AWEIMInteractNoticeBubbleView, AWEInteractNoticeConfigManager, UITableView, AWEUITextLoadingView, MASConstraint, NSMutableArray, UIView, AWECommentModel, NSString, NSSet, NSMutableSet, AWEAwemeModel, AWENoticeInteractionListControllerViewModel, AWEIMCommentFilterController;
@protocol AWECommentInputViewContextProtocol, AWEIMNoticeSlidingChildControllerDelegate, AWECommentInputViewManagerProtocol;

@interface AWEIMCommentViewController : UIViewController <AWEInteractionNoticePageProtocol, AWENoticeCellEditUtilityProtocol, UITableViewDelegate, UITableViewDataSource, AWEIMNoticeUserAction, AWEUserMessage, AWERouterViewControllerProtocol, AWEIMDanmakuSlidingChildControllerProtocol> {
    BOOL _hasDeletedPushNotice;
    BOOL _hasTrackedPushTipsShow;
    BOOL _dataSourceChanging;
    BOOL _hasChangedSelector;
    BOOL _isWillDisappearing;
    BOOL _isDidDisappearing;
    BOOL _initRefreshHasFinished;
    BOOL _needClearLocalReadedNoticeIDsSetAfterRefreshFetch;
    BOOL _isReplyToComment;
    BOOL _needShowNavigationBar;
    BOOL _isLoadCache;
    BOOL _isSwitchTab;
    NSString *_enterFrom;
    id<AWEIMNoticeSlidingChildControllerDelegate> _delegate;
    UIView *_topSafeTipView;
    UITableView *_tableView;
    AWEIMNotificationListDataController *_dataController;
    AWENoticeInteractionListControllerViewModel *_viewModel;
    AWEIMCommentFilterController *_dataFilterManager;
    double _statusBarHeight;
    NSSet *_lastVisibleChatSet;
    NSString *_ruleId;
    AWEUITextLoadingView *_loadingView;
    UIView *_searchContainerView;
    UIView *_searchMusicContainerView;
    MASConstraint *_commentSearchShow;
    MASConstraint *_commentSearchHide;
    MASConstraint *_commentMusicSearchShow;
    MASConstraint *_commentMusicSearchHide;
    id<AWECommentInputViewManagerProtocol> _commentInputViewManager;
    id<AWECommentInputViewManagerProtocol> _productCommentInputViewManager;
    id<AWECommentInputViewContextProtocol> _commentContext;
    double _enterTextStartTimestamp;
    AWEAwemeModel *_model;
    AWECommentModel *_commentModel;
    long long _commentCount;
    NSMutableSet *_shouldShowLightInteractionButtonNoticeModelIDSet;
    NSMutableSet *_relationTrackSet;
    NSMutableSet *_localReadedNoticeIDsSet;
    AWEInteractNoticeConfigManager *_noticeConfigManager;
    NSMutableArray *_candidateDataSource;
    AWEIMInteractNoticeBubbleView *_unreadBubble;
}

@property (retain, nonatomic) UIView *topSafeTipView;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) AWEIMNotificationListDataController *dataController;
@property (retain, nonatomic) AWENoticeInteractionListControllerViewModel *viewModel;
@property (retain, nonatomic) AWEIMCommentFilterController *dataFilterManager;
@property (nonatomic) double statusBarHeight;
@property (retain, nonatomic) NSSet *lastVisibleChatSet;
@property (copy, nonatomic) NSString *ruleId;
@property (retain, nonatomic) AWEUITextLoadingView *loadingView;
@property (nonatomic) BOOL hasDeletedPushNotice;
@property (nonatomic) BOOL hasTrackedPushTipsShow;
@property (retain, nonatomic) UIView *searchContainerView;
@property (retain, nonatomic) UIView *searchMusicContainerView;
@property (retain, nonatomic) MASConstraint *commentSearchShow;
@property (retain, nonatomic) MASConstraint *commentSearchHide;
@property (retain, nonatomic) MASConstraint *commentMusicSearchShow;
@property (retain, nonatomic) MASConstraint *commentMusicSearchHide;
@property (nonatomic) BOOL dataSourceChanging;
@property (nonatomic) BOOL hasChangedSelector;
@property (retain, nonatomic) id<AWECommentInputViewManagerProtocol> commentInputViewManager;
@property (retain, nonatomic) id<AWECommentInputViewManagerProtocol> productCommentInputViewManager;
@property (retain, nonatomic) id<AWECommentInputViewContextProtocol> commentContext;
@property (nonatomic) double enterTextStartTimestamp;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) AWECommentModel *commentModel;
@property (nonatomic) long long commentCount;
@property (retain, nonatomic) NSMutableSet *shouldShowLightInteractionButtonNoticeModelIDSet;
@property (nonatomic) BOOL isWillDisappearing;
@property (nonatomic) BOOL isDidDisappearing;
@property (nonatomic) BOOL initRefreshHasFinished;
@property (retain, nonatomic) NSMutableSet *relationTrackSet;
@property (retain, nonatomic) NSMutableSet *localReadedNoticeIDsSet;
@property (nonatomic) BOOL needClearLocalReadedNoticeIDsSetAfterRefreshFetch;
@property (nonatomic) BOOL isReplyToComment;
@property (nonatomic) BOOL needShowNavigationBar;
@property (nonatomic) BOOL isLoadCache;
@property (retain, nonatomic) AWEInteractNoticeConfigManager *noticeConfigManager;
@property (retain, nonatomic) NSMutableArray *candidateDataSource;
@property (nonatomic) BOOL isSwitchTab;
@property (retain, nonatomic) AWEIMInteractNoticeBubbleView *unreadBubble;
@property (copy, nonatomic) NSString *enterFrom;
@property (weak, nonatomic) id<AWEIMNoticeSlidingChildControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)awemeModel;
- (id)referString;
- (id)aweui_emptyPageConfigForState:(unsigned long long)arg0;
- (void)aweui_emptyPagePrimaryButtonTapped:(id)arg0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })aweui_emptyPageEdgeInsets;
- (void)didFinishFollowUser:(id)arg0 status:(long long)arg1 error:(id)arg2;
- (void)didFinishUnFollowUser:(id)arg0 status:(long long)arg1 error:(id)arg2;
- (void)didFinishBlockUser:(id)arg0 status:(long long)arg1;
- (void)didFinishSetRemarkWithUser:(id)arg0;
- (void)setEnterFrom:(id)arg0;
- (BOOL)configWithRouterParamDict:(id)arg0;
- (id)commentModel;
- (void)setCommentModel:(id)arg0;
- (id)enterFrom;
- (id)aweui_emptyPageBelowView;
- (void)setDataController:(id)arg0;
- (id)commentInputViewManager;
- (void)coverTappedWithOptions:(id)arg0;
- (void)presentEmoticonBoardAndScrollToVmoticonTab;
- (void)showInputViewWithOptions:(id)arg0 enterMethod:(id)arg1;
- (BOOL)shouldShowLightInteractionButtonWithOptions:(id)arg0;
- (BOOL)shouldShowQuickReplyButtonWithOptions:(id)arg0;
- (void)showQuickReplyViewWithOptions:(id)arg0;
- (void)sendLightInteractionWithOptions:(id)arg0;
- (void)avatarTappedWithOptions:(id)arg0;
- (id)lightInteractionButtonIconUrl;
- (void)followStatusChanged:(BOOL)arg0 atIndexPath:(id)arg1;
- (void)nicknameTappedWithOptions:(id)arg0;
- (id)searchContainerView;
- (id)searchMusicContainerView;
- (void)setSearchMusicContainerView:(id)arg0;
- (void)setCommentMusicSearchHide:(id)arg0;
- (void)setCommentMusicSearchShow:(id)arg0;
- (id)commentMusicSearchShow;
- (id)commentMusicSearchHide;
- (void)setSearchContainerView:(id)arg0;
- (void)setCommentSearchHide:(id)arg0;
- (void)setCommentSearchShow:(id)arg0;
- (id)commentSearchShow;
- (id)commentSearchHide;
- (void)trackFirstCommentGuideShow;
- (void)trackFirstCommentGuideClick:(id)arg0;
- (void)_endRefreshing;
- (void)backBtnClicked:(id)arg0;
- (id)unreadBubble;
- (BOOL)cellShowFullScreen;
- (void)setCommentInputViewManager:(id)arg0;
- (void)addLocalReadedNoticeID:(id)arg0;
- (void)interactionNoticePageBeginRefreshData;
- (id)commentContext;
- (void)setCommentContext:(id)arg0;
- (double)enterTextStartTimestamp;
- (void)setEnterTextStartTimestamp:(double)arg0;
- (void)p_showSendMessageSuccessToastForUser:(id)arg0;
- (void)_showEmptyView;
- (void)_dismissEmptyView;
- (void)p_trackInnerMessageNotification;
- (void)setNoticeConfigManager:(id)arg0;
- (id)noticeConfigManager;
- (void)handleDataSourceIfNeed;
- (void)setCandidateDataSource:(id)arg0;
- (void)setIsWillDisappearing:(BOOL)arg0;
- (void)setIsDidDisappearing:(BOOL)arg0;
- (id)shouldShowLightInteractionButtonNoticeModelIDSet;
- (BOOL)needClearLocalReadedNoticeIDsSetAfterRefreshFetch;
- (id)localReadedNoticeIDsSet;
- (BOOL)initRefreshHasFinished;
- (void)setInitRefreshHasFinished:(BOOL)arg0;
- (void)setNeedClearLocalReadedNoticeIDsSetAfterRefreshFetch:(BOOL)arg0;
- (id)candidateDataSource;
- (void)_loadMoreDataForFirstLoad:(BOOL)arg0;
- (void)_updateLastVisibleSet;
- (double)navigationHeight;
- (void)setLastVisibleChatSet:(id)arg0;
- (void)configCellLongPressGestureIfNeeded:(id)arg0;
- (void)p_trackInteractionNotificationClickedWithIndexPath:(id)arg0;
- (id)lastVisibleChatSet;
- (BOOL)isWillDisappearing;
- (BOOL)isDidDisappearing;
- (id)relationTrackSet;
- (id)swipeActionsWithClassType:(Class)arg0 indexPath:(id)arg1 tableView:(id)arg2;
- (void)p_trackSlideCellAtIndexPath:(id)arg0;
- (void)trackAndTransToProfileWithOptions:(id)arg0 enterMethod:(id)arg1 enterPosition:(id)arg2;
- (void)p_showQuickReplyViewWithOptions:(id)arg0 replyModel:(id)arg1 panelLevel:(long long)arg2 needReplyModel:(BOOL)arg3;
- (void)p_sendLightInteractionMessageWithOptions:(id)arg0 avatarView:(id)arg1 containerView:(id)arg2 enterMethod:(id)arg3 noticeDefault:(BOOL)arg4 panelLevel:(long long)arg5;
- (BOOL)p_shouldShowInteractionButtonWithOptions:(id)arg0;
- (void)p_updateUserStatus:(id)arg0 status:(long long)arg1 isBlock:(BOOL)arg2;
- (void)p_updateCellNameLabel:(id)arg0 user:(id)arg1;
- (void)onClickFansFeedback;
- (void)afterDeleteNoticeAutoLoadMoreIfNeeded;
- (void)innerTrackEvent:(id)arg0 params:(id)arg1;
- (BOOL)hasDeletedPushNotice;
- (void)setHasDeletedPushNotice:(BOOL)arg0;
- (BOOL)hasTrackedPushTipsShow;
- (void)setHasTrackedPushTipsShow:(BOOL)arg0;
- (void)setShouldShowLightInteractionButtonNoticeModelIDSet:(id)arg0;
- (void)setRelationTrackSet:(id)arg0;
- (void)setLocalReadedNoticeIDsSet:(id)arg0;
- (void)setUnreadBubble:(id)arg0;
- (void)slideVCRefreshListData;
- (id)topSafeTipView;
- (void)setTopSafeTipView:(id)arg0;
- (void)commentNoMoreNoticeNotification:(id)arg0;
- (void)p_setupGroups;
- (void)refreshDataWithLoadingView:(BOOL)arg0;
- (BOOL)isLoadCache;
- (void)setIsLoadCache:(BOOL)arg0;
- (void)setHasChangedSelector:(BOOL)arg0;
- (void)setIsSwitchTab:(BOOL)arg0;
- (void)refreshDataWithLoadingView:(BOOL)arg0 byPullDown:(BOOL)arg1;
- (BOOL)dataSourceChanging;
- (void)setDataSourceChanging:(BOOL)arg0;
- (BOOL)hasChangedSelector;
- (BOOL)isSwitchTab;
- (id)p_titleText;
- (id)p_informativeText;
- (void)p_trackerInnerMessageWithAction:(id)arg0 indexPath:(id)arg1 noticeType:(id)arg2;
- (void)onVisitComment:(id)arg0;
- (void)onVisitForward:(id)arg0;
- (void)setIsReplyToComment:(BOOL)arg0;
- (id)productCommentInputViewManager;
- (void)onVisitPolymericCommentList:(id)arg0;
- (void)handleLongVideoClick:(id)arg0;
- (void)resetUnreadCount;
- (void)trackPostReplyComment;
- (void)setProductCommentInputViewManager:(id)arg0;
- (BOOL)isReplyToComment;
- (void)setNeedShowNavigationBar:(BOOL)arg0;
- (void)_checkShowOwnPostedCommentRedDotGuide;
- (void)__showTopSafeTipViewIfNeeded;
- (id)dataFilterManager;
- (void)setDataFilterManager:(id)arg0;
- (void)p_dataFilterManagerSelectHandler;
- (void)updateDataControllerUnreadCount;
- (id)noticeTypeForModel:(id)arg0;
- (id)noticeTypeForCell:(id)arg0;
- (id)p_accountTypeForTrackerWithModel:(id)arg0;
- (void)videoCoverCilcked:(id)arg0;
- (void)setupNavigationBarAndDataController;
- (BOOL)needShowNavigationBar;
- (void)p_showPopoverWithOptions:(id)arg0 targetView:(id)arg1 avatarView:(id)arg2 containerView:(id)arg3 replyMode:(id)arg4 enterMethod:(id)arg5;
- (BOOL)isCommentPolymericGroup:(id)arg0;
- (void)setModel:(id)arg0;
- (double)statusBarHeight;
- (void)setStatusBarHeight:(double)arg0;
- (id)init;
- (void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg0;
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
- (void)setTableView:(id)arg0;
- (void)viewDidAppear:(BOOL)arg0;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)tableView;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (id)model;
- (id)filterView;
- (void)viewWillDisappear:(BOOL)arg0;
- (void)viewDidDisappear:(BOOL)arg0;
- (void)setViewModel:(id)arg0;
- (id)delegate;
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
- (id)viewModel;
- (BOOL)prefersStatusBarHidden;
- (void)viewWillAppear:(BOOL)arg0;
- (void)setDelegate:(id)arg0;
- (void)scrollViewWillBeginDragging:(id)arg0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (BOOL)tableView:(id)arg0 canEditRowAtIndexPath:(id)arg1;
- (long long)tableView:(id)arg0 editingStyleForRowAtIndexPath:(id)arg1;
- (id)tableView:(id)arg0 editActionsForRowAtIndexPath:(id)arg1;
- (id)tableView:(id)arg0 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg1;
- (void)tableView:(id)arg0 willBeginEditingRowAtIndexPath:(id)arg1;
- (void)tableView:(id)arg0 didEndEditingRowAtIndexPath:(id)arg1;
- (long long)commentCount;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (id)dataController;
- (void)setCommentCount:(long long)arg0;
- (double)footerInset;
- (void)_setupUI;
- (void)setRuleId:(id)arg0;
- (id)ruleId;

@end