//
//     Generated by private class-dump
//

@class AWELoginButton, UIStackView;

@interface AWECarrierLoginPadView : AWECarrierLoginBaseView {
    AWELoginButton *_qrcodeLoginBtnPad;
    AWELoginButton *_otherLoginBtnPad;
    UIStackView *_bottomStackViewPad;
}

@property (retain, nonatomic) AWELoginButton *qrcodeLoginBtnPad;
@property (retain, nonatomic) AWELoginButton *otherLoginBtnPad;
@property (retain, nonatomic) UIStackView *bottomStackViewPad;

- (id)bottomStackViewPad;
- (id)qrcodeLoginBtnPad;
- (id)otherLoginBtnPad;
- (void)setQrcodeLoginBtnPad:(id)arg0;
- (void)setOtherLoginBtnPad:(id)arg0;
- (void)setBottomStackViewPad:(id)arg0;
- (void).cxx_destruct;
- (void)didMoveToSuperview;
- (void)layoutSubviews;
- (void)setupUI;

@end
