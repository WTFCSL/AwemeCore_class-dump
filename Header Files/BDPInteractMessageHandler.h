//
//     Generated by private class-dump
//

@class NSString;
@protocol BDPInteractMessageHandleProtocol;

@interface BDPInteractMessageHandler : NSObject {
    NSString *_event;
    id<BDPInteractMessageHandleProtocol> _delegate;
}

@property (copy, nonatomic) NSString *event;
@property (weak, nonatomic) id<BDPInteractMessageHandleProtocol> delegate;

- (void)setEvent:(id)arg0;
- (id)event;
- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg0;

@end
