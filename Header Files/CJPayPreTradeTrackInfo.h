//
//     Generated by private class-dump
//

@class NSString;

@interface CJPayPreTradeTrackInfo : JSONModel {
    NSString *_balanceStatus;
    NSString *_bankCardStatus;
    NSString *_creditStatus;
}

@property (copy, nonatomic) NSString *balanceStatus;
@property (copy, nonatomic) NSString *bankCardStatus;
@property (copy, nonatomic) NSString *creditStatus;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)arg0;

- (id)bankCardStatus;
- (void)setBankCardStatus:(id)arg0;
- (void)setCreditStatus:(id)arg0;
- (id)creditStatus;
- (void).cxx_destruct;
- (id)balanceStatus;
- (void)setBalanceStatus:(id)arg0;

@end
