//
//     Generated by private class-dump
//

@interface BDWebViewJSBMonitor : BDHybridBaseMonitor

+ (BOOL)startMonitorWithClasses:(id)arg0 setting:(id)arg1;
+ (void)reportJSBErrorInWebView:(id)arg0 withModel:(id)arg1;
+ (void)reportJSBFetchErrorInWebView:(id)arg0 withModel:(id)arg1;
+ (void)reportJSBPerfInWebView:(id)arg0 withModel:(id)arg1;
+ (void)reportJSBPerfV2InWebView:(id)arg0 withInfos:(id)arg1;
+ (void)reportJSBPVInWebView:(id)arg0 withInfos:(id)arg1;

@end