//
//     Generated by private class-dump
//

@class UIButton, IESLiveGCDTimer;

@interface IESSoloKTVSkipView : UIView {
    id /* block */ _onCountDownFire;
    UIButton *_skipBtn;
    IESLiveGCDTimer *_skipTimer;
}

@property (retain, nonatomic) UIButton *skipBtn;
@property (retain, nonatomic) IESLiveGCDTimer *skipTimer;
@property (copy, nonatomic) id /* block */ onCountDownFire;

- (void)closeTimer;
- (id)skipBtn;
- (void)setSkipBtn:(id)arg0;
- (void)setOnCountDownFire:(id /* block */)arg0;
- (void)showWithSecond:(double)arg0;
- (id /* block */)onCountDownFire;
- (void)didClickSkipButton:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)startTimer:(double)arg0;
- (id)skipTimer;
- (void)setSkipTimer:(id)arg0;

@end
