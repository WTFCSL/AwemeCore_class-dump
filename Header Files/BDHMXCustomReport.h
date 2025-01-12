//
//     Generated by private class-dump
//

@interface BDHMXCustomReport : NSObject

+ (void)reportWithEventName:(id)arg0 bizTag:(id)arg1 commonParams:(id)arg2 metric:(id)arg3 category:(id)arg4 extra:(id)arg5 timing:(id)arg6 type:(long long)arg7 platform:(long long)arg8 aid:(id)arg9 bid:(id)arg10 maySample:(unsigned long long)arg11;
+ (void)reportWithEventName:(id)arg0 bizTag:(id)arg1 commonParams:(id)arg2 metric:(id)arg3 category:(id)arg4 extra:(id)arg5 type:(long long)arg6 platform:(long long)arg7 aid:(id)arg8 maySample:(unsigned long long)arg9;
+ (id)generateIDForContainer;
+ (void)invalidateID:(id)arg0 andData:(BOOL)arg1;
+ (void)deleteData:(id)arg0 isForce:(BOOL)arg1;
+ (void)attach:(id)arg0 webView:(id)arg1;
+ (void)attach:(id)arg0 LynxView:(id)arg1;
+ (void)detach:(id)arg0 webView:(id)arg1;
+ (void)detach:(id)arg0 LynxView:(id)arg1;
+ (void)reportContainerError:(id)arg0 withID:(id)arg1 withError:(id)arg2;
+ (void)collectBoolean:(id)arg0 field:(id)arg1 data:(BOOL)arg2;
+ (void)collectString:(id)arg0 field:(id)arg1 data:(id)arg2;
+ (void)collectLong:(id)arg0 field:(id)arg1 data:(long long)arg2;
+ (void)collectInt:(id)arg0 field:(id)arg1 data:(int)arg2;
+ (void)fetchContainerData:(id)arg0 block:(id /* block */)arg1;
+ (void)fetchAggregationPerfTiming:(id)arg0 level:(unsigned long long)arg1 waitCompleteData:(unsigned long long)arg2 completion:(id /* block */)arg3;
+ (void)lynxReportCustomWithEventName:(id)arg0 LynxView:(id)arg1 metric:(id)arg2 category:(id)arg3 extra:(id)arg4 maySample:(unsigned long long)arg5;
+ (void)webReportCustomWithEventName:(id)arg0 webView:(id)arg1 metric:(id)arg2 category:(id)arg3 extra:(id)arg4 maySample:(unsigned long long)arg5;
+ (void)reportContainerError:(id)arg0 withID:(id)arg1 withError:(id)arg2 containerBid:(id)arg3;
+ (void)reportWithEventName:(id)arg0 bizTag:(id)arg1 commonParams:(id)arg2 metric:(id)arg3 category:(id)arg4 extra:(id)arg5 timing:(id)arg6 type:(long long)arg7 platform:(long long)arg8 aid:(id)arg9 bid:(id)arg10 baseInfo:(id)arg11 maySample:(unsigned long long)arg12;
+ (void)reportWithEventName:(id)arg0 containerId:(id)arg1 commonParams:(id)arg2 metric:(id)arg3 category:(id)arg4 extra:(id)arg5 timing:(id)arg6 type:(long long)arg7 platform:(long long)arg8 aid:(id)arg9 bid:(id)arg10 maySample:(unsigned long long)arg11;
+ (void)bindCrashInfoToHybridWithUrl:(id)arg0 schema:(id)arg1;
+ (void)reportWithEventName:(id)arg0 containerId:(id)arg1 commonParams:(id)arg2 metric:(id)arg3 category:(id)arg4 extra:(id)arg5 type:(long long)arg6 platform:(long long)arg7 aid:(id)arg8 bid:(id)arg9 containerBid:(id)arg10 maySample:(unsigned long long)arg11;
+ (id)callSelectorWith:(id)arg0 obj:(id)arg1;
+ (void)addContext:(id)arg0 containerId:(id)arg1;
+ (void)webReportCustomWithEventName:(id)arg0 bid:(id)arg1 webView:(id)arg2 metric:(id)arg3 category:(id)arg4 extra:(id)arg5 timing:(id)arg6 maySample:(unsigned long long)arg7;
+ (void)lynxReportCustomWithEventName:(id)arg0 bid:(id)arg1 LynxView:(id)arg2 metric:(id)arg3 category:(id)arg4 extra:(id)arg5 timing:(id)arg6 maySample:(unsigned long long)arg7;
+ (void)reportWithEventName:(id)arg0 bizTag:(id)arg1 commonParams:(id)arg2 metric:(id)arg3 category:(id)arg4 extra:(id)arg5 type:(long long)arg6 platform:(long long)arg7 aid:(id)arg8;
+ (void)lynxReportCustomWithEventName:(id)arg0 LynxView:(id)arg1 metric:(id)arg2 category:(id)arg3 extra:(id)arg4;
+ (void)webReportCustomWithEventName:(id)arg0 bid:(id)arg1 webView:(id)arg2 metric:(id)arg3 category:(id)arg4 extra:(id)arg5 timing:(id)arg6 baseInfo:(id)arg7 maySample:(unsigned long long)arg8;
+ (void)webReportCustomWithEventName:(id)arg0 webView:(id)arg1 metric:(id)arg2 category:(id)arg3 extra:(id)arg4;
+ (void)reportHybridInfoWithUrl:(id)arg0 bid:(id)arg1;
+ (BOOL)diffDictionaryAllKeys:(id)arg0 diffDict:(id)arg1 depth:(long long)arg2 maxDepath:(long long)arg3;
+ (BOOL)diffCustomReport:(id)arg0 diffRecord:(id)arg1;
+ (id)formatDictToDiffWithEventName:(id)arg0 bizTag:(id)arg1 url:(id)arg2 metric:(id)arg3 category:(id)arg4 extra:(id)arg5 timing:(id)arg6 aid:(id)arg7 bid:(id)arg8 baseInfo:(id)arg9 maySample:(BOOL)arg10;
+ (void)useFormatDiffDictToReport:(id)arg0 repeatCount:(long long)arg1 platform:(long long)arg2;
+ (void)lynxReportCustomWithEventName:(id)arg0 bid:(id)arg1 LynxView:(id)arg2 metric:(id)arg3 category:(id)arg4 extra:(id)arg5 timing:(id)arg6 baseInfo:(id)arg7 maySample:(unsigned long long)arg8;
+ (id)xcallObjectSelectorWith:(id)arg0 obj:(id)arg1;
+ (BOOL)xcallLynxDeplicationCheckDynamicWithPefDict:(id)arg0 customRecord:(id)arg1;
+ (void)reportWithEventName:(id)arg0 bizTag:(id)arg1 commonParams:(id)arg2 metric:(id)arg3 category:(id)arg4 extra:(id)arg5 timing:(id)arg6 type:(long long)arg7 platform:(long long)arg8 aid:(id)arg9 bid:(id)arg10 containerBid:(id)arg11 baseInfo:(id)arg12 maySample:(unsigned long long)arg13;
+ (BOOL)xcallWebDeplicationCheckDynamicWithPefDict:(id)arg0 customRecord:(id)arg1;
+ (id)customReportServiceWithSampleLevel:(unsigned long long)arg0;
+ (void)getBidWithUrl:(id)arg0 schema:(id)arg1 containerBid:(id)arg2 complete:(id /* block */)arg3;
+ (void)reportResourceStatus:(id)arg0 resourceStatus:(long long)arg1 resourceType:(long long)arg2 resourceURL:(id)arg3 resourceVersion:(id)arg4;
+ (id)transformContainerType:(long long)arg0;
+ (void)reportWithEventName:(id)arg0 containerId:(id)arg1 commonParams:(id)arg2 metric:(id)arg3 category:(id)arg4 extra:(id)arg5 type:(long long)arg6 platform:(long long)arg7 aid:(id)arg8 maySample:(unsigned long long)arg9;
+ (void)lynxReportCustomWithEventName:(id)arg0 LynxView:(id)arg1 metric:(id)arg2 category:(id)arg3 extra:(id)arg4 timing:(id)arg5 maySample:(unsigned long long)arg6;
+ (void)webReportCustomWithEventName:(id)arg0 webView:(id)arg1 metric:(id)arg2 category:(id)arg3 extra:(id)arg4 timing:(id)arg5 maySample:(unsigned long long)arg6;
+ (void)reportWithEventName:(id)arg0 url:(id)arg1 metric:(id)arg2 category:(id)arg3 extra:(id)arg4 platform:(long long)arg5;
+ (void)reportWithEventName:(id)arg0 bizTag:(id)arg1 commonParams:(id)arg2 metric:(id)arg3 category:(id)arg4 extra:(id)arg5 type:(long long)arg6 platform:(long long)arg7;
+ (void)reportWithEventName:(id)arg0 containerId:(id)arg1 commonParams:(id)arg2 metric:(id)arg3 category:(id)arg4 extra:(id)arg5 timing:(id)arg6 type:(long long)arg7 platform:(long long)arg8 aid:(id)arg9 bid:(id)arg10 baseInfo:(id)arg11 maySample:(unsigned long long)arg12;
+ (void)reportWithEventName:(id)arg0 containerId:(id)arg1 commonParams:(id)arg2 metric:(id)arg3 category:(id)arg4 extra:(id)arg5 type:(long long)arg6 platform:(long long)arg7;
+ (void)reportWithEventName:(id)arg0 containerId:(id)arg1 commonParams:(id)arg2 metric:(id)arg3 category:(id)arg4 extra:(id)arg5 type:(long long)arg6 platform:(long long)arg7 aid:(id)arg8;
+ (void)reportResourceStatus:(id)arg0 resourceStatus:(long long)arg1 resourceType:(long long)arg2 resourceURL:(id)arg3;
+ (void)reportFallBack:(long long)arg0 sourceUrl:(id)arg1 sourceContainer:(long long)arg2 targetUrl:(id)arg3 targetContainer:(long long)arg4 aid:(id)arg5;

@end
