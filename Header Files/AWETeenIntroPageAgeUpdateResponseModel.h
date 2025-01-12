//
//     Generated by private class-dump
//

@class NSString, AWETeenAgeScopeModel;

@interface AWETeenIntroPageAgeUpdateResponseModel : AWEBaseApiModel {
    NSString *_ub;
    long long _ua;
    AWETeenAgeScopeModel *_ageScopeInfo;
}

@property (copy, nonatomic) NSString *ub;
@property (nonatomic) long long ua;
@property (retain, nonatomic) AWETeenAgeScopeModel *ageScopeInfo;

+ (id)ageScopeInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setUa:(long long)arg0;
- (long long)ua;
- (id)ageScopeInfo;
- (void)setAgeScopeInfo:(id)arg0;
- (id)ub;
- (void)setUb:(id)arg0;
- (void).cxx_destruct;

@end
