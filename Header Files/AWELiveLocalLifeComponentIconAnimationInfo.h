//
//     Generated by private class-dump
//

@class NSString, AWELiveLocalLifeComponentIconAnimationStrategy, NSDictionary, AWEURLModel;

@interface AWELiveLocalLifeComponentIconAnimationInfo : MTLModel <MTLJSONSerializing> {
    NSString *_animationKey;
    AWEURLModel *_dynamicIconUrl;
    AWELiveLocalLifeComponentIconAnimationStrategy *_animationStrategy;
    NSDictionary *_trackParams;
}

@property (copy, nonatomic) NSString *animationKey;
@property (retain, nonatomic) AWEURLModel *dynamicIconUrl;
@property (retain, nonatomic) AWELiveLocalLifeComponentIconAnimationStrategy *animationStrategy;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)dynamicIconUrlJSONTransformer;
+ (id)animationStrategyJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)trackParams;
- (void)setTrackParams:(id)arg0;
- (void)setAnimationKey:(id)arg0;
- (id)dynamicIconUrl;
- (id)animationStrategy;
- (void)setDynamicIconUrl:(id)arg0;
- (void)setAnimationStrategy:(id)arg0;
- (void).cxx_destruct;
- (id)animationKey;

@end
