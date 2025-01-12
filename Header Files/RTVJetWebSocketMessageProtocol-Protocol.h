//
//     Generated by private class-dump
//

@class NSData, NSString, NSDictionary;

@protocol RTVJetWebSocketMessageProtocol <NSObject>

@property (nonatomic) unsigned long long sequenceId;
@property (nonatomic) unsigned long long logId;
@property (nonatomic) int service;
@property (nonatomic) int method;
@property (copy, nonatomic) NSData *payload;
@property (copy, nonatomic) NSString *payloadType;
@property (copy, nonatomic) NSString *payloadEncoding;
@property (copy, nonatomic) NSDictionary *headers;
@property (nonatomic) long long receivedSource;

- (unsigned long long)logId;
- (void)setLogId:(unsigned long long)arg0;
- (void)setPayloadEncoding:(id)arg0;
- (id)payloadEncoding;
- (unsigned long long)sequenceId;
- (void)setSequenceId:(unsigned long long)arg0;
- (long long)receivedSource;
- (void)setReceivedSource:(long long)arg0;
- (id)payload;
- (void)setHeaders:(id)arg0;
- (void)setService:(int)arg0;
- (int)method;
- (id)headers;
- (void)setPayload:(id)arg0;
- (void)setMethod:(int)arg0;
- (int)service;
- (id)payloadType;
- (void)setPayloadType:(id)arg0;

@end
