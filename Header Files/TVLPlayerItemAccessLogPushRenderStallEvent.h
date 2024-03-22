//
//     Generated by private class-dump
//

@interface TVLPlayerItemAccessLogPushRenderStallEvent : TVLPlayerItemAccessLogPushStallEvent {
    long long _audioCaptureStallTime;
    long long _videoCaptureStallTime;
    long long _videoDropStallTime;
}

@property (nonatomic) long long audioCaptureStallTime;
@property (nonatomic) long long videoCaptureStallTime;
@property (nonatomic) long long videoDropStallTime;

- (id)initWithSeiInfo:(long long)arg0 videoSendStallTime:(long long)arg1 durationSinceFirstFrame:(long long)arg2 seiSource:(id)arg3;
- (void)initRenderStallTime:(long long)arg0 videoCaptureStallTime:(long long)arg1 videoDropStallTime:(long long)arg2;
- (long long)audioCaptureStallTime;
- (void)setAudioCaptureStallTime:(long long)arg0;
- (long long)videoCaptureStallTime;
- (void)setVideoCaptureStallTime:(long long)arg0;
- (long long)videoDropStallTime;
- (void)setVideoDropStallTime:(long long)arg0;

@end
