//
//     Generated by private class-dump
//

@class NSString, RTVVoipEventHandler;
@protocol RxInjector;

@interface RTVXRInteractionNotifyHandler : NSObject <RTVXRInteractionNotifyHandler> {
    id<RxInjector> _injector;
    RTVVoipEventHandler *_eventHandler;
}

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) RTVVoipEventHandler *eventHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rxAwakeFromPropertyInjection;
- (BOOL)handleReceivedMessage:(id)arg0;
- (id)eventHandler;
- (void).cxx_destruct;
- (id)injector;

@end
