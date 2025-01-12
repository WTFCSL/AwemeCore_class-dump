//
//     Generated by private class-dump
//

@class NSString, UIViewController, AWEPageContext;
@protocol AWELandscapeVCContainerProtocol, AWELandscapePageContextInteractionProtocol, AWEDemaciaContainerProtocol;

@interface AWELandscapeInteractionBaseController : AWEDemaciaBaseController <AWELandscapeControllerDispatchProtocol> {
    BOOL _canShowWhenScreenCast;
    BOOL _appearBeforeScreenCast;
}

@property (nonatomic) BOOL appearBeforeScreenCast;
@property (weak, nonatomic) UIViewController<AWEDemaciaContainerProtocol, AWELandscapeVCContainerProtocol> *viewController;
@property (weak, nonatomic) AWEPageContext<AWELandscapePageContextInteractionProtocol> *context;
@property (nonatomic) BOOL canShowWhenScreenCast;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setHide:(BOOL)arg0;
- (void)setCanShowWhenScreenCast:(BOOL)arg0;
- (id)viewControllerShouldConformProtocolList;
- (id)contextShouldConformProtocolList;
- (BOOL)appearBeforeScreenCast;
- (void)setAppearBeforeScreenCast:(BOOL)arg0;
- (void)showScreenCastView:(BOOL)arg0 showFeedBack:(BOOL)arg1;
- (BOOL)canShowWhenScreenCast;
- (void)updateState:(long long)arg0;
- (id)viewController;
- (BOOL)isInteracting;
- (id)context;

@end
