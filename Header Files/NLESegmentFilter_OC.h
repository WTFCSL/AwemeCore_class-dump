//
//     Generated by private class-dump
//

@class NSString, NLEResourceNode_OC;

@interface NLESegmentFilter_OC : NLESegment_OC {
    NLEResourceNode_OC *_effectSDKFilter;
}

@property (nonatomic) struct shared_ptr<cut::model::NLESegmentFilter> { struct NLESegmentFilter *x0; struct __shared_weak_count *x1; } cppValue;
@property (nonatomic) float intensity;
@property (copy, nonatomic) NSString *filterName;
@property (copy, nonatomic) NLEResourceNode_OC *effectSDKFilter;

+ (id)audioFilterSegment;

- (id)getResNode;
- (id)initWithCPPNode:(struct shared_ptr<cut::model::NLESegmentFilter> { struct NLESegmentFilter *x0; struct __shared_weak_count *x1; })arg0;
- (id)effectSDKFilter;
- (BOOL)isAudioFilterSegment;
- (BOOL)isAudioBalanceFilterSegment;
- (BOOL)isAudioVolumeFilterSegment;
- (BOOL)isAudioDSPFilterSegment;
- (BOOL)isAudioSamiDenoiseFilterSegment;
- (BOOL)isAudioMatrixFilterSegment;
- (BOOL)isAudioFadeFilterSegment;
- (void)setEffectSDKFilter:(id)arg0;
- (unsigned long long)getType;
- (id)init;
- (void).cxx_destruct;
- (float)intensity;
- (id)filterName;
- (void)setIntensity:(float)arg0;
- (void)setFilterName:(id)arg0;

@end
