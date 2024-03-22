//
//     Generated by private class-dump
//

@class TTPushMessageReceiver;

@interface TTPushMessageDispatcher : NSObject {
    BOOL _isTheFirstMessage;
    BOOL _isBroadcasting;
    unsigned long long _lastMsgSequenceId;
    TTPushMessageReceiver *_msgReceiver;
}

@property BOOL isTheFirstMessage;
@property unsigned long long lastMsgSequenceId;
@property (retain) TTPushMessageReceiver *msgReceiver;
@property BOOL isBroadcasting;

+ (void)assignMessageBaseProperties_:(id)arg0 frame:(const void *)arg1;
+ (id)serializeObject:(id)arg0;

- (void)setCustomizedMessageReceiver:(id)arg0;
- (void)delegateMessage:(const void *)arg0 pushManager:(id)arg1;
- (void)setBroadcastingMessage:(BOOL)arg0;
- (void)setIsTheFirstMessage:(BOOL)arg0;
- (BOOL)receivedDuplicatedMessage:(const void *)arg0;
- (void)setLastMsgSequenceId:(unsigned long long)arg0;
- (id)msgReceiver;
- (void)handleUnknownMessage_:(const void *)arg0;
- (void)broadcastReceivingMessage_:(const void *)arg0;
- (void)setMsgReceiver:(id)arg0;
- (BOOL)isTheFirstMessage;
- (unsigned long long)lastMsgSequenceId;
- (id)init;
- (void).cxx_destruct;
- (void)dispatchMessage:(const void *)arg0;
- (BOOL)isBroadcasting;
- (void)setIsBroadcasting:(BOOL)arg0;

@end
