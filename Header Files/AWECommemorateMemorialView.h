//
//     Generated by private class-dump
//

@class UIImageView, LOTAnimationView, UIView, AWEUserModel, YYLabel;

@interface AWECommemorateMemorialView : UIView {
    BOOL _hasFlowerBloomed;
    UIView *_sepView;
    YYLabel *_descriptionLabel;
    double _descriptionLabelHeight;
    UIView *_backgroundView;
    UIImageView *_flowerLocalView;
    LOTAnimationView *_flowerLottieView;
    AWEUserModel *_user;
}

@property (retain, nonatomic) UIView *sepView;
@property (retain, nonatomic) YYLabel *descriptionLabel;
@property (nonatomic) double descriptionLabelHeight;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIImageView *flowerLocalView;
@property (retain, nonatomic) LOTAnimationView *flowerLottieView;
@property (nonatomic) BOOL hasFlowerBloomed;
@property (retain, nonatomic) AWEUserModel *user;

+ (id)__descriptionWithRIPModel:(id)arg0;
+ (double)__heightOfDescription:(id)arg0;
+ (double)viewHeightWihtRipModel:(id)arg0;

- (id)sepView;
- (void)setSepView:(id)arg0;
- (void)__updateUI;
- (void)__setupUI;
- (BOOL)__isUserUpdated:(id)arg0;
- (void)setDescriptionLabelHeight:(double)arg0;
- (double)descriptionLabelHeight;
- (void)__configDescriptionLabel;
- (void)__updateFlowerLottie;
- (id)flowerLottieView;
- (void)playFlowerLottie;
- (void)__openURL:(id)arg0;
- (void)__addFlowerFromLocalLottiePath:(id)arg0 inView:(id)arg1;
- (id)flowerLocalView;
- (void)__downloadLottieWithURL:(id)arg0 savePath:(id)arg1 lottiePath:(id)arg2 complete:(id /* block */)arg3;
- (void)setFlowerLottieView:(id)arg0;
- (void)flowerLottieViewTapped;
- (BOOL)hasFlowerBloomed;
- (void)playFlowerLottieSwing;
- (void)setHasFlowerBloomed:(BOOL)arg0;
- (void)playFlowerLottieBloom;
- (void)playFlowerLottieSecondLoop;
- (void)playFlowerLottieFirstLoop;
- (void)setFlowerLocalView:(id)arg0;
- (void)setUser:(id)arg0;
- (id)user;
- (id)backgroundView;
- (void).cxx_destruct;
- (void)setDescriptionLabel:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)descriptionLabel;
- (void)setBackgroundView:(id)arg0;
- (void)updateWithUser:(id)arg0;

@end
