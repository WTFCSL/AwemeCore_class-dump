//
//     Generated by private class-dump
//

@class UINavigationController, DUXPresentationContextViewController, DUXSheetAnimationModel, NSString, UIView;
@protocol DUXSheetDelegate;

@interface DUXSheet : UIViewController <UIViewControllerTransitioningDelegate, UINavigationControllerDelegate, DUXSheetPresentationModelProtocol> {
    BOOL _hasMask;
    BOOL _hasCloseButton;
    BOOL _adjustPresentingViewControllerWhenDismissed;
    BOOL _useSystemNavigationController;
    id<DUXSheetDelegate> _delegate;
    DUXSheetAnimationModel *_presentAnimationModel;
    DUXSheetAnimationModel *_dismissAnimationModel;
    UIView *_dismissView;
    UINavigationController *_contentNavigationController;
    DUXPresentationContextViewController *_presentationContextViewController;
}

@property (retain, nonatomic) UINavigationController *contentNavigationController;
@property (retain, nonatomic) DUXPresentationContextViewController *presentationContextViewController;
@property (retain, nonatomic) UIView *dismissView;
@property (nonatomic) BOOL hasMask;
@property (nonatomic) BOOL hasCloseButton;
@property (weak, nonatomic) id<DUXSheetDelegate> delegate;
@property (retain, nonatomic) DUXSheetAnimationModel *presentAnimationModel;
@property (retain, nonatomic) DUXSheetAnimationModel *dismissAnimationModel;
@property (nonatomic) BOOL adjustPresentingViewControllerWhenDismissed;
@property (nonatomic) BOOL useSystemNavigationController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)duxSheet_shouldRenderMask;
- (BOOL)duxSheet_clickMask;
- (id)duxSheet_dismingView;
- (void)duxSheet_Dismiss;
- (BOOL)duxSheet_shouldPresentInFullscreen;
- (void)duxSheet_didChangeFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 withUserInteraction:(BOOL)arg1;
- (void)setHasMask:(BOOL)arg0;
- (void)clickCloseButton;
- (void)showOnViewController:(id)arg0 completion:(id /* block */)arg1;
- (void)setAdjustPresentingViewControllerWhenDismissed:(BOOL)arg0;
- (void)dismiss:(id /* block */)arg0 withAnimated:(BOOL)arg1;
- (void)setPresentAnimationModel:(id)arg0;
- (void)setDismissAnimationModel:(id)arg0;
- (void)setContentNavigationController:(id)arg0;
- (id)presentationContextViewController;
- (id)presentAnimationModel;
- (id)dismissAnimationModel;
- (BOOL)useSystemNavigationController;
- (void)setPresentationContextViewController:(id)arg0;
- (void)setUseSystemNavigationController:(BOOL)arg0;
- (BOOL)adjustPresentingViewControllerWhenDismissed;
- (void)addCloseButtonToViewController:(id)arg0;
- (void)dismiss;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (void)presentViewController:(id)arg0 animated:(BOOL)arg1 completion:(id /* block */)arg2;
- (id)initWithNibName:(id)arg0 bundle:(id)arg1;
- (void)viewWillDisappear:(BOOL)arg0;
- (id)animationControllerForPresentedController:(id)arg0 presentingController:(id)arg1 sourceController:(id)arg2;
- (void)viewDidDisappear:(BOOL)arg0;
- (id)delegate;
- (id)navigationController;
- (id)initWithCoder:(id)arg0;
- (void)navigationController:(id)arg0 willShowViewController:(id)arg1 animated:(BOOL)arg2;
- (id)initWithRootViewController:(id)arg0;
- (void)setHasCloseButton:(BOOL)arg0;
- (id)animationControllerForDismissedController:(id)arg0;
- (void)viewWillAppear:(BOOL)arg0;
- (void)setDelegate:(id)arg0;
- (id)presentationControllerForPresentedViewController:(id)arg0 presentingViewController:(id)arg1 sourceViewController:(id)arg2;
- (void)dismissViewControllerAnimated:(BOOL)arg0 completion:(id /* block */)arg1;
- (BOOL)hasCloseButton;
- (void)dismiss:(id /* block */)arg0;
- (id)dismissView;
- (void)setDismissView:(id)arg0;
- (id)contentNavigationController;
- (void)showOnViewController:(id)arg0;
- (BOOL)hasMask;

@end