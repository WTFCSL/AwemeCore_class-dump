//
//     Generated by private class-dump
//

@class NSString, NSTimer, BDXLynxSwiperViewLayout, BDXLynxSwiperCollectionView, UIView;
@protocol BDXLynxSwiperPageViewDelegate, BDXLynxSwiperPageViewDataSource;

@interface BDXLynxSwiperPageView : UIView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, BDXLynxSwiperTransformLayoutDelegate> {
    struct { unsigned char pagerViewDidScroll : 1; unsigned char didScrollFromIndexToNewIndex : 1; unsigned char initializeTransformAttributes : 1; unsigned char applyTransformToAttributes : 1; } _delegateFlags;
    struct { unsigned char cellForItemAtIndex : 1; unsigned char layoutForPagerView : 1; } _dataSourceFlags;
    BOOL _isInfiniteLoop;
    BOOL _keepItemView;
    BOOL _reloadDataNeedResetIndex;
    BOOL _smoothScroll;
    BOOL _needClearLayout;
    BOOL _didReloadData;
    BOOL _didLayout;
    BOOL _needResetIndex;
    BOOL _isScrolling;
    BOOL _needCheckBind;
    id<BDXLynxSwiperPageViewDataSource> _dataSource;
    id<BDXLynxSwiperPageViewDelegate> _delegate;
    BDXLynxSwiperCollectionView *_collectionView;
    BDXLynxSwiperViewLayout *_layout;
    unsigned long long _layoutType;
    double _autoScrollInterval;
    unsigned long long _bindChangeType;
    NSTimer *_timer;
    long long _numberOfItems;
    long long _dequeueSection;
    long long _firstScrollIndex;
    long long _currentIndexWithUI;
    struct { long long index; long long section; } _indexSection;
    struct { long long index; long long section; } _beginDragIndexSection;
    struct { long long index; long long section; } _dragTargetIndexSection;
    struct { long long index; long long section; } _prevIndexSection;
    struct { long long index; long long section; } _originalIndexSection;
}

