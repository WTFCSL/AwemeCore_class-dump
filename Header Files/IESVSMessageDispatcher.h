//
//     Generated by private class-dump
//

@class NSString, NSHashTable, IESLiveGCDTimer, NSObject, NSMutableArray;
@protocol IESVSMessageFilter, IESLiveUserService, IESLiveIMMessageReciever, OS_dispatch_queue;

@interface IESVSMessageDispatcher : NSObject <IESVSMessageDispatchProvider, IESLiveIMMessageReciever> {
    BOOL _messageDispatchStarted;
    id<IESVSMessageFilter> _messageFilter;
    id /* block */ _onMessageDispatch;
    NSHashTable *_subscribersForAll;
    NSMutableArray *_messages;
    NSObject<OS_dispatch_queue> *_messageProcessQueue;
    double _dispatchInterval;
    long long _dispatchCount;
    IESLiveGCDTimer *_timer;
    id<IESLiveUserService> _userService;
}

@property (retain, nonatomic) NSHashTable *subscribersForAll;
@property (retain, nonatomic) NSMutableArray *messages;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *messageProcessQueue;
@property (nonatomic) double dispatchInterval;
@property (nonatomic) long long dispatchCount;
@property (retain, nonatomic) IESLiveGCDTimer *timer;
@property (nonatomic) BOOL messageDispatchStarted;
@property (retain, nonatomic) id<IESLiveUserService> userService;
@property (retain, nonatomic) id<IESVSMessageFilter> messageFilter;
@property (copy, nonatomic) id /* block */ onMessageDispatch;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) id<IESLiveIMMessageReciever> nextReceiver;

- (void)didSetAttachingDIContext;
- (id)initWithDIContext:(id)arg0;
- (long long)dispatchCount;
- (void)setDispatchCount:(long long)arg0;
- (void)addSubscriberForAll:(id)arg0;
- (id)subscribersForAll;
- (void)setSubscribersForAll:(id)arg0;
- (id)userService;
- (void)setUserService:(id)arg0;
- (void)setDispatchInterval:(double)arg0;
- (id)messageFilter;
- (void)setMessageFilter:(id)arg0;
- (void)setMessageProcessQueue:(id)arg0;
- (id)messageProcessQueue;
- (void)didRecieveMessages:(id)arg0;
- (void)startDispatch;
- (void)stopDispatch;
- (void)doTimerAction;
- (double)dispatchInterval;
- (BOOL)messageDispatchStarted;
- (void)setMessageDispatchStarted:(BOOL)arg0;
- (void)setOnMessageDispatch:(id /* block */)arg0;
- (id /* block */)onMessageDispatch;
- (void)messageFectchedWithSeekByUser;
- (BOOL)shouldDispatchMessage:(id)arg0;
- (BOOL)shouldHandleSelfShowMessage:(id)arg0;
- (id)timer;
- (void).cxx_destruct;
- (void)stopTimer;
- (void)resetFilter;
- (id)messages;
- (void)setTimer:(id)arg0;
- (void)setMessages:(id)arg0;
- (void)startTimerWithInterval:(double)arg0;

@end