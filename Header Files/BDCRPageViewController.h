//
//     Generated by private class-dump
//

@protocol BDCRScrollViewZoomEventDelegate, BDCRPageViewControllerDelegate, BDCRPageViewControllerDataSource;

@interface BDCRPageViewController : UIViewController {
    float _maximumZoomScale;
    float _doubleTapMaximumZoomScale;
    float _gestureMaximumZoomScale;
    id<BDCRScrollViewZoomEventDelegate> _zoomEventDelegate;
    id<BDCRPageViewControllerDelegate> _delegate;
    id<BDCRPageViewControllerDataSource> _dataSource;
    unsigned long long _pageMode;
}

@property (weak, nonatomic) id<BDCRScrollViewZoomEventDelegate> zoomEventDelegate;
@property (weak, nonatomic) id<BDCRPageViewControllerDelegate> delegate;
@property (weak, nonatomic) id<BDCRPageViewControllerDataSource> dataSource;
@property (nonatomic) unsigned long long pageMode;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } contentOffset;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } contentSize;
@property (nonatomic) float maximumZoomScale;
@property (nonatomic) float doubleTapMaximumZoomScale;
@property (nonatomic) float gestureMaximumZoomScale;

- (void)scrollToLastPosition;
- (id)getHalfContentOffsetViewController;
- (id)getBeginContentOffsetViewController;
- (id)getEndContentOffsetViewController;
- (id)contentViewContollers;
- (void)stopCurrentScrollAnimation;
- (void)reloadDataWithoutCallback;
- (void)scrollPageRatio:(float)arg0 animated:(BOOL)arg1;
- (id)zoomEventDelegate;
- (void)onZoom;
- (void)setZoomEventDelegate:(id)arg0;
- (void)reloadPageViewController:(id)arg0;
- (void)zoomScale:(float)arg0;
- (float)showRateForContentViewController:(id)arg0;
- (float)doubleTapMaximumZoomScale;
- (void)setDoubleTapMaximumZoomScale:(float)arg0;
- (float)gestureMaximumZoomScale;
- (void)setGestureMaximumZoomScale:(float)arg0;
- (unsigned long long)pageMode;
- (void)setPageMode:(unsigned long long)arg0;
- (struct CGSize { double x0; double x1; })contentSize;
- (void)setDataSource:(id)arg0;
- (id)dataSource;
- (void)setMaximumZoomScale:(float)arg0;
- (struct CGPoint { double x0; double x1; })contentOffset;
- (void).cxx_destruct;
- (void)scrollToIndexPath:(id)arg0;
- (void)reloadData;
- (id)delegate;
- (float)maximumZoomScale;
- (void)setDelegate:(id)arg0;
- (void)viewDidLoad;

@end
