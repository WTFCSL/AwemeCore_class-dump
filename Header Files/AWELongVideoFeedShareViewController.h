//
//     Generated by private class-dump
//

@class NSMutableDictionary, UILabel, DUXContentSheet, AWERVLVMetaInfoViewController, UIViewController, AWERelatedVideoPlayingAnimationView, UIView, AWERVLVEpisodesViewController, AWEListDataController, NSString, AWERelatedVideoVideoPlayerViewController, AWERVLVImageEpisodesViewController, AWEPageContext, AWEAwemeModel, NSNumber, AWERVDetailPageContext;
@protocol AWEPlayVideoDelegate, AWELandscapeVideoVCFeedShareProtocol, AWELandscapePageContextProtocol, IESVideoPlayerProtocol, AWELongVideoDataControllerProtocol, AWELongVideoViewControllerDelegate, AWELandscapeVideoViewControllerProtocol, IESVideoPlayerDelegate;

@interface AWELongVideoFeedShareViewController : UIViewController <AWERVLVSelectDelegate, AWERelatedVideoVideoPlayerViewControllerDelegate, AWELandscapeVideoViewControllerDelegate, AWEAwemePlayVideoBaseContainer, AWELongVideoFeedShareViewControllerProtocol> {
    BOOL _forceUsePlayerVideoPlayEndTracker;
    BOOL _shouldAdaptFullScreen;
    BOOL _useNormalCover;
    BOOL _shouldAdaptFullScreenThree;
    BOOL _isScrolledAutomatically;
    BOOL _isFullScreen;
    BOOL _shouldPrepareForDisplay;
    BOOL _pauseBySingleClick;
    BOOL _isLandscape;
    BOOL _isEnterFromLandscape;
    BOOL _isStop;
    BOOL _isAutoPlay;
    struct EngineAudioWrapper { void /* function */ *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void *x4; } *_audioWrapper;
    struct EngineVideoWrapper { void /* function */ *x0; void /* function */ *x1; void *x2; } *_videoWrapper;
    id<AWELongVideoViewControllerDelegate> _feedShareDelegate;
    AWEAwemeModel *_model;
    id<IESVideoPlayerProtocol> _playerController;
    id<AWEPlayVideoDelegate> _playerDelegate;
    id<IESVideoPlayerDelegate> _videoPlayerDelegate;
    long long _playState;
    long long _loopTimes;
    double _totalPlayTime;
    double _defaultSeekToTime;
    long long _coverContentMode;
    id /* block */ _playVideo;
    AWEAwemeModel *_awemeModel;
    AWEAwemeModel *_lastAwemeModel;
    AWEListDataController<AWELongVideoDataControllerProtocol> *_longVideoDataController;
    AWERelatedVideoVideoPlayerViewController *_videoPlayerViewController;
    UIViewController<AWELandscapeVideoViewControllerProtocol, AWELandscapeVideoVCFeedShareProtocol> *_landscapeVideoPlayerViewController;
    AWERVDetailPageContext *_pageContext;
    AWEPageContext<AWELandscapePageContextProtocol> *_landscapePageContext;
    AWERVLVEpisodesViewController *_episodesViewController;
    AWERVLVImageEpisodesViewController *_imageEpisodesViewController;
    AWERVLVMetaInfoViewController *_metaInfoViewController;
    DUXContentSheet *_panelSheet;
    AWERelatedVideoPlayingAnimationView *_animationView;
    UIView *_titleContainerView;
    UILabel *_albumTitleLabel;
    UILabel *_detailLabel;
    UILabel *_selectEpisodeLabel;
    UIView *_seperateLineView;
    UIViewController *_topVc;
    NSNumber *_defaultStartPlayTime;
    NSString *_enterFrom;
    NSMutableDictionary *_paramDic;
    double _landscapeStayDuration;
    NSString *_previousPage;
    struct CGSize { double width; double height; } _containerSize;
}

