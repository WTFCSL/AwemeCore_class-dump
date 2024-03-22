//
//     Generated by private class-dump
//

@protocol IVERendererDrawable;

@interface VERLBaseRenderer : VERenderer {
    void *_rlRenderer;
    id<IVERendererDrawable> _rlDrawable;
}

@property (weak, nonatomic) id<IVERendererDrawable> rlDrawable;

- (void)setClearColorRed:(double)arg0 green:(double)arg1 blue:(double)arg2 alpha:(double)arg3;
- (void)customVertexShader:(id)arg0 fragmentShader:(id)arg1 attributes:(id)arg2;
- (void)layoutDrawable:(id)arg0;
- (void)deInit;
- (void)updatePipeline:(long long)arg0;
- (void)renderClearColor:(id)arg0;
- (void)removeUniform:(id)arg0 uniformType:(long long)arg1;
- (int)rlAttrTypeFromIESAttrType:(long long)arg0;
- (int)teUniformTypeFromVEUniformType:(long long)arg0;
- (void)setRlDrawable:(id)arg0;
- (id)rlDrawable;
- (id)initWithContext:(id)arg0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)addUniform:(id)arg0;
- (id)drawable;
- (void)setDrawable:(id)arg0;

@end
