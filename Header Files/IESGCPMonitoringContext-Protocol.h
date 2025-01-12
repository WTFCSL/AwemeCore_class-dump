//
//     Generated by private class-dump
//

@protocol IESGCPMonitoringContext <IESGCPContextEditable>

- (void)monitorWithService:(id)arg0 status:(id)arg1 extraInfos:(id)arg2;
- (void)monitorErrorWithService:(id)arg0 extraInfos:(id)arg1;
- (void)monitorDurationStartWithBatchServices:(id)arg0;
- (void)monitorDurationEndWithService:(id)arg0 status:(id)arg1 extraInfos:(id)arg2;
- (void)monitorWithService:(id)arg0 category:(id)arg1 extraInfos:(id)arg2;
- (void)monitorDurationStartWithService:(id)arg0;
- (void)clearAllMonitorDurationRecord;
- (void)monitorSuccessWithService:(id)arg0 extraInfos:(id)arg1;
- (void)monitorErrorWithService:(id)arg0 errorCode:(id)arg1 errorMsg:(id)arg2 extraInfos:(id)arg3;

@end
