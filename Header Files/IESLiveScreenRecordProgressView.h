//
//     Generated by private class-dump
//

@class UILabel, CAShapeLayer, UIView;

@interface IESLiveScreenRecordProgressView : UIView {
    long long _maxTime;
    id /* block */ _actionBlock;
    UIView *_controlView;
    UILabel *_timeLabel;
    UIView *_stopSquareView;
    CAShapeLayer *_progressLayer;
    long long _recordTime;
}

@property (retain, nonatomic) UIView *controlView;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) UIView *stopSquareView;
@property (retain, nonatomic) CAShapeLayer *progressLayer;
@property (nonatomic) long long recordTime;
@property (nonatomic) long long maxTime;
@property (copy, nonatomic) id /* block */ actionBlock;

- (void)setRecordTime:(long long)arg0;
- (long long)recordTime;
- (id)stopSquareView;
- (void)didTapContainerActions:(id)arg0;
- (id)makeCircleLayerColor:(id)arg0 start:(double)arg1 end:(double)arg2;
- (void)remakeProgressLayer;
- (void)setStopSquareView:(id)arg0;
- (void)setMaxTime:(long long)arg0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setTimeLabel:(id)arg0;
- (long long)maxTime;
- (id)controlView;
- (id /* block */)actionBlock;
- (id)timeLabel;
- (void)setActionBlock:(id /* block */)arg0;
- (void)setupViews;
- (id)progressLayer;
- (void)setProgressLayer:(id)arg0;
- (void)setControlView:(id)arg0;

@end
