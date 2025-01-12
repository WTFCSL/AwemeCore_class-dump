//
//     Generated by private class-dump
//

@class UILabel, NSString, UIView;

@interface IESLiveBaseChargeAgreementView : UIView <IESLiveBaseChargeAgreementView> {
    UILabel *_contentLabel;
    UILabel *_agreementLabel;
    UIView *_containerView;
}

@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UILabel *agreementLabel;
@property (retain, nonatomic) UIView *containerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)agreementLabel;
- (void)setAgreementLabel:(id)arg0;
- (void)tapAgreement;
- (void)chargeAgreementViewOnTapped;
- (void)setDescribContentWithText:(id)arg0 textColor:(id)arg1 textFont:(id)arg2 alignment:(long long)arg3;
- (void)setAgreementContentWithText:(id)arg0 textColor:(id)arg1 textFont:(id)arg2 alignment:(long long)arg3;
- (void).cxx_destruct;
- (void)setContainerView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)containerView;
- (void)setupUI;
- (id)contentLabel;
- (void)setContentLabel:(id)arg0;
- (double)viewHeight;

@end
