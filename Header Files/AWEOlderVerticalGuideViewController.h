//
//     Generated by private class-dump
//

@class UILabel, LOTAnimationView, UIImageView;

@interface AWEOlderVerticalGuideViewController : UIViewController {
    UILabel *_tipsLabel;
    LOTAnimationView *_guideLOTView;
    UIImageView *_highLightImgView;
}

@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) LOTAnimationView *guideLOTView;
@property (retain, nonatomic) UIImageView *highLightImgView;

- (id)tipsLabel;
- (void)setTipsLabel:(id)arg0;
- (void)__configSubviews;
- (void)showOlderVerticalGuideWithTips:(id)arg0 forTargetView:(id)arg1 targetViewCickHandler:(id /* block */)arg2 complection:(id /* block */)arg3;
- (id)highLightImgView;
- (id)__createImageWithView:(id)arg0;
- (id)guideLOTView;
- (void)setHighLightImgView:(id)arg0;
- (void)__releaseGuideView;
- (void)setGuideLOTView:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end