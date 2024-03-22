//
//     Generated by private class-dump
//

@protocol ALMVideoIntePlayerDelegate <NSObject>

@optional

- (void)player:(id)arg0 playbackFailedWithError:(id)arg1;
- (void)playerDidReadyForDisplay:(id)arg0;
- (void)player:(id)arg0 didChangePlaybackStateWithAction:(long long)arg1;
- (void)player:(id)arg0 didChangeStallState:(long long)arg1;
- (void)player:(id)arg0 deviceOpenedWithStreamType:(long long)arg1;
- (void)player:(id)arg0 avOutsyncStateDidChangedWithType:(unsigned long long)arg1 extraInfo:(id)arg2;
- (void)player:(id)arg0 switchAudioInfoCompleted:(unsigned long long)arg1;
- (void)player:(id)arg0 downloadProgressWithKey:(id)arg1 videoId:(id)arg2 cacheSize:(long long)arg3 mediaSize:(long long)arg4;
- (void)playerWillLoopPlaying:(id)arg0;
- (void)player:(id)arg0 playbackFailedForURL:(id)arg1 error:(id)arg2;
- (void)player:(id)arg0 didChangeStallState:(long long)arg1 actionType:(long long)arg2 reason:(unsigned long long)arg3;
- (void)player:(id)arg0 didFinishVideoDataDownloadForURL:(id)arg1;
- (void)player:(id)arg0 noVideoDataToDownloadForURL:(id)arg1;
- (void)player:(id)arg0 didFetchVideoModel:(id)arg1;
- (void)player:(id)arg0 didUpdateVRHeadPoseWithYaw:(double)arg1 pitch:(double)arg2 roll:(double)arg3;
- (void)player:(id)arg0 onMaskInfoCallBack:(id)arg1 pts:(unsigned long long)arg2;
- (void)setResourceLoaderErrorStrategy:(unsigned long long)arg0;

@end
