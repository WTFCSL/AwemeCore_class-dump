//
//     Generated by private class-dump
//

@class NSString;

@interface ToygerFeatureManager : NSObject {
    float _currentFeatureScore;
    NSString *_version;
    struct vector<float, std::__1::allocator<float> > { float *__begin_; float *__end_; struct __compressed_pair<float *, std::__1::allocator<float> > { float *__value_; } __end_cap_; } _feature;
}

@property (nonatomic) struct vector<float, std::__1::allocator<float> > { float *__begin_; float *__end_; struct __compressed_pair<float *, std::__1::allocator<float> > { float *__value_; } __end_cap_; } feature;
@property (nonatomic) float currentFeatureScore;
@property (retain, nonatomic) NSString *version;

+ (id)generateTempDatawithFeature:(struct vector<float, std::__1::allocator<float> > { float *x0; float *x1; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x0; } x2; })arg0 faceQuality:(float)arg1 faceid:(id)arg2 andVersion:(id)arg3;
+ (void)saveTemplateFeature:(struct vector<float, std::__1::allocator<float> > { float *x0; float *x1; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x0; } x2; })arg0 faceQuality:(float)arg1 withsecKey:(id)arg2 faceid:(id)arg3 andVersion:(id)arg4 toPath:(id)arg5;

- (BOOL)loadFeaturewithseckey:(id)arg0 faceid:(id)arg1;
- (float)currentFeatureScore;
- (void)setCurrentFeatureScore:(float)arg0;
- (void)setVersion:(id)arg0;
- (void).cxx_destruct;
- (struct vector<float, std::__1::allocator<float> > { float *x0; float *x1; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x0; } x2; })feature;
- (void)setFeature:(struct vector<float, std::__1::allocator<float> > { float *x0; float *x1; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x0; } x2; })arg0;
- (id)version;
- (id).cxx_construct;

@end
