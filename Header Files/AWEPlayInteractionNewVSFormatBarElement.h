//
//     Generated by private class-dump
//

@class AWEPlayInteractionVSFormatBarView;

@interface AWEPlayInteractionNewVSFormatBarElement : AWEPlayInteractionNewBottomElement {
    AWEPlayInteractionVSFormatBarView *_barView;
}

@property (retain, nonatomic) AWEPlayInteractionVSFormatBarView *barView;

- (void)viewDidDisposed;
- (unsigned long long)elementVisibleType;
- (void)viewController_willDisplay;
- (id)activateInfoWithData:(id)arg0;
- (void)viewController_viewDidAppear;
- (void)layoutElementView;
- (void)viewController_didEndDisplaying;
- (BOOL)shouldAppearWithData:(id)arg0;
- (id)vsSchema;
- (BOOL)shouldShowVSFormatBarView:(id)arg0;
- (void)updateBarView;
- (void)trackBottomBarShow;
- (void)vsVideoPreload;
- (BOOL)popupCurrentTopVCIfNeededWhenEnterUserProfile;
- (void)trackBottomBarClicked;
- (BOOL)isGuideComponent;
- (void)barTapped;
- (void).cxx_destruct;
- (id)identifier;
- (void)viewDidLoad;
- (id)barView;
- (void)setBarView:(id)arg0;

@end
