//
//     Generated by private class-dump
//

@protocol SAMIStreamTTSServiceDelegate <NSObject>

- (void)ttsDownloadCompleted:(id)arg0 audioTexts:(id)arg1 phonemes:(id)arg2 underRunCount:(long long)arg3 taskID:(id)arg4;
- (void)ttsError:(long long)arg0 taskID:(id)arg1;
- (void)ttsStreamDownloadStart;
- (void)ttsStreamGetFirstFrame;
- (void)ttsStreamFinish;
- (void)ttsStreamFailed;

@end
