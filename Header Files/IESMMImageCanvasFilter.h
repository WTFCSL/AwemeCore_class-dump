//
//     Generated by private class-dump
//

@class HTSGLFramebuffer;

@interface IESMMImageCanvasFilter : IESMMCanvasBaseFilter {
    BOOL _enableHdrEffectOptimization;
    HTSGLFramebuffer *_hdrBgImageFramebuffer;
}

@property (retain, nonatomic) HTSGLFramebuffer *hdrBgImageFramebuffer;
@property (nonatomic) BOOL enableHdrEffectOptimization;

- (void)renderToTextureWithVertices:(const float *)arg0 textureCoordinates:(const float *)arg1;
- (void)initializeRenderer:(id)arg0;
- (BOOL)enableHdrEffectOptimization;
- (void)drawCanvas:(BOOL)arg0;
- (void)drawWithoutEffectRenderer;
- (id)hdrBgImageFramebuffer;
- (void)setHdrBgImageFramebuffer:(id)arg0;
- (void)setEnableHdrEffectOptimization:(BOOL)arg0;
- (void).cxx_destruct;

@end
