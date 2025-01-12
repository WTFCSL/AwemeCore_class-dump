//
//     Generated by private class-dump
//

@class IESWalletAuthCJViewModel, UILabel, IESWalletAuthCJPersonalInfo, IESWalletLinkAttributedLabel;

@interface IESWalletAuthCJMain : UIView {
    IESWalletAuthCJViewModel *_model;
    UILabel *_requestLabel;
    IESWalletAuthCJPersonalInfo *_nameView;
    IESWalletAuthCJPersonalInfo *_IDView;
    IESWalletLinkAttributedLabel *_agreementView;
}

@property (readonly, copy) IESWalletAuthCJViewModel *model;
@property (retain, nonatomic) UILabel *requestLabel;
@property (retain, nonatomic) IESWalletAuthCJPersonalInfo *nameView;
@property (retain, nonatomic) IESWalletAuthCJPersonalInfo *IDView;
@property (retain, nonatomic) IESWalletLinkAttributedLabel *agreementView;

- (id)agreementView;
- (void)setAgreementView:(id)arg0;
- (void)setupReuqest;
- (void)setupNameID;
- (void)setupAgreement;
- (void)autoAdjustHeight;
- (id)IDView;
- (void)setRequestLabel:(id)arg0;
- (void)setIDView:(id)arg0;
- (id)initWithModel:(id)arg0;
- (void).cxx_destruct;
- (id)model;
- (id)nameView;
- (void)setNameView:(id)arg0;
- (void)setupUI;
- (id)requestLabel;

@end
