//
//     Generated by private class-dump
//

@class NSString;

@interface IESLiveLinkRTCInteractTranscodingAudioConfig : NSObject {
    NSString *_codec;
    long long _sampleRate;
    long long _channels;
    long long _kBitRate;
    long long _profile;
}

@property (copy, nonatomic) NSString *codec;
@property (nonatomic) long long sampleRate;
@property (nonatomic) long long channels;
@property (nonatomic) long long kBitRate;
@property (nonatomic) long long profile;

- (long long)kBitRate;
- (void)setKBitRate:(long long)arg0;
- (void)setProfile:(long long)arg0;
- (long long)channels;
- (void)setChannels:(long long)arg0;
- (void).cxx_destruct;
- (long long)sampleRate;
- (id)codec;
- (long long)profile;
- (void)setCodec:(id)arg0;
- (void)setSampleRate:(long long)arg0;

@end
