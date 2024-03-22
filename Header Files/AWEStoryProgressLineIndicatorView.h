//
//     Generated by private class-dump
//

@class AWEStoryProgressContainerConfig, UIView;
@protocol AWEStoryProgressSlideViewDelegate;

@interface AWEStoryProgressLineIndicatorView : UIView {
    BOOL _currentProgressNeedAnimation;
    id<AWEStoryProgressSlideViewDelegate> _delegate;
    unsigned long long _currentProgressIndex;
    double _currentProgressPercentage;
    long long _progressTotalCount;
    double _currentProgressDuration;
    AWEStoryProgressContainerConfig *_config;
    UIView *_sliderView;
    UIView *_indicatorView;
    struct CGSize { double width; double height; } _currentProgressViewProgressSize;
}

@property (nonatomic) long long progressTotalCount;
@property (nonatomic) double currentProgressDuration;
@property (nonatomic) BOOL currentProgressNeedAnimation;
@property (retain, nonatomic) AWEStoryProgressContainerConfig *config;
@property (retain, nonatomic) UIView *sliderView;
@property (retain, nonatomic) UIView *indicatorView;
@property (weak, nonatomic) id<AWEStoryProgressSlideViewDelegate> delegate;
@property (nonatomic) unsigned long long currentProgressIndex;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } currentProgressViewFrame;
@property (nonatomic) double currentProgressPercentage;
@property (nonatomic) struct CGSize { double width; double height; } currentProgressViewProgressSize;

- (double)currentProgressPercentage;
- (id)initWithCurrentIndex:(long long)arg0 totalCount:(long long)arg1 config:(id)arg2;
- (void)updateProgressWithDuration:(double)arg0 currentIndex:(long long)arg1 currentProcess:(double)arg2 needAnimation:(BOOL)arg3;
- (void)setCurrentProgressIndex:(unsigned long long)arg0;
- (unsigned long long)currentProgressIndex;
- (void)setCurrentProgressPercentage:(double)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })currentProgressViewFrame;
- (struct CGSize { double x0; double x1; })currentProgressViewProgressSize;
- (void)setCurrentProgressViewProgressSize:(struct CGSize { double x0; double x1; })arg0;
- (void)updateProgressWithDuration:(double)arg0 totalCount:(long long)arg1 currentIndex:(long long)arg2 currentProcess:(double)arg3 needAnimation:(BOOL)arg4 needScrollAnimation:(BOOL)arg5;
- (long long)progressTotalCount;
- (void)setProgressTotalCount:(long long)arg0;
- (void)setCurrentProgressDuration:(double)arg0;
- (void)setCurrentProgressNeedAnimation:(BOOL)arg0;
- (void)updateIndicatorPositionWith:(BOOL)arg0;
- (double)indicatorMoveDistance;
- (double)indicatorWidth;
- (double)slideViewWidth;
- (double)currentProgressDuration;
- (BOOL)currentProgressNeedAnimation;
- (id)sliderView;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (id)config;
- (id)delegate;
- (void)setSliderView:(id)arg0;
- (id)indicatorView;
- (void)setDelegate:(id)arg0;
- (long long)totalCount;
- (void)setIndicatorView:(id)arg0;
- (void)setupUI;

@end
