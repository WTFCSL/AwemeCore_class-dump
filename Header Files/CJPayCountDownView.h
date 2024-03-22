//
//     Generated by private class-dump
//

@class CJPayTimer, UILabel, NSString;

@interface CJPayCountDownView : UIView <CJPayTimerProtocol> {
    id /* block */ _timeoutBlock;
    long long _curCount;
    long long _interval;
    CJPayTimer *_timer;
    UILabel *_minuteLabel;
    UILabel *_leftSeparateLabel;
    UILabel *_secondLabel;
    UILabel *_rightSeparateLabel;
    UILabel *_mSecondLabel;
}

@property (nonatomic) long long curCount;
@property (nonatomic) long long interval;
@property (retain, nonatomic) CJPayTimer *timer;
@property (retain, nonatomic) UILabel *minuteLabel;
@property (retain, nonatomic) UILabel *leftSeparateLabel;
@property (retain, nonatomic) UILabel *secondLabel;
@property (retain, nonatomic) UILabel *rightSeparateLabel;
@property (retain, nonatomic) UILabel *mSecondLabel;
@property (copy, nonatomic) id /* block */ timeoutBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_setupUI;
- (void)currentCountChangeTo:(int)arg0;
- (id)leftSeparateLabel;
- (id)rightSeparateLabel;
- (void)setCurCount:(long long)arg0;
- (void)p_updateWithCurrenCount:(long long)arg0;
- (void)startTimerWithCountDownTime:(long long)arg0;
- (long long)curCount;
- (void)setMinuteLabel:(id)arg0;
- (void)setLeftSeparateLabel:(id)arg0;
- (void)setRightSeparateLabel:(id)arg0;
- (void)setMSecondLabel:(id)arg0;
- (id)timer;
- (void).cxx_destruct;
- (void)setTimeoutBlock:(id /* block */)arg0;
- (id /* block */)timeoutBlock;
- (long long)interval;
- (id)initWithInterval:(long long)arg0;
- (void)setInterval:(long long)arg0;
- (void)setTimer:(id)arg0;
- (id)minuteLabel;
- (id)secondLabel;
- (void)setSecondLabel:(id)arg0;
- (id)mSecondLabel;

@end