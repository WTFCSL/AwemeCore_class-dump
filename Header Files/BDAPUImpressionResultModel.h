//
//     Generated by private class-dump
//

@class NSString;

@interface BDAPUImpressionResultModel : BDXBridgeModel {
    long long _code;
    NSString *_result;
}

@property (nonatomic) long long code;
@property (copy, nonatomic) NSString *result;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithCode:(long long)arg0 result:(id)arg1;
- (void)setCode:(long long)arg0;
- (void)setResult:(id)arg0;
- (long long)code;
- (void).cxx_destruct;
- (id)result;

@end
