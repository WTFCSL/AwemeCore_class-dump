//
//     Generated by private class-dump
//

@class AWERVHeaderFooterView, AWERVStrengthenMixInfoLoadingView, UICollectionView, AWERVExposedMixInfoViewModel, NSString, AWERVDetailPageContext, AWERVExposedMixInfoHeadView;

@interface AWERVExposedMixInfoView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {
    BOOL _isPreloadData;
    BOOL _isRequestLeft;
    BOOL _isRequestLeftFail;
    BOOL _isRequestRight;
    BOOL _isRequestRightFail;
    UICollectionView *_collectionView;
    AWERVExposedMixInfoHeadView *_headView;
    AWERVHeaderFooterView *_header;
    AWERVHeaderFooterView *_footer;
    AWERVStrengthenMixInfoLoadingView *_loadingView;
    AWERVExposedMixInfoViewModel *_viewModel;
    AWERVDetailPageContext *_pageContext;
    double _currentOffset;
}

@property (retain, nonatomic) AWERVExposedMixInfoHeadView *headView;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) AWERVHeaderFooterView *header;
@property (retain, nonatomic) AWERVHeaderFooterView *footer;
@property (retain, nonatomic) AWERVStrengthenMixInfoLoadingView *loadingView;
@property (retain, nonatomic) AWERVExposedMixInfoViewModel *viewModel;
@property (retain, nonatomic) AWERVDetailPageContext *pageContext;
@property (nonatomic) double currentOffset;
@property (nonatomic) BOOL isPreloadData;
@property (nonatomic) BOOL isRequestLeft;
@property (nonatomic) BOOL isRequestLeftFail;
@property (nonatomic) BOOL isRequestRight;
@property (nonatomic) BOOL isRequestRightFail;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerCellClass;
- (void)handleConnectionChanged:(id)arg0;
- (void)refreshModel:(id)arg0;
- (id)currentDataController;
- (BOOL)isRequestLeft;
- (BOOL)isRequestRight;
- (void)setIsRequestRight:(BOOL)arg0;
- (void)setIsRequestLeft:(BOOL)arg0;
- (void)preloadDataDidScroll:(id)arg0;
- (void)setHeadView:(id)arg0;
- (id)headView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 pageContext:(id)arg1;
- (BOOL)isPreloadData;
- (void)setIsPreloadData:(BOOL)arg0;
- (void)scrollToCurrentVideo:(id)arg0 animated:(BOOL)arg1;
- (void)setIsRequestRightFail:(BOOL)arg0;
- (void)loadRight:(id /* block */)arg0;
- (void)setIsRequestLeftFail:(BOOL)arg0;
- (void)requestLeft:(id /* block */)arg0;
- (void)silentScrollWhenRequestLeftWithList:(id)arg0 scrollView:(id)arg1 isScroll:(BOOL)arg2;
- (double)getItemWidth;
- (double)getMinimumLineSpacing;
- (BOOL)isRequestLeftFail;
- (BOOL)isRequestRightFail;
- (void)stopLoading;
- (double)currentOffset;
- (void)scrollViewWillBeginDecelerating:(id)arg0;
- (void)setFooter:(id)arg0;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 referenceSizeForFooterInSection:(long long)arg2;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)arg0 layout:(id)arg1 insetForSectionAtIndex:(long long)arg2;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 referenceSizeForHeaderInSection:(long long)arg2;
- (void).cxx_destruct;
- (double)collectionView:(id)arg0 layout:(id)arg1 minimumLineSpacingForSectionAtIndex:(long long)arg2;
- (id)collectionView;
- (void)startLoading;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (id)collectionView:(id)arg0 viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (void)collectionView:(id)arg0 willDisplaySupplementaryView:(id)arg1 forElementKind:(id)arg2 atIndexPath:(id)arg3;
- (id)header;
- (void)setCollectionView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setViewModel:(id)arg0;
- (void)scrollViewDidScroll:(id)arg0;
- (id)footer;
- (id)viewModel;
- (void)setHeader:(id)arg0;
- (void)setupUI;
- (void)setCurrentOffset:(double)arg0;
- (id)pageContext;
- (void)setPageContext:(id)arg0;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (void)addObservers;

@end
