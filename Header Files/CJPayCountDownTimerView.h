//
//     Generated by private class-dump
//

@class UILabel;
@protocol CJPayCountDownTimerViewDelegate;

@interface CJPayCountDownTimerView : CJPayTimerView {
    BOOL _curTimeIsValid;
    id<CJPayCountDownTimerViewDelegate> _delegate;
    long long _style;
    UILabel *_titleL;
}

@property (retain, nonatomic) UILabel *titleL;
@property (nonatomic) BOOL curTimeIsValid;
@property (weak, nonatomic) id<CJPayCountDownTimerViewDelegate> delegate;
@property (nonatomic) long long style;

- (void)p_setupUI;
- (BOOL)curTimeIsValid;
- (id)titleL;
- (void)startTimerWithCountTime:(int)arg0;
- (void)setCurTimeIsValid:(BOOL)arg0;
- (void)currentCountChangeTo:(int)arg0;
- (void)setTitleL:(id)arg0;
- (long long)style;
- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)reset;
- (void)setStyle:(long long)arg0;

@end
