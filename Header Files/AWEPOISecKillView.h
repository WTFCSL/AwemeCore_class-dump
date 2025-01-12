//
//     Generated by private class-dump
//

@class NSString, UIImageView, NSTimer, UILabel;

@interface AWEPOISecKillView : UIView {
    UIImageView *_backGroundView;
    UILabel *_countDownLabel;
    UILabel *_numberLabel;
    long long _targetTime;
    NSString *_countDownText;
    NSTimer *_countDownTimer;
}

@property (retain, nonatomic) UIImageView *backGroundView;
@property (retain, nonatomic) UILabel *countDownLabel;
@property (retain, nonatomic) UILabel *numberLabel;
@property (nonatomic) long long targetTime;
@property (copy, nonatomic) NSString *countDownText;
@property (retain, nonatomic) NSTimer *countDownTimer;

- (id)countDownLabel;
- (void)setCountDownLabel:(id)arg0;
- (void)loadCountdownTimer;
- (id)backGroundView;
- (void)setBackGroundView:(id)arg0;
- (id)countDownText;
- (id)timeText:(long long)arg0;
- (void)updateCountdownNumber;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 secKillInfo:(id)arg1;
- (void)setCountDownText:(id)arg0;
- (void).cxx_destruct;
- (void)cleanTimer;
- (long long)targetTime;
- (void)setTargetTime:(long long)arg0;
- (void)setupUI;
- (void)setCountDownTimer:(id)arg0;
- (id)countDownTimer;
- (id)numberLabel;
- (void)setNumberLabel:(id)arg0;

@end
