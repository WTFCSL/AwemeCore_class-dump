//
//     Generated by private class-dump
//

@class CJPayIDCardLast6DigitsInputView, CJPayBDCreateOrderResponse, NSString, UILabel, CJPayStyleErrorLabel;
@protocol CJPayTrackerProtocol;

@interface CJPayVerifyIDCardViewController : CJPayFullPageBaseViewController <CJPayVerifyIDVCProtocol> {
    id<CJPayTrackerProtocol> _trackDelegate;
    id /* block */ _completion;
    CJPayBDCreateOrderResponse *_response;
    UILabel *_titleLabel;
    UILabel *_descLabel;
    CJPayIDCardLast6DigitsInputView *_inputModule;
    CJPayStyleErrorLabel *_errorLabel;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) CJPayIDCardLast6DigitsInputView *inputModule;
@property (retain, nonatomic) CJPayStyleErrorLabel *errorLabel;
@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) CJPayBDCreateOrderResponse *response;
@property (weak, nonatomic) id<CJPayTrackerProtocol> trackDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descLabel;
- (void)setDescLabel:(id)arg0;
- (id)trackDelegate;
- (void)setTrackDelegate:(id)arg0;
- (void)p_setupUI;
- (void)updateTips:(id)arg0;
- (void)p_trackWithEventName:(id)arg0 params:(id)arg1;
- (void)updateErrorText:(id)arg0;
- (id)inputModule;
- (void)p_applyStyle;
- (id)p_attributedDescString;
- (void)setInputModule:(id)arg0;
- (void)clearInput;
- (id /* block */)completion;
- (void).cxx_destruct;
- (void)setResponse:(id)arg0;
- (void)setCompletion:(id /* block */)arg0;
- (id)titleLabel;
- (void)viewWillDisappear:(BOOL)arg0;
- (id)response;
- (void)viewDidLoad;
- (void)setTitleLabel:(id)arg0;
- (id)errorLabel;
- (void)setErrorLabel:(id)arg0;
- (void)back;

@end