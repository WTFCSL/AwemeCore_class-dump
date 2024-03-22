//
//     Generated by private class-dump
//

@class CJPaySignPayModel, UIImageView, UILabel, UIView;

@interface CJPaySignPayDeductMethodView : UIView {
    id /* block */ _payMethodClick;
    UILabel *_deductMethodTitleLabel;
    UIView *_deductContentView;
    UIImageView *_deductIconImageView;
    UILabel *_deductTitleLabel;
    UILabel *_subDeductTitleLabel;
    UIImageView *_deductArrowImageView;
    CJPaySignPayModel *_model;
}

@property (retain, nonatomic) UILabel *deductMethodTitleLabel;
@property (retain, nonatomic) UIView *deductContentView;
@property (retain, nonatomic) UIImageView *deductIconImageView;
@property (retain, nonatomic) UILabel *deductTitleLabel;
@property (retain, nonatomic) UILabel *subDeductTitleLabel;
@property (retain, nonatomic) UIImageView *deductArrowImageView;
@property (retain, nonatomic) CJPaySignPayModel *model;
@property (copy, nonatomic) id /* block */ payMethodClick;

- (void)setPayMethodClick:(id /* block */)arg0;
- (void)updateDeductMethodViewWithConfig:(id)arg0;
- (id /* block */)payMethodClick;
- (id)deductMethodTitleLabel;
- (id)deductContentView;
- (id)deductArrowImageView;
- (id)deductIconImageView;
- (id)deductTitleLabel;
- (id)subDeductTitleLabel;
- (void)p_arrowClick;
- (void)setDeductMethodTitleLabel:(id)arg0;
- (void)setDeductContentView:(id)arg0;
- (void)setDeductIconImageView:(id)arg0;
- (void)setDeductTitleLabel:(id)arg0;
- (void)setSubDeductTitleLabel:(id)arg0;
- (void)setDeductArrowImageView:(id)arg0;
- (id)initWithModel:(id)arg0;
- (void)setModel:(id)arg0;
- (void).cxx_destruct;
- (id)model;
- (void)setupConstraints;
- (void)setupUI;

@end
