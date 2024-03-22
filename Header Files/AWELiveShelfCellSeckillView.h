//
//     Generated by private class-dump
//

@class UIImageView, CALayer, UIView, UILabel;

@interface AWELiveShelfCellSeckillView : UIView {
    BOOL _isWarmUpStatus;
    UIView *_containerView;
    UIImageView *_progressView;
    CALayer *_progressMaskLayer;
    UILabel *_progressLabel;
    UILabel *_timeLabel;
    UILabel *_warmUpLabel;
    UILabel *_warmUpPriceLabel;
    unsigned long long _progress;
    double _startTime;
    double _endTime;
    double _minVariableLength;
}

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *progressView;
@property (retain, nonatomic) CALayer *progressMaskLayer;
@property (retain, nonatomic) UILabel *progressLabel;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) UILabel *warmUpLabel;
@property (retain, nonatomic) UILabel *warmUpPriceLabel;
@property (nonatomic) unsigned long long progress;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (nonatomic) double minVariableLength;
@property (nonatomic) BOOL isWarmUpStatus;

- (void)updateServerTime:(double)arg0;
- (void)setMinVariableLength:(double)arg0;
- (BOOL)isWarmUpStatus;
- (id)warmUpLabel;
- (id)warmUpPriceLabel;
- (void)setIsWarmUpStatus:(BOOL)arg0;
- (void)updateTimeLabelWithServerTime:(double)arg0;
- (double)minVariableLength;
- (void)configWithProgress:(double)arg0 stock:(long long)arg1 skillStock:(long long)arg2 serverTime:(double)arg3 startTime:(double)arg4 endTime:(double)arg5 isWarmUpStatus:(BOOL)arg6 price:(id)arg7;
- (void)setWarmUpLabel:(id)arg0;
- (void)setWarmUpPriceLabel:(id)arg0;
- (void)setStartTime:(double)arg0;
- (void).cxx_destruct;
- (void)setContainerView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (double)endTime;
- (void)setTimeLabel:(id)arg0;
- (id)progressView;
- (double)startTime;
- (void)setProgressView:(id)arg0;
- (id)containerView;
- (unsigned long long)progress;
- (void)layoutSubviews;
- (void)setEndTime:(double)arg0;
- (void)setProgress:(unsigned long long)arg0;
- (id)timeLabel;
- (void)setupUI;
- (void)updateSubviews;
- (id)progressLabel;
- (void)setProgressLabel:(id)arg0;
- (id)progressMaskLayer;
- (void)setProgressMaskLayer:(id)arg0;

@end