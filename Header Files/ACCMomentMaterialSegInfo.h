//
//     Generated by private class-dump
//

@class NSString, NPRecommendReframe, AWEAssetModel;

@interface ACCMomentMaterialSegInfo : MTLModel <MTLJSONSerializing, NSCopying> {
    float _startTime;
    float _endTime;
    NSString *_fragmentId;
    NSString *_materialId;
    NPRecommendReframe *_clipFrame;
}

@property (retain, nonatomic) AWEAssetModel *assetModel;
@property (copy, nonatomic) NSString *fragmentId;
@property (copy, nonatomic) NSString *materialId;
@property (nonatomic) float startTime;
@property (nonatomic) float endTime;
@property (retain, nonatomic) NPRecommendReframe *clipFrame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)clipFrameJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)assetModel;
- (void)setAssetModel:(id)arg0;
- (id)initWithSegInfo:(id)arg0;
- (id)fragmentId;
- (void)setFragmentId:(id)arg0;
- (void)setStartTime:(float)arg0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (float)endTime;
- (float)startTime;
- (id)clipFrame;
- (void)setEndTime:(float)arg0;
- (id)materialId;
- (void)setMaterialId:(id)arg0;
- (void)setClipFrame:(id)arg0;

@end