//
//     Generated by private class-dump
//

@class LynxThreadSafeDictionary, KryptonFeatureFlag;

@interface KryptonApp : NSObject {
    BOOL _destroyed;
    struct shared_ptr<lynx::canvas::CanvasApp> { struct CanvasApp *__ptr_; struct __shared_weak_count *__cntrl_; } _nativeApp;
    KryptonFeatureFlag *_featureFlag;
    id /* block */ _exceptionHandler;
    struct napi_env__ { struct napi_state__ *x0; struct napi_runtime__ *x1; struct napi_context__ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; void /* function */ *x6; void /* function */ *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; void /* function */ *x12; void /* function */ *x13; void /* function */ *x14; void /* function */ *x15; void /* function */ *x16; void /* function */ *x17; void /* function */ *x18; void /* function */ *x19; void /* function */ *x20; void /* function */ *x21; void /* function */ *x22; void /* function */ *x23; void /* function */ *x24; void /* function */ *x25; void /* function */ *x26; void /* function */ *x27; void /* function */ *x28; void /* function */ *x29; void /* function */ *x30; void /* function */ *x31; void /* function */ *x32; void /* function */ *x33; void /* function */ *x34; void /* function */ *x35; void /* function */ *x36; void /* function */ *x37; void /* function */ *x38; void /* function */ *x39; void /* function */ *x40; void /* function */ *x41; void /* function */ *x42; void /* function */ *x43; void /* function */ *x44; void /* function */ *x45; void /* function */ *x46; void /* function */ *x47; void /* function */ *x48; void /* function */ *x49; void /* function */ *x50; void /* function */ *x51; void /* function */ *x52; void /* function */ *x53; void /* function */ *x54; void /* function */ *x55; void /* function */ *x56; void /* function */ *x57; void /* function */ *x58; void /* function */ *x59; void /* function */ *x60; void /* function */ *x61; void /* function */ *x62; void /* function */ *x63; void /* function */ *x64; void /* function */ *x65; void /* function */ *x66; void /* function */ *x67; void /* function */ *x68; void /* function */ *x69; void /* function */ *x70; void /* function */ *x71; void /* function */ *x72; void /* function */ *x73; void /* function */ *x74; void /* function */ *x75; void /* function */ *x76; void /* function */ *x77; void /* function */ *x78; void /* function */ *x79; void /* function */ *x80; void /* function */ *x81; void /* function */ *x82; void /* function */ *x83; void /* function */ *x84; void /* function */ *x85; void /* function */ *x86; void /* function */ *x87; void /* function */ *x88; void /* function */ *x89; void /* function */ *x90; void /* function */ *x91; void /* function */ *x92; void /* function */ *x93; void /* function */ *x94; void /* function */ *x95; void /* function */ *x96; void /* function */ *x97; void /* function */ *x98; void /* function */ *x99; void /* function */ *x100; void /* function */ *x101; void /* function */ *x102; void /* function */ *x103; void /* function */ *x104; void /* function */ *x105; void /* function */ *x106; void /* function */ *x107; void /* function */ *x108; void /* function */ *x109; void /* function */ *x110; void /* function */ *x111; void /* function */ *x112; void /* function */ *x113; void /* function */ *x114; void /* function */ *x115; void /* function */ *x116; void /* function */ *x117; void /* function */ *x118; void /* function */ *x119; void /* function */ *x120; void /* function */ *x121; void /* function */ *x122; void /* function */ *x123; void /* function */ *x124; } *_jsEnv;
    LynxThreadSafeDictionary *_serviceMap;
}

