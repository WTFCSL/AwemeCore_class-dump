//
//     Generated by private class-dump
//

@class IESGLesProgram, VEGLStateManager;

@interface IESGLesBaseRenderer : VERenderer {
    unsigned int _displayRenderbuffer;
    unsigned int _displayFramebuffer;
    VEGLStateManager *_glStateManager;
}

@property (readonly, nonatomic) VEGLStateManager *glStateManager;
@property (readonly, nonatomic) IESGLesProgram *program;
@property (readonly, nonatomic) long long programType;
@property (readonly, nonatomic) BOOL shouldUpdateProgram;

- (void)resetRenderEnv;
- (void)setClearColorRed:(double)arg0 green:(double)arg1 blue:(double)arg2 alpha:(double)arg3;
- (void)customVertexShader:(id)arg0 fragmentShader:(id)arg1 attributes:(id)arg2;
- (void)renderClearColor;
- (BOOL)bindScreenFBO;
- (void)presentScreenFBO;
- (BOOL)shouldUpdateProgram;
- (void)layoutDrawable:(id)arg0;
- (id)glStateManager;
- (void)updatePipeline:(long long)arg0;
- (void)loadProgram;
- (void)renderClearColor:(id)arg0;
- (void)setupRenderEnv;
- (void)loadMvpQuadData;
- (void)loadExtraUniforms;
- (void)teardownRenderEnv;
- (void)render:(id)arg0 config:(id)arg1;
- (void)setBlendSFactor:(long long)arg0 dFactor:(long long)arg1;
- (void)removeUniform:(id)arg0 uniformType:(long long)arg1;
- (id)program;
- (void).cxx_destruct;
- (void)doInit;
- (void)addUniform:(id)arg0;
- (long long)programType;
- (id)drawable;
- (void)setDrawable:(id)arg0;

@end