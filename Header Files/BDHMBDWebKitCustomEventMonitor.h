//
//     Generated by private class-dump
//

@interface BDHMBDWebKitCustomEventMonitor : NSObject

+ (void)reportToTea:(id)arg0 params:(id)arg1;
+ (void)webReportCustomWithEventName:(id)arg0 bid:(id)arg1 webView:(id)arg2 metric:(id)arg3 category:(id)arg4 extra:(id)arg5 timing:(id)arg6 baseInfo:(id)arg7 maySample:(long long)arg8;
+ (BOOL)startMonitorWithClasses:(id)arg0 setting:(id)arg1;
+ (void)reportWithEventName:(id)arg0 containerId:(id)arg1 commonParams:(id)arg2 metric:(id)arg3 category:(id)arg4 extra:(id)arg5 aid:(id)arg6 bid:(id)arg7 containerBid:(id)arg8 maySample:(long long)arg9;

@end
