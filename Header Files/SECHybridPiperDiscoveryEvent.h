//
//     Generated by private class-dump
//

@class NSString;

@interface SECHybridPiperDiscoveryEvent : SECHybridPiperEvent {
    NSString *_protocolType;
    NSString *_protocolName;
    NSString *_protocolHandler;
}

@property (copy, nonatomic) NSString *protocolType;
@property (copy, nonatomic) NSString *protocolName;
@property (copy, nonatomic) NSString *protocolHandler;

- (void)setProtocolHandler:(id)arg0;
- (id)dictRepresentation;
- (void).cxx_destruct;
- (id)protocolHandler;
- (id)eventType;
- (id)protocolName;
- (void)setProtocolName:(id)arg0;
- (id)protocolType;
- (void)setProtocolType:(id)arg0;

@end
