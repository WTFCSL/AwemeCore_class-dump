//
//     Generated by private class-dump
//

@class UINavigationController, NSString, UIScrollView, UIPanGestureRecognizer, UIViewController;
@protocol HTSLivePopupViewControllerProtocol;

@interface HTSLivePopupTransition : NSObject <UIGestureRecognizerDelegate, UIViewControllerTransitioningDelegate> {
    UIViewController<HTSLivePopupViewControllerProtocol> *_viewController;
    UINavigationController *_navigationController;
    UIPanGestureRecognizer *_hideGesture;
    UIScrollView *_scrollView;
}

@property (weak, nonatomic) UIViewController<HTSLivePopupViewControllerProtocol> *viewController;
@property (weak, nonatomic) UINavigationController *navigationController;
@property (retain, nonatomic) UIPanGestureRecognizer *hideGesture;
@property (weak, nonatomic) UIScrollView *scrollView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)hideGesture;
- (void)hideGestureActions:(id)arg0;
- (void)setHideGesture:(id)arg0;
- (void)addHideGestureForViewController:(id)arg0;
- (void)showBackAfterPan;
- (void)setScrollView:(id)arg0;
- (void)setViewController:(id)arg0;
- (id)viewController;
- (void).cxx_destruct;
- (void)setNavigationController:(id)arg0;
- (id)animationControllerForPresentedController:(id)arg0 presentingController:(id)arg1 sourceController:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg0;
- (id)navigationController;
- (id)animationControllerForDismissedController:(id)arg0;
- (id)scrollView;

@end
