//
//     Generated by private class-dump
//

@class BDPCloseButton, UITextView, BDPCheckBox, NSString, UILabel, UIView, UIButton;

@interface BDPAnnouncementPrivacyView_HG : UIView {
    id /* block */ _closeAction;
    id /* block */ _agreeAction;
    id /* block */ _jumpPrivacyWebViewAction;
    UIButton *_confirmButton;
    BDPCloseButton *_closeButton;
    UILabel *_label;
    UITextView *_desc;
    UIView *_descContainerView;
    BDPCheckBox *_checkBox;
    UITextView *_protocolView;
    NSString *_originProtocolUrl;
    UIView *_toast;
    struct _NSRange { unsigned long long location; unsigned long long length; } _authenticationProtocolRange;
    struct _NSRange { unsigned long long location; unsigned long long length; } _serviceProtocolRange;
    struct _NSRange { unsigned long long location; unsigned long long length; } _privacyProtocolRange;
    struct _NSRange { unsigned long long location; unsigned long long length; } _originProtocolRange;
}

@property (retain, nonatomic) UIButton *confirmButton;
@property (retain, nonatomic) BDPCloseButton *closeButton;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UITextView *desc;
@property (retain, nonatomic) UIView *descContainerView;
@property (retain, nonatomic) BDPCheckBox *checkBox;
@property (retain, nonatomic) UITextView *protocolView;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } authenticationProtocolRange;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } serviceProtocolRange;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } privacyProtocolRange;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } originProtocolRange;
@property (copy, nonatomic) NSString *originProtocolUrl;
@property (retain, nonatomic) UIView *toast;
@property (copy, nonatomic) id /* block */ closeAction;
@property (copy, nonatomic) id /* block */ agreeAction;
@property (copy, nonatomic) id /* block */ jumpPrivacyWebViewAction;

- (void)showToast;
- (void)setCheckBox:(id)arg0;
- (id)checkBox;
- (void)setupUIWithModel:(id)arg0;
- (id)descContainerView;
- (void)setDescContainerView:(id)arg0;
- (void)onCloseButtonClick;
- (void)onConfirmButtonClick;
- (id)protocolView;
- (void)onCheckBoxClick:(id)arg0;
- (void)setProtocolView:(id)arg0;
- (void)setupDefaultProtocolView;
- (void)setupOriginProtocolView:(id)arg0;
- (void)setAuthenticationProtocolRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg0;
- (void)setServiceProtocolRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg0;
- (void)setPrivacyProtocolRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })authenticationProtocolRange;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })serviceProtocolRange;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })privacyProtocolRange;
- (void)onProtocolViewClick:(id)arg0;
- (void)setOriginProtocolUrl:(id)arg0;
- (void)setOriginProtocolRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })originProtocolRange;
- (void)onOriginProtocolViewClick:(id)arg0;
- (id /* block */)agreeAction;
- (id /* block */)jumpPrivacyWebViewAction;
- (id)originProtocolUrl;
- (void)onConfirmAndCloseButtonClick;
- (void)setAgreeAction:(id /* block */)arg0;
- (void)setJumpPrivacyWebViewAction:(id /* block */)arg0;
- (id)desc;
- (id)initWithModel:(id)arg0;
- (void).cxx_destruct;
- (void)setLabel:(id)arg0;
- (id /* block */)closeAction;
- (void)setCloseAction:(id /* block */)arg0;
- (id)label;
- (void)setDesc:(id)arg0;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg0;
- (id)closeButton;
- (void)setCloseButton:(id)arg0;
- (void)setToast:(id)arg0;
- (id)toast;
- (void)layoutUI;

@end
