//
//     Generated by private class-dump
//

@class NSMutableDictionary, AWEUserProfileSpecificationPostContributionGuideTip;

@interface AWEUserProfileSpecificationPostContributionGuideTipModel : AWEUserProfileSpecificationTipModel {
    AWEUserProfileSpecificationPostContributionGuideTip *_publishGuideTip;
    NSMutableDictionary *_deallocBlockDict;
}

@property (nonatomic) long long contributionGuideShowType;
@property (retain, nonatomic) AWEUserProfileSpecificationPostContributionGuideTip *publishGuideTip;
@property (retain, nonatomic) NSMutableDictionary *deallocBlockDict;

+ (id)publishGuideTipJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setContributionGuideShowType:(long long)arg0;
- (long long)contributionGuideShowType;
- (id)deallocBlockDict;
- (id)publishGuideTip;
- (void)setPublishGuideTip:(id)arg0;
- (void)setDeallocBlockDict:(id)arg0;
- (void).cxx_destruct;
- (void)dealloc;

@end