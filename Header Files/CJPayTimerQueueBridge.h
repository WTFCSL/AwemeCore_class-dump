//
//     Generated by private class-dump
//

@protocol CJPayTimerQueueBridgeProtocol;

@interface CJPayTimerQueueBridge : NSObject {
    id<CJPayTimerQueueBridgeProtocol> _delegate;
}

@property (weak, nonatomic) id<CJPayTimerQueueBridgeProtocol> delegate;

- (void)bridgeMethod;
- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg0;

@end
