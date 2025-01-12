//
//     Generated by private class-dump
//

@class NSString, NSArray, UICollectionView, NSTimer, HTSPageControl, NSMutableArray, NSMutableDictionary;

@interface IESLiveLooperBannerView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout> {
    NSArray *_imageArr;
    NSMutableDictionary *_trackContext;
    UICollectionView *_bannerCollectionView;
    NSMutableArray *_dataArr;
    HTSPageControl *_pageControl;
    NSTimer *_timer;
    struct CGSize { double width; double height; } _preferSize;
}

@property (retain, nonatomic) UICollectionView *bannerCollectionView;
@property (retain, nonatomic) NSMutableArray *dataArr;
@property (retain, nonatomic) HTSPageControl *pageControl;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) struct CGSize { double width; double height; } preferSize;
@property (retain, nonatomic) NSArray *imageArr;
@property (retain, nonatomic) NSMutableDictionary *trackContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)trackContext;
- (void)setTrackContext:(id)arg0;
- (void)p_pauseTimer;
- (id)bannerCollectionView;
- (void)setBannerCollectionView:(id)arg0;
- (void)setPreferSize:(struct CGSize { double x0; double x1; })arg0;
- (void)updateWithBannerList:(id)arg0;
- (void)setImageArr:(id)arg0;
- (id)imageArr;
- (void)p_cycleScroll;
- (id)dataArr;
- (struct CGSize { double x0; double x1; })preferSize;
- (void)bannerTaskTrack:(id)arg0 bannerInfo:(id)arg1 params:(id)arg2;
- (void)setDataArr:(id)arg0;
- (id)timer;
- (void)updateTimer:(id)arg0;
- (id)init;
- (void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (void)startTimer;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2;
- (void).cxx_destruct;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (void)setPageControl:(id)arg0;
- (void)scrollViewDidEndDecelerating:(id)arg0;
- (void)scrollViewDidEndScrollingAnimation:(id)arg0;
- (void)setTimer:(id)arg0;
- (void)scrollViewWillBeginDragging:(id)arg0;
- (void)dealloc;
- (id)pageControl;
- (void)setupView;

@end
