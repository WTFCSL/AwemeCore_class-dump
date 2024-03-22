//
//     Generated by private class-dump
//

@class POIMediaPlayerView, UIView;

@interface POIMediaListVideoAlbumCell : POIMediaListCell {
    POIMediaPlayerView *_playerView;
    UIView *_progressView;
}

@property (retain, nonatomic) POIMediaPlayerView *playerView;
@property (retain, nonatomic) UIView *progressView;

- (long long)currentPlayState;
- (void)albumScrollToIndex:(unsigned long long)arg0;
- (void)updateWithMediaModel:(id)arg0;
- (void)didSetInteractorContainer;
- (BOOL)mute;
- (void).cxx_destruct;
- (BOOL)stop;
- (id)progressView;
- (void)setProgressView:(id)arg0;
- (void)prepareForReuse;
- (id)playerView;
- (BOOL)play;
- (void)setPlayerView:(id)arg0;
- (BOOL)pause;
- (void)setMute:(BOOL)arg0;
- (void)didTap;
- (void)willDisplay;
- (void)seekToTime:(double)arg0 completion:(id /* block */)arg1;

@end