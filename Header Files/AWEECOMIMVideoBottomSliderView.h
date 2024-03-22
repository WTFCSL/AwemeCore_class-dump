//
//     Generated by private class-dump
//

@class UIPanGestureRecognizer, UIView;
@protocol AWEECOMIMVideoBottomSliderViewDelegate;

@interface AWEECOMIMVideoBottomSliderView : AWEECOMIMCustomBaseView {
    BOOL _duringDrag;
    double _cacheProgress;
    double _watchedProgress;
    id<AWEECOMIMVideoBottomSliderViewDelegate> _delegate;
    UIView *_watchedProgressView;
    UIView *_cacheProgressView;
    UIView *_backView;
    UIView *_thumbView;
    UIView *_pointView;
    UIPanGestureRecognizer *_panGes;
    struct CGPoint { double x; double y; } _lastPanLocation;
}

@property (retain, nonatomic) UIView *watchedProgressView;
@property (retain, nonatomic) UIView *cacheProgressView;
@property (retain, nonatomic) UIView *backView;
@property (retain, nonatomic) UIView *thumbView;
@property (retain, nonatomic) UIView *pointView;
@property (retain, nonatomic) UIPanGestureRecognizer *panGes;
@property (nonatomic) struct CGPoint { double x; double y; } lastPanLocation;
@property (nonatomic) BOOL duringDrag;
@property (nonatomic) double cacheProgress;
@property (nonatomic) double watchedProgress;
@property (weak, nonatomic) id<AWEECOMIMVideoBottomSliderViewDelegate> delegate;

- (id)pointView;
- (void)setPointView:(id)arg0;
- (id)panGes;
- (void)setPanGes:(id)arg0;
- (void)handlePanGes:(id)arg0;
- (void)setDuringDrag:(BOOL)arg0;
- (void)setWatchedProgress:(double)arg0;
- (void)updateThumbFrame;
- (void)setCacheProgress:(double)arg0;
- (double)cacheProgress;
- (double)watchedProgress;
- (id)watchedProgressView;
- (void)setWatchedProgressView:(id)arg0;
- (id)cacheProgressView;
- (void)setCacheProgressView:(id)arg0;
- (BOOL)duringDrag;
- (void)setBackView:(id)arg0;
- (void).cxx_destruct;
- (id)thumbView;
- (id)delegate;
- (id)backView;
- (void)customInit;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg0;
- (void)setThumbView:(id)arg0;
- (struct CGPoint { double x0; double x1; })lastPanLocation;
- (void)setLastPanLocation:(struct CGPoint { double x0; double x1; })arg0;

@end