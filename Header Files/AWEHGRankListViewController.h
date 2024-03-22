//
//     Generated by private class-dump
//

@class NSString, AWEHGRankListView, UIView, AWEHGRankListViewModel, HGUniqueID;
@protocol HGOpenCardProfileDelegate;

@interface AWEHGRankListViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, AWEHGRankListViewDelegate, AWEHGRankListCellDelegate> {
    HGUniqueID *_uniqueID;
    id /* block */ _dismissAction;
    UIView *_dimmingView;
    UIView *_placeholderView;
    AWEHGRankListView *_rankListView;
    AWEHGRankListViewModel *_viewModel;
    id<HGOpenCardProfileDelegate> _openCardProfilePlugin;
}

@property (weak, nonatomic) HGUniqueID *uniqueID;
@property (copy, nonatomic) id /* block */ dismissAction;
@property (retain, nonatomic) UIView *dimmingView;
@property (retain, nonatomic) UIView *placeholderView;
@property (retain, nonatomic) AWEHGRankListView *rankListView;
@property (retain, nonatomic) AWEHGRankListViewModel *viewModel;
@property (retain, nonatomic) id<HGOpenCardProfileDelegate> openCardProfilePlugin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setOpenCardProfilePlugin:(id)arg0;
- (id)initWithUniqueID:(id)arg0 model:(id)arg1 dismissAction:(id /* block */)arg2;
- (void)showFromParentViewController:(id)arg0;
- (void)openProfile:(id)arg0 secUid:(id)arg1;
- (void)retryNetConnect;
- (void)onTapCloseButton;
- (void)onShowOffButtonTap;
- (void)onInviteButton;
- (void)setupRankListView;
- (void)setupRankView;
- (id)rankListView;
- (id)openCardProfilePlugin;
- (void)showRemindViewIfNeed;
- (void)inviteFriendWithParam:(id)arg0;
- (id)reqModelWithRelationType:(id)arg0 pageNum:(id)arg1;
- (void)inithRankListView;
- (void)setRankListView:(id)arg0;
- (void)setupRetryView;
- (id /* block */)dismissAction;
- (id)placeholderView;
- (long long)numberOfSectionsInTableView:(id)arg0;
- (void)setDimmingView:(id)arg0;
- (void)viewDidAppear:(BOOL)arg0;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)uniqueID;
- (id)dimmingView;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (void)setUniqueID:(id)arg0;
- (void)viewDidDisappear:(BOOL)arg0;
- (void)setViewModel:(id)arg0;
- (void)setDismissAction:(id /* block */)arg0;
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
- (id)viewModel;
- (void)setPlaceholderView:(id)arg0;
- (void)viewDidLoad;
- (void)dismissView;

@end
