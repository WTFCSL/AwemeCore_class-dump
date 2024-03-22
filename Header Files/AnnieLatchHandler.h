//
//     Generated by private class-dump
//

@class NSString;

@interface AnnieLatchHandler : NSObject <IESLatchMonitorProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)reportCustomWithEventName:(id)arg0 url:(id)arg1 lynxView:(id)arg2 metric:(id)arg3 category:(id)arg4 extra:(id)arg5 maySample:(BOOL)arg6;
- (void)reportCustomWithEventName:(id)arg0 containerId:(id)arg1 url:(id)arg2 lynxView:(id)arg3 metric:(id)arg4 category:(id)arg5 extra:(id)arg6 maySample:(BOOL)arg7;
- (void)fireWithContainer:(id)arg0 kitView:(id)arg1;
- (void)duringLynxViewBuilding:(id)arg0 containerID:(id)arg1 context:(id)arg2;
- (BOOL)enableLatchWithQueryItems:(id)arg0;
- (BOOL)enableLatchWithContainer:(id)arg0;
- (void)setupAnnieLatch;
- (BOOL)enableLatchInAnnieXCard:(id)arg0;
- (void)stopWithContainer:(id)arg0;
- (void)onLynxViewCreated:(id)arg0;
- (void)stopWithAnnieXCard:(id)arg0;
- (void)fireWithAnnieXCard:(id)arg0 kitView:(id)arg1;
- (void)duringLynxViewBuildingWithAnnieXCard:(id)arg0 builder:(id)arg1 containerID:(id)arg2;
- (void)onLynxViewCreatedWithAnnieXCard:(id)arg0;

@end