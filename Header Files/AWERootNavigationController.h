//
//     Generated by private class-dump
//

@protocol AWERootNavigationControllerDelegate;

@interface AWERootNavigationController : UINavigationController {
    id<AWERootNavigationControllerDelegate> _awe_additionalDelegate;
}

@property (weak, nonatomic) id<AWERootNavigationControllerDelegate> awe_additionalDelegate;

- (void)setNavigationTransitionFlagAnimated:(BOOL)arg0;
- (void)monitorWithType:(id)arg0 fromVC:(id)arg1 toVC:(id)arg2;
- (id)awe_additionalDelegate;
- (void)setNavigationPopTransitionFlagAnimated:(BOOL)arg0;
- (void)setAwe_additionalDelegate:(id)arg0;
- (void).cxx_destruct;
- (void)pushViewController:(id)arg0 animated:(BOOL)arg1;
- (void)setViewControllers:(id)arg0 animated:(BOOL)arg1;
- (id)popViewControllerAnimated:(BOOL)arg0;
- (id)popToRootViewControllerAnimated:(BOOL)arg0;
- (id)popToViewController:(id)arg0 animated:(BOOL)arg1;

@end
