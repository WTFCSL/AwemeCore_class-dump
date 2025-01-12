//
//     Generated by private class-dump
//

@class RTVCollectionViewController, RTVInteractionUserListSegmentController;
@protocol RTVInteractionControlViewController, RxInjector, RTVXRControllerInjector;

@interface RTVInteractionUserListViewController : UIViewController {
    id<RxInjector> _injector;
    id<RTVXRControllerInjector> _controllerInjector;
    RTVCollectionViewController *_collectionViewController;
    RTVInteractionUserListSegmentController *_segmentController;
    id<RTVInteractionControlViewController> _controlViewController;
}

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, weak, nonatomic) id<RTVXRControllerInjector> controllerInjector;
@property (readonly, nonatomic) RTVCollectionViewController *collectionViewController;
@property (readonly, nonatomic) RTVInteractionUserListSegmentController *segmentController;
@property (readonly, weak, nonatomic) id<RTVInteractionControlViewController> controlViewController;

- (BOOL)enablePullDismissGestureForPageSheetPresentation;
- (id)pullIndicatorViewBackgroundColor;
- (BOOL)awe_shouldBypassPresentationHook;
- (void)rtv_awakeFromControllerInjector;
- (void)__createComponents;
- (void)__layoutComponents;
- (id)controllerInjector;
- (void)__configureComponents;
- (id)controlViewController;
- (void)__createDependencies;
- (id)segmentController;
- (void)interactionUserListSegmentController:(id)arg0 requestDismissUserListViewControlelrWithCompletion:(id /* block */)arg1;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void).cxx_destruct;
- (id)collectionViewController;
- (long long)preferredStatusBarStyle;
- (void)viewDidDisappear:(BOOL)arg0;
- (id)injector;
- (void)viewWillAppear:(BOOL)arg0;
- (void)viewDidLoad;

@end
