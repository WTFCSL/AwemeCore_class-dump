//
//     Generated by private class-dump
//

@protocol ACCFeedbackProtocol <NSObject>

- (void)acc_studioRegisterParsers;
- (void)acc_recordForVideoUpload:(unsigned long long)arg0 code:(long long)arg1 stage:(long long)arg2;
- (void)acc_recordForVideoMerge:(unsigned long long)arg0 code:(long long)arg1;
- (void)acc_recordForVideoRecord:(unsigned long long)arg0 code:(long long)arg1;
- (void)acc_recordForCameraInit:(unsigned long long)arg0 code:(long long)arg1;
- (void)acc_recordForSaveVideoDraft:(unsigned long long)arg0 code:(long long)arg1;
- (void)acc_recordForLoadVideoDraft:(unsigned long long)arg0 code:(long long)arg1;
- (void)acc_recordForDeleteVideoDraft:(unsigned long long)arg0 code:(long long)arg1;
- (void)acc_recordForTotalVideoDraft:(unsigned long long)arg0 code:(long long)arg1 draftCreationData:(id)arg2;
- (void)acc_recordForVideoDraftTimeline:(unsigned long long)arg0 code:(long long)arg1 draftInfo:(id)arg2 title:(id)arg3;

@end
