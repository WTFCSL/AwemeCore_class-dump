//
//     Generated by private class-dump
//

@protocol IVCABRPlayStateSupplier <NSObject>

- (int)getCurrentPlaybackTime;
- (float)getSpeedConfidence;
- (float)getPlaySpeed;
- (float)getNetworkSpeed;
- (int)getNetworkState;
- (int)getLoaderType;
- (int)getCurrentDownloadVideoBitrate;
- (int)getCurrentDownloadAudioBitrate;
- (int)getMaxCacheVideoTime;
- (int)getMaxCacheAudioTime;
- (int)getPlayerVideoCacheTime;
- (int)getPlayerAudioCacheTime;
- (long long)getExpectedBitrate;
- (id)getTimelineNetworkSpeed;
- (id)getVideoBufferInfo;
- (id)getAudioBufferInfo;

@end
