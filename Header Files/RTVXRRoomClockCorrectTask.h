//
//     Generated by private class-dump
//

@class NSString, RTVXRRoomClockCorrectMessage, RxDeferred, NSNumber;
@protocol RTVXRRoomMessageSender, RxInjector, RTVXRControllerInjector;

@interface RTVXRRoomClockCorrectTask : NSObject <RTVXRRoomMessageSenderObserver> {
    NSString *_targetUserID;
    long long _targetUserLocalTime;
    NSNumber *_delayOfNetwork;
    NSNumber *_clockDiff;
    long long _lastUpdateTimestamp;
    id<RxInjector> _injector;
    id<RTVXRControllerInjector> _controllerInjector;
    id<RTVXRRoomMessageSender> _messageSender;
    RxDeferred *_requestDeferred;
    RTVXRRoomClockCorrectMessage *_requestMessage;
    RTVXRRoomClockCorrectMessage *_replyMessage;
}

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, weak, nonatomic) id<RTVXRControllerInjector> controllerInjector;
@property (readonly, weak, nonatomic) id<RTVXRRoomMessageSender> messageSender;
@property (readonly, nonatomic) RxDeferred *requestDeferred;
@property (retain, nonatomic) RTVXRRoomClockCorrectMessage *requestMessage;
@property (retain, nonatomic) RTVXRRoomClockCorrectMessage *replyMessage;
@property (readonly, copy, nonatomic) NSString *targetUserID;
@property (readonly, nonatomic) long long targetUserLocalTime;
@property (readonly, nonatomic) NSNumber *delayOfNetwork;
@property (readonly, nonatomic) NSNumber *clockDiff;
@property (readonly, nonatomic) long long lastUpdateTimestamp;
@property (readonly, nonatomic) BOOL isRunning;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)taskWithTargetUserID:(id)arg0 injector:(id)arg1;

- (void)rtv_awakeFromControllerInjector;
- (id)controllerInjector;
- (void)messageSender:(id)arg0 didReceiveMessage:(id)arg1;
- (id)delayOfNetwork;
- (id)clockDiff;
- (id)initWithTargetUserID:(id)arg0;
- (void)__sendClockCorrectRequest;
- (id)requestDeferred;
- (void)__setupReplyMessage:(id)arg0;
- (long long)targetUserLocalTime;
- (BOOL)isRunning;
- (id)timestamp;
- (id)messageSender;
- (void).cxx_destruct;
- (id)fire;
- (id)injector;
- (id)invalidate;
- (id)debugDescription;
- (id)targetUserID;
- (id)requestMessage;
- (long long)lastUpdateTimestamp;
- (void)setRequestMessage:(id)arg0;
- (id)replyMessage;
- (void)setReplyMessage:(id)arg0;

@end
