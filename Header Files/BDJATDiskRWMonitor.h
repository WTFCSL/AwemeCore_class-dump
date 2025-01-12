//
//     Generated by private class-dump
//

@class NSMutableDictionary;

@interface BDJATDiskRWMonitor : NSObject {
    BOOL _enableUploadSlardarException;
    BOOL _enableAggregationByRunloop;
    BOOL _enableCollectBasicIOFunction;
    BOOL _enableCollectOCSimpleRWFunction;
    float _rwTimingThreshold;
    float _exceptionTimingThreshold;
    float _exceptionCollectInterval;
    unsigned long long _lastCollectTs;
    NSMutableDictionary *_runloopBasicFuncIOCacheDict;
    NSMutableDictionary *_runloopOCFuncIOCacheDict;
}

@property (nonatomic) unsigned long long lastCollectTs;
@property (retain, nonatomic) NSMutableDictionary *runloopBasicFuncIOCacheDict;
@property (retain, nonatomic) NSMutableDictionary *runloopOCFuncIOCacheDict;
@property (nonatomic) float rwTimingThreshold;
@property (nonatomic) BOOL enableUploadSlardarException;
@property (nonatomic) float exceptionTimingThreshold;
@property (nonatomic) float exceptionCollectInterval;
@property (nonatomic) BOOL enableAggregationByRunloop;
@property (nonatomic) BOOL enableCollectBasicIOFunction;
@property (nonatomic) BOOL enableCollectOCSimpleRWFunction;

+ (id)shared;

- (void)p_collectPOSIXRWFuncCostWithPath:(const char *)arg0 rwFunction:(const char *)arg1 size:(long long)arg2 cost:(float)arg3;
- (BOOL)enableAggregationByRunloop;
- (void)p_startRunloopObserver;
- (BOOL)enableCollectBasicIOFunction;
- (void)p_hookOCReadWriteMethod;
- (BOOL)enableCollectOCSimpleRWFunction;
- (void)p_fishhookBasicIOFunction;
- (void)p_hookNSStringRWMethod;
- (void)p_hookNSDataRWMethod;
- (void)p_hookNSArrayRWMethod;
- (void)p_hookNSDictionaryRWMethod;
- (float)exceptionCollectInterval;
- (id)runloopBasicFuncIOCacheDict;
- (float)p_uploadAggregationEvents:(id)arg0 serviceName:(id)arg1;
- (float)rwTimingThreshold;
- (id)runloopOCFuncIOCacheDict;
- (void)p_endOnceRunloop;
- (void)p_collectBasicIOEvent:(const char *)arg0 func:(const char *)arg1 size:(unsigned long long)arg2 cost:(float)arg3;
- (BOOL)enableUploadSlardarException;
- (float)exceptionTimingThreshold;
- (BOOL)p_isUserExceptionAvailable;
- (void)p_aggregationEventToCacheDict:(id)arg0 func:(id)arg1 size:(long long)arg2 cost:(float)arg3 path:(id)arg4;
- (void)p_collectOCFuncIOEvent:(id)arg0 func:(id)arg1 cost:(float)arg2;
- (void)p_measureMainThreadIOCostWithPath:(id)arg0 type:(id)arg1 measureAction:(id /* block */)arg2;
- (void)setRwTimingThreshold:(float)arg0;
- (void)setEnableUploadSlardarException:(BOOL)arg0;
- (void)setExceptionTimingThreshold:(float)arg0;
- (void)setExceptionCollectInterval:(float)arg0;
- (void)setEnableAggregationByRunloop:(BOOL)arg0;
- (void)setEnableCollectBasicIOFunction:(BOOL)arg0;
- (void)setEnableCollectOCSimpleRWFunction:(BOOL)arg0;
- (unsigned long long)lastCollectTs;
- (void)setLastCollectTs:(unsigned long long)arg0;
- (void)setRunloopBasicFuncIOCacheDict:(id)arg0;
- (void)setRunloopOCFuncIOCacheDict:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)start;

@end
