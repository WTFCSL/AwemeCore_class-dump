//
//     Generated by private class-dump
//

@class NSString, IESECServiceProxy, IESECTabKitInterceptCloseConfig, NSMutableDictionary;
@protocol IESECTabKitStorageService, IESECTabKitEventSubscriber, IESECTabKitEventService, IESECTabKitDataService;

@interface IESECTabKitInterceptCloseService : IESECTabKitService <IESECTabKitInterceptCloseService> {
    IESECTabKitInterceptCloseConfig *_globalConfig;
    BOOL _edgePanIntercepting;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
    NSMutableDictionary *_configMap;
    unsigned long long _action;
    id /* block */ _willCloseAction;
    IESECServiceProxy<IESECTabKitDataService> *_dataService;
    IESECServiceProxy<IESECTabKitStorageService> *_storageService;
    IESECServiceProxy<IESECTabKitEventService, IESECTabKitEventSubscriber> *_eventService;
}

@property (retain, nonatomic) IESECServiceProxy<IESECTabKitDataService> *dataService;
@property (retain, nonatomic) IESECServiceProxy<IESECTabKitStorageService> *storageService;
@property (retain, nonatomic) IESECServiceProxy<IESECTabKitEventService, IESECTabKitEventSubscriber> *eventService;
@property (copy, nonatomic) id /* block */ willCloseAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)close:(id)arg0 animated:(BOOL)arg1;
- (id)dataService;
- (void)setDataService:(id)arg0;
- (void)close:(id)arg0 action:(unsigned long long)arg1;
- (void)configInterceptClose:(id)arg0;
- (void)ackCloseActionIntercepted;
- (void)setupInterceptClose;
- (void)enableInteractivePopIntercept:(BOOL)arg0;
- (id)currentInterceptCloseConfig;
- (void)close:(id)arg0 action:(unsigned long long)arg1 animated:(BOOL)arg2;
- (id /* block */)willCloseAction;
- (void)setWillCloseAction:(id /* block */)arg0;
- (void)setStorageService:(id)arg0;
- (void)setupAckCloseActionInterceptedTimeoutHandler;
- (void)handleInteractivePopGestureRecognizer:(id)arg0;
- (id)configForTabID:(unsigned long long)arg0;
- (BOOL)shouldIntercept:(id)arg0 closeAction:(unsigned long long)arg1;
- (void)doInterceptCloseAction:(unsigned long long)arg0;
- (void)doCloseAction:(BOOL)arg0;
- (void)notifyDidInterceptCloseAction:(unsigned long long)arg0;
- (void)p_notifyDidInterceptCloseAction:(id)arg0;
- (void)p_doCloseAction:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)close:(id)arg0;
- (void)setEventService:(id)arg0;
- (id)eventService;
- (id)storageService;

@end
