//
//     Generated by private class-dump
//

@class QueryOrderResult_ChargeOrderExtra, QueryOrderResult_ChargeOrderData;

@interface QueryOrderResult : IESLivePBBaseMessage

@property (retain, nonatomic) QueryOrderResult_ChargeOrderData *data_p;
@property (nonatomic) BOOL hasData_p;
@property (retain, nonatomic) QueryOrderResult_ChargeOrderExtra *extra;
@property (nonatomic) BOOL hasExtra;

+ (id)descriptor;

@end
