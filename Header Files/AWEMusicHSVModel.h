//
//     Generated by private class-dump
//

@interface AWEMusicHSVModel : AWEBaseApiModel {
    float _h;
    float _s;
    float _v;
}

@property (nonatomic) float h;
@property (nonatomic) float s;
@property (nonatomic) float v;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setV:(float)arg0;
- (float)s;
- (void)setS:(float)arg0;
- (double)awe_normalizeH;
- (double)awe_normalizeS;
- (BOOL)awe_isNeedNormalize;
- (double)awe_normalizeV;
- (float)h;
- (void)setH:(float)arg0;
- (float)v;

@end