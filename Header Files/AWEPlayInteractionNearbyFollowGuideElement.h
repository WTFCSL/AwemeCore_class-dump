//
//     Generated by private class-dump
//

@class AWEPlayInteractionNearbyFollowGuideView, AWEPlayInteractionNearbyFollowGuideViewModel;

@interface AWEPlayInteractionNearbyFollowGuideElement : AWEPlayInteractionBaseActionButtonElement {
    AWEPlayInteractionNearbyFollowGuideView *_followView;
    AWEPlayInteractionNearbyFollowGuideViewModel *_viewModel;
}

@property (retain, nonatomic) AWEPlayInteractionNearbyFollowGuideView *followView;
@property (retain, nonatomic) AWEPlayInteractionNearbyFollowGuideViewModel *viewModel;

+ (BOOL)shouldActiveWithModel:(id)arg0 context:(id)arg1;

- (void)initializeElement;
- (void)viewDidDisposed;
- (void)viewController_willDisplay;
- (id)activateInfoWithData:(id)arg0;
- (void)hideView;
- (void)layoutElementView;
- (void)dynamicWidthRemakeLayout;
- (void)switchToFollowedStatus;
- (void)switchToUnfollowedStatus;
- (id)followView;
- (void)setFollowView:(id)arg0;
- (void).cxx_destruct;
- (void)setViewModel:(id)arg0;
- (id)viewModel;
- (void)viewDidLoad;

@end
