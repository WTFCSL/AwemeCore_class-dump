//
//     Generated by private class-dump
//

@class NSString, AWEIMDanmakuFilterController, NSSet, AWEIMNotificationListDataController, AWEUITextLoadingView, AWENoticeInteractionListControllerViewModel, UITableView, AWEIMInteractNoticeBubbleView, NSMutableSet;
@protocol AWEIMNoticeSlidingChildControllerDelegate;

@interface AWEIMDanmakuViewController : UIViewController <AWENoticeCellEditUtilityProtocol, UITableViewDelegate, UITableViewDataSource, AWEIMNoticeUserAction, AWEUserMessage, AWEIMDanmakuSlidingChildControllerProtocol> {
    NSString *_enterFrom;
    id<AWEIMNoticeSlidingChildControllerDelegate> _delegate;
    AWEIMDanmakuFilterController *_dataFilterManager;
    AWEUITextLoadingView *_loadingView;
    UITableView *_tableView;
    AWEIMNotificationListDataController *_dataController;
    AWENoticeInteractionListControllerViewModel *_viewModel;
    NSSet *_lastVisibleChatSet;
    NSString *_ruleId;
    AWEIMInteractNoticeBubbleView *_unreadBubble;
    NSMutableSet *_shouldShowLightInteractionButtonNoticeModelIDSet;
}

@property (retain, nonatomic) AWEIMDanmakuFilterController *dataFilterManager;
@property (retain, nonatomic) AWEUITextLoadingView *loadingView;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) AWEIMNotificationListDataController *dataController;
@property (retain, nonatomic) AWENoticeInteractionListControllerViewModel *viewModel;
@property (retain, nonatomic) NSSet *lastVisibleChatSet;
@property (copy, nonatomic) NSString *ruleId;
@property (retain, nonatomic) AWEIMInteractNoticeBubbleView *unreadBubble;
@property (retain, nonatomic) NSMutableSet *shouldShowLightInteractionButtonNoticeModelIDSet;
@property (copy, nonatomic) NSString *enterFrom;
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
- (id)enterFrom;
- (id)aweui_emptyPageBelowView;
- (void)setDataController:(id)arg0;
- (void)coverTappedWithUrl:(id)arg0 atIndexPath:(id)arg1;
- (BOOL)shouldShowLightInteractionButtonWithOptions:(id)arg0;
- (BOOL)shouldShowQuickReplyButtonWithOptions:(id)arg0;
- (void)showQuickReplyViewWithOptions:(id)arg0;
- (void)sendLightInteractionWithOptions:(id)arg0;
- (void)avatarTappedWithOptions:(id)arg0;
- (id)lightInteractionButtonIconUrl;
- (void)followStatusChanged:(BOOL)arg0 atIndexPath:(id)arg1;
- (void)nicknameTappedWithOptions:(id)arg0;
- (void)p_setupUI;
- (void)_endRefreshing;
- (id)unreadBubble;
- (BOOL)cellShowFullScreen;
- (void)p_refreshData;
- (void)p_showSendMessageSuccessToastForUser:(id)arg0;
- (id)shouldShowLightInteractionButtonNoticeModelIDSet;
- (BOOL)needLoadMoreAuto;
- (void)_loadMoreDataForFirstLoad:(BOOL)arg0;
- (void)_updateLastVisibleSet;
- (void)setLastVisibleChatSet:(id)arg0;
- (void)configCellLongPressGestureIfNeeded:(id)arg0;
- (void)p_trackInteractionNotificationClickedWithIndexPath:(id)arg0;
- (void)p_trackerInnerMessageWithAction:(id)arg0 indexPath:(id)arg1;
- (id)lastVisibleChatSet;
- (id)swipeActionsWithClassType:(Class)arg0 indexPath:(id)arg1 tableView:(id)arg2;
- (void)p_trackSlideCellAtIndexPath:(id)arg0;
- (void)trackAndTransToProfileWithOptions:(id)arg0 enterMethod:(id)arg1 enterPosition:(id)arg2;
- (BOOL)p_shouldShowInteractionButtonWithOptions:(id)arg0;
- (void)p_updateUserStatus:(id)arg0 status:(long long)arg1 isBlock:(BOOL)arg2;
- (void)afterDeleteNoticeAutoLoadMoreIfNeeded;
- (void)setShouldShowLightInteractionButtonNoticeModelIDSet:(id)arg0;
- (void)setUnreadBubble:(id)arg0;
- (unsigned long long)currentGroupFilterModelType;
- (void)slideVCRefreshListData;
- (void)p_setupGroups;
- (void)showOwnPostedDanmakuRedDotGuideIfNeeded;
- (id)dataFilterManager;
- (void)setDataFilterManager:(id)arg0;
- (void)p_dataFilterDidSelectedIndex:(long long)arg0;
- (void)filterDataSource;
- (void)p_sendLightInteractionMessageWithOptions:(id)arg0 avatarView:(id)arg1 containerView:(id)arg2 enterMethod:(id)arg3 panelLevel:(long long)arg4;
- (void)p_showQuickReplyViewWithOptions:(id)arg0 replyModel:(id)arg1 panelLevel:(long long)arg2;
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
- (id)filterView;
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
- (BOOL)tableView:(id)arg0 canEditRowAtIndexPath:(id)arg1;
- (long long)tableView:(id)arg0 editingStyleForRowAtIndexPath:(id)arg1;
- (id)tableView:(id)arg0 editActionsForRowAtIndexPath:(id)arg1;
- (id)tableView:(id)arg0 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg1;
- (void)tableView:(id)arg0 willBeginEditingRowAtIndexPath:(id)arg1;
- (void)tableView:(id)arg0 didEndEditingRowAtIndexPath:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (id)dataController;
- (void)refreshData;
- (double)footerInset;
- (void)setRuleId:(id)arg0;
- (id)ruleId;

@end
