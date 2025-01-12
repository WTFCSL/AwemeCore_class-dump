//
//     Generated by private class-dump
//

@class UILabel, UIView;

@interface IESECSKUInstallmentItemCell : UICollectionViewCell {
    UILabel *_installmentInfoLabel;
    UILabel *_commissionLabel;
    UILabel *_benefitLabel;
    UIView *_bgView;
}

@property (retain, nonatomic) UILabel *installmentInfoLabel;
@property (retain, nonatomic) UILabel *commissionLabel;
@property (retain, nonatomic) UILabel *benefitLabel;
@property (retain, nonatomic) UIView *bgView;

- (id)benefitLabel;
- (void)setBenefitLabel:(id)arg0;
- (void)updateWithModel:(id)arg0 state:(long long)arg1;
- (void)setInstallmentInfoLabel:(id)arg0;
- (id)installmentInfoLabel;
- (void)setCommissionLabel:(id)arg0;
- (id)commissionLabel;
- (void)updateTopRightLabelCorner;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)prepareForReuse;
- (id)bgView;
- (void)setBgView:(id)arg0;
- (void)setupUI;
- (void)updateUIWithState:(long long)arg0;

@end
