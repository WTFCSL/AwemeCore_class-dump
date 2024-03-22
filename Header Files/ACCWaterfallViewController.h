//
//     Generated by private class-dump
//

@class NSString, NSMutableArray, UICollectionView;
@protocol ACCWaterfallContentProviderProtocol, ACCWaterfallContentScrollDelegate;

@interface ACCWaterfallViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, ACCNewCollectionDelegateWaterfallLayout, ACCWaterfallViewControllerProtocol> {
    BOOL _toUsePreloadDataFlag;
    BOOL _isFetchingData;
    BOOL _firstLoadFlag;
    UICollectionView *_collectionView;
    id<ACCWaterfallContentProviderProtocol> _contentProvider;
    id<ACCWaterfallContentScrollDelegate> _delegate;
    id /* block */ _updateContentOffsetBlock;
    NSMutableArray *_displayFilterIndexPaths;
}

@property (retain, nonatomic) UICollectionView *collectionView;
@property (nonatomic) BOOL isFetchingData;
@property (nonatomic) BOOL firstLoadFlag;
@property (retain, nonatomic) NSMutableArray *displayFilterIndexPaths;
@property (retain, nonatomic) id<ACCWaterfallContentProviderProtocol> contentProvider;
@property (weak, nonatomic) id<ACCWaterfallContentScrollDelegate> delegate;
@property (copy, nonatomic) id /* block */ updateContentOffsetBlock;
@property (nonatomic) BOOL toUsePreloadDataFlag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)accui_emptyPageConfigForState:(unsigned long long)arg0;
- (void)accui_emptyPagePrimaryButtonTapped:(id)arg0;
- (void)p_addCollectionView;
- (void)setIsFetchingData:(BOOL)arg0;
- (void)p_updateEmpteStateWithError:(id)arg0 andContentCount:(unsigned long long)arg1;
- (void)diffReloadContent;
- (id)transitionCollectionCellForItemOffset:(long long)arg0;
- (void)p_fetchContentData:(BOOL)arg0;
- (id /* block */)updateContentOffsetBlock;
- (void)setFirstLoadFlag:(BOOL)arg0;
- (void)p_trackFilterReload:(id /* block */)arg0;
- (id)displayFilterIndexPaths;
- (BOOL)firstLoadFlag;
- (void)setToUsePreloadDataFlag:(BOOL)arg0;
- (BOOL)toUsePreloadDataFlag;
- (void)setUpdateContentOffsetBlock:(id /* block */)arg0;
- (void)setDisplayFilterIndexPaths:(id)arg0;
- (void)p_loadMoreContent;
- (long long)numberOfSectionsInCollectionView:(id)arg0;
- (id)contentProvider;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (void)viewDidLayoutSubviews;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (void)viewDidAppear:(BOOL)arg0;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2;
- (void).cxx_destruct;
- (id)collectionView;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg0;
- (void)setCollectionView:(id)arg0;
- (void)scrollViewDidScroll:(id)arg0;
- (id)delegate;
- (void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1;
- (void)didReceiveMemoryWarning;
- (void)setDelegate:(id)arg0;
- (void)viewDidLoad;
- (void)setContentProvider:(id)arg0;
- (void)reloadContent;
- (void)refreshContent;
- (BOOL)isFetchingData;

@end