@property (readonly, nonatomic) LynxThreadSafeDictionary *serviceMap;
@property (readonly, nonatomic) struct napi_env__ { struct napi_state__ *x0; struct napi_runtime__ *x1; struct napi_context__ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; void /* function */ *x6; void /* function */ *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; void /* function */ *x12; void /* function */ *x13; void /* function */ *x14; void /* function */ *x15; void /* function */ *x16; void /* function */ *x17; void /* function */ *x18; void /* function */ *x19; void /* function */ *x20; void /* function */ *x21; void /* function */ *x22; void /* function */ *x23; void /* function */ *x24; void /* function */ *x25; void /* function */ *x26; void /* function */ *x27; void /* function */ *x28; void /* function */ *x29; void /* function */ *x30; void /* function */ *x31; void /* function */ *x32; void /* function */ *x33; void /* function */ *x34; void /* function */ *x35; void /* function */ *x36; void /* function */ *x37; void /* function */ *x38; void /* function */ *x39; void /* function */ *x40; void /* function */ *x41; void /* function */ *x42; void /* function */ *x43; void /* function */ *x44; void /* function */ *x45; void /* function */ *x46; void /* function */ *x47; void /* function */ *x48; void /* function */ *x49; void /* function */ *x50; void /* function */ *x51; void /* function */ *x52; void /* function */ *x53; void /* function */ *x54; void /* function */ *x55; void /* function */ *x56; void /* function */ *x57; void /* function */ *x58; void /* function */ *x59; void /* function */ *x60; void /* function */ *x61; void /* function */ *x62; void /* function */ *x63; void /* function */ *x64; void /* function */ *x65; void /* function */ *x66; void /* function */ *x67; void /* function */ *x68; void /* function */ *x69; void /* function */ *x70; void /* function */ *x71; void /* function */ *x72; void /* function */ *x73; void /* function */ *x74; void /* function */ *x75; void /* function */ *x76; void /* function */ *x77; void /* function */ *x78; void /* function */ *x79; void /* function */ *x80; void /* function */ *x81; void /* function */ *x82; void /* function */ *x83; void /* function */ *x84; void /* function */ *x85; void /* function */ *x86; void /* function */ *x87; void /* function */ *x88; void /* function */ *x89; void /* function */ *x90; void /* function */ *x91; void /* function */ *x92; void /* function */ *x93; void /* function */ *x94; void /* function */ *x95; void /* function */ *x96; void /* function */ *x97; void /* function */ *x98; void /* function */ *x99; void /* function */ *x100; void /* function */ *x101; void /* function */ *x102; void /* function */ *x103; void /* function */ *x104; void /* function */ *x105; void /* function */ *x106; void /* function */ *x107; void /* function */ *x108; void /* function */ *x109; void /* function */ *x110; void /* function */ *x111; void /* function */ *x112; void /* function */ *x113; void /* function */ *x114; void /* function */ *x115; void /* function */ *x116; void /* function */ *x117; void /* function */ *x118; void /* function */ *x119; void /* function */ *x120; void /* function */ *x121; void /* function */ *x122; void /* function */ *x123; void /* function */ *x124; } *jsEnv;
@property (readonly, nonatomic) KryptonFeatureFlag *featureFlag;

