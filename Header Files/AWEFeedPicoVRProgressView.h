//
//     Generated by private class-dump
//

@class UIPanGestureRecognizer, UIView;
@protocol AWEFeedPicoVRProgressViewDelegate;

@interface AWEFeedPicoVRProgressView : UIView {
    double _progressValue;
    double _totalValue;
    double _interval;
    unsigned long long _progressStatus;
    id<AWEFeedPicoVRProgressViewDelegate> _delegate;
    UIView *_totalView;
    UIView *_currentProgressView;
    UIView *_circleView;
    UIPanGestureRecognizer *_progressPanGesture;
    double _lastValue;
    struct CGPoint { double x; double y; } _lastLocation;
}

@property (retain, nonatomic) UIView *totalView;
@property (retain, nonatomic) UIView *currentProgressView;
@property (retain, nonatomic) UIView *circleView;
@property (retain, nonatomic) UIPanGestureRecognizer *progressPanGesture;
@property (nonatomic) struct CGPoint { double x; double y; } lastLocation;
@property (nonatomic) double lastValue;
@property (nonatomic) double progressValue;
@property (nonatomic) double totalValue;
@property (nonatomic) double interval;
@property (nonatomic) unsigned long long progressStatus;
@property (weak, nonatomic) id<AWEFeedPicoVRProgressViewDelegate> delegate;

- (double)widthWithProgress:(double)arg0 totalValue:(double)arg1;
- (id)totalView;
- (void)setTotalView:(id)arg0;
- (unsigned long long)progressStatus;
- (void)setProgressStatus:(unsigned long long)arg0;
- (void)progressPanGesture:(id)arg0;
- (void)setProgressPanGesture:(id)arg0;
- (id)progressPanGesture;
- (void)progressViewPanTouchBegan;
- (void)progressViewPanValueChanged;
- (void)progressViewPanTouchEnded;
- (void)updateProgressValue:(double)arg0 totalValue:(double)arg1 lastValue:(double)arg2 animated:(BOOL)arg3;
- (void).cxx_destruct;
- (struct CGPoint { double x0; double x1; })lastLocation;
- (void)setLastLocation:(struct CGPoint { double x0; double x1; })arg0;
- (double)interval;
- (void)setProgressValue:(double)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setInterval:(double)arg0;
- (id)delegate;
- (double)lastValue;
- (double)progressValue;
- (void)setDelegate:(id)arg0;
- (double)totalValue;
- (id)circleView;
- (void)setCircleView:(id)arg0;
- (void)setLastValue:(double)arg0;
- (void)setTotalValue:(double)arg0;
- (void)initUI;
- (id)currentProgressView;
- (void)setCurrentProgressView:(id)arg0;

@end