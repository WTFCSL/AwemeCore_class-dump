//
//     Generated by private class-dump
//

@class NSString, IESLiveChargeViewModel, UIImageView, UILabel, UIView;

@interface IESLiveChargeViewBalanceComponent : UIView <IESLiveChargeViewComponent> {
    BOOL _isChargeFail;
    IESLiveChargeViewModel *_viewModel;
    UILabel *_balanceLabel;
    UIView *_chargeFAQ;
    UIImageView *_chargeFAQImageView;
    UILabel *_chargeFAQLabel;
}

@property (retain, nonatomic) IESLiveChargeViewModel *viewModel;
@property (retain, nonatomic) UILabel *balanceLabel;
@property (retain, nonatomic) UIView *chargeFAQ;
@property (retain, nonatomic) UIImageView *chargeFAQImageView;
@property (retain, nonatomic) UILabel *chargeFAQLabel;
@property (nonatomic) BOOL isChargeFail;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateViewModel:(id)arg0;
- (void)didBalanceUpdated;
- (void)didRechargeSuccess:(BOOL)arg0 error:(id)arg1;
- (id)chargeFAQ;
- (id)chargeFAQImageView;
- (id)chargeFAQLabel;
- (void)updateBalance;
- (void)addFaqView;
- (void)setIsChargeFail:(BOOL)arg0;
- (void)didChargePanelFAQTaped:(id)arg0;
- (void)setChargeFAQ:(id)arg0;
- (void)setChargeFAQImageView:(id)arg0;
- (void)setChargeFAQLabel:(id)arg0;
- (BOOL)isChargeFail;
- (void)reload;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setViewModel:(id)arg0;
- (id)viewModel;
- (void)setupUI;
- (id)balanceLabel;
- (double)viewHeight;
- (void)setBalanceLabel:(id)arg0;

@end
