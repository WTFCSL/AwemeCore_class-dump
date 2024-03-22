//
//     Generated by private class-dump
//

@class LSGLPreviewView, NSString, NSMutableDictionary, LSGLEffectFilter, LSGLFramebuffer, LSGLPictureMixer;
@protocol RequireLayoutUpdate;

@interface LiveCoreRenderFilter : NSObject <LSGLInput> {
    NSMutableDictionary *descriptions;
    int outputWidth;
    int outputHeight;
    int layer_index;
    BOOL _enableRenderFilter;
    BOOL _update_new_layout;
    BOOL _renderOnSingleView;
    LSGLFramebuffer *_frameBuffer;
    LSGLEffectFilter *_filter;
    LSGLPictureMixer *_mixer;
    LSGLPreviewView *_local_preview;
    unsigned long long _status;
    id<RequireLayoutUpdate> _updater;
}

@property (nonatomic) BOOL enableRenderFilter;
@property (retain, nonatomic) LSGLFramebuffer *frameBuffer;
@property (retain, nonatomic) LSGLEffectFilter *filter;
@property (retain, nonatomic) LSGLPictureMixer *mixer;
@property (weak, nonatomic) LSGLPreviewView *local_preview;
@property (nonatomic) unsigned long long status;
@property (nonatomic) BOOL update_new_layout;
@property (retain, nonatomic) id<RequireLayoutUpdate> updater;
@property (nonatomic) BOOL renderOnSingleView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setInputRotation:(unsigned long long)arg0 atIndex:(long long)arg1;
- (void)setInputFramebuffer:(id)arg0 atIndex:(long long)arg1;
- (void)needRender:(BOOL)arg0;
- (void)newFrameReadyAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0 atIndex:(long long)arg1;
- (void)endProcessing;
- (long long)nextAvailableTextureIndex;
- (void)reportToServer:(id)arg0;
- (struct CGSize { double x0; double x1; })maximumOutputSize;
- (BOOL)shouldIgnoreUpdatesToThisTarget;
- (BOOL)isEnable;
- (void)setMasterLayer:(int)arg0;
- (void)setRenderOnSingleView:(BOOL)arg0;
- (BOOL)renderOnSingleView;
- (void)setLocal_preview:(id)arg0;
- (id)local_preview;
- (int)registerVideoFrameRender:(id)arg0 preview:(id)arg1 defaultRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg2;
- (void)setEnableRenderFilter:(BOOL)arg0;
- (void)initLiveCoreRenderFilterInner:(id)arg0;
- (void)disposeLiveCoreRenderFilterInner;
- (BOOL)enableRenderFilter;
- (void)setUpdate_new_layout:(BOOL)arg0;
- (BOOL)update_new_layout;
- (void)checkForUpdateLayout;
- (id)initWithLocalPreview:(id)arg0;
- (void)setMixOutput:(int)arg0 height:(int)arg1;
- (void)initLiveCoreRenderFilter:(id)arg0;
- (void)disposeLiveCoreRenderFilter;
- (void)requireNewLayoutUpdate:(id)arg0;
- (id)getLiveEffectProcessorInterface;
- (void)unRegisterVideoFrameRender:(id)arg0;
- (BOOL)processVideoFrame:(id)arg0 buffer:(id)arg1 withTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg2;
- (void)setFilter:(id)arg0;
- (BOOL)enabled;
- (id)filter;
- (void).cxx_destruct;
- (unsigned long long)status;
- (id)updater;
- (void)setStatus:(unsigned long long)arg0;
- (void)setEnable:(BOOL)arg0;
- (void)setUpdater:(id)arg0;
- (id)name;
- (unsigned long long)getStatus;
- (id)frameBuffer;
- (void)setFrameBuffer:(id)arg0;
- (void)startProcessing;
- (id)mixer;
- (void)setMixer:(id)arg0;

@end
