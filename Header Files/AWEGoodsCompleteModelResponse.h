//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface AWEGoodsCompleteModelResponse : AWEBaseApiModel <AWEECommerceQualityResponseModelLostRequiredKeys> {
    NSArray *_completeGoodsList;
}

@property (copy, nonatomic) NSArray *completeGoodsList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)completeGoodsListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setCompleteGoodsList:(id)arg0;
- (id)completeGoodsList;
- (id)lostRequiredKeys;
- (void).cxx_destruct;

@end