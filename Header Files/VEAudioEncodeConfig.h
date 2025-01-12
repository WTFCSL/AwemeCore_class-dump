//
//     Generated by private class-dump
//

@interface VEAudioEncodeConfig : NSObject <NSCopying> {
    long long _bitrate;
    long long _sampleRate;
    long long _channel;
}

@property (nonatomic) long long bitrate;
@property (nonatomic) long long sampleRate;
@property (nonatomic) long long channel;

+ (id)audioEncodeConfigWithChannel:(long long)arg0 sampleRate:(long long)arg1 bitrate:(long long)arg2;

- (id)toToolboxDicConfig;
- (long long)channel;
- (id)init;
- (long long)sampleRate;
- (void)setChannel:(long long)arg0;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (long long)bitrate;
- (void)setSampleRate:(long long)arg0;
- (void)setBitrate:(long long)arg0;

@end
