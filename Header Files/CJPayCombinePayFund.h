//
//     Generated by private class-dump
//

@class NSString;

@interface CJPayCombinePayFund : JSONModel {
    NSString *_fundTypeDesc;
    NSString *_fundType;
    NSString *_fundAmountDesc;
    long long _fundAmount;
}

@property (copy, nonatomic) NSString *fundTypeDesc;
@property (copy, nonatomic) NSString *fundType;
@property (copy, nonatomic) NSString *fundAmountDesc;
@property (nonatomic) long long fundAmount;

+ (id)keyMapper;

- (id)fundType;
- (long long)fundAmount;
- (id)fundTypeDesc;
- (id)fundAmountDesc;
- (void)setFundTypeDesc:(id)arg0;
- (void)setFundType:(id)arg0;
- (void)setFundAmountDesc:(id)arg0;
- (void)setFundAmount:(long long)arg0;
- (void).cxx_destruct;

@end