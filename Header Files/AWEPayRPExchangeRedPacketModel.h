//
//     Generated by private class-dump
//

@class NSString, NSNumber;

@interface AWEPayRPExchangeRedPacketModel : AWEBaseApiModel {
    long long _status;
    NSString *_statusDesc;
    long long _dueLeftTime;
    long long _dueTime;
    NSString *_createUid;
    long long _sendTime;
    long long _receiveTime;
    NSString *_orderNo;
    NSString *_refundAddr;
    unsigned long long _redpacketType;
    NSNumber *_overDueMinutes;
}

@property (nonatomic) long long status;
@property (copy, nonatomic) NSString *statusDesc;
@property (nonatomic) long long dueLeftTime;
@property (nonatomic) long long dueTime;
@property (copy, nonatomic) NSString *createUid;
@property (nonatomic) long long sendTime;
@property (nonatomic) long long receiveTime;
@property (copy, nonatomic) NSString *orderNo;
@property (copy, nonatomic) NSString *refundAddr;
@property (nonatomic) unsigned long long redpacketType;
@property (retain, nonatomic) NSNumber *overDueMinutes;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setReceiveTime:(long long)arg0;
- (long long)receiveTime;
- (id)statusDesc;
- (void)setStatusDesc:(id)arg0;
- (void)setOrderNo:(id)arg0;
- (id)orderNo;
- (unsigned long long)redpacketType;
- (id)createUid;
- (id)refundAddr;
- (void)setDueLeftTime:(long long)arg0;
- (long long)dueLeftTime;
- (void)setRefundAddr:(id)arg0;
- (id)overDueMinutes;
- (void)setCreateUid:(id)arg0;
- (void)setRedpacketType:(unsigned long long)arg0;
- (void)setOverDueMinutes:(id)arg0;
- (void).cxx_destruct;
- (long long)status;
- (void)setStatus:(long long)arg0;
- (long long)dueTime;
- (void)setDueTime:(long long)arg0;
- (long long)sendTime;
- (void)setSendTime:(long long)arg0;

@end