//
//     Generated by private class-dump
//

@class NSString, AWELiveVSStartHighlight;

@interface AWELiveVSShowDistributionInfo : AWEBaseApiModel {
    NSString *_recommendText;
    AWELiveVSStartHighlight *_modelMatchedHl;
}

@property (copy, nonatomic) NSString *recommendText;
@property (retain, nonatomic) AWELiveVSStartHighlight *modelMatchedHl;

+ (id)modelMatchedHlJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)recommendText;
- (void)setRecommendText:(id)arg0;
- (id)modelMatchedHl;
- (void)setModelMatchedHl:(id)arg0;
- (void).cxx_destruct;

@end