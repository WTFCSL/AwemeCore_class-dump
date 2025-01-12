//
//     Generated by private class-dump
//

@class UIControl, UIStackView, UIImageView, UIView, UILabel, BDPCDDynamicCardDashedLineView;

@interface AWEECOMIMDynamicStepperView : AWEECOMIMDynamicCardBaseElementView {
    UIControl *_tapControl;
    UIImageView *_iconView;
    BDPCDDynamicCardDashedLineView *_tipLineView;
    UIStackView *_stackView;
    UIView *_titleView;
    UILabel *_titleLabel;
    UILabel *_distinctLabel;
    UILabel *_descLabel;
    UILabel *_timeLabel;
}

@property (retain, nonatomic) UIControl *tapControl;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) BDPCDDynamicCardDashedLineView *tipLineView;
@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) UIView *titleView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *distinctLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UILabel *timeLabel;

+ (double)designHeightWithDescLineNum:(unsigned long long)arg0;

- (id)descLabel;
- (void)setDescLabel:(id)arg0;
- (id)distinctLabel;
- (void)setDescLineNumber:(unsigned long long)arg0;
- (unsigned long long)descLineNumber;
- (id)tapControl;
- (void)setTapControl:(id)arg0;
- (void)setDistinctLabel:(id)arg0;
- (double)heightWithElementModel:(id)arg0;
- (void)updateWithElememtModel:(id)arg0;
- (id)tipLineView;
- (void)setTipLineView:(id)arg0;
- (void).cxx_destruct;
- (id)iconView;
- (void)setIconView:(id)arg0;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setTimeLabel:(id)arg0;
- (void)setTitleView:(id)arg0;
- (id)stackView;
- (void)setStackView:(id)arg0;
- (void)setTitleLabel:(id)arg0;
- (id)timeLabel;
- (id)titleView;

@end
