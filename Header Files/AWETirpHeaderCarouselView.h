//
//     Generated by private class-dump
//

@class NSString, AWETirpHeaderCarouselCollectionView, NSTimer, MyProxy, NSIndexPath, AWETirpHeaderFlowLayout;
@protocol AWEPOIHeaderCarouselDelegate, AWEPOIHeaderCarouselDatasource;

@interface AWETirpHeaderCarouselView : UIView <UICollectionViewDelegate, UICollectionViewDataSource> {
    BOOL _isAuto;
    BOOL _endless;
    BOOL _carouselAnimated;
    BOOL _isPause;
    id<AWEPOIHeaderCarouselDelegate> _delegate;
    id<AWEPOIHeaderCarouselDatasource> _datasource;
    AWETirpHeaderFlowLayout *_flowLayout;
    AWETirpHeaderCarouselCollectionView *_carouselView;
    double _autoTimInterval;
    double _loadMoreOffset;
    long long _numbers;
    long long _currentIndex;
    long long _infactIndex;
    NSIndexPath *_currentIndexPath;
    MyProxy *_timerProxy;
    NSTimer *_timer;
}

@property (retain, nonatomic) AWETirpHeaderCarouselCollectionView *carouselView;
@property (nonatomic) long long numbers;
@property (nonatomic) long long currentIndex;
@property (nonatomic) long long infactIndex;
@property (nonatomic) BOOL isPause;
@property (retain, nonatomic) NSIndexPath *currentIndexPath;
@property (retain, nonatomic) MyProxy *timerProxy;
@property (retain, nonatomic) NSTimer *timer;
@property (weak, nonatomic) id<AWEPOIHeaderCarouselDelegate> delegate;
@property (weak, nonatomic) id<AWEPOIHeaderCarouselDatasource> datasource;
@property (readonly, nonatomic) AWETirpHeaderFlowLayout *flowLayout;
@property (readonly, nonatomic) unsigned long long style;
@property (nonatomic) BOOL isAuto;
@property (nonatomic) double autoTimInterval;
@property (nonatomic) BOOL endless;
@property (nonatomic) BOOL carouselAnimated;
@property (nonatomic) double loadMoreOffset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isPause;
- (void)setIsPause:(BOOL)arg0;
- (void)resumePlay;
- (id)timerProxy;
- (void)setTimerProxy:(id)arg0;
- (void)setAutoTimInterval:(double)arg0;
- (void)setEndless:(BOOL)arg0;
- (void)setCarouselAnimated:(BOOL)arg0;
- (void)addNotify;
- (void)adjustErrorCell:(BOOL)arg0;
- (void)removeNotify;
- (void)appBecomeInactive:(id)arg0;
- (void)appBecomeActive:(id)arg0;
- (BOOL)endless;
- (id)originIndexPath;
- (long long)caculateIndex:(long long)arg0;
- (long long)infactNumbers;
- (void)velocityZero;
- (void)cusScrollViewWillBeginDecelerating:(BOOL)arg0 scroll:(id)arg1;
- (void)cusScrollAnimationEnd:(id)arg0;
- (double)loadMoreOffset;
- (void)checkOutofBounds;
- (double)autoTimInterval;
- (BOOL)carouselAnimated;
- (void)jumpToIndexPath:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 delegate:(id)arg1 datasource:(id)arg2 flowLayout:(id)arg3;
- (void)controllerWillAppear;
- (void)controllerWillDisAppear;
- (void)registerViewClass:(Class)arg0 identifier:(id)arg1;
- (void)freshCarousel;
- (void)scrollTo:(long long)arg0 animation:(BOOL)arg1;
- (void)setLoadMoreOffset:(double)arg0;
- (void)setNumbers:(long long)arg0;
- (long long)infactIndex;
- (void)setInfactIndex:(long long)arg0;
- (id)timer;
- (void)scrollViewWillBeginDecelerating:(id)arg0;
- (unsigned long long)style;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (void).cxx_destruct;
- (long long)currentIndex;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg0;
- (void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint { double x0; double x1; })arg1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)arg2;
- (void)stop;
- (void)scrollViewDidEndScrollingAnimation:(id)arg0;
- (void)setCurrentIndex:(long long)arg0;
- (id)currentIndexPath;
- (id)delegate;
- (void)setTimer:(id)arg0;
- (void)setDelegate:(id)arg0;
- (void)scrollViewWillBeginDragging:(id)arg0;
- (void)dealloc;
- (void)play;
- (void)pause;
- (void)setBackgroundColor:(id)arg0;
- (id)flowLayout;
- (void)setCurrentIndexPath:(id)arg0;
- (id)datasource;
- (void)setDatasource:(id)arg0;
- (id)carouselView;
- (void)setCarouselView:(id)arg0;
- (BOOL)isAuto;
- (void)setIsAuto:(BOOL)arg0;
- (long long)numbers;
- (void)releaseTimer;
- (void)configureView;
- (void)nextCell;

@end
