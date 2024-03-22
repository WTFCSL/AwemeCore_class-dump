//
//     Generated by private class-dump
//

@class HTSGLContext, NSString, NSMutableArray;

@interface _HTSCppFramebufferCache : NSObject <VEAppStatusProtocol, HTSFramebufferCacheProtocol> {
    NSMutableArray *_activeImageCaptureList;
    BOOL _isDeallocing;
    HTSGLContext *_context;
    void *_teFrameBufferCache;
}

@property (weak, nonatomic) HTSGLContext *context;
@property (nonatomic) void *teFrameBufferCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)purgeAllUnassignedFramebuffers;
- (void)addFramebufferToActiveImageCaptureList:(id)arg0;
- (void)removeFramebufferFromActiveImageCaptureList:(id)arg0;
- (void)returnFramebufferToCache:(id)arg0;
- (id)fetchFramebufferForSize:(struct CGSize { double x0; double x1; })arg0 onlyTexture:(BOOL)arg1 textureColorType:(unsigned long long)arg2 textureKey:(id)arg3;
- (id)fetchFramebufferForBindCVPixelbuffer:(struct CGSize { double x0; double x1; })arg0 textureColorType:(unsigned long long)arg1;
- (void *)teFrameBufferCache;
- (void)setTeFrameBufferCache:(void *)arg0;
- (void)disableFrameBufferCache;
- (id)fetchFramebufferForSize:(struct CGSize { double x0; double x1; })arg0 onlyTexture:(BOOL)arg1 textureColorType:(unsigned long long)arg2;
- (void)becomeActive;
- (id)init;
- (long long)cacheSize;
- (void).cxx_destruct;
- (void)resignActive;
- (void)setContext:(id)arg0;
- (long long)usedSize;
- (void)enterBackground;
- (id)context;
- (void)enterForeground;
- (void)dealloc;
- (void)memoryWarning;

@end
