//
//     Generated by private class-dump
//

@class NSArray, NSString, IESECURLModel, IESECGoodsLogisticsAddressModel, NSNumber;

@interface IESECGoodsLogisticsModel : MTLModel <MTLJSONSerializing> {
    NSArray *_logisticText;
    NSArray *_logisticLines;
    long long _postFee;
    NSString *_deliveryDelayDesc;
    NSString *_presellDelayDesc;
    NSNumber *_fastDispatch;
    IESECGoodsLogisticsAddressModel *_destAddr;
    unsigned long long _arriveTime;
    IESECURLModel *_arriveIcon;
    IESECURLModel *_prefixIcon;
    NSString *_extraLog;
    NSString *_middleText;
}

@property (copy, nonatomic) NSArray *logisticLines;
@property (nonatomic) long long postFee;
@property (copy, nonatomic) NSArray *logisticText;
@property (copy, nonatomic) NSString *deliveryDelayDesc;
@property (copy, nonatomic) NSString *presellDelayDesc;
@property (copy, nonatomic) NSNumber *fastDispatch;
@property (retain, nonatomic) IESECGoodsLogisticsAddressModel *destAddr;
@property (nonatomic) unsigned long long arriveTime;
@property (retain, nonatomic) IESECURLModel *arriveIcon;
@property (retain, nonatomic) IESECURLModel *prefixIcon;
@property (copy, nonatomic) NSString *extraLog;
@property (retain, nonatomic) NSString *middleText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logisticLinesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)extraLog;
- (void)setExtraLog:(id)arg0;
- (id)presellDelayDesc;
- (void)setPresellDelayDesc:(id)arg0;
- (id)deliveryDelayDesc;
- (void)setDeliveryDelayDesc:(id)arg0;
- (id)logisticText;
- (id)prefixIcon;
- (id)fastDispatch;
- (id)logisticLines;
- (unsigned long long)arriveTime;
- (long long)postFee;
- (void)setLogisticText:(id)arg0;
- (void)setLogisticLines:(id)arg0;
- (void)setPostFee:(long long)arg0;
- (void)setFastDispatch:(id)arg0;
- (void)setArriveTime:(unsigned long long)arg0;
- (id)arriveIcon;
- (void)setArriveIcon:(id)arg0;
- (void)setPrefixIcon:(id)arg0;
- (void).cxx_destruct;
- (id)destAddr;
- (void)setDestAddr:(id)arg0;
- (id)middleText;
- (void)setMiddleText:(id)arg0;

@end