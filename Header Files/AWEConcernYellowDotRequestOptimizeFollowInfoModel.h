//
//     Generated by private class-dump
//

@class NSString, AWEConcernYellowDotRequestOptimizeStrategyModel;

@interface AWEConcernYellowDotRequestOptimizeFollowInfoModel : AWEBaseApiModel {
    NSString *_followYellowPointSourceType;
    AWEConcernYellowDotRequestOptimizeStrategyModel *_optimizeStrategyHitInfo;
}

@property (copy, nonatomic) NSString *followYellowPointSourceType;
@property (retain, nonatomic) AWEConcernYellowDotRequestOptimizeStrategyModel *optimizeStrategyHitInfo;

+ (id)optimizeStrategyHitInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)followYellowPointSourceType;
- (void)setFollowYellowPointSourceType:(id)arg0;
- (id)optimizeStrategyHitInfo;
- (void)setOptimizeStrategyHitInfo:(id)arg0;
- (void).cxx_destruct;

@end