//
//     Generated by private class-dump
//

@class AWEFeedDoubleColumnCellRecommendReasonStaticLabel;

@interface AWEFeedDoubleColumnCellRecommendReasonCandidateModel : AWEBaseApiModel {
    AWEFeedDoubleColumnCellRecommendReasonStaticLabel *_staticLabel;
    long long _businessID;
    long long _priority;
}

@property (retain, nonatomic) AWEFeedDoubleColumnCellRecommendReasonStaticLabel *staticLabel;
@property (nonatomic) long long businessID;
@property (nonatomic) long long priority;

+ (id)staticLabelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)staticLabel;
- (void)setStaticLabel:(id)arg0;
- (void).cxx_destruct;
- (void)setPriority:(long long)arg0;
- (long long)businessID;
- (long long)priority;
- (void)setBusinessID:(long long)arg0;

@end
