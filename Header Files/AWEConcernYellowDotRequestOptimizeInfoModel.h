//
//     Generated by private class-dump
//

@class NSString, AWEConcernYellowDotRequestOptimizeStrategyModel;

@interface AWEConcernYellowDotRequestOptimizeInfoModel : AWEBaseApiModel {
    NSString *_yellowPointSourceType;
    AWEConcernYellowDotRequestOptimizeStrategyModel *_optimizeStrategyHitInfo;
}

@property (copy, nonatomic) NSString *yellowPointSourceType;
@property (retain, nonatomic) AWEConcernYellowDotRequestOptimizeStrategyModel *optimizeStrategyHitInfo;

+ (id)optimizeStrategyHitInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)optimizeStrategyHitInfo;
- (void)setOptimizeStrategyHitInfo:(id)arg0;
- (id)convertToJsonString;
- (id)yellowPointSourceType;
- (void)setYellowPointSourceType:(id)arg0;
- (void).cxx_destruct;

@end