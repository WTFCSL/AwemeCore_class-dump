//
//     Generated by private class-dump
//

@protocol ACCTextReaderTrackerProtocol <NSObject>

- (void)logTextReadingComplete:(id)arg0 speakerName:(id)arg1 textType:(id)arg2 extraParams:(id)arg3;
- (void)logToneClick:(id)arg0 speakerName:(id)arg1 isDefaultSelected:(BOOL)arg2 textType:(id)arg3 extraParams:(id)arg4;
- (void)logToneCancel:(id)arg0 extraParams:(id)arg1;
- (void)logPanelShowExtraParams:(id)arg0;
- (void)logClickTone:(id)arg0 extraParams:(id)arg1;
- (void)logCancelTone:(id)arg0 extraParams:(id)arg1;
- (void)logApplyTone:(id)arg0 extraParams:(id)arg1;
- (void)logCollectTone:(id)arg0 extraParams:(id)arg1;
- (void)logCancelCollectTone:(id)arg0 extraParams:(id)arg1;

@end