//
//     Generated by private class-dump
//

@class NSString;

@interface IESECRelationGoodsMarketingData : MTLModel <MTLJSONSerializing> {
    unsigned long long _cardType;
    NSString *_returnReward;
    NSString *_returnRewardPrefix;
    NSString *_returnRewardUnit;
    NSString *_transMeta;
}

@property (nonatomic) unsigned long long cardType;
@property (copy, nonatomic) NSString *returnReward;
@property (copy, nonatomic) NSString *returnRewardPrefix;
@property (copy, nonatomic) NSString *returnRewardUnit;
@property (copy, nonatomic) NSString *transMeta;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)transMeta;
- (id)returnRewardPrefix;
- (id)returnReward;
- (id)returnRewardUnit;
- (void)setReturnReward:(id)arg0;
- (void)setReturnRewardPrefix:(id)arg0;
- (void)setReturnRewardUnit:(id)arg0;
- (void)setTransMeta:(id)arg0;
- (void).cxx_destruct;
- (unsigned long long)cardType;
- (void)setCardType:(unsigned long long)arg0;

@end
