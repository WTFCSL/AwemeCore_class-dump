//
//     Generated by private class-dump
//

@class BDASplashBannerView, BDASplashSlideUpView;

@interface BDASplashSlideUpContainer : BDASplashComplianceBaseSlideView {
    BDASplashBannerView *_bannerView;
    BDASplashSlideUpView *_slideView;
    double _bottomHeight;
    double _bottomMargin;
}

@property (retain, nonatomic) BDASplashBannerView *bannerView;
@property (retain, nonatomic) BDASplashSlideUpView *slideView;
@property (nonatomic) double bottomHeight;
@property (nonatomic) double bottomMargin;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 viewHolder:(id)arg1 viewModel:(id)arg2;
- (void)loadAnimation;
- (void)updateSubviewLayout;
- (id)getSpecificControlsForAnimation;
- (id)slideView;
- (void)setSlideView:(id)arg0;
- (void).cxx_destruct;
- (double)bottomMargin;
- (void)setupView;
- (void)setBottomMargin:(double)arg0;
- (id)bannerView;
- (void)setBannerView:(id)arg0;
- (double)bottomHeight;
- (void)setBottomHeight:(double)arg0;

@end