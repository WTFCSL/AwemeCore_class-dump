//
//     Generated by private class-dump
//

@class NSString;

@interface BigAVRTCCVPixelBuffer : NSObject <RTCVideoFrameBuffer> {
    int _width;
    int _height;
    int _bufferWidth;
    int _bufferHeight;
    int _cropWidth;
    int _cropHeight;
    unsigned int _textureID;
    unsigned int _luminanceTextureID;
    unsigned int _chrominanceTextureID;
    unsigned int _uTextureID;
    unsigned int _vTextureID;
    int _cropX;
    int _cropY;
    struct __CVBuffer { } *_pixelBuffer;
}

@property (readonly, nonatomic) struct __CVBuffer { } *pixelBuffer;
@property (readonly, nonatomic) unsigned int textureID;
@property (readonly, nonatomic) unsigned int luminanceTextureID;
@property (readonly, nonatomic) unsigned int chrominanceTextureID;
@property (readonly, nonatomic) unsigned int uTextureID;
@property (readonly, nonatomic) unsigned int vTextureID;
@property (readonly, nonatomic) int cropX;
@property (readonly, nonatomic) int cropY;
@property (readonly, nonatomic) int bufferWidth;
@property (readonly, nonatomic) int bufferHeight;
@property (readonly, nonatomic) int width;
@property (readonly, nonatomic) int height;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)supportedPixelFormats;

- (id)initWithPixelBuffer:(struct __CVBuffer { } *)arg0 andLuminanceTexture:(unsigned int)arg1 andChrominanceTexture:(unsigned int)arg2 adaptedWidth:(int)arg3 adaptedHeight:(int)arg4 cropWidth:(int)arg5 cropHeight:(int)arg6 cropX:(int)arg7 cropY:(int)arg8;
- (id)initWithPixelBuffer:(struct __CVBuffer { } *)arg0 andTexture:(unsigned int)arg1 adaptedWidth:(int)arg2 adaptedHeight:(int)arg3 cropWidth:(int)arg4 cropHeight:(int)arg5 cropX:(int)arg6 cropY:(int)arg7;
- (id)initWithPixelBuffer:(struct __CVBuffer { } *)arg0 andLuminanceTexture:(unsigned int)arg1 andChrominanceTexture:(unsigned int)arg2 andChromaTexture:(unsigned int)arg3 adaptedWidth:(int)arg4 adaptedHeight:(int)arg5 cropWidth:(int)arg6 cropHeight:(int)arg7 cropX:(int)arg8 cropY:(int)arg9;
- (id)initWithPixelBuffer:(struct __CVBuffer { } *)arg0 andLuminanceTexture:(unsigned int)arg1 andChrominanceTexture:(unsigned int)arg2;
- (id)initWithPixelBuffer:(struct __CVBuffer { } *)arg0 andTexture:(unsigned int)arg1;
- (id)initWithPixelBuffer:(struct __CVBuffer { } *)arg0 andLuminanceTexture:(unsigned int)arg1 andChrominanceTexture:(unsigned int)arg2 andChromaTexture:(unsigned int)arg3;
- (int)bufferWidth;
- (unsigned int)luminanceTextureID;
- (unsigned int)chrominanceTextureID;
- (unsigned int)uTextureID;
- (unsigned int)vTextureID;
- (int)height;
- (struct __CVBuffer { } *)pixelBuffer;
- (void)dealloc;
- (int)width;
- (int)bufferHeight;
- (unsigned int)textureID;
- (id)toI420;
- (BOOL)requiresCropping;
- (BOOL)requiresScalingToWidth:(int)arg0 height:(int)arg1;
- (int)bufferSizeForCroppingAndScalingToWidth:(int)arg0 height:(int)arg1;
- (BOOL)cropAndScaleTo:(struct __CVBuffer { } *)arg0 withTempBuffer:(char *)arg1;
- (void)cropAndScaleARGBTo:(struct __CVBuffer { } *)arg0;
- (int)cropX;
- (int)cropY;

@end
