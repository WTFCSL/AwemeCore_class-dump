//
//     Generated by private class-dump
//

@class NSURL;

@interface LSLiveAudioUnitConfig : NSObject {
    BOOL _newPlayerMode;
    BOOL _enableFadeInOut;
    int _fadeInDuration;
    int _fadeInCurve;
    int _fadeOutDuration;
    int _fadeOutCurve;
    NSURL *_musicURL;
    double _musicStartTime;
    unsigned long long _musicType;
    long long _numberOfLoops;
    id /* block */ _musicPlayErrorBlock;
    struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } _asbd;
}

@property (retain, nonatomic) NSURL *musicURL;
@property (nonatomic) struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } asbd;
@property (nonatomic) double musicStartTime;
@property (nonatomic) unsigned long long musicType;
@property long long numberOfLoops;
@property (nonatomic) BOOL newPlayerMode;
@property (copy, nonatomic) id /* block */ musicPlayErrorBlock;
@property (nonatomic) BOOL enableFadeInOut;
@property (nonatomic) int fadeInDuration;
@property (nonatomic) int fadeInCurve;
@property (nonatomic) int fadeOutDuration;
@property (nonatomic) int fadeOutCurve;

- (unsigned long long)musicType;
- (void)setMusicType:(unsigned long long)arg0;
- (id)musicURL;
- (void)setMusicURL:(id)arg0;
- (double)musicStartTime;
- (void)setMusicStartTime:(double)arg0;
- (BOOL)newPlayerMode;
- (void)setNewPlayerMode:(BOOL)arg0;
- (id /* block */)musicPlayErrorBlock;
- (void)setMusicPlayErrorBlock:(id /* block */)arg0;
- (BOOL)enableFadeInOut;
- (void)setEnableFadeInOut:(BOOL)arg0;
- (int)fadeInCurve;
- (void)setFadeInCurve:(int)arg0;
- (int)fadeOutCurve;
- (void)setFadeOutCurve:(int)arg0;
- (id)init;
- (void).cxx_destruct;
- (int)fadeOutDuration;
- (void)setFadeOutDuration:(int)arg0;
- (void)setFadeInDuration:(int)arg0;
- (int)fadeInDuration;
- (struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })asbd;
- (void)setAsbd:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })arg0;
- (long long)numberOfLoops;
- (void)setNumberOfLoops:(long long)arg0;

@end
