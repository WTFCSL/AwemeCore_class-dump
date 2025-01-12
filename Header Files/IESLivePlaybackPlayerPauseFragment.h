//
//     Generated by private class-dump
//

@class HTSEventContext, IESLivePlaybackPauseAnimButton, IESLivePlaybackComponentContext, UIView, NSString;

@interface IESLivePlaybackPlayerPauseFragment : IESLivePlaybackComponent <IESLivePlaybackPlayerPauseRouter, IESVSVideoPlayAction, IESLivePlaybackCommentAction, IESLivePlaybackSeekAction, IESLiveAirPlayAction, IESLivePlaybackRoomAction, IESLivePlaybackShareRouter, IESLivePlaybackChangeStreamAction> {
    BOOL _isStartPlay;
    BOOL _receiveRemoteData;
    BOOL _isLandscape;
    BOOL _hadAddPauseBtn;
    BOOL _isPauseByUserClick;
    BOOL _hadReportShowInPortrait;
    BOOL _hadReportShowInLandscape;
    BOOL _willShowSharePanel;
    IESLivePlaybackComponentContext *_context;
    HTSEventContext *_eventContext;
    UIView *_pauseContainer;
    IESLivePlaybackPauseAnimButton *_pauseButton;
    long long _orientation;
}

@property (retain, nonatomic) IESLivePlaybackComponentContext *context;
@property (retain, nonatomic) HTSEventContext *eventContext;
@property (nonatomic) BOOL isStartPlay;
@property (retain, nonatomic) UIView *pauseContainer;
@property (retain, nonatomic) IESLivePlaybackPauseAnimButton *pauseButton;
@property (nonatomic) BOOL receiveRemoteData;
@property (nonatomic) BOOL isLandscape;
@property (nonatomic) BOOL hadAddPauseBtn;
@property (nonatomic) BOOL isPauseByUserClick;
@property (nonatomic) BOOL hadReportShowInPortrait;
@property (nonatomic) BOOL hadReportShowInLandscape;
@property (nonatomic) BOOL willShowSharePanel;
@property (nonatomic) long long orientation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isPauseByUser;
- (void)setEventContext:(id)arg0;
- (BOOL)isPause;
- (void)componentDidMount;
- (void)componentDidAppear;
- (void)componentDidDisappear;
- (void)componentBindService;
- (void)componentOrientationChanged:(long long)arg0;
- (void)sharePanelWillShow;
- (void)sharePanelDidDismiss;
- (void)airplayStateDidChange:(BOOL)arg0;
- (void)onAirplayStart;
- (void)onAirplayProgressUpdate:(double)arg0 duration:(double)arg1;
- (void)onAirplayPlay;
- (void)onAirplayPause;
- (void)onSeekEnd;
- (void)onSeekShow;
- (void)didUpdatePlaybackEpisode:(id)arg0;
- (void)p_updatePortraitStream:(BOOL)arg0;
- (void)commentDidStart;
- (void)commentDidEnd;
- (void)streamChangedWithEpisode:(id)arg0;
- (void)onVideoRenderStart;
- (void)onVideoProgressUpdate:(double)arg0 duration:(double)arg1;
- (void)onVideoPlay;
- (void)onVideoPause;
- (void)setPauseContainer:(id)arg0;
- (id)pauseContainer;
- (void)clickActionButton:(id)arg0;
- (BOOL)isStartPlay;
- (void)updateButtonStateIsPlaying:(BOOL)arg0 isPortrait:(BOOL)arg1;
- (void)trackPauseIconShow;
- (void)setReceiveRemoteData:(BOOL)arg0;
- (void)trackPauseIconClick;
- (void)setIsPauseByUserClick:(BOOL)arg0;
- (void)setIsStartPlay:(BOOL)arg0;
- (BOOL)isPauseByUserClick;
- (BOOL)receiveRemoteData;
- (BOOL)hadReportShowInPortrait;
- (BOOL)hadReportShowInLandscape;
- (void)setHadReportShowInPortrait:(BOOL)arg0;
- (void)setHadReportShowInLandscape:(BOOL)arg0;
- (BOOL)hadAddPauseBtn;
- (void)setHadAddPauseBtn:(BOOL)arg0;
- (void)vsPlayBackTrackEvent:(id)arg0 extraParams:(id)arg1;
- (void)playByPipButtonClick;
- (void)pauseByPipButtonClick;
- (void)hiddenPlayerPause:(BOOL)arg0;
- (void)handlePauseButtonContainerForIsLandscape:(BOOL)arg0;
- (BOOL)willShowSharePanel;
- (void)byteCastClickAction;
- (void)videoClickAction;
- (void)setWillShowSharePanel:(BOOL)arg0;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (void)setIsLandscape:(BOOL)arg0;
- (long long)orientation;
- (void)setup;
- (id)context;
- (void)setOrientation:(long long)arg0;
- (id)eventContext;
- (BOOL)isLandscape;
- (id)pauseButton;
- (void)setPauseButton:(id)arg0;

@end
