//
//     Generated by private class-dump
//

@class IncomeExchangeResult_IncomeExchangeData, IncomeExchangeResult_ResponseExtra;

@interface IncomeExchangeResult : IESLivePBBaseMessage

@property (retain, nonatomic) IncomeExchangeResult_IncomeExchangeData *data_p;
@property (nonatomic) BOOL hasData_p;
@property (retain, nonatomic) IncomeExchangeResult_ResponseExtra *extra;
@property (nonatomic) BOOL hasExtra;

+ (id)descriptor;

@end