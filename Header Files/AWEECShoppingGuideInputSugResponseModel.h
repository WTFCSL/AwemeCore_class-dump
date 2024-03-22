//
//     Generated by private class-dump
//

@class NSString, NSArray, NSDictionary;

@interface AWEECShoppingGuideInputSugResponseModel : MTLModel <MTLJSONSerializing> {
    long long _statusCode;
    NSString *_statusMessage;
    NSArray *_recommendInputs;
    NSArray *_hitKeywords;
    NSString *_baseUrl;
    NSDictionary *_extra;
}

@property (nonatomic) long long statusCode;
@property (copy, nonatomic) NSString *statusMessage;
@property (copy, nonatomic) NSArray *recommendInputs;
@property (copy, nonatomic) NSArray *hitKeywords;
@property (copy, nonatomic) NSString *baseUrl;
@property (copy, nonatomic) NSDictionary *extra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)JSONTransformerForKey:(id)arg0;

- (void)setExtra:(id)arg0;
- (id)recommendInputs;
- (void)setRecommendInputs:(id)arg0;
- (id)hitKeywords;
- (void)setHitKeywords:(id)arg0;
- (long long)statusCode;
- (void)setStatusCode:(long long)arg0;
- (void).cxx_destruct;
- (void)setBaseUrl:(id)arg0;
- (id)extra;
- (id)baseUrl;
- (id)statusMessage;
- (void)setStatusMessage:(id)arg0;

@end
