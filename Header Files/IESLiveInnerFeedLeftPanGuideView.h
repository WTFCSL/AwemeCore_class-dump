//
//     Generated by private class-dump
//

@class YYLabel, UIImageView, CAGradientLayer;

@interface IESLiveInnerFeedLeftPanGuideView : UIView {
    YYLabel *_textLabel;
    UIImageView *_guideImage;
    CAGradientLayer *_gradientLayer;
}

@property (retain, nonatomic) YYLabel *textLabel;
@property (retain, nonatomic) UIImageView *guideImage;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;

- (void)setupLayers;
- (id)__guideText;
- (id)textLabel;
- (id)gradientLayer;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setTextLabel:(id)arg0;
- (void)setGradientLayer:(id)arg0;
- (id)guideImage;
- (void)setGuideImage:(id)arg0;
- (void)layoutUI;

@end