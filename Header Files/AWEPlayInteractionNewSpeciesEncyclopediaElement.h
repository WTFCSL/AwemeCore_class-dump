//
//     Generated by private class-dump
//

@class NSString, UIView;
@protocol AWEDiscoverDBottomBarViewProtocol;

@interface AWEPlayInteractionNewSpeciesEncyclopediaElement : AWEPlayInteractionNewBottomElement <AWEBottomContainerViewLifeCycleDelegate, AWEBottomContainerTrackLynxTapDelegate> {
    UIView<AWEDiscoverDBottomBarViewProtocol> *_detailContainerView;
}

@property (retain, nonatomic) UIView<AWEDiscoverDBottomBarViewProtocol> *detailContainerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bottomBarLynxTapped;
- (void)viewDidDisposed;
- (unsigned long long)elementVisibleType;
- (void)viewController_willDisplay;
- (id)activateInfoWithData:(id)arg0;
- (void)containerViewDidLoadFailedWithURL:(id)arg0 error:(id)arg1;
- (void)viewController_viewDidAppear;
- (void)layoutElementView;
- (BOOL)shouldAppearWithData:(id)arg0;
- (void)trackOnDisplay:(BOOL)arg0;
- (id)detailContainerView;
- (void)updateRelatedReadingView;
- (void)setDetailContainerView:(id)arg0;
- (void).cxx_destruct;
- (id)identifier;
- (void)viewDidLoad;

@end
