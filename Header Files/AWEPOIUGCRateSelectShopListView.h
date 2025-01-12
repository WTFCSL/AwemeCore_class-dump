//
//     Generated by private class-dump
//

@class UIView, NSString, DUXNavigationBar, AWEUILoadingView, UITableView, AWEPOIUGCRateShopListDataController, AWELoadMoreFooter, AWEPOIUGCRateSelectShopBar;

@interface AWEPOIUGCRateSelectShopListView : UIView <UITableViewDataSource, UITableViewDelegate> {
    AWEPOIUGCRateSelectShopBar *_shopBar;
    DUXNavigationBar *_navigationBar;
    UIView *_backgroundView;
    UITableView *_tableView;
    AWELoadMoreFooter *_loadMoreFooter;
    AWEPOIUGCRateShopListDataController *_listDataController;
    AWEUILoadingView *_loadingView;
}

@property (retain, nonatomic) DUXNavigationBar *navigationBar;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) AWELoadMoreFooter *loadMoreFooter;
@property (retain, nonatomic) AWEPOIUGCRateShopListDataController *listDataController;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (weak, nonatomic) AWEPOIUGCRateSelectShopBar *shopBar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showWithAnimation;
- (void)hideWithAnimation;
- (void)buildLoadingView;
- (void)initFetch;
- (id)loadMoreFooter;
- (void)setLoadMoreFooter:(id)arg0;
- (void)resetLoadingView;
- (id)listDataController;
- (void)setShopBar:(id)arg0;
- (id)shopBar;
- (void)didClickBackground:(id)arg0;
- (void)loadMoreFetch;
- (void)setListDataController:(id)arg0;
- (id)tableView:(id)arg0 viewForHeaderInSection:(long long)arg1;
- (void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (id)backgroundView;
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
- (double)tableView:(id)arg0 heightForHeaderInSection:(long long)arg1;
- (void)setTableView:(id)arg0;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)tableView;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)reloadData;
- (BOOL)gestureRecognizerShouldBegin:(id)arg0;
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
- (double)headerHeight;
- (id)navigationBar;
- (void)setNavigationBar:(id)arg0;
- (void)setBackgroundView:(id)arg0;
- (double)tableView:(id)arg0 heightForFooterInSection:(long long)arg1;
- (id)tableView:(id)arg0 viewForFooterInSection:(long long)arg1;
- (void)setupUI;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (double)footerHeight;
- (void)updateTableViewHeight;

@end
