//
//     Generated by private class-dump
//

@protocol AWECommentAudioRecorderDelegate <NSObject>

- (void)audioRecorderStartRecord:(id)arg0 error:(id)arg1;
- (void)audioRecorderDidFinishRecording:(id)arg0 success:(BOOL)arg1 error:(id)arg2;
- (void)audioRecorderExceedLimitTime:(id)arg0;
- (void)audioRecorderNotifyLeftSecondBeforeExceedLimit:(id)arg0 secondsLeftBeforeExceedLimit:(long long)arg1;

@end
