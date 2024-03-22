//
//     Generated by private class-dump
//

@interface LynxEngineProxy : NSObject {
    struct shared_ptr<lynx::shell::LynxEngineProxyDarwin> { struct LynxEngineProxyDarwin *__ptr_; struct __shared_weak_count *__cntrl_; } native_engine_proxy_;
}

- (void)sendCustomEvent:(id)arg0;
- (void)invokeLepusFunc:(id)arg0 callbackID:(int)arg1;
- (void)setNativeEngineProxy:(struct shared_ptr<lynx::shell::LynxEngineProxyDarwin> { struct LynxEngineProxyDarwin *x0; struct __shared_weak_count *x1; })arg0;
- (BOOL)sendSyncTouchEvent:(id)arg0;
- (BOOL)sendSyncTouchEvent:(id)arg0 event:(struct Value { union { struct Dictionary *x0; struct StringImpl *x1; struct LEPUSObject *x2; struct ByteArray *x3; struct RefCountedThreadSafeStorage *x4; struct CArray *x5; struct CDate *x6; struct RegExp *x7; struct Closure *x8; double x9; int x10; unsigned int x11; unsigned long long x12; long long x13; BOOL x14; void *x15; BOOL x16; } x0; struct ContextCell *x1; union { int x0; int x1; } x2; struct GCPersistent *x3; })arg1;
- (void)sendGestureEvent:(int)arg0 event:(id)arg1;
- (void)onPseudoStatusChanged:(int)arg0 fromPreStatus:(int)arg1 toCurrentStatus:(int)arg2;
- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;

@end