//
//     Generated by private class-dump
//

@class AFDDotsIndicatorContainerView, NSString, AWEStoryProgressFixedView, AWEStoryProgressLineIndicatorView, AWEStoryProgressContainerConfig, AWEStoryProgressSlideView, UIPanGestureRecognizer;
@protocol AWEStoryProgressContainerViewDelegate;

@interface AWEStoryProgressContainerView : UIView <AWEStoryProgressSlideViewDelegate, AWEStoryProgressFixedViewDelegate, UIGestureRecognizerDelegate, AFDStoryProgressContainerViewProtocol> {
    BOOL _needProgressBarPanGesture;
    BOOL _whetherSlide;
    id<AWEStoryProgressContainerViewDelegate> _delegate;
    AWEStoryProgressFixedView *_fixedView;
    AWEStoryProgressSlideView *_slideView;
    AFDDotsIndicatorContainerView *_dotsView;
    AWEStoryProgressLineIndicatorView *_lineSlideView;
    long long _index;
    long long _count;
    AWEStoryProgressContainerConfig *_config;
    UIPanGestureRecognizer *_panGesture;
    struct CGPoint { double x; double y; } _lastLocation;
}

@property (retain, nonatomic) AWEStoryProgressFixedView *fixedView;
@property (retain, nonatomic) AWEStoryProgressSlideView *slideView;
@property (retain, nonatomic) AFDDotsIndicatorContainerView *dotsView;
@property (retain, nonatomic) AWEStoryProgressLineIndicatorView *lineSlideView;
@property (nonatomic) BOOL whetherSlide;
@property (nonatomic) long long index;
@property (nonatomic) long long count;
@property (retain, nonatomic) AWEStoryProgressContainerConfig *config;
@property (nonatomic) struct CGPoint { double x; double y; } lastLocation;
@property (retain, nonatomic) UIPanGestureRecognizer *panGesture;
@property (weak, nonatomic) id<AWEStoryProgressContainerViewDelegate> delegate;
@property (readonly, nonatomic) unsigned long long currentProgressIndex;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } currentProgressViewFrame;
@property (readonly, nonatomic) double currentProgressPercentage;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } currentProgressViewProgressSize;
@property (nonatomic) BOOL needProgressBarPanGesture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)currentDotFromCenter;
- (void)scrollToIndex:(long long)arg0;
- (void)progressContainerViewTouchEnded;
- (void)progressContainerViewValueChangedWithOffsetX:(double)arg0;
- (void)swipeToLastStory;
- (void)swipeToNextStory;
- (void)progressContainerViewTouchBegan;
- (id)accessibilityLabels;
- (void)updateProgressWithDuration:(double)arg0 totalCount:(long long)arg1 currentIndex:(long long)arg2 currentProcess:(double)arg3 currentDotFromCenter:(id)arg4 needScrollAnimation:(BOOL)arg5 needAnimation:(BOOL)arg6;
- (BOOL)needProgressBarPanGesture;
- (double)currentProgressPercentage;
- (void)reloadCollectionView;
- (void)setNeedProgressBarPanGesture:(BOOL)arg0;
- (id)initWithCurrentIndex:(long long)arg0 totalCount:(long long)arg1 config:(id)arg2;
- (id)slideView;
- (void)setSlideView:(id)arg0;
- (void)updateProgressWithDuration:(double)arg0 totalCount:(long long)arg1 currentIndex:(long long)arg2 currentProcess:(double)arg3 needAnimation:(BOOL)arg4;
- (void)updateProgressWithDuration:(double)arg0 currentIndex:(long long)arg1 currentProcess:(double)arg2 needAnimation:(BOOL)arg3;
- (unsigned long long)currentProgressIndex;
- (void)tryConsumeGesture;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })currentProgressViewFrame;
- (struct CGSize { double x0; double x1; })currentProgressViewProgressSize;
- (BOOL)isDotsType;
- (void)setDotsView:(id)arg0;
- (void)setLineSlideView:(id)arg0;
- (id)lineSlideView;
- (BOOL)whetherSlide;
- (void)setFixedView:(id)arg0;
- (id)fixedView;
- (void)progressSlideSwipeToLastStory;
- (void)progressSlideSwipeToNextStory;
- (void)progressSlideScrollToIndex:(long long)arg0;
- (void)accessibilityChangedOffset:(double)arg0;
- (id)progressSlideAccessibilityLabels;
- (void)progressFixedSwipeToLastStory;
- (void)progressFixedSwipeToNextStory;
- (id)progressFixedAccessibilityLabels;
- (void)updateProgressConfig:(id)arg0;
- (void)setWhetherSlide:(BOOL)arg0;
- (void)setCount:(long long)arg0;
- (void)setIndex:(long long)arg0;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (struct CGPoint { double x0; double x1; })lastLocation;
- (id)config;
- (void)setLastLocation:(struct CGPoint { double x0; double x1; })arg0;
- (id)delegate;
- (BOOL)gestureRecognizerShouldBegin:(id)arg0;
- (long long)index;
- (long long)count;
- (void)setDelegate:(id)arg0;
- (long long)totalCount;
- (id)panGesture;
- (void)setPanGesture:(id)arg0;
- (void)setupUI;
- (void)panGesture:(id)arg0;
- (id)dotsView;
- (double)containerWidth;

@end