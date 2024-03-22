//
//     Generated by private class-dump
//

@class UIImageView, CAShapeLayer, UILabel, UIView, MASConstraint;

@interface ACCScanObjectTagView : UIView {
    unsigned long long _tagDirection;
    UIView *_roundedRectView;
    UIView *_roundedDotView;
    UIView *_roundedAnimationView;
    UILabel *_tagLabel;
    UIImageView *_imageView;
    UIImageView *_arrowView;
    CAShapeLayer *_roundedRectLayer;
    CAShapeLayer *_maskRadiusLayer;
    CAShapeLayer *_roundedDotLayer;
    CAShapeLayer *_roundedDarkLayer;
    CAShapeLayer *_roundedAnimationLayer;
    MASConstraint *_dotLeftConstraint;
    MASConstraint *_dotRightConstraint;
    MASConstraint *_dotTopConstraint;
    MASConstraint *_dotBottomConstraint;
}

@property (nonatomic) unsigned long long tagDirection;
@property (retain, nonatomic) UIView *roundedRectView;
@property (retain, nonatomic) UIView *roundedDotView;
@property (retain, nonatomic) UIView *roundedAnimationView;
@property (retain, nonatomic) UILabel *tagLabel;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIImageView *arrowView;
@property (retain, nonatomic) CAShapeLayer *roundedRectLayer;
@property (retain, nonatomic) CAShapeLayer *maskRadiusLayer;
@property (retain, nonatomic) CAShapeLayer *roundedDotLayer;
@property (retain, nonatomic) CAShapeLayer *roundedDarkLayer;
@property (retain, nonatomic) CAShapeLayer *roundedAnimationLayer;
@property (retain, nonatomic) MASConstraint *dotLeftConstraint;
@property (retain, nonatomic) MASConstraint *dotRightConstraint;
@property (retain, nonatomic) MASConstraint *dotTopConstraint;
@property (retain, nonatomic) MASConstraint *dotBottomConstraint;

- (id)tagLabel;
- (void)setTagLabel:(id)arg0;
- (void)showWithAnimation;
- (void)setDotLeftConstraint:(id)arg0;
- (void)setDotRightConstraint:(id)arg0;
- (id)dotLeftConstraint;
- (id)dotRightConstraint;
- (void)updateWithText:(id)arg0 image:(id)arg1;
- (void)updateObjectCenter:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 containerSize:(struct CGSize { double x0; double x1; })arg1 completion:(id /* block */)arg2;
- (void)setTagDirection:(unsigned long long)arg0;
- (void)startBreathWithAnimation;
- (id)roundedAnimationView;
- (id)roundedRectView;
- (id)roundedDotView;
- (void)setDotTopConstraint:(id)arg0;
- (id)roundedRectLayer;
- (id)dotBottomConstraint;
- (id)dotTopConstraint;
- (void)setDotBottomConstraint:(id)arg0;
- (unsigned long long)tagDirection;
- (id)roundedAnimationLayer;
- (id)roundedDarkLayer;
- (id)roundedDotLayer;
- (id)maskRadiusLayer;
- (void)setRoundedRectView:(id)arg0;
- (void)setRoundedDotView:(id)arg0;
- (void)setRoundedAnimationView:(id)arg0;
- (void)setRoundedRectLayer:(id)arg0;
- (void)setMaskRadiusLayer:(id)arg0;
- (void)setRoundedDotLayer:(id)arg0;
- (void)setRoundedDarkLayer:(id)arg0;
- (void)setRoundedAnimationLayer:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)imageView;
- (void)setImageView:(id)arg0;
- (id)arrowView;
- (void)setArrowView:(id)arg0;
- (void)setupUI;

@end
