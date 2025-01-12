//
//     Generated by private class-dump
//

@class UIImageView, NSTimer, IESLiveVoiceMeterView, UILabel, LOTAnimationView;

@interface IESLiveVoiceMsgSendTipView : UIView {
    BOOL _isCountdown;
    double _maxRecordDuration;
    double _recordDuration;
    IESLiveVoiceMeterView *_meterView;
    UIImageView *_cancelView;
    NSTimer *_recordTimer;
    UILabel *_tipLabel;
    LOTAnimationView *_countdownView;
    id /* block */ _maxTimeBLock;
}

@property (retain, nonatomic) IESLiveVoiceMeterView *meterView;
@property (retain, nonatomic) UIImageView *cancelView;
@property (weak, nonatomic) NSTimer *recordTimer;
@property (retain, nonatomic) UILabel *tipLabel;
@property (nonatomic) BOOL isCountdown;
@property (retain, nonatomic) LOTAnimationView *countdownView;
@property (copy, nonatomic) id /* block */ maxTimeBLock;
@property (nonatomic) double maxRecordDuration;
@property (nonatomic) double recordDuration;

- (void)setRecordDuration:(double)arg0;
- (double)recordDuration;
- (id)cancelView;
- (void)setCancelView:(id)arg0;
- (void)countTime;
- (double)maxRecordDuration;
- (void)setMaxRecordDuration:(double)arg0;
- (void)setRecordTimer:(id)arg0;
- (id)recordTimer;
- (void)setMeterView:(id)arg0;
- (id)meterView;
- (void)volumeChange:(float)arg0;
- (void)perpareCancelRecord;
- (void)continueRecord;
- (void)endRecord;
- (void)startRecordWithMaxTimeBlock:(id /* block */)arg0;
- (void)setIsCountdown:(BOOL)arg0;
- (void)setMaxTimeBLock:(id /* block */)arg0;
- (BOOL)isCountdown;
- (id /* block */)maxTimeBLock;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)tipLabel;
- (void)setTipLabel:(id)arg0;
- (void)setupView;
- (id)countdownView;
- (void)setCountdownView:(id)arg0;

@end
