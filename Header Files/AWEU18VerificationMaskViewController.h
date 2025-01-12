//
//     Generated by private class-dump
//

@class AWEU18VerificationMaskViewModel, NSString, AWEU18VerificationMaskView, NSObject, UIViewController;
@protocol AWEU18VerificationMaskViewControllerDelegate;

@interface AWEU18VerificationMaskViewController : UIViewController <AWEU18VerificationMaskViewDelegate, AWEU18VerificationProtocol> {
    AWEU18VerificationMaskView *_contentView;
    AWEU18VerificationMaskViewModel *_viewModel;
    UIViewController *_prevRootViewController;
    double _prevWindowLevel;
    NSObject<AWEU18VerificationMaskViewControllerDelegate> *_delegate;
}

@property (retain, nonatomic) AWEU18VerificationMaskView *contentView;
@property (retain, nonatomic) AWEU18VerificationMaskViewModel *viewModel;
@property (retain, nonatomic) UIViewController *prevRootViewController;
@property (nonatomic) double prevWindowLevel;
@property (weak, nonatomic) NSObject<AWEU18VerificationMaskViewControllerDelegate> *delegate;
@property (readonly, nonatomic) BOOL isShowing;
@property (readonly, nonatomic) unsigned long long inProgressVerifyType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateLayoutWithContext:(id)arg0;
- (unsigned long long)inProgressVerifyType;
- (void)presentMaskWithCompletion:(id /* block */)arg0;
- (void)dismissMaskWithCompletion:(id /* block */)arg0;
- (void)didTapVerifyButton;
- (void)setPrevRootViewController:(id)arg0;
- (void)setPrevWindowLevel:(double)arg0;
- (id)prevRootViewController;
- (double)prevWindowLevel;
- (void)restoreTabbarHiddenStatus;
- (BOOL)shouldAutorotate;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)preferredInterfaceOrientationForPresentation;
- (BOOL)isShowing;
- (long long)preferredStatusBarStyle;
- (void)setViewModel:(id)arg0;
- (id)contentView;
- (id)delegate;
- (id)viewModel;
- (void)viewWillAppear:(BOOL)arg0;
- (void)setDelegate:(id)arg0;
- (void)viewDidLoad;
- (void)setContentView:(id)arg0;
- (void)setupSubviews;
- (id)initWithContext:(id)arg0 delegate:(id)arg1;

@end
