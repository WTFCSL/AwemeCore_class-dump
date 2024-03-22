//
//     Generated by private class-dump
//

@class CJPayFaceRecogAlertContentView, CJPayStyleButton, CJPayButton, CJPayFaceRecognitionModel, NSString;

@interface CJPayFaceRecogAlertViewController : CJPayPopUpBaseViewController {
    id /* block */ _confirmBtnBlock;
    id /* block */ _closeBtnBlock;
    id /* block */ _bottomBtnBlock;
    CJPayFaceRecogAlertContentView *_contentView;
    CJPayButton *_closeButton;
    CJPayStyleButton *_confirmButton;
    CJPayButton *_bottomButton;
    CJPayFaceRecognitionModel *_model;
    NSString *_agreementName;
    NSString *_agreementURL;
    NSString *_protocolCheckBox;
}

@property (retain, nonatomic) CJPayButton *closeButton;
@property (retain, nonatomic) CJPayStyleButton *confirmButton;
@property (retain, nonatomic) CJPayButton *bottomButton;
@property (retain, nonatomic) CJPayFaceRecogAlertContentView *contentView;
@property (retain, nonatomic) CJPayFaceRecognitionModel *model;
@property (copy, nonatomic) NSString *agreementName;
@property (copy, nonatomic) NSString *agreementURL;
@property (copy, nonatomic) NSString *protocolCheckBox;
@property (copy, nonatomic) id /* block */ confirmBtnBlock;
@property (copy, nonatomic) id /* block */ closeBtnBlock;
@property (copy, nonatomic) id /* block */ bottomBtnBlock;

- (id)agreementURL;
- (void)setAgreementURL:(id)arg0;
- (void)setCloseBtnBlock:(id /* block */)arg0;
- (id /* block */)closeBtnBlock;
- (id)protocolCheckBox;
- (void)setProtocolCheckBox:(id)arg0;
- (void)p_onConfirmPayAction;
- (void)showOnTopVC:(id)arg0;
- (void)p_signFaceRecognition;
- (id /* block */)confirmBtnBlock;
- (id /* block */)bottomBtnBlock;
- (void)p_bottomButtonTapped;
- (id)agreementName;
- (id)initWithFaceRecognitionModel:(id)arg0;
- (void)setConfirmBtnBlock:(id /* block */)arg0;
- (void)setBottomBtnBlock:(id /* block */)arg0;
- (void)setAgreementName:(id)arg0;
- (void)setModel:(id)arg0;
- (void).cxx_destruct;
- (id)model;
- (id)contentView;
- (void)setContentView:(id)arg0;
- (void)setupUI;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg0;
- (id)closeButton;
- (void)setCloseButton:(id)arg0;
- (void)closeButtonTapped;
- (id)bottomButton;
- (void)setBottomButton:(id)arg0;

@end