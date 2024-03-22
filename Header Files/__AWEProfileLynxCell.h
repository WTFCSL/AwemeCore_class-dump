//
//     Generated by private class-dump
//

@class AWEProfileLynxViewModel, AWEProfileLynxLoadingView, UIView, UIViewController;
@protocol BDXContainerLifecycleProtocol, HunterContainerProtocol, BDXViewContainerProtocol, HunterContainerLifeCycleProtocol, BDXContainerProtocol;

@interface __AWEProfileLynxCell : UICollectionViewCell {
    AWEProfileLynxViewModel *_viewModel;
    id /* block */ _containerIDConfiguredBlock;
    UIViewController<BDXContainerProtocol> *_containerVC;
    UIView<BDXViewContainerProtocol> *_lynxView;
    UIView<HunterContainerProtocol> *_hunterView;
    AWEProfileLynxLoadingView *_loadingView;
    id /* block */ _childViewControllerCompleteBlock;
    id<BDXContainerLifecycleProtocol, HunterContainerLifeCycleProtocol> _lynxContainerLifeCycleDelegate;
    double _lastWidth;
}

@property (retain, nonatomic) AWEProfileLynxViewModel *viewModel;
@property (copy, nonatomic) id /* block */ containerIDConfiguredBlock;
@property (retain, nonatomic) UIViewController<BDXContainerProtocol> *containerVC;
@property (retain, nonatomic) UIView<BDXViewContainerProtocol> *lynxView;
@property (retain, nonatomic) UIView<HunterContainerProtocol> *hunterView;
@property (retain, nonatomic) AWEProfileLynxLoadingView *loadingView;
@property (copy, nonatomic) id /* block */ childViewControllerCompleteBlock;
@property (weak, nonatomic) id<BDXContainerLifecycleProtocol, HunterContainerLifeCycleProtocol> lynxContainerLifeCycleDelegate;
@property (nonatomic) double lastWidth;

+ (id)identifier;

- (void)setContainerVC:(id)arg0;
- (id)containerVC;
- (void)sendEvent:(id)arg0 params:(id)arg1;
- (id)lynxView;
- (void)setLynxView:(id)arg0;
- (id /* block */)childViewControllerCompleteBlock;
- (void)setChildViewControllerCompleteBlock:(id /* block */)arg0;
- (void)setHunterView:(id)arg0;
- (id)hunterView;
- (void)__configLynxView;
- (void)__configHunterView;
- (void)setLynxContainerLifeCycleDelegate:(id)arg0;
- (id)__configSchemaAddExtraParamsWithSourceSchema:(id)arg0;
- (void)__configContext:(id)arg0 schema:(id)arg1 scrollViewHeight:(double)arg2;
- (id)lynxContainerLifeCycleDelegate;
- (void)__confifgFinishWith:(id)arg0;
- (id /* block */)containerIDConfiguredBlock;
- (void)onThemeChangeNotificationAction:(id)arg0;
- (void)updateLifeContainerDelegate:(id)arg0;
- (id)findScrollViewWithName:(id)arg0;
- (void)setContainerIDConfiguredBlock:(id /* block */)arg0;
- (void).cxx_destruct;
- (void)setViewModel:(id)arg0;
- (id)viewModel;
- (void)layoutSubviews;
- (void)dealloc;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (void)setupConfig;
- (double)lastWidth;
- (void)setLastWidth:(double)arg0;

@end
