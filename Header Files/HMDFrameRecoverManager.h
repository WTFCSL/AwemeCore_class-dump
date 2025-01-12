//
//     Generated by private class-dump
//

@interface HMDFrameRecoverManager : NSObject

+ (void)logLevel:(unsigned long long)arg0 fileName:(const char *)arg1 functionName:(const char *)arg2 lineNumber:(int)arg3 string:(const char *)arg4;
+ (void)sharedCacheSelectorBase;
+ (void)locateSharedCache;
+ (void)setQueryBegin:(void /* function */ *)arg0 enumeration:(void /* function */ *)arg1 finish:(void /* function */ *)arg2;
+ (void)setEnumImage:(void /* function */ *)arg0;
+ (void)setQueryListStatus:(void /* function */ *)arg0;
+ (void)markImageListFinished;
+ (void)objcExceptionCallback:(id /* block */)arg0;
+ (void)setScopeEnabled:(BOOL)arg0;
+ (BOOL)isScopeEnabled;
+ (void)scopePrefix:(const char *)arg0;
+ (void)scopeWhiteList:(const char *)arg0;
+ (void)scopeBlackList:(const char *)arg0;
+ (void)machExceptionCallback:(id /* block */)arg0;
+ (void *)machHandler;
+ (BOOL)isMachExceptionEnable;
+ (void)setMachExceptionEnable:(BOOL)arg0;
+ (BOOL)isMachRestartableEnable;
+ (void)setMachRestartableEnable:(BOOL)arg0;
+ (void)updateMachExceptionCloudControl:(id)arg0;
+ (BOOL)protectMachException:(const char *)arg0 option:(unsigned long long)arg1 context:(void *)arg2 block:(id /* block */)arg3;
+ (void)objectExceptionInternalCallback:(id)arg0;
+ (void)setLogLevel:(unsigned long long)arg0;
+ (void)setup;
+ (void *)exceptionHandler;
+ (unsigned long long)version;
+ (unsigned long long)logLevel;

@end
