//
//     Generated by private class-dump
//

@class AWEPlayInteractionPlayletElementViewModel, NSString, UIView;
@protocol AWEDiscoverDBottomBarViewProtocol;

@interface AWENewPlayletBottomTipElement : AWEPlayInteractionNewBottomElement <AWEBottomContainerViewLifeCycleDelegate, AWEBottomContainerTrackLynxTapDelegate, AWEPlayInteractionPlayletElementViewModelDelegate> {
    UIView<AWEDiscoverDBottomBarViewProtocol> *_bottomBarView;
    AWEPlayInteractionPlayletElementViewModel *_viewModel;
}

@property (retain, nonatomic) UIView<AWEDiscoverDBottomBarViewProtocol> *bottomBarView;
@property (retain, nonatomic) AWEPlayInteractionPlayletElementViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setAppear:(BOOL)arg0;
- (void)bottomBarLynxTapped;
- (void)viewDidDisposed;
- (void)sendEvent:(id)arg0 params:(id)arg1;
- (unsigned long long)elementVisibleType;
- (void)viewController_willDisplay;
- (id)activateInfoWithData:(id)arg0;
- (void)containerViewDidFinishLoadWithURL:(id)arg0;
- (void)containerViewDidLoadFailedWithURL:(id)arg0 error:(id)arg1;
- (void)viewController_viewDidAppear;
- (void)layoutElementView;
- (BOOL)shouldAppearWithData:(id)arg0;
- (BOOL)showPlayletTipView:(id)arg0;
- (void)updatePlayletTipView;
- (void)trackOnDisplay:(BOOL)arg0;
- (void)trackPageSelect;
- (void).cxx_destruct;
- (id)identifier;
- (void)setViewModel:(id)arg0;
- (id)viewModel;
- (void)reset;
- (void)viewDidLoad;
- (id)bottomBarView;
- (void)setBottomBarView:(id)arg0;

@end