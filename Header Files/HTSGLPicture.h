//
//     Generated by private class-dump
//

@class VEMVPRenderer, NSObject;
@protocol OS_dispatch_semaphore;

@interface HTSGLPicture : HTSFilterInterface {
    struct CGSize { double width; double height; } _pixelSizeOfImage;
    BOOL _hasProcessedImage;
    NSObject<OS_dispatch_semaphore> *_imageUpdateSemaphore;
    BOOL _needDealloc;
    VEMVPRenderer *_pixelBufferRenderer;
}

@property (retain, nonatomic) VEMVPRenderer *pixelBufferRenderer;
@property (nonatomic) BOOL needDealloc;

- (void)removeAllTargets;
- (void)addTarget:(id)arg0 atTextureLocation:(long long)arg1;
- (id)initWithCGImage:(struct CGImage { } *)arg0 smoothlyScaleOutput:(BOOL)arg1 context:(id)arg2;
- (id)initWithCGImage:(struct CGImage { } *)arg0 smoothlyScaleOutput:(BOOL)arg1 removePremultiplication:(BOOL)arg2 context:(id)arg3;
- (BOOL)processImageWithCompletionHandler:(id /* block */)arg0;
- (BOOL)processImageWithCompletionHandler:(id /* block */)arg0 frameTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg1 filterInChain:(id)arg2;
- (void)processImageUpToFilter:(id)arg0 frameTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg1 orientation:(long long)arg2 completionHandler:(id /* block */)arg3;
- (void)processImageUpToFilter:(id)arg0 frameTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg1 orientation:(long long)arg2 completionHandler:(id /* block */)arg3 colorSpaceName:(struct __CFString { } *)arg4;
- (id)initWithURL:(id)arg0 context:(id)arg1;
- (id)initWithCGImage:(struct CGImage { } *)arg0 context:(id)arg1;
- (id)initWithImage:(id)arg0 removePremultiplication:(BOOL)arg1 context:(id)arg2;
- (id)initWithCGImage:(struct CGImage { } *)arg0 removePremultiplication:(BOOL)arg1 context:(id)arg2;
- (id)initWithImage:(id)arg0 smoothlyScaleOutput:(BOOL)arg1 removePremultiplication:(BOOL)arg2 context:(id)arg3;
- (BOOL)isFrameBufferValid;
- (void)processImage;
- (BOOL)processImageSync;
- (void)processImageUpToFilter:(id)arg0 withCompletionHandler:(id /* block */)arg1;
- (BOOL)needDealloc;
- (id)initWithPixelBuffer:(struct __CVBuffer { } *)arg0 context:(id)arg1;
- (BOOL)processImageWithCompletionHandler:(id /* block */)arg0 frameTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg1;
- (void)setNeedDealloc:(BOOL)arg0;
- (id)initWithImage:(id)arg0 context:(id)arg1;
- (id)pixelBufferRenderer;
- (void)setPixelBufferRenderer:(id)arg0;
- (id)initWithImage:(id)arg0 smoothlyScaleOutput:(BOOL)arg1 context:(id)arg2;
- (void)processImageUpToFilter:(id)arg0 frameTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg1 completionHandler:(id /* block */)arg2;
- (id)initWithData:(id)arg0 context:(id)arg1;
- (void).cxx_destruct;
- (void)dealloc;
- (struct CGSize { double x0; double x1; })outputImageSize;

@end
