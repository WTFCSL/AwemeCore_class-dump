//
//     Generated by private class-dump
//

@class RTVInteractionMessageListViewPresentationController, NSString;

@interface RTVFullScreenTransition : NSObject <UIViewControllerTransitioningDelegate> {
    RTVInteractionMessageListViewPresentationController *_presentationController;
}

@property (weak, nonatomic) RTVInteractionMessageListViewPresentationController *presentationController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)interactionControllerForDismissal:(id)arg0;
- (void).cxx_destruct;
- (id)presentationController;
- (id)animationControllerForPresentedController:(id)arg0 presentingController:(id)arg1 sourceController:(id)arg2;
- (void)setPresentationController:(id)arg0;
- (id)animationControllerForDismissedController:(id)arg0;
- (id)presentationControllerForPresentedViewController:(id)arg0 presentingViewController:(id)arg1 sourceViewController:(id)arg2;

@end