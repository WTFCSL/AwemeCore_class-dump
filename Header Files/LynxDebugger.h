//
//     Generated by private class-dump
//

@interface LynxDebugger : NSObject

+ (Class)bridgeClass;
+ (BOOL)enable:(id)arg0 withOptions:(id)arg1;
+ (void)addOpenCardCallback:(id /* block */)arg0;
+ (void)setOpenCardCallback:(id /* block */)arg0;
+ (BOOL)hasSetOpenCardCallback;
+ (void)onTracingComplete:(id)arg0;
+ (void)onPerfMetricsEvent:(id)arg0 withData:(id)arg1 instanceId:(int)arg2;
+ (BOOL)openDebugSettingPanel;

@end
