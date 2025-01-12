//
//     Generated by private class-dump
//

@class NSString, NSNumber;

@interface BDXBridgeBulletPreloadMethodParamModel : BDXBridgeModel {
    NSString *_schema;
    NSNumber *_availableMemoryThreshold;
    NSString *_preconnectUrl;
    long long _strategy;
}

@property (copy, nonatomic) NSString *schema;
@property (retain, nonatomic) NSNumber *availableMemoryThreshold;
@property (copy, nonatomic) NSString *preconnectUrl;
@property (nonatomic) long long strategy;

+ (id)strategyJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)availableMemoryThreshold;
- (void)setAvailableMemoryThreshold:(id)arg0;
- (id)preconnectUrl;
- (void)setPreconnectUrl:(id)arg0;
- (void)setSchema:(id)arg0;
- (long long)strategy;
- (void).cxx_destruct;
- (id)schema;
- (void)setStrategy:(long long)arg0;

@end
