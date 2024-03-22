//
//     Generated by private class-dump
//

@class NSString, AWEUILoadingView, UICollectionView;

@interface AWECommonUserListViewController : AWEBaseListViewController {
    BOOL _refreshing;
    NSString *_navTitle;
    AWEUILoadingView *_loadingView;
    UICollectionView *_collectionView;
}

@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (weak, nonatomic) UICollectionView *collectionView;
@property (nonatomic) BOOL refreshing;
@property (copy, nonatomic) NSString *navTitle;

- (void)customLayoutCollectionView:(id)arg0;
- (id)sectionControllerClassArray;
- (void)backBtnClicked;
- (void)addBinding;
- (void)configNavigationBar;
- (id)init;
- (void).cxx_destruct;
- (id)collectionView;
- (void)setCollectionView:(id)arg0;
- (void)viewDidLoad;
- (void)endRefreshing;
- (BOOL)refreshing;
- (void)setupUI;
- (void)setRefreshing:(BOOL)arg0;
- (id)navTitle;
- (void)showLoadingView;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (void)setupCollectionView:(id)arg0;
- (void)setNavTitle:(id)arg0;
- (void)hideLoadingView;

@end