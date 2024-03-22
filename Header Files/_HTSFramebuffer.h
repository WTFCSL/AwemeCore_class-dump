//
//     Generated by private class-dump
//

@class NSLock, HTSGLContext;

@interface _HTSFramebuffer : NSObject {
    BOOL _onlyTexture;
    BOOL _disableCache;
    BOOL _enableRenderLib;
    unsigned int _glTextureId;
    unsigned int _framebufferId;
    HTSGLContext *_context;
    unsigned long long _color;
    struct __CVBuffer { } *_renderTarget;
    void *_rlRenderingInfo;
    unsigned long long _readLockCount;
    NSLock *_refLock;
    void *_teFrameBuffer;
    struct CGSize { double width; double height; } _size;
    struct shared_ptr<TESharedGLContext> { struct TESharedGLContext *__ptr_; struct __shared_weak_count *__cntrl_; } _teGLContext;
}

@property unsigned long long readLockCount;
@property (retain, nonatomic) NSLock *refLock;
@property (nonatomic) BOOL enableRenderLib;
@property (nonatomic) struct shared_ptr<TESharedGLContext> { struct TESharedGLContext *__ptr_; struct __shared_weak_count *__cntrl_; } teGLContext;
@property (nonatomic) void *teFrameBuffer;
@property (retain, nonatomic) HTSGLContext *context;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) BOOL onlyTexture;
@property (nonatomic) BOOL disableCache;
@property (nonatomic) unsigned long long color;
@property (nonatomic) unsigned int glTextureId;
@property (nonatomic) struct __CVBuffer { } *renderTarget;
@property (nonatomic) void *rlRenderingInfo;
@property (nonatomic, getter=getFrameBufferId, setter=setFrameBufferId:) unsigned int framebufferId;

+ (int)instanceCount;
+ (BOOL)isInBackground;

- (void)setRenderTarget:(struct __CVBuffer { } *)arg0;
- (void)unlockAfterReading;
- (void)restoreRenderTarget;
- (char *)byteBuffer;
- (unsigned long long)readLockCount;
- (void)activateFramebuffer;
- (id)initWithExternalFramebuffer:(void *)arg0 colorType:(unsigned long long)arg1 context:(id)arg2;
- (void)clearAllAttachments;
- (void *)getInnerFramebuffer;
- (id)initWithBufferSize:(struct CGSize { double x0; double x1; })arg0 context:(id)arg1 onlyTexture:(BOOL)arg2 colorType:(unsigned long long)arg3 disableCache:(BOOL)arg4;
- (void)setTeGLContext:(struct shared_ptr<TESharedGLContext> { struct TESharedGLContext *x0; struct __shared_weak_count *x1; })arg0;
- (struct shared_ptr<TESharedGLContext> { struct TESharedGLContext *x0; struct __shared_weak_count *x1; })teGLContext;
- (void)setTeFrameBuffer:(void *)arg0;
- (void *)teFrameBuffer;
- (void)setGlTextureId:(unsigned int)arg0;
- (void)setFrameBufferId:(unsigned int)arg0;
- (void)setRlRenderingInfo:(void *)arg0;
- (void)destroyTEFrameBuffer;
- (void)setReadLockCount:(unsigned long long)arg0;
- (BOOL)enableRenderLib;
- (void)setOnlyTexture:(BOOL)arg0;
- (void)uploadImageData:(void *)arg0 withFilterType:(unsigned long long)arg1;
- (void)activateFramebuffer:(int)arg0 offsetY:(int)arg1 width:(int)arg2 height:(int)arg3;
- (void)clearInnerFramebuffer;
- (void *)rlReMapRenderingInfoTexture:(BOOL)arg0;
- (unsigned int)getFrameBufferId;
- (void *)rlRenderingInfoMTLTexture;
- (void)setTextureFilterType:(unsigned long long)arg0;
- (void)clearTextureWithRed:(float)arg0 green:(float)arg1 blue:(float)arg2 alpha:(float)arg3;
- (BOOL)onlyTexture;
- (id)refLock;
- (void)setRefLock:(id)arg0;
- (void)setEnableRenderLib:(BOOL)arg0;
- (id)initWithPixelBuffer:(struct __CVBuffer { } *)arg0 context:(id)arg1;
- (void)downloadImageData:(void *)arg0;
- (void)deActivateFramebuffer;
- (void *)rlRenderingInfo;
- (void *)rlRenderingInfoTexture;
- (unsigned long long)color;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (struct __CVBuffer { } *)pixelBuffer;
- (void)setDisableCache:(BOOL)arg0;
- (id)initWithConfig:(id)arg0;
- (id)context;
- (struct CGSize { double x0; double x1; })size;
- (BOOL)disableCache;
- (void)setSize:(struct CGSize { double x0; double x1; })arg0;
- (void)dealloc;
- (struct __CVBuffer { } *)renderTarget;
- (id).cxx_construct;
- (void)setColor:(unsigned long long)arg0;
- (void)lockForReading;
- (unsigned long long)bytesPerRow;
- (unsigned int)textureId;
- (unsigned int)glTextureId;

@end
