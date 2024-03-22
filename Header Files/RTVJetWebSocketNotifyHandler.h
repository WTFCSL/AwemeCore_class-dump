//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary;
@protocol RxInjector;

@interface RTVJetWebSocketNotifyHandler : NSObject <RTVJetWebNotifyMessageHandlerInterface> {
    NSMutableDictionary *_notifyHandlerMap;
    id<RxInjector> _injector;
}

@property (retain, nonatomic) NSMutableDictionary *notifyHandlerMap;
@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rxAwakeFromPropertyInjection;
- (void)registerNotifyHandler:(id)arg0 ofService:(int)arg1;
- (BOOL)handleReceivedMessage:(id)arg0;
- (void)unregisterNotifyHandler:(id)arg0 ofService:(int)arg1;
- (id)notifyHandlerMap;
- (void)setNotifyHandlerMap:(id)arg0;
- (void).cxx_destruct;
- (id)injector;

@end