- (struct napi_env__ { struct napi_state__ *x0; struct napi_runtime__ *x1; struct napi_context__ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; void /* function */ *x6; void /* function */ *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; void /* function */ *x12; void /* function */ *x13; void /* function */ *x14; void /* function */ *x15; void /* function */ *x16; void /* function */ *x17; void /* function */ *x18; void /* function */ *x19; void /* function */ *x20; void /* function */ *x21; void /* function */ *x22; void /* function */ *x23; void /* function */ *x24; void /* function */ *x25; void /* function */ *x26; void /* function */ *x27; void /* function */ *x28; void /* function */ *x29; void /* function */ *x30; void /* function */ *x31; void /* function */ *x32; void /* function */ *x33; void /* function */ *x34; void /* function */ *x35; void /* function */ *x36; void /* function */ *x37; void /* function */ *x38; void /* function */ *x39; void /* function */ *x40; void /* function */ *x41; void /* function */ *x42; void /* function */ *x43; void /* function */ *x44; void /* function */ *x45; void /* function */ *x46; void /* function */ *x47; void /* function */ *x48; void /* function */ *x49; void /* function */ *x50; void /* function */ *x51; void /* function */ *x52; void /* function */ *x53; void /* function */ *x54; void /* function */ *x55; void /* function */ *x56; void /* function */ *x57; void /* function */ *x58; void /* function */ *x59; void /* function */ *x60; void /* function */ *x61; void /* function */ *x62; void /* function */ *x63; void /* function */ *x64; void /* function */ *x65; void /* function */ *x66; void /* function */ *x67; void /* function */ *x68; void /* function */ *x69; void /* function */ *x70; void /* function */ *x71; void /* function */ *x72; void /* function */ *x73; void /* function */ *x74; void /* function */ *x75; void /* function */ *x76; void /* function */ *x77; void /* function */ *x78; void /* function */ *x79; void /* function */ *x80; void /* function */ *x81; void /* function */ *x82; void /* function */ *x83; void /* function */ *x84; void /* function */ *x85; void /* function */ *x86; void /* function */ *x87; void /* function */ *x88; void /* function */ *x89; void /* function */ *x90; void /* function */ *x91; void /* function */ *x92; void /* function */ *x93; void /* function */ *x94; void /* function */ *x95; void /* function */ *x96; void /* function */ *x97; void /* function */ *x98; void /* function */ *x99; void /* function */ *x100; void /* function */ *x101; void /* function */ *x102; void /* function */ *x103; void /* function */ *x104; void /* function */ *x105; void /* function */ *x106; void /* function */ *x107; void /* function */ *x108; void /* function */ *x109; void /* function */ *x110; void /* function */ *x111; void /* function */ *x112; void /* function */ *x113; void /* function */ *x114; void /* function */ *x115; void /* function */ *x116; void /* function */ *x117; void /* function */ *x118; void /* function */ *x119; void /* function */ *x120; void /* function */ *x121; void /* function */ *x122; void /* function */ *x123; void /* function */ *x124; } *)jsEnv;
- (void)onShow;
- (void)onHide;
- (void)registerService:(id)arg0 withImpl:(id)arg1;
- (void)bootstrap:(struct napi_env__ { struct napi_state__ *x0; struct napi_runtime__ *x1; struct napi_context__ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; void /* function */ *x6; void /* function */ *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; void /* function */ *x12; void /* function */ *x13; void /* function */ *x14; void /* function */ *x15; void /* function */ *x16; void /* function */ *x17; void /* function */ *x18; void /* function */ *x19; void /* function */ *x20; void /* function */ *x21; void /* function */ *x22; void /* function */ *x23; void /* function */ *x24; void /* function */ *x25; void /* function */ *x26; void /* function */ *x27; void /* function */ *x28; void /* function */ *x29; void /* function */ *x30; void /* function */ *x31; void /* function */ *x32; void /* function */ *x33; void /* function */ *x34; void /* function */ *x35; void /* function */ *x36; void /* function */ *x37; void /* function */ *x38; void /* function */ *x39; void /* function */ *x40; void /* function */ *x41; void /* function */ *x42; void /* function */ *x43; void /* function */ *x44; void /* function */ *x45; void /* function */ *x46; void /* function */ *x47; void /* function */ *x48; void /* function */ *x49; void /* function */ *x50; void /* function */ *x51; void /* function */ *x52; void /* function */ *x53; void /* function */ *x54; void /* function */ *x55; void /* function */ *x56; void /* function */ *x57; void /* function */ *x58; void /* function */ *x59; void /* function */ *x60; void /* function */ *x61; void /* function */ *x62; void /* function */ *x63; void /* function */ *x64; void /* function */ *x65; void /* function */ *x66; void /* function */ *x67; void /* function */ *x68; void /* function */ *x69; void /* function */ *x70; void /* function */ *x71; void /* function */ *x72; void /* function */ *x73; void /* function */ *x74; void /* function */ *x75; void /* function */ *x76; void /* function */ *x77; void /* function */ *x78; void /* function */ *x79; void /* function */ *x80; void /* function */ *x81; void /* function */ *x82; void /* function */ *x83; void /* function */ *x84; void /* function */ *x85; void /* function */ *x86; void /* function */ *x87; void /* function */ *x88; void /* function */ *x89; void /* function */ *x90; void /* function */ *x91; void /* function */ *x92; void /* function */ *x93; void /* function */ *x94; void /* function */ *x95; void /* function */ *x96; void /* function */ *x97; void /* function */ *x98; void /* function */ *x99; void /* function */ *x100; void /* function */ *x101; void /* function */ *x102; void /* function */ *x103; void /* function */ *x104; void /* function */ *x105; void /* function */ *x106; void /* function */ *x107; void /* function */ *x108; void /* function */ *x109; void /* function */ *x110; void /* function */ *x111; void /* function */ *x112; void /* function */ *x113; void /* function */ *x114; void /* function */ *x115; void /* function */ *x116; void /* function */ *x117; void /* function */ *x118; void /* function */ *x119; void /* function */ *x120; void /* function */ *x121; void /* function */ *x122; void /* function */ *x123; void /* function */ *x124; } *)arg0;
- (void)setUncaughtExceptionHandler:(id /* block */)arg0;
- (id)serviceMap;
- (void)onUncaughtException:(id)arg0;
- (void)setRuntimeActor:(void *)arg0;
- (void)setRuntimeTaskRunner:(void *)arg0;
- (void)createCanvasAppWithFeatureFlag:(id)arg0;
- (void)checkFirstOnScreenCanvasIsTheOnlyOnScreen;
- (void)checkPerformanceStatisticsRelatedFeatureFlags;
- (void)setFirstOnScreenCanvasFrameCallback:(id /* block */)arg0;
- (void)setTimeToInteractiveCallback:(id /* block */)arg0;
- (id)getAndResetPerformanceStatistics;
- (void)setEnablePerformanceStatistics:(BOOL)arg0;
- (long long)getNativeHandler;
- (void)resume;
- (void).cxx_destruct;
- (void)destroy;
- (void)pause;
- (id).cxx_construct;
- (id)initWithFeatureFlag:(id)arg0;
- (id)screenshot;
- (id)featureFlag;
- (id)getService:(id)arg0;

@end
