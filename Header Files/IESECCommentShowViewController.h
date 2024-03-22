//
//     Generated by private class-dump
//

@class IESECTracker, IESECFullLoadingView, NSString, IESECCommentShowConfig, IESECGoodsCommentHeader, IESECCommentShowDatasource, UICollectionView, IESECCommentShowDataManager;

@interface IESECCommentShowViewController : UIViewController <UICollectionViewDelegate, IESECGoodsCommentHeaderActionDelegate> {
    BOOL _isNeedRefresh;
    IESECGoodsCommentHeader *_headerView;
    UICollectionView *_mainCollectionView;
    IESECCommentShowDataManager *_dataManager;
    IESECCommentShowDatasource *_datasource;
    IESECFullLoadingView *_loadingView;
    IESECTracker *_tracker;
    IESECCommentShowConfig *_config;
}

@property (nonatomic) BOOL isNeedRefresh;
@property (retain, nonatomic) IESECGoodsCommentHeader *headerView;
@property (retain, nonatomic) UICollectionView *mainCollectionView;
@property (retain, nonatomic) IESECCommentShowDataManager *dataManager;
@property (retain, nonatomic) IESECCommentShowDatasource *datasource;
@property (retain, nonatomic) IESECFullLoadingView *loadingView;
@property (retain, nonatomic) IESECTracker *tracker;
@property (retain, nonatomic) IESECCommentShowConfig *config;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dismissLoading;
- (void)showEmptyPage;
- (void)showNormalPage;
- (void)fetchDataWithCompletion:(id /* block */)arg0;
- (void)configBtmTrackerV2;
- (void)configBTMTracker;
- (void)showErrorPage;
- (void)tapClose;
- (id)iesec_emptyPageConfigForState:(unsigned long long)arg0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })iesec_emptyPageEdgeInsets;
- (BOOL)isNeedRefresh;
- (void)setMainCollectionView:(id)arg0;
- (void)tapShare;
- (void)tapShoppingCart;
- (void)endRefresh;
- (void)trackPageEnterAfterLoadData;
- (void)getInitDataWithCompltion:(id /* block */)arg0;
- (void)setIsNeedRefresh:(BOOL)arg0;
- (id)dataManager;
- (id)tracker;
- (void)setTracker:(id)arg0;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)arg0;
- (id)config;
- (void)setHeaderView:(id)arg0;
- (id)initWithConfig:(id)arg0;
- (void)setDataManager:(id)arg0;
- (void)viewWillAppear:(BOOL)arg0;
- (id)headerView;
- (void)dealloc;
- (void)viewDidLoad;
- (id)datasource;
- (void)setDatasource:(id)arg0;
- (id)mainCollectionView;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (void)refreshData;
- (void)showLoading;
- (long long)numberOfComments;

@end
