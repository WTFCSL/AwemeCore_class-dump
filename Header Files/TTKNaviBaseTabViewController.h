//
//     Generated by private class-dump
//

@class AWENaviTabControl, NSString, DUXTabBarContainerController, TTKNaviBaseTabViewModel;

@interface TTKNaviBaseTabViewController : UIViewController <TTKNaviTabControlDelegate, DUXTabBarContainerDelegate> {
    long long _landingIndex;
    AWENaviTabControl *_tabControl;
    DUXTabBarContainerController *_slidingViewController;
    TTKNaviBaseTabViewModel *_viewModel;
}

@property (nonatomic) long long landingIndex;
@property (retain, nonatomic) AWENaviTabControl *tabControl;
@property (retain, nonatomic) DUXTabBarContainerController *slidingViewController;
@property (retain, nonatomic) TTKNaviBaseTabViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)landingIndex;
- (void)tabControl:(id)arg0 didClickIndex:(long long)arg1;
- (void)setupBinding;
- (id)slidingViewController;
- (id)tabControl;
- (double)tabHeight;
- (double)bottomViewHeight;
- (void)p_setupTabControl;
- (id)p_generateTabControlItems;
- (long long)numberOfControllers:(id)arg0;
- (id)titleForTabBarView:(id)arg0 atIndex:(long long)arg1;
- (BOOL)reddotForTabBarView:(id)arg0 atIndex:(long long)arg1;
- (id)slidingViewController:(id)arg0 viewControllerAtIndex:(long long)arg1 model:(id)arg2;
- (id)slidingViewController:(id)arg0 viewControllerAtIndex:(long long)arg1;
- (void)slidingViewController:(id)arg0 didSelectIndex:(long long)arg1;
- (void)setLandingIndex:(long long)arg0;
- (void)setTabControl:(id)arg0;
- (void)setSlidingViewController:(id)arg0;
- (void)reload;
- (void)viewDidLayoutSubviews;
- (void).cxx_destruct;
- (void)setViewModel:(id)arg0;
- (id)viewModel;
- (void)viewDidLoad;
- (id)bottomView;
- (void)setupUI;

@end