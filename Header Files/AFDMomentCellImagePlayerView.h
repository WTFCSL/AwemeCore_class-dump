//
//     Generated by private class-dump
//

@class AWEVideoModel;
@protocol AFDClipVideoPlayerAdapterProtocol;

@interface AFDMomentCellImagePlayerView : UIView {
    BOOL _muted;
    AWEVideoModel *_video;
    id /* block */ _playerWillLoopPlayingBlock;
    id<AFDClipVideoPlayerAdapterProtocol> _playerAdapter;
}

@property (retain, nonatomic) id<AFDClipVideoPlayerAdapterProtocol> playerAdapter;
@property (retain, nonatomic) AWEVideoModel *video;
@property (copy, nonatomic) id /* block */ playerWillLoopPlayingBlock;
@property (nonatomic) BOOL muted;

- (id /* block */)playerWillLoopPlayingBlock;
- (void)setPlayerWillLoopPlayingBlock:(id /* block */)arg0;
- (void)layoutPlayerView;
- (void)resetPlayerSeekTime;
- (id)playerAdapter;
- (void)setPlayerAdapter:(id)arg0;
- (void).cxx_destruct;
- (BOOL)muted;
- (void)setMuted:(BOOL)arg0;
- (void)setVideo:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)video;
- (void)layoutSubviews;
- (void)play;
- (void)pause;
- (void)setupViews;

@end
