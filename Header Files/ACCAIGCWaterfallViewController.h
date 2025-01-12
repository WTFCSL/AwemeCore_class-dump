//
//     Generated by private class-dump
//

@class NSString, UICollectionView, UILabel, NSMutableArray;
@protocol ACCAIGCWaterfallContentProviderProtocol, ACCAIGCWaterfallContentScrollDelegate;

@interface ACCAIGCWaterfallViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, ACCNewCollectionDelegateWaterfallLayout, ACCAIGCWaterfallVCProtocol> {
    BOOL _toUsePreloadDataFlag;
    BOOL _isFetchingData;
    BOOL _firstLoadFlag;
    BOOL _hasMore;
    UICollectionView *_collectionView;
    id<ACCAIGCWaterfallContentProviderProtocol> _contentProvider;
    id<ACCAIGCWaterfallContentScrollDelegate> _delegate;
    id /* block */ _updateContentOffsetBlock;
    UILabel *_noMoreLabel;
    NSMutableArray *_displayFilterIndexPaths;
}

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UILabel *noMoreLabel;
@property (nonatomic) BOOL isFetchingData;
@property (nonatomic) BOOL firstLoadFlag;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) NSMutableArray *displayFilterIndexPaths;
@property (retain, nonatomic) id<ACCAIGCWaterfallContentProviderProtocol> contentProvider;
@property (weak, nonatomic) id<ACCAIGCWaterfallContentScrollDelegate> delegate;
@property (copy, nonatomic) id /* block */ updateContentOffsetBlock;
@property (nonatomic) BOOL toUsePreloadDataFlag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)accui_emptyPageConfigForState:(unsigned long long)arg0;
- (void)accui_emptyPagePrimaryButtonTapped:(id)arg0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })accui_emptyPageEdgeInsets;
- (double)collectionView:(id)arg0 layout:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)noMoreLabel;
- (void)setNoMoreLabel:(id)arg0;
- (void)p_addCollectionView;
- (void)setIsFetchingData:(BOOL)arg0;
- (void)p_updateEmpteStateWithError:(id)arg0 andContentCount:(unsigned long long)arg1;
- (void)diffReloadContent;
- (id)transitionCollectionCellForItemOffset:(long long)arg0;
- (void)p_fetchContentData:(BOOL)arg0;
- (void)p_loadMoreContentData;
- (id /* block */)updateContentOffsetBlock;
- (void)setFirstLoadFlag:(BOOL)arg0;
- (void)p_trackFilterReload:(id /* block */)arg0;
- (id)displayFilterIndexPaths;
- (BOOL)firstLoadFlag;
- (void)setToUsePreloadDataFlag:(BOOL)arg0;
- (BOOL)toUsePreloadDataFlag;
- (void)setUpdateContentOffsetBlock:(id /* block */)arg0;
- (void)setDisplayFilterIndexPaths:(id)arg0;
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
- (id)collectionView:(id)arg0 viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg0;
- (void)setCollectionView:(id)arg0;
- (void)scrollViewDidScroll:(id)arg0;
- (id)delegate;
- (void)setHasMore:(BOOL)arg0;
- (BOOL)hasMore;
- (void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1;
- (void)didReceiveMemoryWarning;
- (void)setDelegate:(id)arg0;
- (void)viewDidLoad;
- (void)setContentProvider:(id)arg0;
- (void)reloadContent;
- (void)refreshContent;
- (BOOL)isFetchingData;

@end
