//
//     Generated by private class-dump
//

@class NSString, NSMutableArray, NSMutableDictionary;

@interface IESLiveComponentLoadInitializer : NSObject {
    BOOL _preloadLoad;
    BOOL _completeLoad;
    BOOL _preloadOptEnable;
    BOOL _installedOnce;
    unsigned long long _installState;
    NSMutableArray *_willInitialBasicComponentNames;
    NSMutableArray *_willInitialComponentNames;
    NSMutableArray *_willInitialOuterComponentNames;
    NSMutableDictionary *_tracePool;
    NSString *_basicComponentString;
    NSString *_importantComponentString;
    NSString *_normalComponentString;
    NSString *_downgrageableComponentString;
}

@property (nonatomic) BOOL preloadLoad;
@property (nonatomic) BOOL completeLoad;
@property (nonatomic) BOOL preloadOptEnable;
@property (nonatomic) BOOL installedOnce;
@property (nonatomic) unsigned long long installState;
@property (retain, nonatomic) NSMutableArray *willInitialBasicComponentNames;
@property (retain, nonatomic) NSMutableArray *willInitialComponentNames;
@property (retain, nonatomic) NSMutableArray *willInitialOuterComponentNames;
@property (retain, nonatomic) NSMutableDictionary *tracePool;
@property (retain, nonatomic) NSString *basicComponentString;
@property (retain, nonatomic) NSString *importantComponentString;
@property (retain, nonatomic) NSString *normalComponentString;
@property (retain, nonatomic) NSString *downgrageableComponentString;

- (double)durationWithKey:(id)arg0;
- (void)setWillInitialBasicComponentNames:(id)arg0;
- (void)setWillInitialComponentNames:(id)arg0;
- (void)setTracePool:(id)arg0;
- (void)setPreloadOptEnable:(BOOL)arg0;
- (id)tracePool;
- (id)willInitialBasicComponentNames;
- (id)willInitialComponentNames;
- (id)willInitialOuterComponentNames;
- (void)recordKey:(id)arg0 duration:(double)arg1;
- (BOOL)preloadLoad;
- (void)setPreloadLoad:(BOOL)arg0;
- (BOOL)completeLoad;
- (void)setCompleteLoad:(BOOL)arg0;
- (BOOL)preloadOptEnable;
- (BOOL)installedOnce;
- (void)setInstalledOnce:(BOOL)arg0;
- (void)setWillInitialOuterComponentNames:(id)arg0;
- (id)basicComponentString;
- (void)setBasicComponentString:(id)arg0;
- (id)importantComponentString;
- (void)setImportantComponentString:(id)arg0;
- (id)normalComponentString;
- (void)setNormalComponentString:(id)arg0;
- (id)downgrageableComponentString;
- (void)setDowngrageableComponentString:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)clear;
- (void)setInstallState:(unsigned long long)arg0;
- (unsigned long long)installState;

@end
