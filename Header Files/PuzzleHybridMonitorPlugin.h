//
//     Generated by private class-dump
//

@class NSString;

@interface PuzzleHybridMonitorPlugin : NSObject <PuzzleKitViewLifeCycleProtocol, PuzzleHybridMonitorReporter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)loadSwizzled;
+ (id)sharedMonitor;

- (void)setupMonitor;
- (void)kitView:(id)arg0 willCreatedWithContext:(id)arg1;
- (id)generateIDForContainer;
- (void)invalidateID:(id)arg0 andData:(BOOL)arg1;
- (void)deleteData:(id)arg0 isForce:(BOOL)arg1;
- (void)attach:(id)arg0 webView:(id)arg1;
- (void)attach:(id)arg0 LynxView:(id)arg1;
- (void)detach:(id)arg0 webView:(id)arg1;
- (void)detach:(id)arg0 LynxView:(id)arg1;
- (void)reportContainerError:(id)arg0 withID:(id)arg1 withError:(id)arg2;
- (void)collectBoolean:(id)arg0 field:(id)arg1 data:(BOOL)arg2;
- (void)collectString:(id)arg0 field:(id)arg1 data:(id)arg2;
- (void)collectLong:(id)arg0 field:(id)arg1 data:(long long)arg2;
- (void)collectInt:(id)arg0 field:(id)arg1 data:(int)arg2;
- (void)fetchContainerData:(id)arg0 block:(id /* block */)arg1;
- (void)fetchAggregationPerfTiming:(id)arg0 level:(unsigned long long)arg1 waitCompleteData:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)lynxReportCustomWithEventName:(id)arg0 LynxView:(id)arg1 metric:(id)arg2 category:(id)arg3 extra:(id)arg4 maySample:(BOOL)arg5;
- (void)webReportCustomWithEventName:(id)arg0 webView:(id)arg1 metric:(id)arg2 category:(id)arg3 extra:(id)arg4 maySample:(BOOL)arg5;
- (void)reportHybridEventName:(id)arg0 containerId:(id)arg1 URL:(id)arg2 metric:(id)arg3 category:(id)arg4 extra:(id)arg5 kernalType:(unsigned long long)arg6 aid:(id)arg7 maySample:(BOOL)arg8;
- (void)reportHybridEventName:(id)arg0 containerId:(id)arg1 URL:(id)arg2 metric:(id)arg3 category:(id)arg4 extra:(id)arg5 kernalType:(unsigned long long)arg6 aid:(id)arg7 sampleLevel:(unsigned long long)arg8;
- (void)bindCrashInfoWithUrl:(id)arg0 schema:(id)arg1;
- (void)reportLatchEventName:(id)arg0 containerId:(id)arg1 URL:(id)arg2 metric:(id)arg3 category:(id)arg4 extra:(id)arg5 kernalType:(unsigned long long)arg6 maySample:(BOOL)arg7;
- (void)setMonitorFieldMap:(id)arg0 containerId:(id)arg1;
- (void)repairMonitorContextForReusedView:(id)arg0;
- (void)configWebViewMonitor;
- (void)checkTurnOnBlanckDetect:(id)arg0 context:(id)arg1;

@end
