//
//     Generated by private class-dump
//

@class CAGradientLayer, NSString, UIImageView, UIView, UILabel, BDImageView;

@interface IESGCPExplainCardAtmosphereView : UIView {
    BOOL _inAnimation;
    NSString *_text;
    NSString *_flameTextImageName;
    UIView *_backgroundView;
    CAGradientLayer *_gradientLayer;
    CAGradientLayer *_borderLayer;
    BDImageView *_flameImageView;
    UIImageView *_flameTextImageView;
    UIView *_textContainerView;
    UILabel *_multipleLabel;
    UILabel *_textLabel;
}

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *flameTextImageName;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) CAGradientLayer *borderLayer;
@property (retain, nonatomic) BDImageView *flameImageView;
@property (retain, nonatomic) UIImageView *flameTextImageView;
@property (retain, nonatomic) UIView *textContainerView;
@property (retain, nonatomic) UILabel *multipleLabel;
@property (retain, nonatomic) UILabel *textLabel;
@property (nonatomic) BOOL inAnimation;

- (BOOL)inAnimation;
- (void)setInAnimation:(BOOL)arg0;
- (id)flameImageView;
- (void)setFlameImageView:(id)arg0;
- (void)updateGradientLayerFrame;
- (void)dismissWithAnimation:(BOOL)arg0 completion:(id /* block */)arg1;
- (void)initUserInterface;
- (void)setFlameTextImageView:(id)arg0;
- (id)flameTextImageView;
- (id)flameTextImageName;
- (void)setMultipleLabel:(id)arg0;
- (id)multipleLabel;
- (id)initWithFlameTextImageName:(id)arg0;
- (void)updateAtmosphereText:(id)arg0 needZoomAnimation:(BOOL)arg1;
- (void)setFlameTextImageName:(id)arg0;
- (id)textLabel;
- (id)gradientLayer;
- (id)backgroundView;
- (void).cxx_destruct;
- (void)setText:(id)arg0;
- (id)text;
- (void)layoutSubviews;
- (void)setBackgroundView:(id)arg0;
- (void)setTextLabel:(id)arg0;
- (void)setGradientLayer:(id)arg0;
- (id)borderLayer;
- (id)textContainerView;
- (void)setTextContainerView:(id)arg0;
- (void)setBorderLayer:(id)arg0;

@end