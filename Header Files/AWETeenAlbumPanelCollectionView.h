//
//     Generated by private class-dump
//

@class NSString, AWETeenAlbumDataController;

@interface AWETeenAlbumPanelCollectionView : UICollectionView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UICollectionViewDelegate, UIGestureRecognizerDelegate> {
    BOOL _isLandscapePLay;
    BOOL _isLandscapeStyle;
    BOOL _isScroll;
    id /* block */ _loadMoreBlock;
    id /* block */ _loadPreviousBlock;
    id /* block */ _cellWillDisplayBlock;
    id /* block */ _selectedBlock;
    id /* block */ _scrollBlock;
    AWETeenAlbumDataController *_dataController;
    long long _playingIndex;
    long long _minCursor;
    long long _maxCursor;
    long long _preloadPreviousCount;
    long long _preloadMoreCount;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _contentInsets;
}

@property (retain, nonatomic) AWETeenAlbumDataController *dataController;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInsets;
@property (nonatomic) BOOL isLandscapePLay;
@property (nonatomic) BOOL isLandscapeStyle;
@property (nonatomic) long long playingIndex;
@property (nonatomic) long long minCursor;
@property (nonatomic) long long maxCursor;
@property (nonatomic) BOOL isScroll;
@property (nonatomic) long long preloadPreviousCount;
@property (nonatomic) long long preloadMoreCount;
@property (copy, nonatomic) id /* block */ loadMoreBlock;
@property (copy, nonatomic) id /* block */ loadPreviousBlock;
@property (copy, nonatomic) id /* block */ cellWillDisplayBlock;
@property (copy, nonatomic) id /* block */ selectedBlock;
@property (copy, nonatomic) id /* block */ scrollBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setDataController:(id)arg0;
- (long long)minCursor;
- (long long)maxCursor;
- (void)setMaxCursor:(long long)arg0;
- (void)setMinCursor:(long long)arg0;
- (void)setSelectedBlock:(id /* block */)arg0;
- (id /* block */)selectedBlock;
- (void)scrollToCellAtIndex:(long long)arg0;
- (id /* block */)loadMoreBlock;
- (void)setLoadMoreBlock:(id /* block */)arg0;
- (void)setIsScroll:(BOOL)arg0;
- (void)setPlayingIndex:(long long)arg0;
- (long long)playingIndex;
- (void)p_setupBind;
- (BOOL)isScroll;
- (BOOL)isLandscapePLay;
- (void)p_setupFooterAndHeader;
- (void)p_updateBottomMask;
- (void)p_selectCurrentCell:(id)arg0 atIndex:(long long)arg1;
- (void)setIsLandscapeStyle:(BOOL)arg0;
- (void)setPreloadPreviousCount:(long long)arg0;
- (void)setPreloadMoreCount:(long long)arg0;
- (long long)preloadPreviousCount;
- (long long)preloadMoreCount;
- (void)p_updatePreloadDataIfNeeded;
- (id /* block */)loadPreviousBlock;
- (id /* block */)cellWillDisplayBlock;
- (BOOL)isLandscapeStyle;
- (BOOL)p_didScrollAtFist;
- (id)initWithDataController:(id)arg0 isLandscape:(BOOL)arg1;
- (void)updatePlayingIndex:(long long)arg0 needFocus:(BOOL)arg1;
- (void)setLoadPreviousBlock:(id /* block */)arg0;
- (void)setCellWillDisplayBlock:(id /* block */)arg0;
- (void)setIsLandscapePLay:(BOOL)arg0;
- (void)didDismiss;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2;
- (void).cxx_destruct;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg0;
- (void)scrollViewDidEndScrollingAnimation:(id)arg0;
- (void)scrollViewDidScroll:(id)arg0;
- (BOOL)gestureRecognizerShouldBegin:(id)arg0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentInsets;
- (void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1;
- (void)setContentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0;
- (id /* block */)scrollBlock;
- (void)setScrollBlock:(id /* block */)arg0;
- (double)cellHeight;
- (id)dataController;

@end