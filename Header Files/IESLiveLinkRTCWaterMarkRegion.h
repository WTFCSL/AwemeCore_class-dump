//
//     Generated by private class-dump
//

@class NSString;

@interface IESLiveLinkRTCWaterMarkRegion : NSObject {
    float _x;
    float _y;
    float _w;
    float _h;
    NSString *_waterMarkId;
    long long _zOrder;
    long long _alpha;
    long long _renderMode;
    struct __CVBuffer { } *_imageData;
}

@property (copy, nonatomic) NSString *waterMarkId;
@property (nonatomic) float x;
@property (nonatomic) float y;
@property (nonatomic) float w;
@property (nonatomic) float h;
@property (nonatomic) long long zOrder;
@property (nonatomic) long long alpha;
@property (nonatomic) long long renderMode;
@property (nonatomic) struct __CVBuffer { } *imageData;

- (id)waterMarkId;
- (id)initWithId:(id)arg0 WithX:(float)arg1 withY:(float)arg2 withW:(float)arg3 withH:(float)arg4 withZorder:(long long)arg5 withAlpha:(long long)arg6 withMode:(long long)arg7 withPixelBuffer:(struct __CVBuffer { } *)arg8;
- (void)setWaterMarkId:(id)arg0;
- (float)h;
- (float)w;
- (void).cxx_destruct;
- (void)setW:(float)arg0;
- (void)setAlpha:(long long)arg0;
- (long long)renderMode;
- (void)setY:(float)arg0;
- (float)y;
- (void)setH:(float)arg0;
- (void)setImageData:(struct __CVBuffer { } *)arg0;
- (float)x;
- (void)setX:(float)arg0;
- (void)setRenderMode:(long long)arg0;
- (long long)alpha;
- (struct __CVBuffer { } *)imageData;
- (long long)zOrder;
- (void)setZOrder:(long long)arg0;

@end