//
//     Generated by private class-dump
//

@class NSString;

@interface NLEWatermarkMask_OC : NSObject {
    NSString *_maskImage;
    struct shared_ptr<nle::media::NLEWatermarkMask> { struct NLEWatermarkMask *__ptr_; struct __shared_weak_count *__cntrl_; } _cppWatermarkMask;
}

@property (nonatomic) struct shared_ptr<nle::media::NLEWatermarkMask> { struct NLEWatermarkMask *__ptr_; struct __shared_weak_count *__cntrl_; } cppWatermarkMask;
@property (retain, nonatomic) NSString *maskImage;
@property (nonatomic) long long xOffset;
@property (nonatomic) long long yOffset;
@property (nonatomic) long long width;
@property (nonatomic) long long height;

- (void)setCppWatermarkMask:(struct shared_ptr<nle::media::NLEWatermarkMask> { struct NLEWatermarkMask *x0; struct __shared_weak_count *x1; })arg0;
- (struct shared_ptr<nle::media::NLEWatermarkMask> { struct NLEWatermarkMask *x0; struct __shared_weak_count *x1; })cppWatermarkMask;
- (id)init;
- (void).cxx_destruct;
- (long long)height;
- (long long)yOffset;
- (void)setWidth:(long long)arg0;
- (void)setHeight:(long long)arg0;
- (long long)width;
- (id).cxx_construct;
- (void)setYOffset:(long long)arg0;
- (void)setMaskImage:(id)arg0;
- (id)maskImage;
- (long long)xOffset;
- (void)setXOffset:(long long)arg0;

@end
