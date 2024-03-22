//
//     Generated by private class-dump
//

@class NSString, NSArray, NLEWatermarkMask_OC;

@interface NLEWatermarkParam_OC : NSObject {
    struct shared_ptr<nle::media::NLEWatermarkParam> { struct NLEWatermarkParam *__ptr_; struct __shared_weak_count *__cntrl_; } _cppWatermarkParam;
}

@property (nonatomic) struct shared_ptr<nle::media::NLEWatermarkParam> { struct NLEWatermarkParam *__ptr_; struct __shared_weak_count *__cntrl_; } cppWatermarkParam;
@property (nonatomic) BOOL needExtFile;
@property (retain, nonatomic) NSString *extFile;
@property (retain, nonatomic) NSArray *entities;
@property (retain, nonatomic) NLEWatermarkMask_OC *mask;
@property (retain, nonatomic) NSArray *images;
@property (retain, nonatomic) NSArray *secondHalfImages;
@property (nonatomic) long long interval;
@property (nonatomic) long long xOffset;
@property (nonatomic) long long yOffset;
@property (nonatomic) long long width;
@property (nonatomic) long long height;
@property (nonatomic) long long duration;
@property (nonatomic) long long position;
@property (nonatomic) long long rotation;

- (void)setCppWatermarkParam:(struct shared_ptr<nle::media::NLEWatermarkParam> { struct NLEWatermarkParam *x0; struct __shared_weak_count *x1; })arg0;
- (struct shared_ptr<nle::media::NLEWatermarkParam> { struct NLEWatermarkParam *x0; struct __shared_weak_count *x1; })cppWatermarkParam;
- (BOOL)needExtFile;
- (void)setNeedExtFile:(BOOL)arg0;
- (id)extFile;
- (void)setExtFile:(id)arg0;
- (id)secondHalfImages;
- (void)setSecondHalfImages:(id)arg0;
- (id)entities;
- (id)init;
- (id)images;
- (void)setRotation:(long long)arg0;
- (void).cxx_destruct;
- (long long)height;
- (long long)position;
- (long long)interval;
- (long long)yOffset;
- (void)setPosition:(long long)arg0;
- (id)mask;
- (void)setInterval:(long long)arg0;
- (void)setMask:(id)arg0;
- (long long)duration;
- (long long)rotation;
- (void)setWidth:(long long)arg0;
- (void)setEntities:(id)arg0;
- (void)setHeight:(long long)arg0;
- (long long)width;
- (id).cxx_construct;
- (void)setImages:(id)arg0;
- (void)setDuration:(long long)arg0;
- (void)setYOffset:(long long)arg0;
- (long long)xOffset;
- (void)setXOffset:(long long)arg0;

@end