//
//     Generated by private class-dump
//

@protocol IESLiveMultiVideoGiftControllerDelegate <NSObject>

- (void)multiVideoGiftController:(id)arg0 didFinishPlayingWithForegroundError:(id)arg1 backgroundError:(id)arg2;

@optional

- (void)multiVideoGiftController:(id)arg0 successParseConfigResourceModel:(id)arg1;
- (void)multiVideoGiftController:(id)arg0 player:(id)arg1 frameCallBack:(double)arg2;
- (void)multiVideoGiftController:(id)arg0 player:(id)arg1 playingWithNonFatalError:(id)arg2;
- (void)multiVideoGiftController:(id)arg0 player:(id)arg1 willPlayFrame:(id)arg2;
- (void)multiVideoGiftController:(id)arg0 player:(id)arg1 didEndPlayingFrame:(id)arg2;
- (void)multiVideoGiftController:(id)arg0 player:(id)arg1 didFrameCommandBufferCommitted:(id)arg2 error:(id)arg3;
- (void)multiVideoGiftController:(id)arg0 player:(id)arg1 sceneError:(id)arg2 scene:(unsigned long long)arg3;
- (BOOL)multiVideoGiftController:(id)arg0 videoControllerShouldDelayPlayIfAudioResouces:(id)arg1;
- (void)multiVideoGiftController:(id)arg0 viewDidLoadOnPlayer:(id)arg1;
- (float)multiVideoAudioPlayVolume;
- (void)multiVideoGiftController:(id)arg0 prepareAudioWithSampleRate:(double)arg1 channels:(unsigned int)arg2;
- (void)multiVideoGiftController:(id)arg0 processAudioFrameWithRawData:(float **)arg1 samples:(int)arg2 timestamp:(long long)arg3;
- (id)multiVideoGiftController:(id)arg0 externalAudioPlayer:(id)arg1 resource:(id)arg2 error:(id *)arg3;

@end
