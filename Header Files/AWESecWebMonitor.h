//
//     Generated by private class-dump
//

@interface AWESecWebMonitor : NSObject

+ (void)triggerMonitorAction:(id)arg0 catergory:(id)arg1 onContainer:(id)arg2;
+ (void)triggerMonitorAction:(id)arg0 catergory:(id)arg1 onContainer:(id)arg2 withDelay:(double)arg3;
+ (void)triggerMonitorAction:(id)arg0 catergory:(id)arg1 metric:(id)arg2 onContainer:(id)arg3;
+ (void)triggerMonitorAction:(id)arg0 catergory:(id)arg1 metric:(id)arg2 onContainer:(id)arg3 withDelay:(double)arg4;
+ (void)_internalTriggerMonitorAction:(id)arg0 catergory:(id)arg1 metric:(id)arg2 onContainer:(id)arg3;
+ (void)onJSBInvoke:(id)arg0;
+ (void)ats_preload;
+ (void)ats_onJSBInvoke:(id)arg0;
+ (void)addCallInfo:(id)arg0;
+ (id)getCallInfos;
+ (void)setup;

@end