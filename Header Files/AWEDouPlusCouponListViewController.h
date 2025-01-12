//
//     Generated by private class-dump
//

@class AWEDouPlusCouponListEmptyView, NSString, AWEDouPlusCouponListViewModel, UILabel, UITableView;

@interface AWEDouPlusCouponListViewController : AWEDouPlusContainerViewController <UITableViewDelegate, UITableViewDataSource> {
    BOOL _isConfirm;
    UILabel *_headerLabel;
    UITableView *_tableView;
    AWEDouPlusCouponListEmptyView *_emptyView;
    AWEDouPlusCouponListViewModel *_viewModel;
    long long _originSeletedIndex;
}

@property (retain, nonatomic) UILabel *headerLabel;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) AWEDouPlusCouponListEmptyView *emptyView;
@property (retain, nonatomic) AWEDouPlusCouponListViewModel *viewModel;
@property (nonatomic) long long originSeletedIndex;
@property (nonatomic) BOOL isConfirm;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dismissFromParentViewController;
- (void)setOriginSeletedIndex:(long long)arg0;
- (void)setIsConfirm:(BOOL)arg0;
- (void)setupNavigationBarActionHandler;
- (BOOL)isConfirm;
- (long long)originSeletedIndex;
- (void)updateHeaderLabel;
- (void)handleSelectedCouponModel:(id)arg0;
- (void)setTableView:(id)arg0;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)tableView;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (id)initWithViewModel:(id)arg0;
- (void)reloadData;
- (void)setViewModel:(id)arg0;
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
- (id)viewModel;
- (void)viewDidLoad;
- (void)setupUI;
- (id)headerLabel;
- (void)setHeaderLabel:(id)arg0;
- (id)emptyView;
- (void)setEmptyView:(id)arg0;

@end