@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) AWEAwemeModel *lastAwemeModel;
@property (retain, nonatomic) AWEListDataController<AWELongVideoDataControllerProtocol> *longVideoDataController;
@property (retain, nonatomic) AWERelatedVideoVideoPlayerViewController *videoPlayerViewController;
@property (retain, nonatomic) UIViewController<AWELandscapeVideoViewControllerProtocol, AWELandscapeVideoVCFeedShareProtocol> *landscapeVideoPlayerViewController;
@property (retain, nonatomic) AWERVDetailPageContext *pageContext;
@property (retain, nonatomic) AWEPageContext<AWELandscapePageContextProtocol> *landscapePageContext;
@property (retain, nonatomic) AWERVLVEpisodesViewController *episodesViewController;
@property (retain, nonatomic) AWERVLVImageEpisodesViewController *imageEpisodesViewController;
@property (retain, nonatomic) AWERVLVMetaInfoViewController *metaInfoViewController;
@property (weak, nonatomic) DUXContentSheet *panelSheet;
@property (retain, nonatomic) AWERelatedVideoPlayingAnimationView *animationView;
@property (retain, nonatomic) UIView *titleContainerView;
@property (retain, nonatomic) UILabel *albumTitleLabel;
@property (retain, nonatomic) UILabel *detailLabel;
@property (retain, nonatomic) UILabel *selectEpisodeLabel;
@property (retain, nonatomic) UIView *seperateLineView;
@property (weak, nonatomic) UIViewController *topVc;
@property (retain, nonatomic) NSNumber *defaultStartPlayTime;
@property (nonatomic) BOOL isLandscape;
@property (nonatomic) BOOL isEnterFromLandscape;
@property (copy, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) NSMutableDictionary *paramDic;
@property (nonatomic) struct CGSize { double width; double height; } containerSize;
@property (nonatomic) BOOL isStop;
@property (nonatomic) double landscapeStayDuration;
@property (nonatomic) BOOL isAutoPlay;
@property (copy, nonatomic) NSString *previousPage;
@property (nonatomic) struct EngineAudioWrapper { void /* function */ *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void *x4; } *audioWrapper;
@property (nonatomic) struct EngineVideoWrapper { void /* function */ *x0; void /* function */ *x1; void *x2; } *videoWrapper;
@property (weak, nonatomic) id<AWELongVideoViewControllerDelegate> feedShareDelegate;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) id<IESVideoPlayerProtocol> playerController;
@property (weak, nonatomic) id<AWEPlayVideoDelegate> playerDelegate;
@property (weak, nonatomic) id<IESVideoPlayerDelegate> videoPlayerDelegate;
@property (nonatomic) long long playState;
@property (readonly, nonatomic) long long loopTimes;
@property (readonly, nonatomic) double currentPlaybackTime;
@property (readonly, nonatomic) double totalPlayTime;
@property (readonly, nonatomic) NSNumber *videoDuration;
@property (nonatomic) double defaultSeekToTime;
@property (nonatomic) long long coverContentMode;
@property (nonatomic) BOOL shouldAdaptFullScreen;
@property (nonatomic) BOOL useNormalCover;
@property (nonatomic) BOOL shouldAdaptFullScreenThree;
@property (nonatomic) BOOL isScrolledAutomatically;
@property (nonatomic) BOOL isFullScreen;
@property (nonatomic) BOOL shouldPrepareForDisplay;
@property (readonly, copy, nonatomic) id /* block */ playVideo;
@property (nonatomic) BOOL pauseBySingleClick;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadRTVAdapterClass;

