//
//     Generated by private class-dump
//

@class AFDSimilarChallengeListViewModel, UITableView, NSString, UILabel, UIButton;

@interface AFDSimilarChallengeListViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, AWETabListItemViewControllerProtocol> {
    AFDSimilarChallengeListViewModel *_viewModel;
    UITableView *_tableView;
    UIButton *_retryButton;
    UILabel *_emptyLabel;
}

@property (retain, nonatomic) AFDSimilarChallengeListViewModel *viewModel;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UIButton *retryButton;
@property (retain, nonatomic) UILabel *emptyLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)tabContentScrollView;
- (void)setupBinding;
- (id)titleForSegmentedControl;
- (long long)numberOfSectionsInTableView:(id)arg0;
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
- (void)setTableView:(id)arg0;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)tableView;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (id)initWithViewModel:(id)arg0;
- (void)setViewModel:(id)arg0;
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
- (id)viewModel;
- (void)viewDidLoad;
- (void)setupUI;
- (id)retryButton;
- (void)setRetryButton:(id)arg0;
- (id)emptyLabel;
- (void)setEmptyLabel:(id)arg0;

@end