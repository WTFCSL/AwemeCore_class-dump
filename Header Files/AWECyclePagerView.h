//
//     Generated by private class-dump
//

@class NSString, NSTimer, AWECyclePagerViewLayout, UICollectionView, UIView;
@protocol AWECyclePagerViewDataSource, AWECyclePagerViewDelegate;

@interface AWECyclePagerView : UIView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, AWECyclePagerTransformLayoutDelegate> {
    struct { unsigned char pagerViewDidScroll : 1; unsigned char didScrollFromIndexToNewIndex : 1; unsigned char initializeTransformAttributes : 1; unsigned char applyTransformToAttributes : 1; } _delegateFlags;
    struct { unsigned char cellForItemAtIndex : 1; unsigned char layoutForPagerView : 1; } _dataSourceFlags;
    BOOL _reloadDataNeedResetIndex;
    BOOL _needClearLayout;
    BOOL _didReloadData;
    BOOL _didLayout;
    BOOL _needResetIndex;
    id<AWECyclePagerViewDataSource> _dataSource;
    id<AWECyclePagerViewDelegate> _delegate;
    UICollectionView *_collectionView;
    AWECyclePagerViewLayout *_layout;
    double _autoScrollInterval;
    long long _curIndex;
    NSTimer *_timer;
    long long _numberOfItems;
    long long _beginDragIndex;
    long long _firstScrollIndex;
    double _currentOffsetX;
    double _currentOffsetY;
}

@property (weak, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) AWECyclePagerViewLayout *layout;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) long long numberOfItems;
@property (nonatomic) long long beginDragIndex;
@property (nonatomic) long long firstScrollIndex;
@property (nonatomic) BOOL needClearLayout;
@property (nonatomic) BOOL didReloadData;
@property (nonatomic) BOOL didLayout;
@property (nonatomic) BOOL needResetIndex;
@property (nonatomic) long long curIndex;
@property (nonatomic) double currentOffsetX;
@property (nonatomic) double currentOffsetY;
@property (retain, nonatomic) UIView *backgroundView;
@property (weak, nonatomic) id<AWECyclePagerViewDataSource> dataSource;
@property (weak, nonatomic) id<AWECyclePagerViewDelegate> delegate;
@property (nonatomic) double autoScrollInterval;
@property (nonatomic) BOOL reloadDataNeedResetIndex;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } contentOffset;
@property (readonly, nonatomic) BOOL tracking;
@property (readonly, nonatomic) BOOL dragging;
@property (readonly, nonatomic) BOOL decelerating;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)curIndex;
- (void)setCurIndex:(long long)arg0;
- (void)removeTimer;
- (void)addTimer;
- (double)caculateOffsetXAtIndex:(long long)arg0;
- (void)scrollToItemAtIndex:(long long)arg0 animate:(BOOL)arg1;
- (void)configureProperty;
- (void)pagerViewTransformLayout:(id)arg0 initializeTransformAttributes:(id)arg1;
- (void)pagerViewTransformLayout:(id)arg0 applyTransformToAttributes:(id)arg1;
- (void)addCollectionView;
- (void)scrollToNearlyIndexAtDirection:(unsigned long long)arg0 animate:(BOOL)arg1;
- (void)setNeedClearLayout;
- (void)clearLayout;
- (void)resetPagerViewAtIndex:(long long)arg0;
- (long long)nearlyIndexPathAtDirection:(unsigned long long)arg0;
- (BOOL)isValidIndexSection:(long long)arg0;
- (long long)nearlyIndexPathForIndex:(long long)arg0 direction:(unsigned long long)arg1;
- (long long)caculateIndexWithOffsetX:(double)arg0;
- (double)caculateOffsetYAtIndex:(long long)arg0;
- (void)setNeedUpdateLayout;
- (id)curIndexCell;
- (id)visibleIndexs;
- (long long)caculateIndexWithOffsetY:(double)arg0;
- (BOOL)reloadDataNeedResetIndex;
- (void)setReloadDataNeedResetIndex:(BOOL)arg0;
- (long long)beginDragIndex;
- (void)setBeginDragIndex:(long long)arg0;
- (long long)firstScrollIndex;
- (void)setFirstScrollIndex:(long long)arg0;
- (BOOL)needClearLayout;
- (void)setNeedClearLayout:(BOOL)arg0;
- (BOOL)didReloadData;
- (void)setDidReloadData:(BOOL)arg0;
- (void)setDidLayout:(BOOL)arg0;
- (BOOL)needResetIndex;
- (void)setNeedResetIndex:(BOOL)arg0;
- (double)currentOffsetY;
- (void)setCurrentOffsetY:(double)arg0;
- (id)visibleCells;
- (long long)numberOfSectionsInCollectionView:(id)arg0;
- (void)timerFired:(id)arg0;
- (void)willMoveToSuperview:(id)arg0;
- (id)timer;
- (long long)numberOfItems;
- (void)scrollViewWillBeginDecelerating:(id)arg0;
- (void)setDataSource:(id)arg0;
- (void)updateLayout;
- (id)dataSource;
- (BOOL)tracking;
- (void)setLayout:(id)arg0;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (id)backgroundView;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)arg0 layout:(id)arg1 insetForSectionAtIndex:(long long)arg2;
- (struct CGPoint { double x0; double x1; })contentOffset;
- (void).cxx_destruct;
- (id)collectionView;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg0;
- (void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint { double x0; double x1; })arg1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)arg2;
- (BOOL)didLayout;
- (void)scrollViewDidEndScrollingAnimation:(id)arg0;
- (void)setCollectionView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)reloadData;
- (void)scrollViewDidScroll:(id)arg0;
- (id)delegate;
- (void)setTimer:(id)arg0;
- (id)initWithCoder:(id)arg0;
- (void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1;
- (void)setNumberOfItems:(long long)arg0;
- (id)layout;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg0;
- (void)scrollViewWillBeginDragging:(id)arg0;
- (void)dealloc;
- (void)setBackgroundView:(id)arg0;
- (BOOL)dragging;
- (void)registerClass:(Class)arg0 forCellWithReuseIdentifier:(id)arg1;
- (void)registerNib:(id)arg0 forCellWithReuseIdentifier:(id)arg1;
- (BOOL)decelerating;
- (void)updateData;
- (id)dequeueReusableCellWithReuseIdentifier:(id)arg0 forIndex:(long long)arg1;
- (double)currentOffsetX;
- (void)setCurrentOffsetX:(double)arg0;
- (void)setAutoScrollInterval:(double)arg0;
- (double)autoScrollInterval;
- (void)updateCurrentIndex;

@end
