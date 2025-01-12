//
//     Generated by private class-dump
//

@class UIImageView, UILabel, UIView, MASConstraint;

@interface CJPayPayAgainNewCardCommonView : UIView {
    UIImageView *_firstImageView;
    UIImageView *_secondImageView;
    UIImageView *_thirdImageView;
    UILabel *_descLabel;
    UIView *_discountContentView;
    UILabel *_discountLabel;
    unsigned long long _type;
    MASConstraint *_selfLeftBaseFirstImageViewLeftConstraint;
    MASConstraint *_selfLeftBaseDiscountLeftConstraint;
}

@property (retain, nonatomic) UIImageView *firstImageView;
@property (retain, nonatomic) UIImageView *secondImageView;
@property (retain, nonatomic) UIImageView *thirdImageView;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UIView *discountContentView;
@property (retain, nonatomic) UILabel *discountLabel;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) MASConstraint *selfLeftBaseFirstImageViewLeftConstraint;
@property (retain, nonatomic) MASConstraint *selfLeftBaseDiscountLeftConstraint;

- (id)descLabel;
- (void)setDescLabel:(id)arg0;
- (void)setDiscountLabel:(id)arg0;
- (id)discountLabel;
- (void)p_setupUI;
- (id)firstImageView;
- (id)thirdImageView;
- (id)secondImageView;
- (void)setFirstImageView:(id)arg0;
- (void)setSecondImageView:(id)arg0;
- (void)setThirdImageView:(id)arg0;
- (void)p_addCornerBackgroundViewToView:(id)arg0;
- (void)refreshWithHintInfo:(id)arg0;
- (id)selfLeftBaseDiscountLeftConstraint;
- (id)selfLeftBaseFirstImageViewLeftConstraint;
- (id)discountContentView;
- (void)setSelfLeftBaseFirstImageViewLeftConstraint:(id)arg0;
- (void)setSelfLeftBaseDiscountLeftConstraint:(id)arg0;
- (void)setDiscountContentView:(id)arg0;
- (void).cxx_destruct;
- (unsigned long long)type;
- (id)initWithType:(unsigned long long)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setType:(unsigned long long)arg0;

@end
