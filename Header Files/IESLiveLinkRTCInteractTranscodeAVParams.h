//
//     Generated by private class-dump
//

@class NSString;

@interface IESLiveLinkRTCInteractTranscodeAVParams : NSObject {
    BOOL _enableBFrame;
    BOOL _useOriginalFrame;
    BOOL _useAudioMixer;
    long long _mixVideoWidth;
    long long _mixVideoHeight;
    long long _mixVideoFps;
    long long _mixVideoCodec;
    NSString *_mixVideoProfile;
    long long _mixVideoGop;
    long long _mixVideoBitrate;
    long long _mixAudioSampleRate;
    long long _mixAudioChannel;
    long long _mixAudioBitrate;
    long long _mixAudioCodec;
    long long _mixSyncQueueLengthMs;
}

@property (nonatomic) long long mixVideoWidth;
@property (nonatomic) long long mixVideoHeight;
@property (nonatomic) long long mixVideoFps;
@property (readonly, nonatomic) long long mixVideoCodec;
@property (readonly, nonatomic) NSString *mixVideoProfile;
@property (readonly, nonatomic) long long mixVideoGop;
@property (nonatomic) long long mixVideoBitrate;
@property (readonly, nonatomic) long long mixAudioSampleRate;
@property (readonly, nonatomic) long long mixAudioChannel;
@property (readonly, nonatomic) long long mixAudioBitrate;
@property (readonly, nonatomic) long long mixAudioCodec;
@property (nonatomic) BOOL enableBFrame;
@property (nonatomic) BOOL useOriginalFrame;
@property (nonatomic) BOOL useAudioMixer;
@property (readonly, nonatomic) long long mixSyncQueueLengthMs;

- (BOOL)enableBFrame;
- (void)setEnableBFrame:(BOOL)arg0;
- (BOOL)useAudioMixer;
- (void)setUseAudioMixer:(BOOL)arg0;
- (long long)mixAudioCodec;
- (long long)mixVideoCodec;
- (long long)mixVideoBitrate;
- (long long)mixVideoFps;
- (long long)mixVideoHeight;
- (long long)mixVideoWidth;
- (void)setMixVideoWidth:(long long)arg0;
- (void)setMixVideoHeight:(long long)arg0;
- (void)setMixVideoBitrate:(long long)arg0;
- (void)setMixVideoFps:(long long)arg0;
- (long long)mixVideoGop;
- (long long)mixAudioChannel;
- (long long)mixAudioBitrate;
- (long long)mixAudioSampleRate;
- (long long)mixSyncQueueLengthMs;
- (id)mixVideoProfile;
- (BOOL)useOriginalFrame;
- (void)setUseOriginalFrame:(BOOL)arg0;
- (id)mixAudioParamsJson;
- (id)mixVideoParamsJson;
- (id)dictToJsonstr:(id)arg0;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)arg0;

@end
