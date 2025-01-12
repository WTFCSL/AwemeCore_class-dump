//
//     Generated by private class-dump
//

@class IESSoloKTVTuningView, IESLiveGradientView, NSString, IESSoloKTVScrollLyricView, IESLiveSoloKTVVideoContainerV2, IESLiveSoloKTVStartButton, IESSoloKTVSkipView, IESLiveSoloKTVRecordControlBar, IESLiveSoloKTVLoadingUtil, IESLiveSoloKTVPieceTitleView, IESLiveSoloKTVRecordModelV2, IESSoloKTVMidiView;

@interface IESLiveSoloKTVRecordControllerV2 : UIViewController <IESLiveSoloKTVRecordControlDelegate> {
    BOOL _lastPlaying;
    BOOL _isFromViewWillDisappear;
    BOOL _isFromSingPiece;
    BOOL _isShowRestartAlert;
    IESLiveSoloKTVPieceTitleView *_titleView;
    IESLiveSoloKTVVideoContainerV2 *_playerView;
    IESSoloKTVScrollLyricView *_lyricView;
    IESSoloKTVMidiView *_midiView;
    IESLiveSoloKTVStartButton *_startBtn;
    IESLiveSoloKTVRecordControlBar *_controlBar;
    IESSoloKTVTuningView *_tuningView;
    IESLiveSoloKTVLoadingUtil *_loadingUtil;
    IESSoloKTVSkipView *_skipView;
    IESLiveGradientView *_maskView;
    IESLiveSoloKTVRecordModelV2 *_model;
    double _completionTS;
}

@property (retain, nonatomic) IESLiveSoloKTVPieceTitleView *titleView;
@property (retain, nonatomic) IESLiveSoloKTVVideoContainerV2 *playerView;
@property (retain, nonatomic) IESSoloKTVScrollLyricView *lyricView;
@property (retain, nonatomic) IESSoloKTVMidiView *midiView;
@property (retain, nonatomic) IESLiveSoloKTVStartButton *startBtn;
@property (retain, nonatomic) IESLiveSoloKTVRecordControlBar *controlBar;
@property (retain, nonatomic) IESSoloKTVTuningView *tuningView;
@property (retain, nonatomic) IESLiveSoloKTVLoadingUtil *loadingUtil;
@property (retain, nonatomic) IESSoloKTVSkipView *skipView;
@property (retain, nonatomic) IESLiveGradientView *maskView;
@property (retain, nonatomic) IESLiveSoloKTVRecordModelV2 *model;
@property (nonatomic) BOOL lastPlaying;
@property (nonatomic) BOOL isFromViewWillDisappear;
@property (nonatomic) BOOL isFromSingPiece;
@property (nonatomic) double completionTS;
@property (nonatomic) BOOL isShowRestartAlert;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)lyricView;
- (id)startBtn;
- (void)setStartBtn:(id)arg0;
- (void)initView;
- (id)tuningView;
- (void)setTuningView:(id)arg0;
- (void)setControlBar:(id)arg0;
- (id)midiView;
- (void)setMidiView:(id)arg0;
- (BOOL)isFromViewWillDisappear;
- (void)setIsFromViewWillDisappear:(BOOL)arg0;
- (void)trackEditPanel:(BOOL)arg0;
- (id)initWithRecordModel:(id)arg0;
- (void)releaseByteAudio;
- (void)trackAlertContrimWithType:(id)arg0 sureType:(id)arg1;
- (id)loadingUtil;
- (void)setLoadingUtil:(id)arg0;
- (BOOL)recordControlOriginalState;
- (void)recordControlOpenTuningPanel;
- (void)recordControlPlayPause;
- (void)recordControlRestartWithConfirmBlock:(id /* block */)arg0;
- (void)recordControlComplete;
- (void)recordControlCountDownFire;
- (void)setIsFromSingPiece:(BOOL)arg0;
- (void)openEditVC;
- (void)pauseRecordFromResign:(BOOL)arg0 completion:(id /* block */)arg1;
- (void)playingTimeChanged:(double)arg0 isDelaying:(BOOL)arg1;
- (BOOL)isFromSingPiece;
- (void)resumeRecordWithDelay:(double)arg0 fromResign:(BOOL)arg1 needTrack:(BOOL)arg2;
- (BOOL)isPrepareView;
- (void)trackRecordPageShow:(id)arg0;
- (void)showQuitConfirmAlert;
- (void)requestAllData;
- (void)openEarReturnIfNeed;
- (void)audioRouteChanged:(id)arg0;
- (BOOL)lastPlaying;
- (void)updateStartBtnProgress:(float)arg0;
- (void)dispatchDownloadType:(long long)arg0 error:(id)arg1;
- (void)allCompletion;
- (void)trackOrderSongResultShowWithResult:(BOOL)arg0 failReason:(id)arg1;
- (void)initLyricViewWithHeight:(double)arg0;
- (void)initMidiViewIfNeed;
- (void)initMidiFps;
- (void)clickStartBtn:(BOOL)arg0;
- (void)initSingPieceIfNeed;
- (void)initControlBar;
- (void)showPopoverHintIfNeeded;
- (void)setLastPlaying:(BOOL)arg0;
- (void)trackRecordPageButtonClickWithType:(id)arg0;
- (void)showRestartAlert:(id /* block */)arg0;
- (BOOL)isShowRestartAlert;
- (double)completionTS;
- (void)setCompletionTS:(double)arg0;
- (void)trackPreparePageButtonClickWithType:(id)arg0 autoBegin:(int)arg1;
- (void)setIsShowRestartAlert:(BOOL)arg0;
- (void)trackRecordPageEnd:(id)arg0;
- (id)soloKTVRecordParams;
- (void)onSingPieceResult:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg0 startTime:(double)arg1 endTime:(double)arg2;
- (void)hideSkipView;
- (void)setSkipView:(id)arg0;
- (id)skipView;
- (void)trackSkipPreludeClick;
- (void)showSkipViewIfNeed;
- (void)trackRecordPagePlay;
- (void)trackReturnClick:(id)arg0;
- (void)openSingPieceVC;
- (void)trackAudioEffectClick:(id)arg0;
- (id)soloKTVRecordParamsAppendExtras:(id)arg0;
- (id)clipInfoParams;
- (void)setLyricView:(id)arg0;
- (void)setModel:(id)arg0;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (id)model;
- (void)viewWillDisappear:(BOOL)arg0;
- (id)maskView;
- (long long)preferredStatusBarStyle;
- (void)setTitleView:(id)arg0;
- (void)didBecomeActive:(id)arg0;
- (void)willResignActive:(id)arg0;
- (id)playerView;
- (void)dealloc;
- (void)setPlayerView:(id)arg0;
- (void)viewDidLoad;
- (void)addObserver;
- (void)setMaskView:(id)arg0;
- (id)titleView;
- (id)controlBar;
- (void)initData;

@end
