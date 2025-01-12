//
//     Generated by private class-dump
//

@protocol IESLiveVideoGiftControllerDelegate <NSObject>

- (void)didFinishPlayingWithError:(id)arg0;

@optional

- (void)videoGiftController:(id)arg0 didFinishPlayingWithError:(id)arg1;
- (void)videoGiftController:(id)arg0 didTapMasks:(id)arg1;
- (void)frameCallBack:(double)arg0;
- (void)videoGiftController:(id)arg0 playingWithNonFatalError:(id)arg1;
- (void)videoGiftController:(id)arg0 willPlayFrame:(id)arg1;
- (void)videoGiftController:(id)arg0 didEndPlayingFrame:(id)arg1;
- (void)videoGiftController:(id)arg0 didFrameCommandBufferCommitted:(id)arg1 error:(id)arg2;
- (void)videoGiftController:(id)arg0 sceneError:(id)arg1 scene:(unsigned long long)arg2;
- (void)successParseConfigResourceModel:(id)arg0;
- (BOOL)videoControllerShouldDelayPlayIfAudioResouces:(id)arg0;
- (void)videoGiftController:(id)arg0 didSetMetalViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg1;
- (void)videoGiftController:(id)arg0 isReadyToPlayOnView:(id)arg1;
- (void)videoGiftController:(id)arg0 isReadyToPlayOnView:(id)arg1;
- (float)audioPlayVolume;
- (void)videoGiftController:(id)arg0 prepareAudioWithSampleRate:(double)arg1 channels:(unsigned int)arg2;
- (void)videoGiftController:(id)arg0 processAudioFrameWithRawData:(float **)arg1 samples:(int)arg2 timestamp:(long long)arg3;
- (id)videoGiftController:(id)arg0 externalAudioPlayer:(id)arg1 resource:(id)arg2 error:(id *)arg3;

@end
