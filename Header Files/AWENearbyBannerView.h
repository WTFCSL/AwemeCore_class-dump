//
//     Generated by private class-dump
//

@class AWEDiscoverPageControl, NSTimer, NSArray, UICollectionView, NSMutableArray, NSString;

@interface AWENearbyBannerView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout> {
    BOOL _canAutoLoop;
    BOOL _bannerOutOfScreen;
    double _autoLoopDuration;
    NSArray *_bannerRawDataList;
    UICollectionView *_collectionView;
    id /* block */ _didClickCellBlock;
    id /* block */ _didShowCellBlock;
    NSMutableArray *_infiniteBannerList;
    AWEDiscoverPageControl *_pageControl;
    NSTimer *_loopTimer;
    long long _currentIndex;
    long long _lastIndex;
    double _pageControlHeight;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _collectionViewInsets;
}

@property (retain, nonatomic) NSMutableArray *infiniteBannerList;
@property (retain, nonatomic) AWEDiscoverPageControl *pageControl;
@property (retain, nonatomic) NSTimer *loopTimer;
@property (nonatomic) long long currentIndex;
@property (nonatomic) long long lastIndex;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } collectionViewInsets;
@property (nonatomic) double pageControlHeight;
@property (nonatomic) double autoLoopDuration;
@property (nonatomic) BOOL canAutoLoop;
@property (copy, nonatomic) NSArray *bannerRawDataList;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (copy, nonatomic) id /* block */ didClickCellBlock;
@property (copy, nonatomic) id /* block */ didShowCellBlock;
@property (nonatomic) BOOL bannerOutOfScreen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startCarousel;
- (void)stopCarousel;
- (id)loopTimer;
- (void)setLoopTimer:(id)arg0;
- (void)invalidateLoopTimer;
- (double)autoLoopDuration;
- (void)loopTimerTick;
- (id)infiniteBannerList;
- (void)scrollToIndexPath:(id)arg0 animated:(BOOL)arg1;
- (id)bannerRawDataList;
- (void)setAutoLoopDuration:(double)arg0;
- (void)setBannerRawDataList:(id)arg0;
- (BOOL)canAutoLoop;
- (void)activeLoopTimer;
- (id /* block */)didClickCellBlock;
- (BOOL)bannerOutOfScreen;
- (id /* block */)didShowCellBlock;
- (void)updateDataSourceArray:(id)arg0 dataHandler:(id /* block */)arg1;
- (void)setCanAutoLoop:(BOOL)arg0;
- (void)setDidClickCellBlock:(id /* block */)arg0;
- (void)setDidShowCellBlock:(id /* block */)arg0;
- (void)setBannerOutOfScreen:(BOOL)arg0;
- (void)setInfiniteBannerList:(id)arg0;
- (double)pageControlHeight;
- (void)setPageControlHeight:(double)arg0;
- (void)applicationWillResignActive:(id)arg0;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2;
- (void).cxx_destruct;
- (id)collectionView;
- (long long)currentIndex;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (void)setPageControl:(id)arg0;
- (void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint { double x0; double x1; })arg1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)arg2;
- (void)setCollectionView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setCurrentIndex:(long long)arg0;
- (void)scrollViewDidScroll:(id)arg0;
- (void)applicationDidBecomeActive:(id)arg0;
- (long long)lastIndex;
- (void)layoutSubviews;
- (void)scrollViewWillBeginDragging:(id)arg0;
- (void)dealloc;
- (void)addObserver;
- (id)pageControl;
- (void)setupUI;
- (void)setLastIndex:(long long)arg0;
- (void)setCollectionViewInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionViewInsets;

@end
