//
//     Generated by private class-dump
//

@interface VPVREye : NSObject {
    void *_lensDistortion;
    struct CardboardEyeTextureDescription { unsigned long long x0; float x1; float x2; float x3; float x4; } *_eyeTextureDescription;
    struct { void /* unknown type, empty encoding */ columns[4]; } _projectionMatrix;
    struct { void /* unknown type, empty encoding */ columns[4]; } _eyeMatrix;
    struct CGSize { double width; double height; } _textureSize;
    long long _scopicType;
    BOOL _scopicMonoDrawOnce;
    float _zoom;
    unsigned long long _type;
}

@property (nonatomic) unsigned long long type;
@property (readonly, nonatomic) long long scopicType;
@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ x0[4]; } eyeMatrix;
@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ x0[4]; } projectionMatrix;
@property (readonly, nonatomic) struct { double x0; double x1; double x2; double x3; double x4; double x5; } viewport;
@property (nonatomic) float zoom;

+ (id)eyeWithType:(unsigned long long)arg0 textureSize:(struct CGSize { double x0; double x1; })arg1 scopicType:(long long)arg2 fovAngle:(float)arg3 configData:(id)arg4;

- (long long)scopicType;
- (void)updateParams;
- (struct CardboardMesh { int *x0; int x1; float *x2; float *x3; int x4; })distortionMesh;
- (struct CardboardEyeTextureDescription { unsigned long long x0; float x1; float x2; float x3; float x4; } *)eyeTextureDescription;
- (id)initWithType:(unsigned long long)arg0 textureSize:(struct CGSize { double x0; double x1; })arg1 scopicType:(long long)arg2 fovAngle:(float)arg3 configData:(id)arg4;
- (struct { void /* unknown type, empty encoding */ x0[4]; })eyeMatrix;
- (void)setZoom:(float)arg0;
- (struct { double x0; double x1; double x2; double x3; double x4; double x5; })viewport;
- (unsigned long long)type;
- (float)zoom;
- (void)setType:(unsigned long long)arg0;
- (void)dealloc;
- (struct { void /* unknown type, empty encoding */ x0[4]; })projectionMatrix;

@end