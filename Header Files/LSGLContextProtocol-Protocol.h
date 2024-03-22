//
//     Generated by private class-dump
//

@class EAGLContext, LSGLFramebufferCache, NSObject;
@protocol OS_dispatch_queue;

@protocol LSGLContextProtocol <NSObject>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *contextQueue;
@property (readonly, retain, nonatomic) EAGLContext *context;
@property (readonly) struct __CVOpenGLESTextureCache { } *coreVideoTextureCache;
@property (readonly) LSGLFramebufferCache *framebufferCache;

- (id)contextQueue;
- (struct __CVOpenGLESTextureCache { } *)coreVideoTextureCache;
- (id)framebufferCache;
- (id)context;

@end