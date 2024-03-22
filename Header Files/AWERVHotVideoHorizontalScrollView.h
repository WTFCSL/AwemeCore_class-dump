//
//     Generated by private class-dump
//

@class NSString, UICollectionView, AWERVHotVideoElementHeadView, AWERVHotVideoViewModel, AWERVDetailPageContext, AWERVHeaderFooterView;

@interface AWERVHotVideoHorizontalScrollView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {
    BOOL _isPreloadingData;
    BOOL _isLoadingMore;
    UICollectionView *_listView;
    AWERVHotVideoElementHeadView *_headView;
    AWERVHeaderFooterView *_footer;
    AWERVDetailPageContext *_pageContext;
    AWERVHotVideoViewModel *_viewModel;
    double _currentOffset;
}

@property (retain, nonatomic) AWERVHotVideoElementHeadView *headView;
@property (retain, nonatomic) UICollectionView *listView;
@property (retain, nonatomic) AWERVHeaderFooterView *footer;
@property (retain, nonatomic) AWERVDetailPageContext *pageContext;
@property (retain, nonatomic) AWERVHotVideoViewModel *viewModel;
@property (nonatomic) double currentOffset;
@property (nonatomic) BOOL isPreloadingData;
@property (nonatomic) BOOL isLoadingMore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isLoadingMore;
- (void)setIsLoadingMore:(BOOL)arg0;
- (void)registerCellClass;
- (void)preloadDataDidScroll:(id)arg0;
- (void)setHeadView:(id)arg0;
- (id)headView;
- (void)configWithModel:(id)arg0 hostSpot:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 pageContext:(id)arg1 viewModel:(id)arg2;
- (void)addObserves;
- (void)scrollToVideoAtIndex:(long long)arg0 animated:(BOOL)arg1;
- (BOOL)isPreloadingData;
- (void)setIsPreloadingData:(BOOL)arg0;
- (double)currentOffset;
- (void)setFooter:(id)arg0;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (void)setListView:(id)arg0;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 referenceSizeForFooterInSection:(long long)arg2;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)arg0 layout:(id)arg1 insetForSectionAtIndex:(long long)arg2;
- (id)listView;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2;
- (void).cxx_destruct;
- (double)collectionView:(id)arg0 layout:(id)arg1 minimumLineSpacingForSectionAtIndex:(long long)arg2;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (id)collectionView:(id)arg0 viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (void)collectionView:(id)arg0 willDisplaySupplementaryView:(id)arg1 forElementKind:(id)arg2 atIndexPath:(id)arg3;
- (void)setViewModel:(id)arg0;
- (void)scrollViewDidScroll:(id)arg0;
- (id)footer;
- (id)viewModel;
- (void)setupUI;
- (void)setCurrentOffset:(double)arg0;
- (id)pageContext;
- (void)setPageContext:(id)arg0;

@end