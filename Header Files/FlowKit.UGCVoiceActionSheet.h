//
//     Generated by private class-dump
//

@protocol UIViewControllerTransitioningDelegate;

@interface FlowKit.UGCVoiceActionSheet : FlowCommon.FlowBaseViewController {
    void /* unknown type, empty encoding */ _toastProvider;
    void /* unknown type, empty encoding */ didFinishVoiceInput;
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_titleLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_closeButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_authorizeView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_authorizeButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_contentLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_voiceInputView;
    void /* unknown type, empty encoding */ cancellableSet;
    void /* unknown type, empty encoding */ calcHeight;
    void /* unknown type, empty encoding */ $__lazy_storage_$_transitionInstance;
    void /* unknown type, empty encoding */ voiceInputViewModel;
}

@property (nonatomic) long long modalPresentationStyle;
@property (nonatomic, retain) id<UIViewControllerTransitioningDelegate> transitioningDelegate;

- (void)authorizeAction;
- (void)setModalPresentationStyle:(long long)arg0;
- (void)viewDidLayoutSubviews;
- (long long)modalPresentationStyle;
- (void).cxx_destruct;
- (id)transitioningDelegate;
- (id)initWithNibName:(id)arg0 bundle:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg0;
- (id)initWithCoder:(id)arg0;
- (void)viewWillAppear:(BOOL)arg0;
- (void)viewDidLoad;
- (void)setTransitioningDelegate:(id)arg0;
- (void)closeButtonAction;

@end
