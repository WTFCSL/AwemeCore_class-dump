//
//     Generated by private class-dump
//

@class NSString, UIButton, UIView;
@protocol BDPInputViewDelegate_HG;

@interface BDPInputView_HG : UIView <UITextViewDelegate, UITextFieldDelegate> {
    BOOL _multiple;
    BOOL _confirmHold;
    BOOL _adjustPosition;
    int _length;
    id<BDPInputViewDelegate_HG> _delegate;
    UIView *_inputText;
    NSString *_defaultValue;
    NSString *_confirmType;
    double _keyboradHeight;
    UIButton *_confirmBtn;
}

@property (weak, nonatomic) id<BDPInputViewDelegate_HG> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isShow;
- (BOOL)canUpdateWithNewParams:(id)arg0;
- (void)updateWithNewParamsIfPossible:(id)arg0;
- (void)updateCentent:(id)arg0;
- (void).cxx_destruct;
- (void)show;
- (void)keyboardWillShow:(id)arg0;
- (void)keyboardWillHide:(id)arg0;
- (id)delegate;
- (void)hide;
- (id)initWithParams:(id)arg0;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (BOOL)textFieldShouldReturn:(id)arg0;
- (void)keyboardDidHide;
- (void)textViewDidChange:(id)arg0;
- (void)confirmAction;
- (void)textFieldTextDidChange:(id)arg0;

@end
