//
//     Generated by private class-dump
//

@class UIScrollView, IESECSlidingTabContainerView;

@interface IESECTabElementLifecycleViewController : UIViewController {
    IESECSlidingTabContainerView *_slidingContainer;
    UIScrollView *_contentScrollView;
}

@property (weak, nonatomic) IESECSlidingTabContainerView *slidingContainer;
@property (retain, nonatomic) UIScrollView *contentScrollView;

- (id)slidingContainer;
- (void)setSlidingContainer:(id)arg0;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (void)viewWillDisappear:(BOOL)arg0;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)viewDidDisappear:(BOOL)arg0;
- (id)contentScrollView;
- (void)viewWillAppear:(BOOL)arg0;
- (void)viewDidLoad;
- (void)setContentScrollView:(id)arg0;

@end