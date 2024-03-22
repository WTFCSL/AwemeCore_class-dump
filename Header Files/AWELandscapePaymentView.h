//
//     Generated by private class-dump
//

@class NSString, DUXButton, UILabel, UIView;

@interface AWELandscapePaymentView : UIView <AWELandscapePaymentViewProtocol> {
    id /* block */ didTapPaymentButtonBlock;
    UIView *_containerView;
    UILabel *_paymentTipsLabel;
    DUXButton *_paymentButton;
}

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *paymentTipsLabel;
@property (retain, nonatomic) DUXButton *paymentButton;
@property (copy, nonatomic) id /* block */ didTapPaymentButtonBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)paymentButton;
- (void)setPaymentButton:(id)arg0;
- (id)paymentTipsLabel;
- (void)setDidTapPaymentButtonBlock:(id /* block */)arg0;
- (id /* block */)didTapPaymentButtonBlock;
- (void)didClickPaymentButton:(id)arg0;
- (void)setTipsLabelText:(id)arg0;
- (void)setPaymentButtonText:(id)arg0;
- (void)setPaymentTipsLabel:(id)arg0;
- (void).cxx_destruct;
- (void)setContainerView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)containerView;
- (void)setupUI;
- (void)updateWithModel:(id)arg0;

@end