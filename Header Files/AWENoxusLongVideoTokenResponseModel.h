//
//     Generated by private class-dump
//

@class AWEDemaciaPlayTokenAuthModel;

@interface AWENoxusLongVideoTokenResponseModel : AWEBaseApiModel {
    AWEDemaciaPlayTokenAuthModel *_tokenAuth;
}

@property (retain, nonatomic) AWEDemaciaPlayTokenAuthModel *tokenAuth;

+ (id)tokenAuthJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)tokenAuth;
- (void)setTokenAuth:(id)arg0;
- (void).cxx_destruct;

@end