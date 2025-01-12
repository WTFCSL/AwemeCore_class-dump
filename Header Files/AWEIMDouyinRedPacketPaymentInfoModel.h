//
//     Generated by private class-dump
//

@class NSString;

@interface AWEIMDouyinRedPacketPaymentInfoModel : AWEBaseApiModel {
    long long _amount;
    long long _singleAmount;
    long long _count;
    long long _receiveCount;
    unsigned long long _redPacketType;
    unsigned long long _redPacketSubtype;
    NSString *_statusDesc;
    NSString *_paymentUrl;
    NSString *_orderId;
    NSString *_redPacketId;
    NSString *_payUrlType;
    NSString *_clientMessageId;
}

@property (nonatomic) long long amount;
@property (nonatomic) long long singleAmount;
@property (nonatomic) long long count;
@property (nonatomic) long long receiveCount;
@property (nonatomic) unsigned long long redPacketType;
@property (nonatomic) unsigned long long redPacketSubtype;
@property (copy, nonatomic) NSString *statusDesc;
@property (copy, nonatomic) NSString *paymentUrl;
@property (copy, nonatomic) NSString *orderId;
@property (copy, nonatomic) NSString *redPacketId;
@property (copy, nonatomic) NSString *payUrlType;
@property (copy, nonatomic) NSString *clientMessageId;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setSingleAmount:(long long)arg0;
- (long long)singleAmount;
- (id)clientMessageId;
- (id)orderId;
- (void)setOrderId:(id)arg0;
- (id)statusDesc;
- (void)setStatusDesc:(id)arg0;
- (void)setClientMessageId:(id)arg0;
- (id)redPacketId;
- (void)setRedPacketId:(id)arg0;
- (id)paymentUrl;
- (id)payUrlType;
- (void)setRedPacketType:(unsigned long long)arg0;
- (unsigned long long)redPacketType;
- (long long)receiveCount;
- (void)setReceiveCount:(long long)arg0;
- (unsigned long long)redPacketSubtype;
- (void)setRedPacketSubtype:(unsigned long long)arg0;
- (void)setPaymentUrl:(id)arg0;
- (void)setPayUrlType:(id)arg0;
- (void)setCount:(long long)arg0;
- (void).cxx_destruct;
- (long long)count;
- (long long)amount;
- (void)setAmount:(long long)arg0;

@end
