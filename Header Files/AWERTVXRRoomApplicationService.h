//
//     Generated by private class-dump
//

@class UIWindow, NSString, RTVXRDegradeService, AWERTVIMCommandMessageDispatchCenter;
@protocol RTVAccountServiceInterface, RTVMultipleDelegateInterface, RxInjector, RTVReachabilityManagerInterface, RTVXRRoomManagerInterface, RTVXRRoomServiceObserver;

@interface AWERTVXRRoomApplicationService : NSObject <RTVXRRoomServiceInterface, RTVReachabilityManagerDelegate, RTVAccountStateObserver, RTVApplicationService> {
    BOOL _canPullRoom;
    id<RxInjector> _injector;
    id<RTVXRRoomManagerInterface> _roomManager;
    id<RTVReachabilityManagerInterface> _reachabilityManager;
    id<RTVAccountServiceInterface> _accountService;
    RTVXRDegradeService *_degradeService;
    AWERTVIMCommandMessageDispatchCenter *_imCommandMessageDispatcher;
    id<RTVMultipleDelegateInterface, RTVXRRoomServiceObserver> _observers;
}

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) id<RTVXRRoomManagerInterface> roomManager;
@property (readonly, nonatomic) id<RTVReachabilityManagerInterface> reachabilityManager;
@property (readonly, nonatomic) id<RTVAccountServiceInterface> accountService;
@property (nonatomic) BOOL canPullRoom;
@property (readonly, nonatomic) RTVXRDegradeService *degradeService;
@property (readonly, nonatomic) AWERTVIMCommandMessageDispatchCenter *imCommandMessageDispatcher;
@property (readonly, nonatomic) id<RTVMultipleDelegateInterface, RTVXRRoomServiceObserver> observers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIWindow *window;

- (void)rxAwakeFromPropertyInjection;
- (void)accountDidLogin;
- (void)application:(id)arg0 didCompleteLaunchWithOptions:(id)arg1;
- (void)addServiceObserver:(id)arg0;
- (void)removeServiceObserver:(id)arg0;
- (BOOL)canPullRoom;
- (void)setCanPullRoom:(BOOL)arg0;
- (id)roomManager;
- (void)__pullRoomWithReason:(long long)arg0;
- (void)reachabilityManager:(id)arg0 reachableStatusChangeTo:(BOOL)arg1;
- (id)degradeService;
- (id)imCommandMessageDispatcher;
- (void)applicationWillEnterForeground:(id)arg0;
- (void).cxx_destruct;
- (id)observers;
- (id)injector;
- (id)reachabilityManager;
- (id)accountService;

@end
