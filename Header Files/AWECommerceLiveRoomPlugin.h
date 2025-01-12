//
//     Generated by private class-dump
//

@class NSString, BDADPreviewToRoomModel, NSMutableSet, BDLiveCommerceFragment, BDADLiveRoomWindmillPlugin;

@interface AWECommerceLiveRoomPlugin : NSObject <AWELiveCommercialRouter, IESLiveMessageSubscriber, BDADLiveRoomPlugin> {
    BDADPreviewToRoomModel *_modelToLiveRoom;
    BDLiveCommerceFragment *_component;
    NSMutableSet *_openURLHistory;
    BDADLiveRoomWindmillPlugin *_windmillPlugin;
}

@property (retain, nonatomic) NSMutableSet *openURLHistory;
@property (weak, nonatomic) BDADLiveRoomWindmillPlugin *windmillPlugin;
@property (retain, nonatomic) BDADPreviewToRoomModel *modelToLiveRoom;
@property (weak, nonatomic) BDLiveCommerceFragment *component;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)showAlertOpenOtherWithAdInfo:(id)arg0 openURL:(id)arg1 actionHandler:(id /* block */)arg2;
- (BOOL)routeToWebURL:(id)arg0 playableURLIfNeed:(id)arg1 adInfo:(id)arg2 queries:(id)arg3;
- (BOOL)routeToLynxURL:(id)arg0 adInfo:(id)arg1 queries:(id)arg2;
- (void)addNotifications;
- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (id)modelToLiveRoom;
- (BOOL)isCommercialComponentInToolbar;
- (void)addMessages;
- (id)windmillPlugin;
- (void)postLiveLandingPageUpdateNotification:(id)arg0;
- (void)handleIronManURLLandingEventNotification;
- (void)handleClearNotification:(id)arg0;
- (void)handlePlayableLandingPageOpenAppStoreNotification;
- (void)handleLiveCardRenderFinishNotification:(id)arg0;
- (void)handleLiveLandingPageLoadFailNotification:(id)arg0;
- (void)handleLiveLandingPageLoadSucceedNotification:(id)arg0;
- (id)openURLHistory;
- (void)setModelToLiveRoom:(id)arg0;
- (void)setOpenURLHistory:(id)arg0;
- (void)setWindmillPlugin:(id)arg0;
- (void).cxx_destruct;
- (id)component;
- (void)messageReceived:(id)arg0;
- (void)setComponent:(id)arg0;

@end
