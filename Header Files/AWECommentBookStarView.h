//
//     Generated by private class-dump
//

@class UIStackView, LOTAnimationView, UIImageView, NSDictionary;

@interface AWECommentBookStarView : UIView {
    float _bookScore;
    NSDictionary *_singleDict;
    NSDictionary *_finalDict;
    UIStackView *_starStackView;
    LOTAnimationView *_ratingAnimationView;
    UIImageView *_starImageFirstView;
    UIImageView *_starImageSecondView;
    UIImageView *_starImageThirdView;
    UIImageView *_starImageFouthView;
    UIImageView *_starImageFifthView;
    LOTAnimationView *_lottieView1;
    LOTAnimationView *_lottieView2;
    LOTAnimationView *_lottieView3;
    LOTAnimationView *_lottieView4;
    LOTAnimationView *_finalLottieView;
}

@property (retain, nonatomic) UIStackView *starStackView;
@property (retain, nonatomic) LOTAnimationView *ratingAnimationView;
@property (retain, nonatomic) UIImageView *starImageFirstView;
@property (retain, nonatomic) UIImageView *starImageSecondView;
@property (retain, nonatomic) UIImageView *starImageThirdView;
@property (retain, nonatomic) UIImageView *starImageFouthView;
@property (retain, nonatomic) UIImageView *starImageFifthView;
@property (retain, nonatomic) LOTAnimationView *lottieView1;
@property (retain, nonatomic) LOTAnimationView *lottieView2;
@property (retain, nonatomic) LOTAnimationView *lottieView3;
@property (retain, nonatomic) LOTAnimationView *lottieView4;
@property (retain, nonatomic) LOTAnimationView *finalLottieView;
@property (nonatomic) float bookScore;
@property (retain, nonatomic) NSDictionary *singleDict;
@property (retain, nonatomic) NSDictionary *finalDict;

- (float)getBookScore;
- (void)setSingleDict:(id)arg0;
- (void)setFinalDict:(id)arg0;
- (id)singleDict;
- (id)finalDict;
- (void)setLottieViewPlayProgress:(float)arg0;
- (id)starStackView;
- (id)starImageFirstView;
- (id)starImageSecondView;
- (id)starImageThirdView;
- (id)starImageFouthView;
- (id)starImageFifthView;
- (void)starTappedFrist:(id)arg0;
- (void)starTappedSecond:(id)arg0;
- (void)starTappedThird:(id)arg0;
- (void)starTappedFourth:(id)arg0;
- (void)starFinalTapped:(id)arg0;
- (id)configSingleLottie;
- (id)configTotalLottie;
- (void)changeBookScore:(float)arg0;
- (void)disMissAllLottieView;
- (void)setLottieView1:(id)arg0;
- (id)lottieView1;
- (void)setLottieView2:(id)arg0;
- (id)lottieView2;
- (void)setLottieView3:(id)arg0;
- (id)lottieView3;
- (void)setLottieView4:(id)arg0;
- (id)lottieView4;
- (void)setFinalLottieView:(id)arg0;
- (id)finalLottieView;
- (float)bookScore;
- (void)setBookScore:(float)arg0;
- (void)setStarStackView:(id)arg0;
- (id)ratingAnimationView;
- (void)setRatingAnimationView:(id)arg0;
- (void)setStarImageFirstView:(id)arg0;
- (void)setStarImageSecondView:(id)arg0;
- (void)setStarImageThirdView:(id)arg0;
- (void)setStarImageFouthView:(id)arg0;
- (void)setStarImageFifthView:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)setupUI;
- (void)showImage;

@end
