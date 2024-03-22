//
//     Generated by private class-dump
//

@class UILabel, CJPayBytePayCreditPayMethodModel, UIView;

@interface CJPayBytePayMethodCreditPayItemCell : UICollectionViewCell {
    CJPayBytePayCreditPayMethodModel *_model;
    UIView *_borderView;
    UILabel *_titleLabel;
    UILabel *_contentLabel;
    UILabel *_iconLabel;
    UIView *_iconBgView;
    UIView *_iconView;
}

@property (retain, nonatomic) UIView *borderView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UILabel *iconLabel;
@property (retain, nonatomic) UIView *iconBgView;
@property (retain, nonatomic) UIView *iconView;
@property (retain, nonatomic) CJPayBytePayCreditPayMethodModel *model;

- (void)p_setupUI;
- (id)iconBgView;
- (void)setIconBgView:(id)arg0;
- (void)setModel:(id)arg0;
- (void).cxx_destruct;
- (id)iconView;
- (id)model;
- (void)setIconView:(id)arg0;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setTitleLabel:(id)arg0;
- (id)contentLabel;
- (void)setContentLabel:(id)arg0;
- (id)borderView;
- (void)setBorderView:(id)arg0;
- (id)iconLabel;
- (void)setIconLabel:(id)arg0;

@end