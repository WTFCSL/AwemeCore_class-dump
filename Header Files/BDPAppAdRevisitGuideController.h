//
//     Generated by private class-dump
//

@class UIButton, NSString, UIView;

@interface BDPAppAdRevisitGuideController : UIViewController {
    BOOL _isHasDone_showAction;
    NSString *_lottieFilePath;
    NSString *_confirmText;
    id /* block */ _showAction;
    id /* block */ _closeAction;
    id /* block */ _confirmAction;
    UIView *_lottieContainerView;
    UIButton *_closeButtonView;
    UIButton *_confirmButtonView;
}

@property (weak, nonatomic) UIView *lottieContainerView;
@property (weak, nonatomic) UIButton *closeButtonView;
@property (weak, nonatomic) UIButton *confirmButtonView;
@property (nonatomic) BOOL isHasDone_showAction;
@property (readonly, copy, nonatomic) NSString *lottieFilePath;
@property (copy, nonatomic) NSString *confirmText;
@property (copy, nonatomic) id /* block */ showAction;
@property (copy, nonatomic) id /* block */ closeAction;
@property (copy, nonatomic) id /* block */ confirmAction;

- (void)p_setupUI;
- (id)lottieContainerView;
- (void)setLottieContainerView:(id)arg0;
- (id)lottieFilePath;
- (id /* block */)showAction;
- (void)setShowAction:(id /* block */)arg0;
- (id)initWithLottieFilePath:(id)arg0;
- (void)setCloseButtonView:(id)arg0;
- (void)setConfirmButtonView:(id)arg0;
- (BOOL)isHasDone_showAction;
- (void)setIsHasDone_showAction:(BOOL)arg0;
- (id)closeButtonView;
- (id)confirmButtonView;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (id /* block */)closeAction;
- (void)setCloseAction:(id /* block */)arg0;
- (void)viewDidLoad;
- (id /* block */)confirmAction;
- (void)setConfirmAction:(id /* block */)arg0;
- (id)confirmText;
- (void)setConfirmText:(id)arg0;

@end
