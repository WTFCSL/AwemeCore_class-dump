//
//     Generated by private class-dump
//

@class UINavigationController, UIWindow, UIView, BDUGLuckyDogPopUpObj, UIViewController;

@interface BDUGLuckyDogAlertBaseView : UIView {
    BOOL _isFinishDialogManager;
    UIView *_containerView;
    UIViewController *_alertVC;
    UINavigationController *_alertNavigationController;
    UIWindow *_alertWindow;
    UIWindow *_originWindow;
    BDUGLuckyDogPopUpObj *_dialogObj;
}

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIViewController *alertVC;
@property (retain, nonatomic) UINavigationController *alertNavigationController;
@property (retain, nonatomic) UIWindow *alertWindow;
@property (retain, nonatomic) UIWindow *originWindow;
@property (weak, nonatomic) BDUGLuckyDogPopUpObj *dialogObj;
@property (nonatomic) BOOL isFinishDialogManager;

- (void)setAlertVC:(id)arg0;
- (id)alertVC;
- (void)setAlertNavigationController:(id)arg0;
- (id)alertNavigationController;
- (void)setOriginWindow:(id)arg0;
- (void)hideWithAsyncCompletion:(id /* block */)arg0;
- (BOOL)isFinishDialogManager;
- (id)originWindow;
- (id)setString:(id)arg0 placeholder:(id)arg1;
- (void)setDialogObj:(id)arg0;
- (void)setIsFinishDialogManager:(BOOL)arg0;
- (id)dialogObj;
- (void).cxx_destruct;
- (void)show;
- (void)setContainerView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)containerView;
- (void)hide;
- (void)dealloc;
- (id)alertWindow;
- (void)setAlertWindow:(id)arg0;

@end
