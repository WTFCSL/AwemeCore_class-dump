//
//     Generated by private class-dump
//

@class UIButton, UILabel, UIView;

@interface IESLiveChargeCoinRenameAlert : UIView {
    id /* block */ _confirmBlock;
    UIView *_containerView;
    UIButton *_actionButton;
    UILabel *_titleLabel;
    UILabel *_desLabel;
}

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIButton *actionButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *desLabel;
@property (copy, nonatomic) id /* block */ confirmBlock;

- (id /* block */)confirmBlock;
- (void)setConfirmBlock:(id /* block */)arg0;
- (id)desLabel;
- (void)setDesLabel:(id)arg0;
- (void)tapActionButton;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setContainerView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)containerView;
- (void)setTitleLabel:(id)arg0;
- (void)setupUI;
- (id)actionButton;
- (void)setActionButton:(id)arg0;

@end