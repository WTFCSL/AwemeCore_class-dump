//
//     Generated by private class-dump
//

@class CJPayMarketingMsgView, CJPayBDPayMainMessageView, UILabel, UIView, CJPayAccountInsuranceTipView;

@interface CJPayOPHomeContentView : CJPayHomeBaseContentView {
    CJPayBDPayMainMessageView *_tradeMesageView;
    CJPayBDPayMainMessageView *_payTypeMessageView;
    CJPayMarketingMsgView *_marketingMsgView;
    UILabel *_amountDetailLabel;
    UIView *_subContainer;
    CJPayAccountInsuranceTipView *_safeGuardTipView;
}

@property (retain, nonatomic) UIView *subContainer;
@property (retain, nonatomic) CJPayMarketingMsgView *marketingMsgView;
@property (retain, nonatomic) UILabel *amountDetailLabel;
@property (retain, nonatomic) CJPayBDPayMainMessageView *tradeMesageView;
@property (retain, nonatomic) CJPayBDPayMainMessageView *payTypeMessageView;
@property (retain, nonatomic) CJPayAccountInsuranceTipView *safeGuardTipView;

- (id)safeGuardTipView;
- (void)setSafeGuardTipView:(id)arg0;
- (id)marketingMsgView;
- (void)setMarketingMsgView:(id)arg0;
- (id)amountDetailLabel;
- (void)setAmountDetailLabel:(id)arg0;
- (id)subContainer;
- (id)tradeMesageView;
- (id)payTypeMessageView;
- (void)setTradeMesageView:(id)arg0;
- (void)setPayTypeMessageView:(id)arg0;
- (void)setSubContainer:(id)arg0;
- (void).cxx_destruct;
- (void)setupUI;

@end
