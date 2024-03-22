//
//     Generated by private class-dump
//

@class IESLiveVideoGiftAudioVoice, IESLiveVideoGiftAudioDecoder, IESLiveVideoGiftAudioDemuxer, NSURL, NSString;
@protocol IESLiveVideoGiftAudioPlayerDelegate;

@interface IESLiveVideoGiftAudioGraphPlayer : NSObject <IESLiveVideoGiftAudioPlayerProtocol> {
    BOOL _hasPrepared;
    BOOL _hasOccurredError;
    id<IESLiveVideoGiftAudioPlayerDelegate> delegate;
    long long _status;
    long long _audioPlaybackType;
    long long _audioBufferSize;
    IESLiveVideoGiftAudioDecoder *_decoder;
    IESLiveVideoGiftAudioDemuxer *_demuxer;
    IESLiveVideoGiftAudioVoice *_voice;
    NSURL *_sourceURL;
}

@property (nonatomic) BOOL hasPrepared;
@property (nonatomic) long long status;
@property (nonatomic) long long audioPlaybackType;
@property (nonatomic) long long audioBufferSize;
@property (nonatomic) BOOL hasOccurredError;
@property (retain, nonatomic) IESLiveVideoGiftAudioDecoder *decoder;
@property (retain, nonatomic) IESLiveVideoGiftAudioDemuxer *demuxer;
@property (retain, nonatomic) IESLiveVideoGiftAudioVoice *voice;
@property (retain, nonatomic) NSURL *sourceURL;
@property (weak, nonatomic) id<IESLiveVideoGiftAudioPlayerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)audioBufferSize;
- (long long)audioPlaybackType;
- (void)setupWithConfiguration:(id)arg0 error:(id *)arg1;
- (BOOL)hasPrepared;
- (void)setHasPrepared:(BOOL)arg0;
- (void)didOccurError:(id)arg0;
- (void)setDemuxer:(id)arg0;
- (id)demuxer;
- (BOOL)hasOccurredError;
- (void)setHasOccurredError:(BOOL)arg0;
- (id)initWithConfiguration:(id)arg0 url:(id)arg1 error:(id *)arg2;
- (void)setAudioPlaybackType:(long long)arg0;
- (void)setAudioBufferSize:(long long)arg0;
- (void).cxx_destruct;
- (long long)status;
- (void)stop;
- (void)setDecoder:(id)arg0;
- (id)sourceURL;
- (id)delegate;
- (void)setStatus:(long long)arg0;
- (void)setSourceURL:(id)arg0;
- (id)voice;
- (void)setVolume:(double)arg0;
- (id)decoder;
- (void)setVoice:(id)arg0;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (void)play;
- (void)pause;
- (void)seekToTime:(double)arg0;

@end
