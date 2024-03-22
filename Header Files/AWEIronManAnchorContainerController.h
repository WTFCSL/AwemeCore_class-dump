//
//     Generated by private class-dump
//

@class UIButton, NSArray, NSString;

@interface AWEIronManAnchorContainerController : AWESlidingViewController <AWERouterViewControllerProtocol, AWESlidingViewControllerDelegate> {
    UIButton *_closeButton;
    NSArray *_tabs;
    unsigned long long _tooltipsMaxTimes;
    NSString *_extraJsonParams;
}

@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) NSArray *tabs;
@property (nonatomic) unsigned long long tooltipsMaxTimes;
@property (retain, nonatomic) NSString *extraJsonParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)configWithRouterParamDict:(id)arg0;
- (long long)numberOfControllers:(id)arg0;
- (id)slidingViewController:(id)arg0 viewControllerAtIndex:(long long)arg1;
- (void)slidingViewController:(id)arg0 didFinishTransitionFromPreviousIndex:(long long)arg1 currentIndex:(long long)arg2 transitionType:(long long)arg3;
- (void)closeButtonDidClick:(id)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })viewFrameAtIndex:(long long)arg0;
- (void)setTooltipsMaxTimes:(unsigned long long)arg0;
- (void)setExtraJsonParams:(id)arg0;
- (void)preloadTalentPageIfNeed;
- (void)showTooltips;
- (void)ironManDidMountInCurrentTab:(id)arg0;
- (id)tabbarTitleArray;
- (unsigned long long)tooltipsMaxTimes;
- (id)extraJsonParams;
- (void)trackCurrentTabShow;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (long long)preferredStatusBarStyle;
- (void)viewDidDisappear:(BOOL)arg0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)addObserver;
- (id)tabs;
- (id)closeButton;
- (void)setCloseButton:(id)arg0;
- (void)setUpUI;
- (void)setTabs:(id)arg0;

@end