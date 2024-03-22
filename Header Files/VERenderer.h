//
//     Generated by private class-dump
//

@class HTSGLContext, VETransform;

@interface VERenderer : NSObject {
    BOOL _enableBlend;
    HTSGLContext *_context;
    VETransform *_transform;
}

@property (readonly, nonatomic) HTSGLContext *context;
@property (retain, nonatomic) VETransform *transform;
@property (nonatomic) BOOL enableBlend;

- (BOOL)enableBlend;
- (void)setClearColorRed:(double)arg0 green:(double)arg1 blue:(double)arg2 alpha:(double)arg3;
- (void)customVertexShader:(id)arg0 fragmentShader:(id)arg1 attributes:(id)arg2;
- (void)renderClearColor;
- (void)layoutDrawable:(id)arg0;
- (void)deInit;
- (void)updatePipeline:(long long)arg0;
- (void)renderClearColor:(id)arg0;
- (void)render:(id)arg0 config:(id)arg1;
- (void)setEnableBlend:(BOOL)arg0;
- (void)setBlendSFactor:(long long)arg0 dFactor:(long long)arg1;
- (void)removeUniform:(id)arg0 uniformType:(long long)arg1;
- (id)initWithContext:(id)arg0;
- (void).cxx_destruct;
- (id)context;
- (id)transform;
- (void)setTransform:(id)arg0;
- (void)doInit;
- (void)addUniform:(id)arg0;
- (id)drawable;
- (void)setDrawable:(id)arg0;

@end