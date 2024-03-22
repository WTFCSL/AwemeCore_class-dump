//
//     Generated by private class-dump
//

@class AWEUGCrossDiversionInfo, AWEUGCrossDiversionBuoyView, NSString;

@interface AWEUGCrossDiversionServiceImpl : HTSService <AWEUGCrossDiversionBuoyViewDelegate, AWERouterDelegate, AWEUGCrossDiversionService> {
    AWEUGCrossDiversionInfo *_crossDiversionInfo;
    AWEUGCrossDiversionBuoyView *_buoyView;
}

@property (retain, nonatomic) AWEUGCrossDiversionInfo *crossDiversionInfo;
@property (retain, nonatomic) AWEUGCrossDiversionBuoyView *buoyView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)routerDidTransferWithURLString:(id)arg0 fromViewController:(id)arg1 toViewController:(id)arg2 transitionType:(long long)arg3;
- (id)paramsForVideoPlayInPlayer:(id)arg0 paramsModel:(id)arg1;
- (void)onAppDidEnterBackground:(id)arg0;
- (void)parseCrossDiversionScheme:(id)arg0;
- (void)sceneDidAppeared:(id)arg0;
- (void)crossDiversionBuoyViewClosed;
- (void)crossDiversionBuoyViewTapped;
- (void)setCrossDiversionInfo:(id)arg0;
- (id)crossDiversionInfo;
- (void)clearCrossDiversionBuoyView;
- (void)showCrossDiversionBuoyWithInfo:(id)arg0;
- (void)setBuoyView:(id)arg0;
- (id)buoyView;
- (void)trackBuoyViewShow;
- (void)setupSceneSwitchObservers;
- (void)sceneDidDisappeared:(id)arg0;
- (void)onFeedDidEndDisplayCell:(id)arg0;
- (void)trackBuoyViewDismissWithReason:(id)arg0 switchScene:(id)arg1;
- (void)trackBuoyViewClose;
- (void)trackBuoyViewClick;
- (void).cxx_destruct;
- (void)dealloc;

@end
