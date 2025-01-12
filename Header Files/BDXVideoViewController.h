//
//     Generated by private class-dump
//

@class NSString, NSDictionary, BDXVideoPlayerVideoModel, UIView, UIButton;
@protocol BDXVideoPlayProgressDelegate;

@interface BDXVideoViewController : UIViewController <BDXVideoCorePlayerDelegate, BDXVideoFullScreenPlayer> {
    BOOL _autoLifecycle;
    BOOL _shouldResumePlay;
    id /* block */ dismissBlock;
    UIView *_playerView;
    BDXVideoPlayerVideoModel *_video;
    NSDictionary *_eventParams;
    double _initPlayTime;
    id<BDXVideoPlayProgressDelegate> _playerDelegate;
    UIButton *_closeButton;
    double _playTime;
    NSString *_imageURL;
    unsigned long long _restoreOrientation;
}

@property (retain, nonatomic) UIButton *closeButton;
@property (nonatomic) double playTime;
@property (copy, nonatomic) NSString *imageURL;
@property (nonatomic) BOOL shouldResumePlay;
@property (nonatomic) unsigned long long restoreOrientation;
@property (nonatomic) BOOL autoLifecycle;
@property (nonatomic) BOOL repeated;
@property (retain, nonatomic) BDXVideoPlayerVideoModel *video;
@property (copy, nonatomic) NSDictionary *eventParams;
@property (nonatomic) double initPlayTime;
@property (weak, nonatomic) id<BDXVideoPlayProgressDelegate> playerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIView *playerView;
@property (copy, nonatomic) id /* block */ dismissBlock;

- (void)setPlayerDelegate:(id)arg0;
- (id)playerDelegate;
- (void)setEventParams:(id)arg0;
- (void)setPlayTime:(double)arg0;
- (id)initWithCoverImage:(id)arg0;
- (BOOL)autoLifecycle;
- (void)setAutoLifecycle:(BOOL)arg0;
- (void)setRestoreOrientation:(unsigned long long)arg0;
- (unsigned long long)restoreOrientation;
- (id)initWithCoverImageURL:(id)arg0;
- (double)initPlayTime;
- (void)setInitPlayTime:(double)arg0;
- (void)bdx_player:(id)arg0 didChangePlaybackStateWithAction:(unsigned long long)arg1;
- (void)bdx_player:(id)arg0 playbackFailedWithError:(id)arg1;
- (void)bdx_playerDidReadyForDisplay:(id)arg0;
- (void)setShouldResumePlay:(BOOL)arg0;
- (BOOL)shouldResumePlay;
- (void)playerBecomeActive;
- (void)playerEnterBackground;
- (BOOL)shouldAutorotate;
- (void)dismiss;
- (void)viewDidLayoutSubviews;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)preferredInterfaceOrientationForPresentation;
- (BOOL)prefersHomeIndicatorAutoHidden;
- (double)playTime;
- (void)setImageURL:(id)arg0;
- (void)setVideo:(id)arg0;
- (long long)preferredStatusBarStyle;
- (id)imageURL;
- (id)playerView;
- (id)video;
- (BOOL)prefersStatusBarHidden;
- (BOOL)play;
- (void)setPlayerView:(id)arg0;
- (BOOL)pause;
- (void)viewDidLoad;
- (void)show:(id /* block */)arg0;
- (void)setupUI;
- (id)closeButton;
- (void)setCloseButton:(id)arg0;
- (BOOL)repeated;
- (void)setRepeated:(BOOL)arg0;
- (id /* block */)dismissBlock;
- (void)setDismissBlock:(id /* block */)arg0;
- (id)eventParams;

@end
