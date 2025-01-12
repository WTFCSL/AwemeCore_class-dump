//
//     Generated by private class-dump
//

@class NSString, LiveCore;
@protocol LCPlayerProtocol, LCKaraokeMovieDelegate;

@interface LCKaraokeMovie : NSObject <LCPlayerDelegate> {
    LiveCore *_liveCore;
    id<LCPlayerProtocol> _player;
    BOOL _forceSendFirstFrameTwice;
    BOOL _firstVideoReceived;
    id<LCKaraokeMovieDelegate> _delegate;
}

@property (nonatomic) BOOL firstVideoReceived;
@property (weak, nonatomic) id<LCKaraokeMovieDelegate> delegate;
@property (nonatomic) BOOL forceSendFirstFrameTwice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)player:(id)arg0 playbackStateDidChanged:(long long)arg1;
- (void)setKaraokeVideoMixerDescription:(long long)arg0 withPosition:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg1;
- (void)setEnableKaraokeMovieAudioPitchShifter:(BOOL)arg0;
- (BOOL)isEnableKaraokeMovieAudioPitchShifter;
- (void)setKaraokeMoviePitch:(double)arg0;
- (void)setKaraokeVideoMixerDescription:(long long)arg0 zOrder:(int)arg1 withPosition:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg2;
- (void)pushKaraokeMovieBuffer:(struct __CVBuffer { } *)arg0 andCMTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg1;
- (void)pushKaraokeMovieAudioBuffer:(float **)arg0 samples:(int)arg1;
- (void)prepareKaraokeMovieAudio:(int)arg0 channels:(int)arg1;
- (void)setKaraokeMixVolume:(float)arg0 captureVolume:(float)arg1;
- (void)setKaraokePlayVolume:(float)arg0;
- (void)player:(id)arg0 loadStateDidChanged:(long long)arg1;
- (float)getCurrentPlayTime;
- (void)seekPlayerTimeTo:(double)arg0;
- (float)getTotalPlayTime;
- (void)mute:(BOOL)arg0;
- (BOOL)firstVideoReceived;
- (void)setFirstVideoReceived:(BOOL)arg0;
- (BOOL)forceSendFirstFrameTwice;
- (void)videoPlayerDidFinish:(id)arg0 error:(id)arg1;
- (id)initWithLiveCore:(id)arg0 player:(id)arg1;
- (void)setMovieRenderView:(id)arg0;
- (void)videoWrapperRelease;
- (void)audioWrapperRelease;
- (void)setForceSendFirstFrameTwice:(BOOL)arg0;
- (void)resume;
- (void).cxx_destruct;
- (void)close;
- (void)stop;
- (id)delegate;
- (void)prepare;
- (void)restart;
- (BOOL)isPlaying;
- (void)setVolume:(float)arg0;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (void)play;
- (void)pause;
- (void)setLocalURL:(id)arg0;
- (float)getVolume;

@end
