//
//     Generated by private class-dump
//

@class NSObject, NSMutableDictionary, NSMutableArray;
@protocol OS_dispatch_queue, LSGLContextProtocol;

@interface LSGLFramebufferCache : NSObject {
    NSMutableDictionary *framebufferCache;
    NSMutableArray *frametextureCache;
    NSMutableArray *activeImageCaptureList;
    id memoryWarningObserver;
    NSObject<OS_dispatch_queue> *framebufferCacheQueue;
    struct LSGPUTextureOptions { unsigned int minFilter; unsigned int magFilter; unsigned int wrapS; unsigned int wrapT; unsigned int internalFormat; unsigned int format; unsigned int type; unsigned int bind; } _defaultTextureOptions;
    BOOL _usePerformanceOptLogic;
    BOOL _reloadTextureFlag;
    id<LSGLContextProtocol> _context;
}

@property (nonatomic) BOOL reloadTextureFlag;
@property (weak, nonatomic) id<LSGLContextProtocol> context;

- (void)registerMemoryWarningNotify;
- (void)purgeAllUnassignedFramebuffers;
- (id)hashNumberForSize:(struct CGSize { double x0; double x1; })arg0 onlyTexture:(BOOL)arg1;
- (id)hashForSize:(struct CGSize { double x0; double x1; })arg0 textureOptions:(struct LSGPUTextureOptions { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; })arg1 onlyTexture:(BOOL)arg2;
- (void)setReloadTextureFlag:(BOOL)arg0;
- (void)unRegisterMemoryWarningNotify;
- (id)fetchFramebufferForSize:(struct CGSize { double x0; double x1; })arg0 textureOptions:(struct LSGPUTextureOptions { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; })arg1 onlyTexture:(BOOL)arg2;
- (id)fetchFramebufferForSize:(struct CGSize { double x0; double x1; })arg0 onlyTexture:(BOOL)arg1;
- (void)addFramebufferToActiveImageCaptureList:(id)arg0;
- (void)removeFramebufferFromActiveImageCaptureList:(id)arg0;
- (BOOL)reloadTextureFlag;
- (id)fetchFramebufferForSize:(struct CGSize { double x0; double x1; })arg0 textureOptions:(struct LSGPUTextureOptions { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; })arg1 onlyTexture:(BOOL)arg2 bindPixelbuffer:(BOOL)arg3;
- (void)returnFramebufferToCache:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)context;
- (void)dealloc;

@end