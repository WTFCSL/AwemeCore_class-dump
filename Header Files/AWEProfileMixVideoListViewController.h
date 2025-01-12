//
//     Generated by private class-dump
//

@class NSString, AWEButton, AWELoadMoreFooter, UILabel, AWEProfileMixDataManager, UITableView;

@interface AWEProfileMixVideoListViewController : UIViewController <AWERouterViewControllerProtocol, UITableViewDelegate, UITableViewDataSource> {
    BOOL _isAppear;
    NSString *_referString;
    NSString *_enterMethod;
    AWEButton *_shareBtn;
    UITableView *_tableView;
    UILabel *_emptyLabel;
    AWEProfileMixDataManager *_manager;
    AWELoadMoreFooter *_footer;
}

@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *enterMethod;
@property (retain, nonatomic) AWEButton *shareBtn;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UILabel *emptyLabel;
@property (nonatomic) BOOL isAppear;
@property (retain, nonatomic) AWEProfileMixDataManager *manager;
@property (retain, nonatomic) AWELoadMoreFooter *footer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)referString;
- (id)aweui_emptyPageConfigForState:(unsigned long long)arg0;
- (void)aweui_emptyPagePrimaryButtonTapped:(id)arg0;
- (void)setEnterMethod:(id)arg0;
- (BOOL)configWithRouterParamDict:(id)arg0;
- (id)enterMethod;
- (void)setReferString:(id)arg0;
- (BOOL)isAppear;
- (void)setIsAppear:(BOOL)arg0;
- (void)hideNavigationBar;
- (id)shareBtn;
- (void)setShareBtn:(id)arg0;
- (void)backBtnClicked:(id)arg0;
- (void)loadMore;
- (void)onShareBtnClicked:(id)arg0;
- (void)p_mixLiveCellTrackerWithUser:(id)arg0 isClick:(BOOL)arg1;
- (void)removePlayletDataSourceIfNeeded:(id)arg0;
- (id)init;
- (void)setFooter:(id)arg0;
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
- (void)setTableView:(id)arg0;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)tableView;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (id)footer;
- (void)setManager:(id)arg0;
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
- (id)initWithDataManager:(id)arg0;
- (BOOL)prefersStatusBarHidden;
- (void)viewWillAppear:(BOOL)arg0;
- (void)dealloc;
- (void)viewDidLoad;
- (id)manager;
- (void)refreshData;
- (id)emptyLabel;
- (void)setEmptyLabel:(id)arg0;

@end
