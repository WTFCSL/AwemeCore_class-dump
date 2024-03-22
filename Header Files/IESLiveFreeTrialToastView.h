//
//     Generated by private class-dump
//

@class UILabel, UIButton, UIView;

@interface IESLiveFreeTrialToastView : UIView {
    id /* block */ _buyTicketAction;
    UIView *_bottomView;
    UILabel *_tipLabel;
    UIButton *_buyTicketButton;
}

@property (weak, nonatomic) UIView *bottomView;
@property (weak, nonatomic) UILabel *tipLabel;
@property (weak, nonatomic) UIButton *buyTicketButton;
@property (copy, nonatomic) id /* block */ buyTicketAction;

- (id)buyTicketButton;
- (void)setBuyTicketButton:(id)arg0;
- (void)buyTicketButtonAction:(id)arg0;
- (id /* block */)buyTicketAction;
- (void)updateTipInfo:(id)arg0;
- (void)setBuyTicketAction:(id /* block */)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;
- (id)bottomView;
- (id)tipLabel;
- (void)setTipLabel:(id)arg0;
- (void)setupView;
- (void)setBottomView:(id)arg0;

@end
