//
//     Generated by private class-dump
//

@interface DUXSheetNavigationController : UINavigationController {
    BOOL _shouldEffectPresentingViewController;
    BOOL _shouldBypassPresentationHook;
}

@property (nonatomic) BOOL shouldEffectPresentingViewController;
@property (nonatomic) BOOL shouldBypassPresentationHook;

- (BOOL)awe_shouldBypassPresentationHook;
- (void)setShouldEffectPresentingViewController:(BOOL)arg0;
- (void)setShouldBypassPresentationHook:(BOOL)arg0;
- (BOOL)shouldBypassPresentationHook;
- (BOOL)shouldEffectPresentingViewController;
- (void)pushViewController:(id)arg0 animated:(BOOL)arg1;
- (id)popViewControllerAnimated:(BOOL)arg0;

@end
