//
//     Generated by private class-dump
//

@class NSString;
@protocol IESLiveMultiUserScenarioMonitor;

@interface IESLiveKTVFullLinkMonitor : NSObject <IESLiveKTVFullLinkMonitor> {
    id<IESLiveMultiUserScenarioMonitor> _fullLinkMonitor;
}

@property (retain, nonatomic) id<IESLiveMultiUserScenarioMonitor> fullLinkMonitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)fullLinkMonitor;
- (void)setFullLinkMonitor:(id)arg0;
- (void)monitorKTVBussiness:(id)arg0 extra:(id)arg1;
- (void)handleResponse:(id)arg0 error:(id)arg1 startTime:(double)arg2 event:(id)arg3 completion:(id /* block */)arg4;
- (void)monitorServerAPI:(id)arg0 startTime:(double)arg1 response:(id)arg2 error:(id)arg3 extra:(id)arg4;
- (void)monitorKTVMessage:(id)arg0 extra:(id)arg1;
- (void)trackWithStepName:(id)arg0 extra:(id)arg1;
- (void)traceWithEventType:(id)arg0 stepName:(id)arg1 extra:(id)arg2;
- (void).cxx_destruct;

@end
