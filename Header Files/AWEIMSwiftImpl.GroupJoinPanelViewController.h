//
//     Generated by private class-dump
//

@interface AWEIMSwiftImpl.GroupJoinPanelViewController : UIViewController <AWEIMGroupJoinPanelViewControllerProtocol, AWECustomPageSheetViewControllerProtocol, AWERouterViewControllerProtocol> {
    void /* unknown type, empty encoding */ transitionContext;
    void /* unknown type, empty encoding */ presentWhenTabBarExist;
    void /* unknown type, empty encoding */ fetchResultDefer;
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ loadingView;
    void /* unknown type, empty encoding */ enterGroup;
    void /* unknown type, empty encoding */ $__lazy_storage_$_joinPanelView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_tapGesture;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ transitionContext;
@property (nonatomic) long long modalPresentationStyle;

- (void)updateEnterGroupBlock:(id /* block */)arg0;
- (BOOL)configWithRouterParamDict:(id)arg0;
- (void)tapActionWith:(id)arg0;
- (void)setTransitionContext:(id)arg0;
- (void)setModalPresentationStyle:(long long)arg0;
- (id)transitionContext;
- (long long)modalPresentationStyle;
- (void).cxx_destruct;
- (id)initWithNibName:(id)arg0 bundle:(id)arg1;
- (id)initWithCoder:(id)arg0;
- (void)viewDidLoad;

@end
