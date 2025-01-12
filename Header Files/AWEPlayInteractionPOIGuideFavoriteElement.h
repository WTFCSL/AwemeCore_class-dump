//
//     Generated by private class-dump
//

@class AWEPlayInteractionPOIGuideFavoriteView;

@interface AWEPlayInteractionPOIGuideFavoriteElement : AWEPlayInteractionBaseActionButtonElement {
    AWEPlayInteractionPOIGuideFavoriteView *_poiView;
}

@property (retain, nonatomic) AWEPlayInteractionPOIGuideFavoriteView *poiView;

- (void)viewDidDisposed;
- (void)viewController_willDisplay;
- (id)activateInfoWithData:(id)arg0;
- (id)poiView;
- (void)setPoiView:(id)arg0;
- (void)layoutElementView;
- (void)p_layoutUI;
- (void)p_showElementIfNeeded;
- (void)p_lanuchShowElement;
- (void)p_addFavoriteObserver;
- (id)p_trackCommonParams;
- (id)p_trackLoginParams;
- (void)p_trackShowPOIDetailElement;
- (void)p_trackShowPOIElement;
- (void)p_updateShowElementLayoutWithViewConfig:(id)arg0;
- (void)p_didReceiveFavoriteStatusUpdatedNotifications:(id)arg0;
- (void)p_configPOIViewTouchEvent;
- (void).cxx_destruct;
- (void)reset;
- (void)viewDidLoad;

@end
