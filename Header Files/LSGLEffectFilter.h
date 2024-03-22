//
//     Generated by private class-dump
//

@class LSGLFramebuffer, LSGLBmfBrightenFilter, LSLiveEffectProcessorInterface;

@interface LSGLEffectFilter : LSGLFilter {
    BOOL _needRender;
    BOOL _enableMipmap;
    struct LSGPUTextureOptions { unsigned int minFilter; unsigned int magFilter; unsigned int wrapS; unsigned int wrapT; unsigned int internalFormat; unsigned int format; unsigned int type; unsigned int bind; } _outputTextureOptionsMipmap;
    LSGLFramebuffer *lastEffectProcessdFrame;
    BOOL _enableEffect;
    BOOL _isAux;
    BOOL _forceDetectInFirstThreeFrames;
    int _forceDetectCount;
    LSLiveEffectProcessorInterface *_processor;
    id /* block */ _effectInfoBlck;
    LSGLBmfBrightenFilter *_videoBrighten;
    struct CGSize { double width; double height; } _lastEffectFrameSize;
}

@property (retain, nonatomic) LSGLBmfBrightenFilter *videoBrighten;
@property (nonatomic) BOOL isAux;
@property (nonatomic) struct CGSize { double width; double height; } lastEffectFrameSize;
@property (nonatomic) int forceDetectCount;
@property (nonatomic) BOOL forceDetectInFirstThreeFrames;
@property (retain, nonatomic) LSLiveEffectProcessorInterface *processor;
@property (nonatomic) BOOL enableEffect;
@property (copy, nonatomic) id /* block */ effectInfoBlck;

- (void)handleFullLinkEnableDumpNotifications:(id)arg0;
- (void)setInputFramebuffer:(id)arg0 atIndex:(long long)arg1;
- (void)needRender:(BOOL)arg0;
- (void)newFrameReadyAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0 atIndex:(long long)arg1;
- (void)informTargetsAboutNewFrameAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0;
- (void)endProcessing;
- (void)setEnableEffect:(BOOL)arg0;
- (BOOL)forceDetectInFirstThreeFrames;
- (BOOL)checkEnableMipmap;
- (id)fetchOutputFrameBuffer;
- (id /* block */)effectInfoBlck;
- (void)videoBrightenProcess:(const struct { long long x0; int x1; unsigned int x2; long long x3; } *)arg0;
- (void)generateMipmap:(int)arg0;
- (void)releaseFBO;
- (void)skipFrameProcess;
- (BOOL)enableEffect;
- (void)setEffectInfoBlck:(id /* block */)arg0;
- (id)videoBrighten;
- (void)setVideoBrighten:(id)arg0;
- (struct CGSize { double x0; double x1; })lastEffectFrameSize;
- (void)setLastEffectFrameSize:(struct CGSize { double x0; double x1; })arg0;
- (int)forceDetectCount;
- (void)setForceDetectCount:(int)arg0;
- (id)videoBrightenParams;
- (BOOL)videoBrightenSetup:(id)arg0 callback:(id /* block */)arg1;
- (id)videoBrightenGetReport;
- (void)videoBrightenSetEnable:(BOOL)arg0;
- (void)setIsAux:(BOOL)arg0;
- (BOOL)isAux;
- (void)setForceDetectInFirstThreeFrames:(BOOL)arg0;
- (void)initialProcessorWithConfig:(id)arg0;
- (id)initWithContext:(id)arg0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)name;
- (id)processor;
- (void)setProcessor:(id)arg0;
- (void)startProcessing;

@end