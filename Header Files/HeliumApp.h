//
//     Generated by private class-dump
//

@protocol HeliumGameLoadedListener, HeliumFrameCallback, HeliumPlatform;

@interface HeliumApp : NSObject {
    struct Window { float x0; id x1; id x2; BOOL x3; } *win;
    void *helium;
    BOOL isFirstFrame;
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } pauseMutex;
    BOOL pausedByHost;
    struct forward_list<Surface, std::allocator<Surface>> { struct __compressed_pair<std::__forward_begin_node<std::__forward_list_node<Surface, void *> *>, std::allocator<std::__forward_list_node<Surface, void *>>> { struct __forward_begin_node<std::__forward_list_node<Surface, void *> *> { void *__next_; } __value_; } __before_begin_; } surfaces;
    struct napi_env__ { struct napi_state__ *x0; struct napi_runtime__ *x1; struct napi_context__ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; void /* function */ *x6; void /* function */ *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; void /* function */ *x12; void /* function */ *x13; void /* function */ *x14; void /* function */ *x15; void /* function */ *x16; void /* function */ *x17; void /* function */ *x18; void /* function */ *x19; void /* function */ *x20; void /* function */ *x21; void /* function */ *x22; void /* function */ *x23; void /* function */ *x24; void /* function */ *x25; void /* function */ *x26; void /* function */ *x27; void /* function */ *x28; void /* function */ *x29; void /* function */ *x30; void /* function */ *x31; void /* function */ *x32; void /* function */ *x33; void /* function */ *x34; void /* function */ *x35; void /* function */ *x36; void /* function */ *x37; void /* function */ *x38; void /* function */ *x39; void /* function */ *x40; void /* function */ *x41; void /* function */ *x42; void /* function */ *x43; void /* function */ *x44; void /* function */ *x45; void /* function */ *x46; void /* function */ *x47; void /* function */ *x48; void /* function */ *x49; void /* function */ *x50; void /* function */ *x51; void /* function */ *x52; void /* function */ *x53; void /* function */ *x54; void /* function */ *x55; void /* function */ *x56; void /* function */ *x57; void /* function */ *x58; void /* function */ *x59; void /* function */ *x60; void /* function */ *x61; void /* function */ *x62; void /* function */ *x63; void /* function */ *x64; void /* function */ *x65; void /* function */ *x66; void /* function */ *x67; void /* function */ *x68; void /* function */ *x69; void /* function */ *x70; void /* function */ *x71; void /* function */ *x72; void /* function */ *x73; void /* function */ *x74; void /* function */ *x75; void /* function */ *x76; void /* function */ *x77; void /* function */ *x78; void /* function */ *x79; void /* function */ *x80; void /* function */ *x81; void /* function */ *x82; void /* function */ *x83; void /* function */ *x84; void /* function */ *x85; void /* function */ *x86; void /* function */ *x87; void /* function */ *x88; void /* function */ *x89; void /* function */ *x90; void /* function */ *x91; void /* function */ *x92; void /* function */ *x93; void /* function */ *x94; void /* function */ *x95; void /* function */ *x96; void /* function */ *x97; void /* function */ *x98; void /* function */ *x99; void /* function */ *x100; void /* function */ *x101; void /* function */ *x102; void /* function */ *x103; void /* function */ *x104; void /* function */ *x105; void /* function */ *x106; void /* function */ *x107; void /* function */ *x108; void /* function */ *x109; void /* function */ *x110; void /* function */ *x111; void /* function */ *x112; void /* function */ *x113; void /* function */ *x114; void /* function */ *x115; void /* function */ *x116; void /* function */ *x117; void /* function */ *x118; void /* function */ *x119; void /* function */ *x120; void /* function */ *x121; void /* function */ *x122; void /* function */ *x123; void /* function */ *x124; } *env;
    void /* function */ *napi_detach_func;
    double enterFrameTimeMs;
    id<HeliumGameLoadedListener> game_loaded_listener;
    BOOL game_loaded;
    id<HeliumFrameCallback> frame_callback;
    long long _maxFPS;
}

@property (class, readonly, nonatomic) Class layerClass;

@property (readonly, nonatomic) id<HeliumPlatform> platform;
@property (retain, nonatomic) id<HeliumFrameCallback> frame_callback;
@property (nonatomic) long long maxFPS;

+ (id)getLayerWithDefaultProperties:(id)arg0;
+ (BOOL)setHostSensitivePermissionStatus:(id)arg0 IsOpen:(BOOL)arg1;
+ (void)setForceBackgroundLock;
+ (Class)layerClass;

