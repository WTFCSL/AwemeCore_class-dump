//
//     Generated by private class-dump
//

@class NSString, IncomeExchangeResult_MarketingData;

@interface IncomeExchangeResult_ResponseExtra : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *source;
@property (copy, nonatomic) NSString *rebateMessage;
@property (retain, nonatomic) IncomeExchangeResult_MarketingData *marketingData;
@property (nonatomic) BOOL hasMarketingData;

+ (id)descriptor;

@end
