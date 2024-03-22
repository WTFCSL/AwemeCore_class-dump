//
//     Generated by private class-dump
//

@class NSString;

@interface IESMMEffectHelper : NSObject <BCAABundleListener, IESMMEffectHelperProtocol> {
    id /* block */ _didLoadBlock;
    BOOL _enableLog;
    BOOL _effectLoaded;
    BOOL _lazyEffect;
    int _logLevel;
}

@property (nonatomic) int logLevel;
@property (nonatomic) BOOL enableLog;
@property (nonatomic) BOOL effectLoaded;
@property (nonatomic) BOOL lazyEffect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)load;

- (id)getEffectABInfoByKey:(id)arg0 type:(unsigned long long)arg1;
- (void)bundleDidLoaded:(id)arg0 machoHeader:(struct mach_header_64 { unsigned int x0; int x1; int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; } *)arg1 fromBundle:(id)arg2 enterTag:(id)arg3 cost:(double)arg4;
- (BOOL)enableLog;
- (void)setEnableLog:(BOOL)arg0;
- (void)setupEffect;
- (void)setEffectDidLoadBlock:(id /* block */)arg0;
- (unsigned long long)veTypeFromEffectType:(int)arg0;
- (void)setupEffectLogAppLogFunc;
- (void)configRegisterABTest:(id)arg0;
- (void)configEffectABValue:(id)arg0 key:(id)arg1 type:(unsigned long long)arg2;
- (BOOL)effectLoaded;
- (void)setEffectLoaded:(BOOL)arg0;
- (BOOL)lazyEffect;
- (void)setLazyEffect:(BOOL)arg0;
- (void)enableEffectLog:(BOOL)arg0;
- (void)setEffectLogLevel:(int)arg0;
- (id)effectSDKCommit;
- (id)getEffectVersion;
- (void)setupEffectLogMonitorFunc;
- (void)setLogLevel:(int)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (int)logLevel;

@end