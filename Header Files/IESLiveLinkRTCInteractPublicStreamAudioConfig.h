//
//     Generated by private class-dump
//

@interface IESLiveLinkRTCInteractPublicStreamAudioConfig : NSObject {
    long long _sampleRate;
    long long _channels;
    long long _bitrate;
}

@property (nonatomic) long long sampleRate;
@property (nonatomic) long long channels;
@property (nonatomic) long long bitrate;

- (long long)channels;
- (void)setChannels:(long long)arg0;
- (long long)sampleRate;
- (long long)bitrate;
- (void)setSampleRate:(long long)arg0;
- (void)setBitrate:(long long)arg0;

@end