//
//     Generated by private class-dump
//

@class ACCCutSamePlayerControlView, AWESelectTemplateViewProvider, ACCButton, NSString, UIView, ACCStickerContainerView, AWESelectTemplateViewModel;
@protocol ACCStickerServiceProtocol, ACCEditServiceProtocol;

@interface AWESelectTemplatePlayerViewModel : NSObject <LVPlayerDelegate, ACCEditPreviewMessageProtocol> {
    BOOL _pauseByGesture;
    BOOL _playerNeedReload;
    BOOL _hasEnteredBackground;
    UIView *_view;
    AWESelectTemplateViewModel *_viewModel;
    AWESelectTemplateViewProvider *_viewProvider;
    UIView *_playerCanvas;
    id<ACCEditServiceProtocol> _editService;
    id<ACCStickerServiceProtocol> _stickerService;
    ACCButton *_playPauseButton;
    id /* block */ _playerTimeCallback;
    id /* block */ _playerPauseCallback;
    id /* block */ _playerPlayCallback;
    id /* block */ _resetEditPagePlayerViewAndMusic;
    id /* block */ _updateVideoDataCallback;
    ACCCutSamePlayerControlView *_controlView;
    ACCStickerContainerView *_stickerContainerView;
    double _containerScale;
    struct CGPoint { double x; double y; } _containerCenter;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _playerPauseTime;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _originalPlayerRect;
}

@property (retain, nonatomic) ACCCutSamePlayerControlView *controlView;
@property (nonatomic) BOOL pauseByGesture;
@property (nonatomic) BOOL playerNeedReload;
@property (nonatomic) BOOL hasEnteredBackground;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } playerPauseTime;
@property (weak, nonatomic) ACCStickerContainerView *stickerContainerView;
@property (nonatomic) double containerScale;
@property (nonatomic) struct CGPoint { double x; double y; } containerCenter;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } originalPlayerRect;
@property (weak, nonatomic) UIView *view;
@property (weak, nonatomic) AWESelectTemplateViewModel *viewModel;
@property (weak, nonatomic) AWESelectTemplateViewProvider *viewProvider;
@property (retain, nonatomic) UIView *playerCanvas;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) id<ACCStickerServiceProtocol> stickerService;
@property (weak, nonatomic) ACCButton *playPauseButton;
@property (copy, nonatomic) id /* block */ playerTimeCallback;
@property (copy, nonatomic) id /* block */ playerPauseCallback;
@property (copy, nonatomic) id /* block */ playerPlayCallback;
@property (copy, nonatomic) id /* block */ resetEditPagePlayerViewAndMusic;
@property (copy, nonatomic) id /* block */ updateVideoDataCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)playStatusChanged:(long long)arg0;
- (void)resetEditSessionWithPublishModel:(id)arg0;
- (id)editService;
- (void)setEditService:(id)arg0;
- (id)stickerContainerView;
- (void)setStickerContainerView:(id)arg0;
- (void)playerDidPlay;
- (void)setStickerService:(id)arg0;
- (id)stickerService;
- (void)playerCurrentPlayTimeChanged:(double)arg0;
- (void)configScale;
- (struct CGPoint { double x0; double x1; })containerCenter;
- (void)setContainerScale:(double)arg0;
- (void)setContainerCenter:(struct CGPoint { double x0; double x1; })arg0;
- (double)containerScale;
- (id /* block */)resetEditPagePlayerViewAndMusic;
- (void)setResetEditPagePlayerViewAndMusic:(id /* block */)arg0;
- (void)updateVideoData;
- (void)setUpdateVideoDataCallback:(id /* block */)arg0;
- (void)setPlayerPlayCallback:(id /* block */)arg0;
- (void)setPlayerPauseCallback:(id /* block */)arg0;
- (void)playIfPauseByEnterBackground;
- (void)setupOriginVideoPlayer;
- (void)commitNLEModelWithCompletion:(id /* block */)arg0;
- (void)controlViewAdd;
- (void)setPlayerTimeCallback:(id /* block */)arg0;
- (void)controlViewRemove;
- (void)commitNLEModel;
- (long long)p_getSuggestedRepeatCount;
- (void)setOriginalPlayerRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)configExclusiveStickerContainers;
- (void)resetOriginVideoPlayer;
- (void)resetCutSamePlayer;
- (id /* block */)updateVideoDataCallback;
- (BOOL)pauseByGesture;
- (void)setPauseByGesture:(BOOL)arg0;
- (id /* block */)playerPauseCallback;
- (id /* block */)playerPlayCallback;
- (void)updateExclusiveStickerContainerStickerHiddenStatusWithCurrentPlayerTime:(double)arg0;
- (id /* block */)playerTimeCallback;
- (void)playerDidPause;
- (BOOL)hasEnteredBackground;
- (void)setHasEnteredBackground:(BOOL)arg0;
- (void)onPlayPauseButtonAction:(id)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })originalPlayerRect;
- (void)recoverEnterCutSameData;
- (void)setupEditPlayer:(id)arg0 stickerService:(id)arg1 stickerContainerView:(id)arg2;
- (void)setupCutSamePlayer;
- (void)setPlayerWhenAppear;
- (void)recoverEditPlayer;
- (void)pauseByGestureAction;
- (void)resetEnterCutSamePlayer;
- (id)playerCanvas;
- (void)setPlayerCanvas:(id)arg0;
- (BOOL)playerNeedReload;
- (void)setPlayerNeedReload:(BOOL)arg0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })playerPauseTime;
- (void)setPlayerPauseTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0;
- (void).cxx_destruct;
- (void)setViewProvider:(id)arg0;
- (void)setViewModel:(id)arg0;
- (void)setView:(id)arg0;
- (id)viewProvider;
- (id)viewModel;
- (id)controlView;
- (BOOL)isPlaying;
- (void)play;
- (void)pause;
- (id)view;
- (void)replay;
- (id)playPauseButton;
- (void)setControlView:(id)arg0;
- (void)setPlayPauseButton:(id)arg0;
- (void)seekToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0 completion:(id /* block */)arg1;

@end