- (id)awemeModel;
- (void)setEnterFrom:(id)arg0;
- (void)pauseWithAnimation;
- (void)playWithAnimation;
- (void)player:(id)arg0 playbackFailedWithError:(id)arg1;
- (void)player:(id)arg0 didChangePlaybackStateWithAction:(long long)arg1;
- (void)player:(id)arg0 didChangeStallState:(long long)arg1;
- (void)setAwemeModel:(id)arg0;
- (id)enterFrom;
- (BOOL)shouldPrepareForDisplay;
- (void)setShouldPrepareForDisplay:(BOOL)arg0;
- (void)setPlayerSeekTime:(double)arg0 completion:(id /* block */)arg1;
- (void)setPlayerDelegate:(id)arg0;
- (BOOL)forceUsePlayerVideoPlayEndTracker;
- (void)setForceUsePlayerVideoPlayEndTracker:(BOOL)arg0;
- (id)playerDelegate;
- (id)videoPlayerDelegate;
- (void)setVideoPlayerDelegate:(id)arg0;
- (long long)loopTimes;
- (double)totalPlayTime;
- (double)defaultSeekToTime;
- (void)setDefaultSeekToTime:(double)arg0;
- (long long)coverContentMode;
- (void)setCoverContentMode:(long long)arg0;
- (BOOL)shouldAdaptFullScreen;
- (void)setShouldAdaptFullScreen:(BOOL)arg0;
- (BOOL)useNormalCover;
- (void)setUseNormalCover:(BOOL)arg0;
- (BOOL)shouldAdaptFullScreenThree;
- (void)setShouldAdaptFullScreenThree:(BOOL)arg0;
- (BOOL)isScrolledAutomatically;
- (void)setIsScrolledAutomatically:(BOOL)arg0;
- (BOOL)pauseBySingleClick;
- (void)setPauseBySingleClick:(BOOL)arg0;
- (struct EngineAudioWrapper { void /* function */ *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void *x4; } *)audioWrapper;
- (void)setAudioWrapper:(struct EngineAudioWrapper { void /* function */ *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void *x4; } *)arg0;
- (struct EngineVideoWrapper { void /* function */ *x0; void /* function */ *x1; void *x2; } *)videoWrapper;
- (void)setVideoWrapper:(struct EngineVideoWrapper { void /* function */ *x0; void /* function */ *x1; void *x2; } *)arg0;
- (id)longVideoDataController;
- (BOOL)shouldNotifyAudioListenersWhenStartPlay;
- (BOOL)shouldPauseWhenPlayerStartPlay:(id)arg0;
- (void)clickDetailLabel;
- (BOOL)isStop;
- (void)setIsStop:(BOOL)arg0;
- (void)refreshWithAwemeModel:(id)arg0;
- (void)setLongVideoDataController:(id)arg0;
- (void)setParamDic:(id)arg0;
- (id)paramDic;
- (void)setupPageContext;
- (void)setDefaultStartPlayTime:(id)arg0;
- (id)defaultStartPlayTime;
- (void)setPanelSheet:(id)arg0;
- (id)panelSheet;
- (id)aAWEPadRTVAdapter;
- (id)lastAwemeModel;
- (void)setLastAwemeModel:(id)arg0;
- (void)setFeedShareDelegate:(id)arg0;
- (void)hideLongVideoPlayControl;
- (void)cleanScreen;
- (void)showLongVideoPlayControl;
- (void)quitLandscape;
- (void)retryButtonDidClicked:(id)arg0;
- (void)playButtonDidClicked:(id)arg0;
- (void)pauseButtonDidClicked:(id)arg0;
- (BOOL)videoNeedRepeat:(id)arg0;
- (void)playFinish:(id)arg0;
- (void)enterLandscape;
- (double)videoDefaultHeight;
- (void)backButtonDidClicked:(id)arg0 completion:(id /* block */)arg1;
- (void)landscapeVideoViewControllerRetryButtonDidClicked:(id)arg0;
- (void)landscapeVideoViewController:(id)arg0 didEnterQuietMode:(BOOL)arg1;
- (void)landscapeVideoViewController:(id)arg0 didEnterQuietModeAfterChangePlaybackStateToStop:(BOOL)arg1;
- (void)landscapeVideoViewControllerPlayButtonDidClicked:(id)arg0;
- (void)landscapeVideoViewControllerPauseButtonDidClicked:(id)arg0;
- (void)landscapeVideoViewControllerPlayFinish:(id)arg0;
- (BOOL)landscapeVideoViewControllerVideoNeedRepeat:(id)arg0;
- (void)videoDidDoubleTapped:(id)arg0;
- (void)playNextVideo:(id)arg0;
- (BOOL)hasNextVideo:(id)arg0;
- (void)refreshWithEpisodeInfo:(id)arg0 playMode:(id)arg1;
- (void)landscapeVideoViewController:(id)arg0 updatePlayTime:(double)arg1 canPlayTime:(double)arg2 totalTime:(double)arg3;
- (void)landscapeVideoViewController:(id)arg0 sliderTouchEnded:(id)arg1 bySlideScreen:(BOOL)arg2;
- (id)seperateLineView;
- (void)setSeperateLineView:(id)arg0;
- (id)paramsForTrackLongVideo;
- (void)setLandscapePageContext:(id)arg0;
- (id)landscapePageContext;
- (id)feedShareDelegate;
- (void)updateLandscapeControlViewUI;
- (id)selectEpisodeLabel;
- (id)landscapeVideoPlayerViewController;
- (BOOL)allowDisplayLandscapeBtn;
- (void)traceShowFullScreenEntrance;
- (void)updateStartPlayTime;
- (void)refreshPlayerTrackParams:(id)arg0;
- (BOOL)deviceIsOnLandscape;
- (void)getMetaInfo:(id /* block */)arg0;
- (void)updateControlViewUI;
- (void)setMetaUI;
- (void)hideExtraControlViews:(BOOL)arg0;
- (id)extraControlViews;
- (id)episodesViewController;
- (void)dismissPanelVC:(id)arg0;
- (id)metaInfoViewController;
- (id)imageEpisodesViewController;
- (void)updatePlayerResolutionForLandscape;
- (void)setLandscapeStayDuration:(double)arg0;
- (void)trackLandscapeStayTime;
- (void)setImageEpisodesViewController:(id)arg0;
- (long long)getCurrentEpisodeIndex;
- (void)showPanelWithViewController:(id)arg0;
- (void)setEpisodesViewController:(id)arg0;
- (void)trackEnterMoreLongVideoInfoPannel:(id)arg0;
- (void)setMetaInfoViewController:(id)arg0;
- (void)clickSelectEpisodeLabel;
- (BOOL)allowShowPanel;
- (void)setTopVc:(id)arg0;
- (id)topVc;
- (void)trackChangingEpisodeWithChangingModel:(id)arg0 isAutoChange:(BOOL)arg1;
- (void)getAwmeModelWithAlbumId:(id)arg0 episodeId:(id)arg1 completion:(id /* block */)arg2;
- (void)submitWatchHistory;
- (void)traceEnterFullScreen;
- (void)handleCurrentAwemeCompletePlaying;
- (BOOL)selectEpisode:(id)arg0;
- (double)landscapeStayDuration;
- (void)ioniaPlayerControlFullScreenClicked:(id)arg0;
- (void)player:(id)arg0 playNextVideo:(id)arg1 isMixVideo:(BOOL)arg2;
- (void)ioniaVideoViewController:(id)arg0 didEnterQuietMode:(BOOL)arg1;
- (void)ioniaVideoViewController:(id)arg0 sliderTouchEnded:(id)arg1 bySlideScreen:(BOOL)arg2;
- (void)ioniaVideoViewController:(id)arg0 sliderEndDuration:(double)arg1 bySlideScreen:(BOOL)arg2;
- (void)ioniaVideoViewController:(id)arg0 updatePlayTime:(double)arg1 canPlayTime:(double)arg2 totalTime:(double)arg3;
- (void)ioniaVideoViewController:(id)arg0 didChangePlaybackToAction:(long long)arg1;
- (void)ioniaVideoViewController:(id)arg0 didChangeStallState:(long long)arg1;
- (void)ioniaVideoViewController:(id)arg0 playbackFailedWithError:(id)arg1;
- (BOOL)enableDefaultContinuePlayStrategy;
- (BOOL)shouldResponseToPinchTransitionWithioniaVideoViewController:(id)arg0;
- (void)disablePlayControl;
- (void)enablePlayControl;
- (void)setLandscapeVideoPlayerViewController:(id)arg0;
- (void)setSelectEpisodeLabel:(id)arg0;
- (BOOL)isEnterFromLandscape;
- (void)setIsEnterFromLandscape:(BOOL)arg0;
- (void)prepareForDisplay;
- (void)setModel:(id)arg0;
- (void)setContainerSize:(struct CGSize { double x0; double x1; })arg0;
- (double)currentPlaybackTime;
- (id)init;
- (BOOL)isFullScreen;
- (struct CGSize { double x0; double x1; })containerSize;
- (void)viewDidLayoutSubviews;
- (void).cxx_destruct;
- (id)model;
- (id)playerController;
- (BOOL)stop;
- (void)setIsLandscape:(BOOL)arg0;
- (void)setPlayerController:(id)arg0;
- (BOOL)isLandscape;
- (BOOL)isPlaying;
- (id)videoDuration;
- (BOOL)play;
- (BOOL)pause;
- (void)reset;
- (void)viewDidLoad;
- (id)previousPage;
- (void)setPreviousPage:(id)arg0;
- (id)titleContainerView;
- (void)setupUI;
- (id)detailLabel;
- (void)updateUI;
- (void)prepareToPlay;
- (void)setDetailLabel:(id)arg0;
- (void)setTitleContainerView:(id)arg0;
- (id)animationView;
- (void)setAnimationView:(id)arg0;
- (id)pageContext;
- (void)setPageContext:(id)arg0;
- (void)setIsFullScreen:(BOOL)arg0;
- (long long)playState;
- (void)setPlayState:(long long)arg0;
- (id)albumTitleLabel;
- (void)setAlbumTitleLabel:(id)arg0;
- (void)setIsAutoPlay:(BOOL)arg0;
- (BOOL)isAutoPlay;
- (void)willDisplay;
- (id /* block */)playVideo;
- (id)videoPlayerViewController;
- (void)setVideoPlayerViewController:(id)arg0;

@end
