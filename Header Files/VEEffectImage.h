//
//     Generated by private class-dump
//

@interface VEEffectImage : IESMMObject {
    struct bef_image_t { char *x0; int x1; int x2; int x3; int x4; int x5; } *_image;
    int _width;
    int _height;
    int _stride;
    unsigned long long _format;
    unsigned long long _orientation;
}

@property (nonatomic) int width;
@property (nonatomic) int height;
@property (nonatomic) int stride;
@property (nonatomic) unsigned long long format;
@property (nonatomic) unsigned long long orientation;

- (id)initWithEffectImage:(void *)arg0;
- (void)setStride:(int)arg0;
- (int)height;
- (unsigned long long)orientation;
- (void)setFormat:(unsigned long long)arg0;
- (void)setOrientation:(unsigned long long)arg0;
- (void)setWidth:(int)arg0;
- (const char *)getData;
- (void)setHeight:(int)arg0;
- (int)stride;
- (void)dealloc;
- (int)width;
- (unsigned long long)format;
- (void *)getImage;

@end