@property (weak, nonatomic) BDXLynxSwiperCollectionView *collectionView;
@property (retain, nonatomic) BDXLynxSwiperViewLayout *layout;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) long long numberOfItems;
@property (nonatomic) long long dequeueSection;
@property (nonatomic) struct { long long index; long long section; } beginDragIndexSection;
@property (nonatomic) struct { long long index; long long section; } dragTargetIndexSection;
@property (nonatomic) struct { long long index; long long section; } prevIndexSection;
@property (nonatomic) struct { long long index; long long section; } originalIndexSection;
@property (nonatomic) long long firstScrollIndex;
@property (nonatomic) BOOL needClearLayout;
@property (nonatomic) BOOL didReloadData;
@property (nonatomic) BOOL didLayout;
@property (nonatomic) BOOL needResetIndex;
@property (nonatomic) BOOL isScrolling;
@property (nonatomic) BOOL needCheckBind;
@property (nonatomic) long long currentIndexWithUI;
@property (retain, nonatomic) UIView *backgroundView;
@property (weak, nonatomic) id<BDXLynxSwiperPageViewDataSource> dataSource;
@property (weak, nonatomic) id<BDXLynxSwiperPageViewDelegate> delegate;
@property (nonatomic) unsigned long long layoutType;
@property (nonatomic) BOOL keepItemView;
@property (nonatomic) BOOL isInfiniteLoop;
@property (nonatomic) double autoScrollInterval;
@property (nonatomic) BOOL reloadDataNeedResetIndex;
@property (readonly, nonatomic) long long curIndex;
@property (readonly, nonatomic) struct { long long index; long long section; } indexSection;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } contentOffset;
@property (readonly, nonatomic) BOOL tracking;
@property (readonly, nonatomic) BOOL dragging;
@property (readonly, nonatomic) BOOL decelerating;
@property (nonatomic) BOOL smoothScroll;
@property (nonatomic) unsigned long long bindChangeType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)curIndex;
- (void)removeTimer;
- (void)addTimer;
- (void)scrollToItemAtIndex:(long long)arg0 animate:(BOOL)arg1;
- (void)configureProperty;
- (void)pagerViewTransformLayout:(id)arg0 initializeTransformAttributes:(id)arg1;
- (void)pagerViewTransformLayout:(id)arg0 applyTransformToAttributes:(id)arg1;
- (void)addCollectionView;
- (void)scrollToNearlyIndexAtDirection:(unsigned long long)arg0 animate:(BOOL)arg1;
- (void)setNeedClearLayout;
- (void)clearLayout;
- (void)resetPagerViewAtIndex:(long long)arg0;
- (struct { long long x0; long long x1; })nearlyIndexPathAtDirection:(unsigned long long)arg0;
- (BOOL)isValidIndexSection:(struct { long long x0; long long x1; })arg0;
- (void)setNeedUpdateLayout;
- (id)curIndexCell;
- (id)visibleIndexs;
- (BOOL)reloadDataNeedResetIndex;
- (void)setReloadDataNeedResetIndex:(BOOL)arg0;
- (long long)firstScrollIndex;
- (void)setFirstScrollIndex:(long long)arg0;
- (BOOL)needClearLayout;
- (void)setNeedClearLayout:(BOOL)arg0;
- (BOOL)didReloadData;
- (void)setDidReloadData:(BOOL)arg0;
- (void)setDidLayout:(BOOL)arg0;
- (BOOL)needResetIndex;
- (void)setNeedResetIndex:(BOOL)arg0;
- (BOOL)isInfiniteLoop;
- (void)setIsInfiniteLoop:(BOOL)arg0;
- (double)calculateOffsetAtIndexSection:(struct { long long x0; long long x1; })arg0;
- (void)scrollToItemAtIndexSection:(struct { long long x0; long long x1; })arg0 animate:(BOOL)arg1;
- (BOOL)smoothScroll;
- (void)scrollToItemAtIndex:(long long)arg0 animate:(BOOL)arg1 force:(BOOL)arg2;
- (unsigned long long)bindChangeType;
- (struct { long long x0; long long x1; })indexSection;
- (struct { long long x0; long long x1; })nearlyIndexPathForIndexSection:(struct { long long x0; long long x1; })arg0 direction:(unsigned long long)arg1 offset:(long long)arg2;
- (void)scrollToItemAnimatedAtIndex:(long long)arg0 direction:(unsigned long long)arg1 force:(BOOL)arg2;
- (double)adjustOffset:(double)arg0;
- (struct { long long x0; long long x1; })calculateIndexSectionWithOffset:(double)arg0;
- (struct { long long x0; long long x1; })nearlyIndexPathForIndexSection:(struct { long long x0; long long x1; })arg0 direction:(unsigned long long)arg1;
- (BOOL)keepItemView;
- (void)recyclePagerViewIfNeed;
- (void)switchToNonFlipLayout;
- (void)scrollToItemAnimatedAtIndex:(long long)arg0 direction:(unsigned long long)arg1;
- (void)setKeepItemView:(BOOL)arg0;
- (void)setSmoothScroll:(BOOL)arg0;
- (void)setBindChangeType:(unsigned long long)arg0;
- (long long)dequeueSection;
- (void)setDequeueSection:(long long)arg0;
- (struct { long long x0; long long x1; })beginDragIndexSection;
- (void)setBeginDragIndexSection:(struct { long long x0; long long x1; })arg0;
- (struct { long long x0; long long x1; })dragTargetIndexSection;
- (void)setDragTargetIndexSection:(struct { long long x0; long long x1; })arg0;
- (struct { long long x0; long long x1; })prevIndexSection;
- (void)setPrevIndexSection:(struct { long long x0; long long x1; })arg0;
- (struct { long long x0; long long x1; })originalIndexSection;
- (void)setOriginalIndexSection:(struct { long long x0; long long x1; })arg0;
- (BOOL)needCheckBind;
- (void)setNeedCheckBind:(BOOL)arg0;
- (long long)currentIndexWithUI;
- (void)setCurrentIndexWithUI:(long long)arg0;
- (id)visibleCells;
- (long long)numberOfSectionsInCollectionView:(id)arg0;
- (void)timerFired:(id)arg0;
- (void)willMoveToSuperview:(id)arg0;
- (id)timer;
- (void)setIsScrolling:(BOOL)arg0;
- (long long)numberOfItems;
- (unsigned long long)layoutType;
- (void)scrollViewWillBeginDecelerating:(id)arg0;
- (void)removeFromSuperview;
- (void)collectionView:(id)arg0 didEndDisplayingCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (void)setLayoutType:(unsigned long long)arg0;
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
- (BOOL)isScrolling;
- (BOOL)didLayout;
- (void)scrollViewDidEndScrollingAnimation:(id)arg0;
- (void)setCollectionView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)scrollViewDidScroll:(id)arg0;
- (id)delegate;
- (void)setTimer:(id)arg0;
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
- (BOOL)decelerating;
- (void)updateData;
- (void)reloadData:(id)arg0;
- (id)dequeueReusableCellWithReuseIdentifier:(id)arg0 forIndex:(long long)arg1;
- (void)setAutoScrollInterval:(double)arg0;
- (double)autoScrollInterval;

@end