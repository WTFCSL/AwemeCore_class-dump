//
//     Generated by private class-dump
//

@class UIButton, RTVRoomDistributionOwnerGuideInfoView, NSString, UILabel, RxDeferred, RTVRoomDistributionOwnerGuideViewModel;
@protocol RxInjector, RTVVoipResourceFetcherInterface, RTVXRControllerInjector, RTVXRStateRecorder;

@interface RTVRoomDistributionOwnerGuideViewController : UIViewController <RTVPageSheetViewControllerProtocol, RTVXRControllerInterface> {
    id<RxInjector> _injector;
    id<RTVXRControllerInjector> _controllerInjector;
    id<RTVVoipResourceFetcherInterface> _resourceFetcher;
    id<RTVXRStateRecorder> _xrStateRecorder;
    RTVRoomDistributionOwnerGuideViewModel *_viewModel;
    RTVRoomDistributionOwnerGuideInfoView *_iconContainerView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIButton *_cancelButton;
    UIButton *_confirmButton;
    RxDeferred *_confimedDefer;
}

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, weak, nonatomic) id<RTVXRControllerInjector> controllerInjector;
@property (readonly, nonatomic) id<RTVVoipResourceFetcherInterface> resourceFetcher;
@property (readonly, nonatomic) id<RTVXRStateRecorder> xrStateRecorder;
@property (readonly, nonatomic) RTVRoomDistributionOwnerGuideViewModel *viewModel;
@property (readonly, nonatomic) RTVRoomDistributionOwnerGuideInfoView *iconContainerView;
@property (readonly, nonatomic) UILabel *titleLabel;
@property (readonly, nonatomic) UILabel *subtitleLabel;
@property (readonly, nonatomic) UIButton *cancelButton;
@property (readonly, nonatomic) UIButton *confirmButton;
@property (readonly, nonatomic) RxDeferred *confimedDefer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)disablePullIndicatorView;
- (BOOL)enablePullDismissGestureForPageSheetPresentation;
- (BOOL)enableCloseButtonForPageSheetPresentation;
- (id)pullIndicatorViewBackgroundColor;
- (void)rtv_awakeFromControllerInjector;
- (id)resourceFetcher;
- (void)__createComponents;
- (void)__layoutComponents;
- (void)__configComponents;
- (id)controllerInjector;
- (BOOL)__interfaceOrientationLayoutIsPortrait;
- (id)xrStateRecorder;
- (id)didConfimed;
- (id)confimedDefer;
- (void)__cancelButtonTapped:(id)arg0;
- (void)__confirmButtonTapped:(id)arg0;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void).cxx_destruct;
- (id)cancelButton;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })arg0 withTransitionCoordinator:(id)arg1;
- (id)titleLabel;
- (id)subtitleLabel;
- (id)injector;
- (id)viewModel;
- (void)dealloc;
- (void)viewDidLoad;
- (id)confirmButton;
- (id)iconContainerView;

@end
