//
//     Generated by private class-dump
//

@class NSString, AWEButton, NSSet, AWEIMNotificationListDataController, AWEIMInteractNoticeBubbleView, UITableView, NSMutableSet, NSMutableDictionary, AWENoticeInteractionListControllerViewModel;

@interface AWEIMFlameViewController : UIViewController <AWENoticeCellEditUtilityProtocol, UITableViewDelegate, UITableViewDataSource, AWEIMNoticeUserAction, AWEUserMessage, AWERouterViewControllerProtocol> {
    BOOL _hasDeletedPushNotice;
    BOOL _hasTrackedPushTipsShow;
    AWEButton *_flameButton;
    UITableView *_tableView;
    AWEIMNotificationListDataController *_dataController;
    double _statusBarHeight;
    NSSet *_lastVisibleChatSet;
    NSString *_ruleId;
    NSMutableSet *_relationTrackSet;
    AWEIMInteractNoticeBubbleView *_unreadBubble;
    NSMutableDictionary *_trackFirstShowForFlameButtonInCell;
    AWENoticeInteractionListControllerViewModel *_viewModel;
}

@property (retain, nonatomic) AWEButton *flameButton;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) AWEIMNotificationListDataController *dataController;
@property (nonatomic) double statusBarHeight;
@property (retain, nonatomic) NSSet *lastVisibleChatSet;
@property (copy, nonatomic) NSString *ruleId;
@property (nonatomic) BOOL hasDeletedPushNotice;
@property (nonatomic) BOOL hasTrackedPushTipsShow;
@property (retain, nonatomic) NSMutableSet *relationTrackSet;
@property (retain, nonatomic) AWEIMInteractNoticeBubbleView *unreadBubble;
@property (retain, nonatomic) NSMutableDictionary *trackFirstShowForFlameButtonInCell;
@property (retain, nonatomic) AWENoticeInteractionListControllerViewModel *viewModel;
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
- (BOOL)configWithRouterParamDict:(id)arg0;
- (id)aweui_emptyPageBelowView;
- (void)setDataController:(id)arg0;
- (void)followStatusChanged:(BOOL)arg0 atIndexPath:(id)arg1;
- (void)p_setupUI;
- (void)backBtnClicked:(id)arg0;
- (id)unreadBubble;
- (BOOL)cellShowFullScreen;
- (void)p_endRefreshing;
- (void)refreshDataByPullDown:(BOOL)arg0;
- (BOOL)needLoadMoreAuto;
- (double)navigationHeight;
- (void)setLastVisibleChatSet:(id)arg0;
- (void)configCellLongPressGestureIfNeeded:(id)arg0;
- (id)lastVisibleChatSet;
- (id)relationTrackSet;
- (id)swipeActionsWithClassType:(Class)arg0 indexPath:(id)arg1 tableView:(id)arg2;
- (void)afterDeleteNoticeAutoLoadMoreIfNeeded;
- (void)innerTrackEvent:(id)arg0 params:(id)arg1;
- (BOOL)hasDeletedPushNotice;
- (void)setHasDeletedPushNotice:(BOOL)arg0;
- (BOOL)hasTrackedPushTipsShow;
- (void)setHasTrackedPushTipsShow:(BOOL)arg0;
- (void)setRelationTrackSet:(id)arg0;
- (void)setUnreadBubble:(id)arg0;
- (void)p_loadMoreDataForFirstLoad:(BOOL)arg0;
- (void)p_updateLastVisibleSet;
- (void)__trackerInnerMessageWithAction:(id)arg0 indexPath:(id)arg1;
- (id)trackFirstShowForFlameButtonInCell;
- (id)flameButton;
- (void)updateUserStatus:(id)arg0 status:(long long)arg1 isBlock:(BOOL)arg2;
- (void)handleClickFlameButton;
- (void)setFlameButton:(id)arg0;
- (void)setTrackFirstShowForFlameButtonInCell:(id)arg0;
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
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
- (id)viewModel;
- (void)viewWillAppear:(BOOL)arg0;
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
- (id)dataController;
- (void)setupNavigationBar;
- (double)footerInset;
- (void)setRuleId:(id)arg0;
- (id)ruleId;

@end
