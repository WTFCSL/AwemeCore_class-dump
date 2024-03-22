//
//     Generated by private class-dump
//

@class HTSGLContext, NSString, NSLock;

@interface VEFence : NSObject <IVEFence> {
    struct __GLsync { } *_fence;
    NSLock *_fenceLock;
    struct handle_DeviceSequence_t { } *_deviceSequence;
    struct handle_DeviceFence_t { } *_deviceFence;
    BOOL _enableAgfxContext;
    HTSGLContext *_context;
}

@property (retain, nonatomic) HTSGLContext *context;
@property (nonatomic) BOOL enableAgfxContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)enableAgfxContext;
- (void)setEnableAgfxContext:(BOOL)arg0;
- (void)fenceSync;
- (void)waitSync;
- (id)initWithContext:(id)arg0;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)context;
- (void)dealloc;

@end
