//
//     Generated by private class-dump
//

@class NSString, UIImage, MetalFilterVROutput, MetalFilterLensDistortion, VPVRHeadTracker, VPVRSpace, MTKTextureLoader, NSObject;
@protocol MTLTexture, MTLBuffer, OS_dispatch_queue;

@interface MetalFilterVR : MetalFilterDefault <VPVRHeadTrackerDelegate> {
    MetalFilterLensDistortion *_lensDistortionFilter;
    MetalFilterVROutput *_outputFilter;
    VPVRSpace *_space;
    BOOL _paramsDidChange;
    struct CGSize { double width; double height; } _outputTextureSize;
    float _zoom;
    long long _fov;
    long long _contentType;
    long long _scopicType;
    unsigned long long _spaceType;
    float _CMPFaceInnerPadding;
    float _CMPFaceDimension;
    float _expandCoef;
    float _zOffset;
    float _offsetCubicPitch;
    float _offsetCubicYaw;
    void /* unknown type, empty encoding */ _cameraPitchYawRow;
    void /* unknown type, empty encoding */ _textureOffset;
    MTKTextureLoader *_backStickerTextureLoader;
    id<MTLTexture> _backStickerTexture;
    id<MTLTexture> _defaultBackStickerTexture;
    float _backStickerImageCoverAreaDegrees;
    UIImage *_backStickerImage;
    id<MTLBuffer> _textureMappingSrcRectBuffer;
    id<MTLBuffer> _textureMappingDstRectBuffer;
    id<MTLBuffer> _vrConstantsBuffer;
    BOOL _useDynamicProcessingTextureSize;
    double _processingTextureSizeScale;
    id<MTLTexture> _yTexture;
    id<MTLTexture> _uvTexture;
    BOOL _isdisableZaxis;
    float _spaceOrientationPitch;
    float _spaceOrientationYaw;
    float _spaceOrientationRoll;
    float _videoWidht;
    float _videoHeight;
    float _fovAngle;
    NSObject<OS_dispatch_queue> *_vrprocessorQueue;
    BOOL _firstFrameOptimize;
    BOOL _spaceOrientationOptDisable;
    BOOL _scopicTypeMonoOnceDraw;
    struct { void /* unknown type, empty encoding */ vector; } _currentTouchQuat;
    BOOL _haveTouch;
    BOOL _touchRotationInWorldCoord;
    BOOL _isheadTrackEnable;
    VPVRHeadTracker *_headTracker;
    long long _postNotifiVRPoseInterval;
}

@property (retain, nonatomic) VPVRHeadTracker *headTracker;
@property (nonatomic) BOOL isheadTrackEnable;
@property (nonatomic) long long postNotifiVRPoseInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)recenter;
- (void)rotateWithPitch:(double)arg0 andYaw:(double)arg1 andRoll:(double)arg2;
- (id)getFragmentShader;
- (id)getEffectPatameterStr;
- (id)getVertexShader;
- (id)createPixelTextureWithFrame:(struct VideoFrame { struct VideoFrameBuffer *x0; } *)arg0 format:(id)arg1;
- (long long)renderBefore:(id)arg0 frame:(struct MetalTextureBuffer { void /* function */ **x0; struct __CVBuffer *x1; void **x2; int *x3; id x4; id x5; id x6; int x7; id x8; id x9; id x10; int x11; int x12; int x13; int x14; int x15; void *x16; int x17; id x18; float x19; int x20; int x21; id x22; long long x23; long long x24; } *)arg1;
- (void)drawFrame:(struct MetalTextureBuffer { void /* function */ **x0; struct __CVBuffer *x1; void **x2; int *x3; id x4; id x5; id x6; int x7; id x8; id x9; id x10; int x11; int x12; int x13; int x14; int x15; void *x16; int x17; id x18; float x19; int x20; int x21; id x22; long long x23; long long x24; } *)arg0 withRenderEncoder:(id)arg1;
- (long long)renderAfter;
- (void)updateParams;
- (void)updateTextureWithFrame:(struct MetalTextureBuffer { void /* function */ **x0; struct __CVBuffer *x1; void **x2; int *x3; id x4; id x5; id x6; int x7; id x8; id x9; id x10; int x11; int x12; int x13; int x14; int x15; void *x16; int x17; id x18; float x19; int x20; int x21; id x22; long long x23; long long x24; } *)arg0 renderEncoder:(id)arg1;
- (void)updateBackStickerWithImage:(id)arg0;
- (struct CGSize { double x0; double x1; })processingTextureSize;
- (BOOL)needUseRightEye;
- (void)updateExtraHeadPoseQuaternion;
- (void)updateSpaceWithRenderEncoder:(id)arg0;
- (void)drawFrame:(struct MetalTextureBuffer { void /* function */ **x0; struct __CVBuffer *x1; void **x2; int *x3; id x4; id x5; id x6; int x7; id x8; id x9; id x10; int x11; int x12; int x13; int x14; int x15; void *x16; int x17; id x18; float x19; int x20; int x21; id x22; long long x23; long long x24; } *)arg0 withRenderEncoder:(id)arg1 forEye:(id)arg2;
- (struct { double x0; double x1; double x2; double x3; double x4; double x5; })viewportWithEye:(id)arg0;
- (BOOL)isheadTrackEnable;
- (void)initHeadTrackerLeftEye:(id)arg0 rightEye:(id)arg1 headTrackingEnabled:(BOOL)arg2 extraQuaternion:(struct { })arg3;
- (void)setHeadTracker:(id)arg0;
- (id)headTracker;
- (void)setIsheadTrackEnable:(BOOL)arg0;
- (BOOL)isTouchRotationInWorldCoord;
- (struct { })getExtraQuat;
- (long long)postNotifiVRPoseInterval;
- (void)setPostNotifiVRPoseInterval:(long long)arg0;
- (struct VideoFrame { struct VideoFrameBuffer *x0; } *)process:(struct VideoFrame { struct VideoFrameBuffer *x0; } *)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)setEffect:(id)arg0;

@end
