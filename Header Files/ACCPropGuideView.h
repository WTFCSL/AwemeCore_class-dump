//
//     Generated by private class-dump
//

@class NSString, UIImageView, UIView, TTVideoEnginePlayer, UIButton;
@protocol ACCPropGuideViewDelegate;

@interface ACCPropGuideView : UIView <TTVideoPlayerStateProtocol> {
    long long _loopTimes;
    id<ACCPropGuideViewDelegate> _delegate;
    UIButton *_skipBtn;
    UIImageView *_coverImageView;
    UIView *_playerContentView;
    TTVideoEnginePlayer *_player;
    id /* block */ _completionBlock;
}

@property (retain, nonatomic) UIButton *skipBtn;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIView *playerContentView;
@property (retain, nonatomic) TTVideoEnginePlayer *player;
@property (nonatomic) long long loopTimes;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (readonly, nonatomic) double currentPlayTime;
@property (readonly, nonatomic) double videoDuration;
@property (weak, nonatomic) id<ACCPropGuideViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isShowing;

- (long long)loopTimes;
- (double)currentPlayTime;
- (void)setCoverImageView:(id)arg0;
- (id)coverImageView;
- (void)playerDidCreateKernelPlayer;
- (void)playerViewWillRemove;
- (void)playerVideoSizeChange;
- (void)playerVideoBitrateChanged:(long long)arg0;
- (void)playerDeviceOpened:(long long)arg0;
- (void)playerAudioRenderStart;
- (void)playerMediaInfoDidChanged:(long long)arg0;
- (void)playerAVOutsyncStateChange:(long long)arg0 pts:(long long)arg1;
- (void)playerNOVARenderStateChange:(unsigned long long)arg0 noRenderType:(int)arg1;
- (void)playerStartTimeNoVideoFrame:(int)arg0;
- (void)playerPreBuffering:(long long)arg0;
- (void)playerOutleterPaused:(long long)arg0;
- (void)playerBarrageMaskInfoCompleted:(long long)arg0;
- (void)playbackDidFinish:(id)arg0;
- (void)loadStateDidChange:(unsigned long long)arg0 stallReason:(unsigned long long)arg1;
- (void)playableDurationUpdate:(double)arg0;
- (void)playerIsPrepared;
- (void)playerReadyToDisplay;
- (void)playerIsReadyToPlay;
- (id)skipBtn;
- (void)setLoopTimes:(long long)arg0;
- (void)setSkipBtn:(id)arg0;
- (void)closePlay;
- (id)playerContentView;
- (void)setPlayerContentView:(id)arg0;
- (void)startVideoWithURL:(id)arg0 cover:(id)arg1 completion:(id /* block */)arg2;
- (void)skipBtnDidClick;
- (void)willMoveToSuperview:(id)arg0;
- (void)removeFromSuperview;
- (void).cxx_destruct;
- (id /* block */)completionBlock;
- (void)onDidBecomeActive;
- (void)setCompletionBlock:(id /* block */)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setPlayer:(id)arg0;
- (id)delegate;
- (double)videoDuration;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (void)onWillResignActive;
- (id)hitTest:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;
- (id)player;
- (void)setupSubviews;
- (void)setupPlayer;
- (void)playbackStateDidChange:(long long)arg0;

@end