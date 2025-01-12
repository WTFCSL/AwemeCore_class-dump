//
//     Generated by private class-dump
//

@class AWECommerceLiveComponentModel, NSString, UIImageView, NSTimer, UIView, UILabel, UIButton;

@interface AWELiveCommercialLotteryFloatingView : UIView <HTSLivePluginLayoutView> {
    BOOL _shouldActivate;
    id /* block */ _countdownCompletionBlock;
    UIButton *_lotteryButton;
    UIImageView *_imageView;
    UIView *_backgroundView;
    UILabel *_countLabel;
    UIView *_centerBgView;
    UIView *_bgImageSizeView;
    NSTimer *_countdownTimer;
    AWECommerceLiveComponentModel *_componentModel;
    long long _countdownTime;
}

@property (retain, nonatomic) UIButton *lotteryButton;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UILabel *countLabel;
@property (nonatomic) BOOL shouldActivate;
@property (retain, nonatomic) UIView *centerBgView;
@property (retain, nonatomic) UIView *bgImageSizeView;
@property (retain, nonatomic) NSTimer *countdownTimer;
@property (retain, nonatomic) AWECommerceLiveComponentModel *componentModel;
@property (nonatomic) long long countdownTime;
@property (copy, nonatomic) id /* block */ countdownCompletionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setComponentModel:(id)arg0;
- (id)componentModel;
- (void)updateTime:(long long)arg0;
- (long long)countdownTime;
- (id)countdownTimer;
- (void)setCountdownTimer:(id)arg0;
- (void)setCountdownTime:(long long)arg0;
- (struct CGSize { double x0; double x1; })pluginLayoutContentSize;
- (void)startShowAnimation:(id /* block */)arg0;
- (void)configWithComponentModel:(id)arg0;
- (void)setCountdownCompletionBlock:(id /* block */)arg0;
- (void)showTimeCountdown;
- (id)centerBgView;
- (id)bgImageSizeView;
- (void)setShouldActivate:(BOOL)arg0;
- (id /* block */)countdownCompletionBlock;
- (id)lotteryButton;
- (void)setLotteryButton:(id)arg0;
- (void)setCenterBgView:(id)arg0;
- (void)setBgImageSizeView:(id)arg0;
- (void)invalidateTimer;
- (id)backgroundView;
- (void).cxx_destruct;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)fontDescriptor;
- (void)setImageView:(id)arg0;
- (id)viewType;
- (void)dealloc;
- (void)setBackgroundView:(id)arg0;
- (void)countdown;
- (id)countLabel;
- (void)setCountLabel:(id)arg0;
- (BOOL)shouldActivate;

@end
