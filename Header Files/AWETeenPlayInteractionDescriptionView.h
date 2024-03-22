//
//     Generated by private class-dump
//

@class UIView, UILabel, AWETeenDescriptionTextView, CAGradientLayer, NSTextStorage, MASConstraint, AWETeenDescriptionContext, UIScrollView;

@interface AWETeenPlayInteractionDescriptionView : UIView {
    UIView *_descriptionGradientView;
    AWETeenDescriptionTextView *_descriptionTextView;
    UIScrollView *_descriptionScrollView;
    UILabel *_packLabel;
    UIScrollView *_outerScrollView;
    UIView *_descriptionContentView;
    CAGradientLayer *_gradientLayer;
    MASConstraint *_descriptionScrollViewHeightConstraint;
    NSTextStorage *_descriptionTextViewString;
    double _width;
    AWETeenDescriptionContext *_descriptionContext;
}

@property (retain, nonatomic) UIScrollView *outerScrollView;
@property (retain, nonatomic) UIView *descriptionContentView;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) MASConstraint *descriptionScrollViewHeightConstraint;
@property (retain, nonatomic) NSTextStorage *descriptionTextViewString;
@property (nonatomic) double width;
@property (retain, nonatomic) AWETeenDescriptionContext *descriptionContext;
@property (retain, nonatomic) UIView *descriptionGradientView;
@property (retain, nonatomic) AWETeenDescriptionTextView *descriptionTextView;
@property (retain, nonatomic) UIScrollView *descriptionScrollView;
@property (retain, nonatomic) UILabel *packLabel;

- (id)descriptionGradientView;
- (id)packLabel;
- (id)descriptionScrollView;
- (id)descriptionContentView;
- (void)setDescriptionScrollViewHeightConstraint:(id)arg0;
- (id)descriptionScrollViewHeightConstraint;
- (id)descriptionTextViewString;
- (id)initWithViewWidth:(double)arg0 withDescriptionContext:(id)arg1;
- (void)setScrollMasConstraint:(double)arg0 withAttribueString:(id)arg1;
- (void)resetMasConstraint;
- (void)updateDescriptionGradientViewMask:(BOOL)arg0 gradientHeight:(double)arg1;
- (void)updateDescriptionWidth:(double)arg0;
- (void)setDescriptionGradientView:(id)arg0;
- (void)setDescriptionScrollView:(id)arg0;
- (void)setPackLabel:(id)arg0;
- (void)setOuterScrollView:(id)arg0;
- (void)setDescriptionContentView:(id)arg0;
- (void)setDescriptionTextViewString:(id)arg0;
- (id)gradientLayer;
- (void).cxx_destruct;
- (void)setWidth:(double)arg0;
- (double)width;
- (void)setGradientLayer:(id)arg0;
- (void)setupUI;
- (id)descriptionTextView;
- (void)setDescriptionTextView:(id)arg0;
- (id)outerScrollView;
- (id)descriptionContext;
- (void)setDescriptionContext:(id)arg0;

@end