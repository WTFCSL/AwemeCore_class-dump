//
//     Generated by private class-dump
//

@class RTVXRFeedSharePreloadModel, NSString, RTVVoipModel, NSMutableSet, UIViewController;
@protocol RxInjector, RTVInteractionClientInterface, RTVXRRoomMessageSender, RTVXRControllerInjector, AFDPlayRemoteFeedContainerViewControllerProtocol, RTVFeedRequestSyncCommandControllerInterface, AWERTVFeedContentControllers, RTVUserProfileManagerInterface, RTVFeedManagerInterface;

@interface RTVFeedSharePreloadController : NSObject <RTVXRRoomMessageSenderObserver, RTVInteractionClientObserver, AFDPlayRemoteFeedContainerViewControllerDelegate, AFDPlayRemoteFeedContainerViewControllerObserver, RTVFeedSharePreloadControllerInterface, RTVFeedSharePlayerProviderInterface> {
    id<RxInjector> _injector;
    id<RTVXRRoomMessageSender> _messageSender;
    id<RTVXRControllerInjector> _controllerInjector;
    id<RTVFeedRequestSyncCommandControllerInterface> _commandRequester;
    UIViewController<AFDPlayRemoteFeedContainerViewControllerProtocol> *_remotePlayViewController;
    id<RTVUserProfileManagerInterface> _profileManager;
    id<RTVInteractionClientInterface> _interactionClient;
    id<RTVFeedManagerInterface> _feedManager;
    id<AWERTVFeedContentControllers> _feedContentControllers;
    long long _lastSyncCmdVersion;
    RTVXRFeedSharePreloadModel *_model;
    RTVVoipModel *_voip;
    NSMutableSet *_preloadReceivedCMDMutableSet;
}

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, weak, nonatomic) id<RTVXRRoomMessageSender> messageSender;
@property (readonly, weak, nonatomic) id<RTVXRControllerInjector> controllerInjector;
@property (readonly, weak, nonatomic) id<RTVFeedRequestSyncCommandControllerInterface> commandRequester;
@property (retain, nonatomic) UIViewController<AFDPlayRemoteFeedContainerViewControllerProtocol> *remotePlayViewController;
@property (readonly, nonatomic) id<RTVUserProfileManagerInterface> profileManager;
@property (readonly, nonatomic) id<RTVInteractionClientInterface> interactionClient;
@property (readonly, nonatomic) id<RTVFeedManagerInterface> feedManager;
@property (readonly, nonatomic) id<AWERTVFeedContentControllers> feedContentControllers;
@property (nonatomic) long long lastSyncCmdVersion;
@property (retain, nonatomic) RTVXRFeedSharePreloadModel *model;
@property (retain, nonatomic) RTVVoipModel *voip;
@property (retain, nonatomic) NSMutableSet *preloadReceivedCMDMutableSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL isPreloadFeed;

- (void)rxAwakeFromPropertyInjection;
- (void)rtv_awakeFromControllerInjector;
- (id)remotePlayVCWithContext:(id)arg0 audioWrapper:(struct AFDEngineAudioWrapper { void /* function */ *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void *x4; } *)arg1;
- (void)__addObserver;
- (id)controllerInjector;
- (BOOL)queryRTVSafeSettingBoolValueForKey:(id)arg0 defaultValue:(BOOL)arg1;
- (id)rtvFeedContentControllers;
- (id)receivedCMDSet;
- (void)releaseCachedPlayer;
- (BOOL)isPreloadFeed;
- (id)feedContentControllers;
- (id)remotePlayViewController;
- (id)commandRequester;
- (BOOL)__isUseNewReceiveMessageMethod;
- (void)setRemotePlayViewController:(id)arg0;
- (BOOL)startPreloadPlayerIfNeeded:(id)arg0;
- (void)messageSender:(id)arg0 didReceiveMessage:(id)arg1;
- (void)__configFeedMessageComponents;
- (BOOL)__finishPreloadPlayer;
- (void)__doPreloadPlayer;
- (id)__shareModelWithVoip:(id)arg0;
- (id)__remotePlayViewControllerParams;
- (void)setPreloadReceivedCMDMutableSet:(id)arg0;
- (long long)lastSyncCmdVersion;
- (void)setLastSyncCmdVersion:(long long)arg0;
- (void)__handleReceiveCmdMessage:(id)arg0;
- (id)preloadReceivedCMDMutableSet;
- (void)interactionClient:(id)arg0 didReceiveOperation:(id)arg1;
- (void)setModel:(id)arg0;
- (id)messageSender;
- (void).cxx_destruct;
- (id)model;
- (id)injector;
- (id)feedManager;
- (void)dealloc;
- (id)profileManager;
- (id)voip;
- (void)setVoip:(id)arg0;
- (id)interactionClient;

@end