//
//     Generated by private class-dump
//

@interface FlowCommon.FlowNavigationController : UINavigationController <UIGestureRecognizerDelegate> {
    void /* unknown type, empty encoding */ rootVC;
}

- (BOOL)gestureRecognizer:(id)arg0 shouldBeRequiredToFailByGestureRecognizer:(id)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg0;
- (void).cxx_destruct;
- (void)pushViewController:(id)arg0 animated:(BOOL)arg1;
- (id)initWithNibName:(id)arg0 bundle:(id)arg1;
- (void)setViewControllers:(id)arg0 animated:(BOOL)arg1;
- (id)initWithNavigationBarClass:(Class)arg0 toolbarClass:(Class)arg1;
- (id)initWithCoder:(id)arg0;
- (id)initWithRootViewController:(id)arg0;
- (id)popViewControllerAnimated:(BOOL)arg0;
- (void)viewDidLoad;

@end