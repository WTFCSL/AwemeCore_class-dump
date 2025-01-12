//
//     Generated by private class-dump
//

@class NSString, CJPayPasswordView, UIImageView, CJPayFixKeyboardView, UIView, CJPayPasswordSetModel, CJPayPassCodeSetBaseViewModel;

@interface CJPayPassCodeSetBaseViewController : CJPayFullPageBaseViewController <CJPaySafeInputViewDelegate, CJPayBindCardPageProtocol> {
    CJPayPasswordSetModel *_setModel;
    id /* block */ _completion;
    CJPayPassCodeSetBaseViewModel *_viewModel;
    CJPayPasswordView *_passwordView;
    UIImageView *_backgroundImageView;
    CJPayFixKeyboardView *_keyboardView;
    UIView *_keyboardSnapshotView;
}

@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) CJPayPasswordView *passwordView;
@property (retain, nonatomic) CJPayFixKeyboardView *keyboardView;
@property (retain, nonatomic) UIView *keyboardSnapshotView;
@property (retain, nonatomic) CJPayPasswordSetModel *setModel;
@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) CJPayPassCodeSetBaseViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)associatedModelClass;

- (BOOL)cjAllowTransition;
- (void)clearInputContent;
- (void)p_setupUI;
- (void)setPasswordView:(id)arg0;
- (void)createAssociatedModelWithParams:(id)arg0;
- (id)getLoadingView;
- (void)setSetModel:(id)arg0;
- (id)setModel;
- (void)updateWithPassCodeType:(unsigned long long)arg0;
- (void)p_setupBackgroundImageView;
- (void)clearErrorText;
- (void)inputView:(id)arg0 completeInputWithCurrentInput:(id)arg1;
- (void)inputView:(id)arg0 textDidChangeWithCurrentInput:(id)arg1;
- (BOOL)inputViewShouldResignFirstResponder:(id)arg0;
- (void)trackerEventName:(id)arg0 params:(id)arg1;
- (void)showErrorText:(id)arg0;
- (id)buttonInfoActions:(id)arg0;
- (id /* block */)completion;
- (void).cxx_destruct;
- (void)setCompletion:(id /* block */)arg0;
- (id)backgroundImageView;
- (void)viewWillDisappear:(BOOL)arg0;
- (void)viewDidDisappear:(BOOL)arg0;
- (void)setViewModel:(id)arg0;
- (id)viewModel;
- (id)keyboardView;
- (void)setKeyboardView:(id)arg0;
- (void)viewDidLoad;
- (void)setBackgroundImageView:(id)arg0;
- (id)keyboardSnapshotView;
- (void)setKeyboardSnapshotView:(id)arg0;
- (id)passwordView;
- (void)back;

@end
