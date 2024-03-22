//
//     Generated by private class-dump
//

@interface TVLPlayerItemAccessLogTimeSeriesEvent : TVLPlayerItemLogEvent {
    long long _audioBufferDuration;
    long long _renderingFrameRate;
    long long _pullingBitrate;
    long long _pushingFrameRate;
    long long _pushingBitrate;
}

@property (nonatomic) long long audioBufferDuration;
@property (nonatomic) long long renderingFrameRate;
@property (nonatomic) long long pullingBitrate;
@property (nonatomic) long long pushingFrameRate;
@property (nonatomic) long long pushingBitrate;

- (long long)audioBufferDuration;
- (void)setAudioBufferDuration:(long long)arg0;
- (long long)renderingFrameRate;
- (void)setRenderingFrameRate:(long long)arg0;
- (long long)pullingBitrate;
- (void)setPullingBitrate:(long long)arg0;
- (long long)pushingFrameRate;
- (void)setPushingFrameRate:(long long)arg0;
- (long long)pushingBitrate;
- (void)setPushingBitrate:(long long)arg0;
- (id)init;

@end
