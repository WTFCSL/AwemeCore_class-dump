//
//     Generated by private class-dump
//

@class NSString, NSDictionary, TVLSysPlayerView, AVPlayer;
@protocol TVLPlayerController;

@interface TVLSysPlayer : TVLPlayerInternal {
    BOOL _hardwareDecodeEnabled;
    float _volume;
    id<TVLPlayerController> _controller;
    NSDictionary *_SEI;
    unsigned long long _audioRenderDeviceType;
    long long _playbackState;
    long long _playerViewAlignMode;
    AVPlayer *_player;
    TVLSysPlayerView *_showView;
    NSString *_contentURL;
}

@property (retain, nonatomic) AVPlayer *player;
@property (retain, nonatomic) TVLSysPlayerView *showView;
@property (copy, nonatomic) NSString *contentURL;

- (void)applicationEnterBackground;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })videoAreaFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })videoCropAreaFrame;
- (void)setVideoCropAreaFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (unsigned long long)audioRenderDeviceType;
- (void)setAudioRenderDeviceType:(unsigned long long)arg0;
- (long long)playerViewAlignMode;
- (void)setPlayerViewAlignMode:(long long)arg0;
- (id)showView;
- (long long)numberOfBytesPlayed;
- (id)playerCoreVersion;
- (void)addPlayItemKVO:(id)arg0;
- (void)removePlayItemKVO:(id)arg0;
- (void)receivePlayError:(id)arg0;
- (void)applicationEnterForeground;
- (void)replaceCurrentURLWithPlayURL:(id)arg0 options:(id)arg1;
- (void)resetViewPlayer;
- (id)getPlayerVersion;
- (BOOL)isContainerOfPlayerCore:(id)arg0;
- (void)drawBorderViewForTest;
- (id)SEI;
- (void)setSEI:(id)arg0;
- (BOOL)isHardwareDecodeEnabled;
- (void)setHardwareDecodeEnabled:(BOOL)arg0;
- (void)setShowView:(id)arg0;
- (void)setController:(id)arg0;
- (long long)playbackState;
- (id)init;
- (void).cxx_destruct;
- (float)volume;
- (id)contentURL;
- (void)close;
- (void)stop;
- (id)controller;
- (void)setPlayer:(id)arg0;
- (id)versionInfo;
- (BOOL)isPlaying;
- (void)setVolume:(float)arg0;
- (id)playerView;
- (void)dealloc;
- (void)play;
- (void)pause;
- (void)reset;
- (void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(void *)arg3;
- (id)player;
- (void)setContentURL:(id)arg0;
- (void)setCustomHeader:(id)arg0;
- (void)prepareToPlay;
- (long long)numberOfBytesTransferred;
- (id)requestInfo;
- (long long)playerItemStatus;

@end