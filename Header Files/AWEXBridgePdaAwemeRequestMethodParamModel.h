//
//     Generated by private class-dump
//

@class BDXBridgePdaAwemeRequestAwemeCacheConfig, NSString, NSDictionary, NSNumber;

@interface AWEXBridgePdaAwemeRequestMethodParamModel : BDXBridgeModel {
    BOOL _addCommonParams;
    NSString *_url;
    NSString *_method;
    id _body;
    NSNumber *_useUIThread;
    NSNumber *_usePrefetch;
    NSDictionary *_params;
    NSDictionary *_header;
    BDXBridgePdaAwemeRequestAwemeCacheConfig *_awemeCacheConfig;
    NSDictionary *_responseCropConfig;
    long long _bodyType;
}

@property (nonatomic) BOOL addCommonParams;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *method;
@property (retain, nonatomic) id body;
@property (retain, nonatomic) NSNumber *useUIThread;
@property (retain, nonatomic) NSNumber *usePrefetch;
@property (copy, nonatomic) NSDictionary *params;
@property (copy, nonatomic) NSDictionary *header;
@property (retain, nonatomic) BDXBridgePdaAwemeRequestAwemeCacheConfig *awemeCacheConfig;
@property (copy, nonatomic) NSDictionary *responseCropConfig;
@property (nonatomic) long long bodyType;

+ (id)requiredKeyPaths;
+ (id)bodyTypeJSONTransformer;
+ (id)awemeCacheConfigJSONTransformer;
+ (id)defaultValues;
+ (id)JSONKeyPathsByPropertyKey;

- (id)awemeCacheConfig;
- (id)usePrefetch;
- (id)responseCropConfig;
- (id)useUIThread;
- (BOOL)addCommonParams;
- (void)setAddCommonParams:(BOOL)arg0;
- (void)setUseUIThread:(id)arg0;
- (void)setUsePrefetch:(id)arg0;
- (void)setAwemeCacheConfig:(id)arg0;
- (void)setResponseCropConfig:(id)arg0;
- (void)setBody:(id)arg0;
- (id)body;
- (void).cxx_destruct;
- (id)method;
- (void)setMethod:(id)arg0;
- (void)setUrl:(id)arg0;
- (id)header;
- (void)setHeader:(id)arg0;
- (id)params;
- (id)url;
- (void)setParams:(id)arg0;
- (void)setBodyType:(long long)arg0;
- (long long)bodyType;

@end
