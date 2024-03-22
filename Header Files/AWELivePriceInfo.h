//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface AWELivePriceInfo : AWEBaseApiModel {
    NSString *_currency;
    unsigned long long _pos;
    NSString *_amount;
    NSArray *_payType;
}

@property (copy, nonatomic) NSString *currency;
@property (nonatomic) unsigned long long pos;
@property (copy, nonatomic) NSString *amount;
@property (copy, nonatomic) NSArray *payType;

+ (id)JSONKeyPathsByPropertyKey;

- (id)payType;
- (void)setPayType:(id)arg0;
- (unsigned long long)pos;
- (void).cxx_destruct;
- (void)setPos:(unsigned long long)arg0;
- (id)amount;
- (void)setAmount:(id)arg0;
- (id)currency;
- (void)setCurrency:(id)arg0;

@end