//
//     Generated by private class-dump
//

@class NSString;

@interface IESECTraceTimeMetric : MTLModel <MTLJSONSerializing> {
    long long _opTimestamp;
    long long _producerDuration;
    long long _consumerDuration;
    long long _msgSendTimestamp;
}

@property (nonatomic) long long opTimestamp;
@property (nonatomic) long long producerDuration;
@property (nonatomic) long long consumerDuration;
@property (nonatomic) long long msgSendTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setOpTimestamp:(long long)arg0;
- (long long)opTimestamp;
- (long long)producerDuration;
- (void)setProducerDuration:(long long)arg0;
- (long long)consumerDuration;
- (void)setConsumerDuration:(long long)arg0;
- (long long)msgSendTimestamp;
- (void)setMsgSendTimestamp:(long long)arg0;

@end