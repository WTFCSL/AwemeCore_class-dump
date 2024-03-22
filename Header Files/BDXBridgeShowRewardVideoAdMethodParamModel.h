//
//     Generated by private class-dump
//

@class NSString, BDXBridgeShowRewardVideoAdRewardAgainConfig, NSDictionary;

@interface BDXBridgeShowRewardVideoAdMethodParamModel : BDXBridgeModel {
    NSString *_adFrom;
    NSString *_creatorId;
    BDXBridgeShowRewardVideoAdRewardAgainConfig *_rewardAgainConfig;
    NSDictionary *_businessExtraData;
}

@property (copy, nonatomic) NSString *adFrom;
@property (copy, nonatomic) NSString *creatorId;
@property (retain, nonatomic) BDXBridgeShowRewardVideoAdRewardAgainConfig *rewardAgainConfig;
@property (copy, nonatomic) NSDictionary *businessExtraData;

+ (id)requiredKeyPaths;
+ (id)rewardAgainConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)adFrom;
- (void)setAdFrom:(id)arg0;
- (id)businessExtraData;
- (id)rewardAgainConfig;
- (void)setRewardAgainConfig:(id)arg0;
- (void)setBusinessExtraData:(id)arg0;
- (void).cxx_destruct;
- (id)creatorId;
- (void)setCreatorId:(id)arg0;

@end