//
//     Generated by private class-dump
//

@class HybridContext;

@protocol HybridMonitorProtocol <NSObject>

+ (void)attachVirtualAid:(id)arg0 toView:(id)arg1;
+ (void)startMonitorHook;

@property (weak, nonatomic) HybridContext *context;

- (void)addCommonCategory:(id)arg0;
- (void)attachKitView:(id)arg0;
- (void)reportWithEventName:(id)arg0 bid:(id)arg1 containerView:(id)arg2 commonParams:(id)arg3 metric:(id)arg4 category:(id)arg5 extra:(id)arg6 platform:(long long)arg7 aid:(id)arg8 maySample:(BOOL)arg9;
- (void)reportWithEventName:(id)arg0 bid:(id)arg1 commonParams:(id)arg2 metric:(id)arg3 category:(id)arg4 extra:(id)arg5 platform:(long long)arg6 aid:(id)arg7 maySample:(BOOL)arg8;
- (void)collectEventTime:(id)arg0;
- (void)collectEventTime:(id)arg0 reportToMonitor:(BOOL)arg1;
- (id)eventDic;
- (void)reportResourceStatus:(id)arg0 resourceStatus:(long long)arg1 resourceType:(long long)arg2 resourceURL:(id)arg3 resourceVersion:(id)arg4 resourceChannel:(id)arg5 resourceBundle:(id)arg6 resourceProcessorType:(long long)arg7 extraInfo:(id)arg8 extraMetrics:(id)arg9;
- (void)collectLong:(long long)arg0 field:(id)arg1;
- (void)collectString:(id)arg0 field:(id)arg1;
- (void)collectBoolean:(BOOL)arg0 field:(id)arg1;
- (void)collectInt:(int)arg0 field:(id)arg1;
- (void)reportError:(id)arg0 withError:(id)arg1 withContext:(id)arg2;
- (void)setContext:(id)arg0;
- (id)context;

@end
