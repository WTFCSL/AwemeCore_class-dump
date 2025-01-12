//
//     Generated by private class-dump
//

@protocol BDUGLuckyActivityStageProtocol <BDUGServiceProtocol>

- (id)registerActivityDelegate:(id)arg0 beforeActivityEnterTime:(long long)arg1 entryId:(id)arg2;
- (void)unregisterActivityDelegate:(id)arg0;
- (id)isInActivityStage:(id)arg0 resourceId:(id)arg1 cycleId:(id)arg2;
- (long long)isActivityBlock:(id)arg0 resourceId:(id)arg1 cycleId:(id)arg2;
- (id)getResourceWithEntryId:(id)arg0 resourceId:(id)arg1 cycleId:(id)arg2;
- (id)getProcessActivityResourceWithEntryId:(id)arg0;
- (id)getAllResourceWithEntryData:(id)arg0;
- (id)defaultActivityData:(id)arg0;
- (id)getPersonalSettingsStatusWithEntryId:(id)arg0;

@end
