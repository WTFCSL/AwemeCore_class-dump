//
//     Generated by private class-dump
//

@interface NLESegmentHDRFilter_OC : NLESegmentFilter_OC

@property (nonatomic) struct shared_ptr<cut::model::NLESegmentHDRFilter> { struct NLESegmentHDRFilter *x0; struct __shared_weak_count *x1; } cppValue;
@property (nonatomic) long long frameType;
@property (nonatomic) BOOL denoise;
@property (nonatomic) long long asfMode;
@property (nonatomic) long long hdrMode;

- (id)initWithCPPNode:(struct shared_ptr<cut::model::NLESegmentHDRFilter> { struct NLESegmentHDRFilter *x0; struct __shared_weak_count *x1; })arg0;
- (long long)asfMode;
- (void)setAsfMode:(long long)arg0;
- (void)setHdrMode:(long long)arg0;
- (id)init;
- (long long)hdrMode;
- (long long)frameType;
- (void)setFrameType:(long long)arg0;
- (BOOL)denoise;
- (void)setDenoise:(BOOL)arg0;

@end
