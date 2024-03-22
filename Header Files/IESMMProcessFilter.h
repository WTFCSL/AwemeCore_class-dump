//
//     Generated by private class-dump
//

@class NSArray, NSMutableDictionary, IESMMMVEffectFilter, NSMutableArray, IESMMEffectConfig;

@interface IESMMProcessFilter : HTSGLFilter {
    IESMMMVEffectFilter *_effectFilter;
    IESMMEffectConfig *_config;
    NSMutableDictionary *_inputRotations;
    NSMutableDictionary *_hasReceivedFrame;
    NSMutableDictionary *_frameCheckDisabled;
    NSMutableDictionary *_frameTime;
    NSMutableDictionary *_frameBuffers;
    double _timeStamp;
    long long _textureIndexCount;
    NSArray *_validResourceID;
    NSMutableArray *_currentUnRecvResourceID;
}

@property (retain, nonatomic) NSMutableDictionary *inputRotations;
@property (retain, nonatomic) NSMutableDictionary *hasReceivedFrame;
@property (retain, nonatomic) NSMutableDictionary *frameCheckDisabled;
@property (retain, nonatomic) NSMutableDictionary *frameTime;
@property (retain, nonatomic) NSMutableDictionary *frameBuffers;
@property (nonatomic) double timeStamp;
@property (nonatomic) long long textureIndexCount;
@property (retain, nonatomic) NSArray *validResourceID;
@property (retain, nonatomic) NSMutableArray *currentUnRecvResourceID;
@property (retain, nonatomic) IESMMMVEffectFilter *effectFilter;
@property (retain, nonatomic) IESMMEffectConfig *config;

- (id)effectFilter;
- (void)renderToTextureWithVertices:(const float *)arg0 textureCoordinates:(const float *)arg1;
- (struct CGSize { double x0; double x1; })rotatedSize:(struct CGSize { double x0; double x1; })arg0 forIndex:(long long)arg1;
- (void)setInputRotation:(unsigned long long)arg0 atIndex:(long long)arg1;
- (void)setInputFramebuffer:(id)arg0 atIndex:(long long)arg1;
- (void)setInputSize:(struct CGSize { double x0; double x1; })arg0 atIndex:(long long)arg1;
- (struct CGSize { double x0; double x1; })sizeOfFBO;
- (long long)nextAvailableTextureIndex;
- (void)newFrameReadyAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0 atIndex:(long long)arg1 exceptionBlock:(id /* block */)arg2;
- (void)releaseRenderManager;
- (void)setValidResourcesID:(id)arg0;
- (id)initWithConfig:(id)arg0 effectFilter:(id)arg1 context:(id)arg2;
- (void)setEffectFilter:(id)arg0;
- (void)setInputRotations:(id)arg0;
- (void)setHasReceivedFrame:(id)arg0;
- (void)setFrameCheckDisabled:(id)arg0;
- (void)setFrameBuffers:(id)arg0;
- (void)setCurrentUnRecvResourceID:(id)arg0;
- (id)frameCheckDisabled;
- (id)inputRotations;
- (id)hasReceivedFrame;
- (id)frameBuffers;
- (void)createGLRendererIfNeeded;
- (void)setFrameBuffer:(id)arg0 forTextureIndex:(long long)arg1;
- (void)setInputRotaion:(unsigned long long)arg0 forIndex:(long long)arg1;
- (unsigned long long)inputRotationForTextureIndex:(long long)arg0;
- (void)setValidResourceID:(id)arg0;
- (id)currentUnRecvResourceID;
- (id)getIDWithTextureIndex:(long long)arg0;
- (id)validResourceID;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })frameTimeForTextureIndex:(long long)arg0;
- (void)setFrameTIme:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0 forTextureIndex:(long long)arg1;
- (BOOL)frameCheckDiabledForTextureIndex:(long long)arg0;
- (void)setFrameCheckDisabled:(BOOL)arg0 forTextureIndex:(long long)arg1;
- (BOOL)hasReceiverdFrameForTextureIndex:(long long)arg0;
- (void)setReceiveFrame:(BOOL)arg0 forIndex:(long long)arg1;
- (id)frameBufferForTextureIndex:(long long)arg0;
- (long long)textureIndexCount;
- (void)setTextureIndexCount:(long long)arg0;
- (id)initWithContext:(id)arg0;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (double)timeStamp;
- (id)config;
- (void)dealloc;
- (void)setTimeStamp:(double)arg0;
- (id)frameTime;
- (void)setFrameTime:(id)arg0;
- (void)initializeAttributes;

@end
