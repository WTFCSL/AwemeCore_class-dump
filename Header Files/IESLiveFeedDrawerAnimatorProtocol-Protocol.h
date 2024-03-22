//
//     Generated by private class-dump
//

@protocol IESLiveFeedDrawerAnimatorProtocol <UIViewControllerTransitioningDelegate>

@property (copy, nonatomic) id /* block */ cancelAction;
@property (copy, nonatomic) id /* block */ beginAction;
@property (copy, nonatomic) id /* block */ completeAction;

- (void)gestureChanged:(id)arg0 isDismiss:(BOOL)arg1;
- (BOOL)gestureShouldBegin:(id)arg0 isHide:(BOOL)arg1;
- (void)setBeginAction:(id /* block */)arg0;
- (void)addHideGestureForView:(id)arg0 shouldBegin:(id /* block */)arg1 action:(id /* block */)arg2;
- (void)setCompleteAction:(id /* block */)arg0;
- (void)createHideGestureWithShouldBegin:(id /* block */)arg0 action:(id /* block */)arg1;
- (void)addHideGestureForView:(id)arg0;
- (id /* block */)completeAction;
- (void)setCancelAction:(id /* block */)arg0;
- (id /* block */)cancelAction;
- (id /* block */)beginAction;

@end
