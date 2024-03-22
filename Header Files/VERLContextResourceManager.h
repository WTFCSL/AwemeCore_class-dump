//
//     Generated by private class-dump
//

@interface VERLContextResourceManager : NSObject {
    void *_rlDeviceMgr;
}

+ (id)defaultManager;

- (void *)renderingDeviceFromHTSGLContext:(id)arg0;
- (void)destroyResourcesForHTSGLContext:(id)arg0;
- (void)cleanupResourcesForHTSGLContext:(id)arg0;
- (void *)renderingDeviceFromHTSGLContext:(id)arg0 shareContext:(id)arg1;
- (void *)rlRenderingDeviceFromHTSGLContext:(id)arg0 shareContext:(id)arg1;
- (void *)p_renderingDeviceFromContext:(struct shared_ptr<TESharedGLContext> { struct TESharedGLContext *x0; struct __shared_weak_count *x1; })arg0 shareContext:(struct shared_ptr<TESharedGLContext> { struct TESharedGLContext *x0; struct __shared_weak_count *x1; })arg1;
- (void *)renderingDeviceFromTEGLContext:(void *)arg0 shareContext:(void *)arg1;
- (void *)rlRenderingDeviceFromTEGLContext:(void *)arg0 shareContext:(void *)arg1;
- (void)destroyResourcesForTEGLContext:(void *)arg0;
- (void)cleanupResourcesForTEGLContext:(void *)arg0;
- (void *)renderingDeviceFromTEGLContext:(void *)arg0;
- (void *)rlRenderingDeviceFromTEGLContext:(void *)arg0;
- (void *)renderingDeviceFromRenderScene:(const char *)arg0;
- (void *)rlRenderingDeviceFromHTSGLContext:(id)arg0;
- (id)init;
- (void)dealloc;

@end
