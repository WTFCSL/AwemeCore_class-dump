//
//     Generated by private class-dump
//

@class NSString, NSSet, AWEIMNotificationListDataController, AWENoticeInteractionListControllerViewModel, AWEInteractNoticeConfigManager, NSMutableSet, UITableView, AWEUITextLoadingView, NSMutableArray, AWEIMInteractNoticeBubbleView;
@protocol AWEIMNoticeSlidingChildControllerDelegate;

@interface AWENoticeRecommendViewController : UIViewController <AWENoticeCellEditUtilityProtocol, AWEIMDanmakuSlidingChildControllerProtocol, UITableViewDelegate, UITableViewDataSource, AWEIMNoticeUserAction, AWEUserMessage, AWERouterViewControllerProtocol> {
    BOOL _isWillDisappearing;
    BOOL _isDidDisappearing;
    BOOL _initRefreshHasFinished;
    BOOL _hasDeletedPushNotice;
    BOOL _hasTrackedPushTipsShow;
    BOOL _needShowNavigationBar;
    UITableView *_tableView;
    AWEIMNotificationListDataController *_dataController;
    AWENoticeInteractionListControllerViewModel *_viewModel;
    double _statusBarHeight;
    NSMutableSet *_shouldShowLightInteractionButtonNoticeModelIDSet;
    NSSet *_lastVisibleChatSet;
    NSString *_ruleId;
    NSMutableSet *_relationTrackSet;
    AWEInteractNoticeConfigManager *_noticeConfigManager;
    AWEUITextLoadingView *_loadingView;
    NSMutableArray *_candidateDataSource;
    AWEIMInteractNoticeBubbleView *_unreadBubble;
    NSString *_enterFrom;
    id<AWEIMNoticeSlidingChildControllerDelegate> _delegate;
}

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) AWEIMNotificationListDataController *dataController;
@property (retain, nonatomic) AWENoticeInteractionListControllerViewModel *viewModel;
@property (nonatomic) double statusBarHeight;
@property (retain, nonatomic) NSMutableSet *shouldShowLightInteractionButtonNoticeModelIDSet;
@property (nonatomic) BOOL isWillDisappearing;
@property (nonatomic) BOOL isDidDisappearing;
@property (nonatomic) BOOL initRefreshHasFinished;
@property (retain, nonatomic) NSSet *lastVisibleChatSet;
@property (copy, nonatomic) NSString *ruleId;
@property (nonatomic) BOOL hasDeletedPushNotice;
@property (nonatomic) BOOL hasTrackedPushTipsShow;
@property (retain, nonatomic) NSMutableSet *relationTrackSet;
@property (retain, nonatomic) AWEInteractNoticeConfigManager *noticeConfigManager;
@property (retain, nonatomic) AWEUITextLoadingView *loadingView;
@property (retain, nonatomic) NSMutableArray *candidateDataSource;
@property (retain, nonatomic) AWEIMInteractNoticeBubbleView *unreadBubble;
@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) BOOL needShowNavigationBar;
@property (weak, nonatomic) id<AWEIMNoticeSlidingChildControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)aweui_emptyPageConfigForState:(unsigned long long)arg0;
- (void)aweui_emptyPagePrimaryButtonTapped:(id)arg0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })aweui_emptyPageEdgeInsets;
- (void)didFinishFollowUser:(id)arg0 status:(long long)arg1 error:(id)arg2;
- (void)didFinishUnFollowUser:(id)arg0 status:(long long)arg1 error:(id)arg2;
- (void)didFinishBlockUser:(id)arg0 status:(long long)arg1;
- (void)didFinishSetRemarkWithUser:(id)arg0;
- (void)setEnterFrom:(id)arg0;
- (BOOL)configWithRouterParamDict:(id)arg0;
- (id)enterFrom;
- (id)aweui_emptyPageBelowView;
- (void)setDataController:(id)arg0;
- (BOOL)shouldShowLightInteractionButtonWithOptions:(id)arg0;
- (BOOL)shouldShowQuickReplyButtonWithOptions:(id)arg0;
- (void)showQuickReplyViewWithOptions:(id)arg0;
- (void)sendLightInteractionWithOptions:(id)arg0;
- (id)lightInteractionButtonIconUrl;
- (void)backBtnClicked:(id)arg0;
- (id)unreadBubble;
- (void)loadMoreDataForFirstLoad:(BOOL)arg0;
- (BOOL)cellShowFullScreen;
- (void)p_showSendMessageSuccessToastForUser:(id)arg0;
- (void)setNoticeConfigManager:(id)arg0;
- (id)noticeConfigManager;
- (void)setCandidateDataSource:(id)arg0;
- (void)setIsWillDisappearing:(BOOL)arg0;
- (void)setIsDidDisappearing:(BOOL)arg0;
- (id)shouldShowLightInteractionButtonNoticeModelIDSet;
- (void)refreshDataByPullDown:(BOOL)arg0;
- (BOOL)initRefreshHasFinished;
- (void)setInitRefreshHasFinished:(BOOL)arg0;
- (id)candidateDataSource;
- (BOOL)needLoadMoreAuto;
- (double)navigationHeight;
- (void)setLastVisibleChatSet:(id)arg0;
- (void)configCellLongPressGestureIfNeeded:(id)arg0;
- (id)lastVisibleChatSet;
- (BOOL)isWillDisappearing;
- (BOOL)isDidDisappearing;
- (id)relationTrackSet;
- (id)swipeActionsWithClassType:(Class)arg0 indexPath:(id)arg1 tableView:(id)arg2;
- (void)p_trackSlideCellAtIndexPath:(id)arg0;
- (BOOL)p_shouldShowInteractionButtonWithOptions:(id)arg0;
- (void)p_updateUserStatus:(id)arg0 status:(long long)arg1 isBlock:(BOOL)arg2;
- (void)afterDeleteNoticeAutoLoadMoreIfNeeded;
- (void)innerTrackEvent:(id)arg0 params:(id)arg1;
- (BOOL)hasDeletedPushNotice;
- (void)setHasDeletedPushNotice:(BOOL)arg0;
- (BOOL)hasTrackedPushTipsShow;
- (void)setHasTrackedPushTipsShow:(BOOL)arg0;
- (void)setShouldShowLightInteractionButtonNoticeModelIDSet:(id)arg0;
- (void)setRelationTrackSet:(id)arg0;
- (void)setUnreadBubble:(id)arg0;
- (void)slideVCRefreshListData;
- (void)setNeedShowNavigationBar:(BOOL)arg0;
- (BOOL)needShowNavigationBar;
- (void)p_sendLightInteractionMessageWithOptions:(id)arg0 avatarView:(id)arg1 containerView:(id)arg2 enterMethod:(id)arg3 panelLevel:(long long)arg4;
- (void)p_showQuickReplyViewWithOptions:(id)arg0 replyModel:(id)arg1 panelLevel:(long long)arg2;
- (void)__trackerInnerMessageWithAction:(id)arg0 indexPath:(id)arg1;
- (void)hideFooterIfNeed;
- (void)updateLastVisibleSet;
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
- (void)viewWillDisappear:(BOOL)arg0;
- (void)viewDidDisappear:(BOOL)arg0;
- (void)setViewModel:(id)arg0;
- (id)delegate;
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
- (id)viewModel;
- (void)viewWillAppear:(BOOL)arg0;
- (void)setDelegate:(id)arg0;
- (void)scrollViewWillBeginDragging:(id)arg0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)endRefreshing;
- (BOOL)tableView:(id)arg0 canEditRowAtIndexPath:(id)arg1;
- (long long)tableView:(id)arg0 editingStyleForRowAtIndexPath:(id)arg1;
- (id)tableView:(id)arg0 editActionsForRowAtIndexPath:(id)arg1;
- (id)tableView:(id)arg0 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg1;
- (void)tableView:(id)arg0 willBeginEditingRowAtIndexPath:(id)arg1;
- (void)tableView:(id)arg0 didEndEditingRowAtIndexPath:(id)arg1;
- (void)setupUI;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (id)dataController;
- (void)refreshData;
- (void)setupNavigationBar;
- (double)footerInset;
- (void)setRuleId:(id)arg0;
- (id)ruleId;

@end
