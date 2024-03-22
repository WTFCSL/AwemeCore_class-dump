//
//     Generated by private class-dump
//

@class NSString, RxThreeTuple, RxDeferred, NSObject;
@protocol RTVXRInteractionObserver, RTVPerformanceMonitorInterface, __RTVXRInteractionController, RxInjector, RTVXRControllerInjector, RTVInteractionConfigureManagerInterface, RTVMultipleDelegateInterface;

@interface RTVXRInteractionControllerWrapper : NSObject <RTVXRInteractionController, RTVXRInteractionObserver> {
    id<RxInjector> _injector;
    id<RTVXRControllerInjector> _controllerInjector;
    NSObject<__RTVXRInteractionController> *_xrInteractionController;
    id<RTVInteractionConfigureManagerInterface> _interactionConfigManager;
    id<RTVMultipleDelegateInterface, RTVXRInteractionObserver> _observers;
    RxThreeTuple *_localAndRemoteDidFinishDeferred;
    id<RTVPerformanceMonitorInterface> _performanceMonitor;
    NSString *_currentMarker;
    RxDeferred *_didFinishDeferred;
}

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, weak, nonatomic) id<RTVXRControllerInjector> controllerInjector;
@property (retain, nonatomic) NSObject<__RTVXRInteractionController> *xrInteractionController;
@property (readonly, nonatomic) id<RTVInteractionConfigureManagerInterface> interactionConfigManager;
@property (readonly, nonatomic) id<RTVMultipleDelegateInterface, RTVXRInteractionObserver> observers;
@property (retain, nonatomic) RxThreeTuple *localAndRemoteDidFinishDeferred;
@property (readonly, nonatomic) id<RTVPerformanceMonitorInterface> performanceMonitor;
@property (copy, nonatomic) NSString *currentMarker;
@property (retain, nonatomic) RxDeferred *didFinishDeferred;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rtv_awakeFromControllerInjector;
- (id)controllerInjector;
- (id)interactionConfigManager;
- (unsigned long long)currentInteractionType;
- (BOOL)isInteractingOfType:(unsigned long long)arg0;
- (id)controllerProtocolWithInteractionType:(unsigned long long)arg0;
- (id)interactionControllerForType:(unsigned long long)arg0;
- (id)interactionControllerForProtocol:(id)arg0;
- (id)currentOwnerIdentifierOfType:(unsigned long long)arg0;
- (BOOL)isInteractionFusionRoom;
- (unsigned long long)needPreResumeInteraction;
- (id)interactionSnapshotView;
- (id)currentInteractionIconStringOfType:(unsigned long long)arg0;
- (id)createInteractionViewController:(unsigned long long)arg0;
- (id)invokeWithInteractionType:(unsigned long long)arg0 interactionData:(id)arg1 interactionContext:(id)arg2;
- (id)invokeWithInteractionType:(unsigned long long)arg0 interactionData:(id)arg1;
- (id)joinInteractionType:(unsigned long long)arg0 withModel:(id)arg1;
- (id)resumeInteractionType:(unsigned long long)arg0;
- (id)stopInteractionOfType:(unsigned long long)arg0 reason:(unsigned long long)arg1;
- (id)changeInteractionToType:(unsigned long long)arg0 context:(id)arg1;
- (void)interactionOfType:(unsigned long long)arg0 remoteDidFinfishWithReason:(long long)arg1 result:(BOOL)arg2;
- (void)interactionOfType:(unsigned long long)arg0 localDidFinfishWithReason:(long long)arg1 result:(BOOL)arg2;
- (id)xrInteractionController;
- (id)performanceMonitor;
- (void)interactionController:(id)arg0 willStartInteractionType:(unsigned long long)arg1 withBusinessModel:(id)arg2;
- (void)interactionController:(id)arg0 willFinishInteractionType:(unsigned long long)arg1 withBusinessModel:(id)arg2 reason:(long long)arg3;
- (void)interactionController:(id)arg0 didFinishInteractionType:(unsigned long long)arg1 withBusinessModel:(id)arg2;
- (void)interactionController:(id)arg0 didChangeToBizModel:(id)arg1 ofInteractionType:(unsigned long long)arg2;
- (id)localAndRemoteDidFinishDeferred;
- (void)setLocalAndRemoteDidFinishDeferred:(id)arg0;
- (void)setDidFinishDeferred:(id)arg0;
- (id)didFinishDeferred;
- (void)setXrInteractionController:(id)arg0;
- (void).cxx_destruct;
- (id)observers;
- (id)injector;
- (void)addObserver:(id)arg0;
- (void)removeObserver:(id)arg0;
- (id)currentInteractionController;
- (id)currentMarker;
- (void)setCurrentMarker:(id)arg0;

@end