//
//     Generated by private class-dump
//

@class AFDInplacePopoverTransitionView;

@interface AFDInplacePopover : AFDPopover {
    AFDInplacePopoverTransitionView *_transitionView;
}

@property (weak, nonatomic) AFDInplacePopoverTransitionView *transitionView;

- (void)showWithView:(id)arg0 containerView:(id)arg1 animated:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)handleBackgroundPan:(id)arg0;
- (void).cxx_destruct;
- (void)dismissWithCompletion:(id /* block */)arg0;
- (id)transitionView;
- (void)setTransitionView:(id)arg0;
- (void)handleBackgroundTap:(id)arg0;

@end
