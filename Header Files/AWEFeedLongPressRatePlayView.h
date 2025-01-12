//
//     Generated by private class-dump
//

@class LOTAnimationView, UILabel, UIView;

@interface AWEFeedLongPressRatePlayView : UIView {
    UIView *_containerView;
    LOTAnimationView *_playRateLottieView;
    UILabel *_rateDescLabel;
}

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) LOTAnimationView *playRateLottieView;
@property (retain, nonatomic) UILabel *rateDescLabel;

- (id)rateDescLabel;
- (void)setUI;
- (id)playRateLottieView;
- (id)initWithRateValue:(long long)arg0;
- (void)showRatePlayLottieOnView:(id)arg0;
- (void)hiddeRatePlayLottie;
- (void)updateRVUIWithTopOffset:(double)arg0 rateTitle:(id)arg1;
- (void)setPlayRateLottieView:(id)arg0;
- (void)setRateDescLabel:(id)arg0;
- (void).cxx_destruct;
- (void)setContainerView:(id)arg0;
- (id)containerView;
- (id)hitTest:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;

@end
