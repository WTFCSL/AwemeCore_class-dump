//
//     Generated by private class-dump
//

@class NSString, IESGCPPBGameCPBuyGoodsResponse_CheckResultInfo;

@interface IESGCPPBGameCPBuyGoodsResponse_Data : GPBMessage

@property (copy, nonatomic) NSString *orderId;
@property (copy, nonatomic) NSString *paymentId;
@property (copy, nonatomic) NSString *cashierParam;
@property (copy, nonatomic) NSString *cashierType;
@property (retain, nonatomic) IESGCPPBGameCPBuyGoodsResponse_CheckResultInfo *checkResult;
@property (nonatomic) BOOL hasCheckResult;
@property (copy, nonatomic) NSString *payResultLink;
@property (copy, nonatomic) NSString *orderDetailLink;
@property (nonatomic) long long orderCreateTime;

+ (id)descriptor;

@end