- (void)innerPause;
- (void)onEnterFrame;
- (void)openMonitor;
- (void)closeMonitor;
- (id)getMonitorData;
- (double)getEnterFrameTimeMs;
- (void)appWillEnterForground:(id)arg0;
- (void)setMaxFPS:(long long)arg0;
- (id)initWithView:(id)arg0 layer:(id)arg1 jsc:(struct OpaqueJSContext { } *)arg2 platform:(id)arg3 settings:(id)arg4;
- (void)setUncaughtExceptionHandler:(id /* block */)arg0;
- (id)screenShotPixelsWithShift:(long long)arg0;
- (long long)maxFPS;
- (long long)addView:(id)arg0 layer:(id)arg1;
- (void)setupPlatform:(id)arg0 jsc:(struct OpaqueJSContext { } *)arg1;
- (void)setMaybeGameLoadedListener:(id)arg0;
- (void)resizelayer:(id)arg0;
- (void)dispatchTouch:(long long)arg0 touches:(id)arg1 withEvent:(id)arg2 drawable:(struct ptDrawableEAGL { struct Window *x0; unsigned int x1; unsigned int x2; struct { int x0; int x1; int x2; } x3; struct mutex { struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x0; } x4; int x5; int x6; int x7; int x8; int x9; struct DrawFrameBuffer { int x0; int x1; int x2; int x3; int x4; int x5; } x10[3]; void /* function */ *x11; unsigned char x12; unsigned int x13; unsigned int x14; } *)arg3;
- (void)initTiWithSettings:(id)arg0;
- (id)initWithView:(id)arg0 layer:(id)arg1 jsc:(struct OpaqueJSContext { } *)arg2 platform:(id)arg3 settings:(id)arg4 useBuiltInAudioPlayer:(BOOL)arg5 isCover:(BOOL)arg6;
- (id)initWithView:(id)arg0 layer:(id)arg1 jsc:(struct OpaqueJSContext { } *)arg2 platform:(id)arg3 settings:(id)arg4 useBuiltInAudioPlayer:(BOOL)arg5;
- (id)initWithEAGLContext:(id)arg0 frameSize:(struct CGSize { double x0; double x1; })arg1 contentsScale:(float)arg2 jsc:(struct OpaqueJSContext { } *)arg3 platform:(id)arg4 useBuiltInAudioPlayer:(BOOL)arg5 useES3:(BOOL)arg6 settings:(id)arg7;
- (void)innerResume;
- (void)dispatchTouch:(long long)arg0 touches:(id)arg1 withEvent:(id)arg2 drawable:(struct ptDrawableEAGL { struct Window *x0; unsigned int x1; unsigned int x2; struct { int x0; int x1; int x2; } x3; struct mutex { struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x0; } x4; int x5; int x6; int x7; int x8; int x9; struct DrawFrameBuffer { int x0; int x1; int x2; int x3; int x4; int x5; } x10[3]; void /* function */ *x11; unsigned char x12; unsigned int x13; unsigned int x14; } *)arg3 view:(id)arg4;
- (id)initWithView:(id)arg0 layer:(id)arg1 jsc:(struct OpaqueJSContext { } *)arg2 platform:(id)arg3 settings:(id)arg4 isCover:(BOOL)arg5;
- (id)initWithView:(id)arg0 layer:(id)arg1 jsc:(struct OpaqueJSContext { } *)arg2 platform:(id)arg3;
- (id)initWithEAGLContext:(id)arg0 frameSize:(struct CGSize { double x0; double x1; })arg1 contentsScale:(float)arg2 jsc:(struct OpaqueJSContext { } *)arg3 platform:(id)arg4 useBuiltInAudioPlayer:(BOOL)arg5 useES3:(BOOL)arg6;
- (id)initWithJSContextParam:(const struct HeliumJsContextParam { int x0; void *x1; void *x2; void *x3; void *x4; void *x5; } *)arg0 platform:(id)arg1 settings:(id)arg2;
- (void)replaceView:(id)arg0 layer:(id)arg1 forDrawable:(long long)arg2;
- (void)setFrameTextureCallback:(id /* block */)arg0;
- (void)setShouldFlip:(int)arg0;
- (void)setCustomPresentTextureSize:(struct CGSize { double x0; double x1; })arg0;
- (void)setFrameTextureLocked:(int)arg0 locked:(BOOL)arg1;
- (void)setEnableStreamAbilityCallback:(id /* block */)arg0;
- (void)dispathResizeEvent:(int)arg0 height:(int)arg1;
- (void)dispathResizeEvent:(int)arg0 height:(int)arg1 drawable:(long long)arg2;
- (void)dispathResizeEvent:(int)arg0 height:(int)arg1 drawable:(long long)arg2 view:(id)arg3;
- (void)dispathResizeEvent:(int)arg0 height:(int)arg1 drawable:(long long)arg2 layer:(id)arg3;
- (void)setAudioPostProcessVolume:(float)arg0;
- (id)frame_callback;
- (void)setFrame_callback:(id)arg0;
- (void)appDidEnterBackground:(id)arg0;
- (void)resume;
- (void).cxx_destruct;
- (void)stop;
- (void)removeView:(unsigned long long)arg0;
- (id)platform;
- (void)invalidate;
- (void)start;
- (void)dealloc;
- (void)pause;
- (id).cxx_construct;
- (void)appWillTerminate:(id)arg0;

@end
