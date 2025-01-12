//
//     Generated by private class-dump
//

@class UIView, AWEAwemeModel, NSString, AWEFeedVideoSingleCardLayoutAdjuster, AWEModernFeedPlayerInteractionView, UIImageView, AWEFeedVideoCardQualityLayoutAdjuster, NSDictionary;
@protocol AWEPlayVideoDelegate, AWEVideoInteractiveProtocol, AWEPlayVideoViewControllerContainerProtocol, AWEPlayVideoViewControllerStatusDelegate, IESVideoPlayerProtocol, AWEPlayVideoViewControllerDelegate;

@protocol AWESearchVideoMixCardPlayerProtocol <NSObject>

@property (copy, nonatomic) id /* block */ enterMusicDetailBlock;
@property (copy, nonatomic) id /* block */ forcePlayVideoActionBlock;
@property (copy, nonatomic) id /* block */ showAdOperationBlock;
@property (copy, nonatomic) id /* block */ playButtonClickedBlock;
@property (copy, nonatomic) id /* block */ pauseButtonClickedBlock;
@property (copy, nonatomic) id /* block */ resumePlayVideoWithForcePauseBlock;
@property (copy, nonatomic) id /* block */ adOperationIsHiddenBlock;
@property (copy, nonatomic) id /* block */ adOperationSuperViewBlock;
@property (copy, nonatomic) id /* block */ albumIndexUpdateBlock;
@property (copy, nonatomic) id /* block */ progressOffsetFromCenter;
@property (copy, nonatomic) id /* block */ enterFeedAndShowFullTextBlock;
@property (copy, nonatomic) id /* block */ mixVideoBarWillEnterDetailBlock;
@property (nonatomic) BOOL hiddingControlViews;
@property (retain, nonatomic) id<AWEVideoInteractiveProtocol> interactiveContainer;
@property (retain, nonatomic) AWEFeedVideoSingleCardLayoutAdjuster *layoutAdjuster;
@property (nonatomic) BOOL isNewAlbumStyle;
@property (readonly, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) AWEFeedVideoCardQualityLayoutAdjuster *qualityLayoutAdjuster;
@property (retain, nonatomic) AWEAwemeModel *repostItem;
@property (retain, nonatomic) AWEAwemeModel *fromAweme;
@property (nonatomic) BOOL isActive;
@property (nonatomic) unsigned long long playerActivationType;
@property (nonatomic) unsigned long long currentSection;
@property (nonatomic) unsigned long long pauseType;
@property (nonatomic) unsigned long long displayState;
@property (retain, nonatomic) AWEModernFeedPlayerInteractionView *interactionView;
@property (nonatomic) long long playState;
@property (retain, nonatomic) id<IESVideoPlayerProtocol> playerController;
@property (retain, nonatomic) NSDictionary *logExtraDict;
@property (readonly, nonatomic) UIView *view;
@property (copy, nonatomic) NSString *pageType;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (weak, nonatomic) id<AWEPlayVideoDelegate> playerDelegate;
@property (nonatomic) unsigned long long displayType;
@property (nonatomic) BOOL pauseBySingleClick;
@property (retain, nonatomic) NSString *referString;
@property (nonatomic) double defaultSeekToTime;
@property (readonly, nonatomic) long long loopTimes;
@property (readonly, nonatomic) double currentPlaybackTime;
@property (nonatomic) BOOL isLightLandingWebShowing;
@property (nonatomic) BOOL isFullScreen;
@property (copy, nonatomic) id /* block */ playerFinishedPlayingBlock;
@property (weak, nonatomic) id<AWEPlayVideoViewControllerDelegate> delegate;
@property (weak, nonatomic) id<AWEPlayVideoViewControllerContainerProtocol> container;
@property (weak, nonatomic) id<AWEPlayVideoViewControllerStatusDelegate> statusDelegate;
@property (nonatomic) BOOL needsRespondingToVideoResourceRecall;
@property (copy, nonatomic) id /* block */ playerStatusChanged;
@property (nonatomic) double lastPlayDuration;
@property (copy, nonatomic) id /* block */ playerDidUpdatedBlock;

- (id)referString;
- (void)setReferString:(id)arg0;
- (void)setLogExtraDict:(id)arg0;
- (id)logExtraDict;
- (void)setPlayerDelegate:(id)arg0;
- (id)playerDelegate;
- (long long)loopTimes;
- (double)defaultSeekToTime;
- (void)setDefaultSeekToTime:(double)arg0;
- (BOOL)pauseBySingleClick;
- (void)setPauseBySingleClick:(BOOL)arg0;
- (id)repostItem;
- (void)setRepostItem:(id)arg0;
- (id /* block */)playerFinishedPlayingBlock;
- (void)setPlayerFinishedPlayingBlock:(id /* block */)arg0;
- (BOOL)needsRespondingToVideoResourceRecall;
- (void)setNeedsRespondingToVideoResourceRecall:(BOOL)arg0;
- (id)interactiveContainer;
- (void)setInteractiveContainer:(id)arg0;
- (id)coverImageView;
- (void)setFromAweme:(id)arg0;
- (id /* block */)playerStatusChanged;
- (void)setLastPlayDuration:(double)arg0;
- (unsigned long long)pauseType;
- (id /* block */)resumePlayVideoWithForcePauseBlock;
- (id /* block */)forcePlayVideoActionBlock;
- (void)setPauseType:(unsigned long long)arg0;
- (unsigned long long)playerActivationType;
- (double)lastPlayDuration;
- (void)setPlayerActivationType:(unsigned long long)arg0;
- (void)setForcePlayVideoActionBlock:(id /* block */)arg0;
- (void)setResumePlayVideoWithForcePauseBlock:(id /* block */)arg0;
- (void)setPlayerStatusChanged:(id /* block */)arg0;
- (id)fromAweme;
- (id)qualityLayoutAdjuster;
- (void)setQualityLayoutAdjuster:(id)arg0;
- (id)layoutAdjuster;
- (void)setLayoutAdjuster:(id)arg0;
- (BOOL)isNewAlbumStyle;
- (void)setIsNewAlbumStyle:(BOOL)arg0;
- (BOOL)hiddingControlViews;
- (void)setIsLightLandingWebShowing:(BOOL)arg0;
- (void)setPlayerDidUpdatedBlock:(id /* block */)arg0;
- (void)setEnterMusicDetailBlock:(id /* block */)arg0;
- (void)setShowAdOperationBlock:(id /* block */)arg0;
- (void)setPlayButtonClickedBlock:(id /* block */)arg0;
- (void)setPauseButtonClickedBlock:(id /* block */)arg0;
- (void)setAdOperationIsHiddenBlock:(id /* block */)arg0;
- (void)setAdOperationSuperViewBlock:(id /* block */)arg0;
- (void)setAlbumIndexUpdateBlock:(id /* block */)arg0;
- (void)setProgressOffsetFromCenter:(id /* block */)arg0;
- (void)setEnterFeedAndShowFullTextBlock:(id /* block */)arg0;
- (void)setMixVideoBarWillEnterDetailBlock:(id /* block */)arg0;
- (id /* block */)enterMusicDetailBlock;
- (id /* block */)mixVideoBarWillEnterDetailBlock;
- (id /* block */)playButtonClickedBlock;
- (id /* block */)pauseButtonClickedBlock;
- (id /* block */)showAdOperationBlock;
- (id /* block */)albumIndexUpdateBlock;
- (id /* block */)progressOffsetFromCenter;
- (id /* block */)adOperationIsHiddenBlock;
- (BOOL)isLightLandingWebShowing;
- (id /* block */)enterFeedAndShowFullTextBlock;
- (id /* block */)adOperationSuperViewBlock;
- (void)setHiddingControlViews:(BOOL)arg0;
- (id /* block */)playerDidUpdatedBlock;
- (id)pageType;
- (id)container;
- (void)setModel:(id)arg0;
- (void)setDisplayState:(unsigned long long)arg0;
- (double)currentPlaybackTime;
- (BOOL)isFullScreen;
- (unsigned long long)displayType;
- (void)setIsActive:(BOOL)arg0;
- (void)setDisplayType:(unsigned long long)arg0;
- (void)setInteractionView:(id)arg0;
- (id)model;
- (id)playerController;
- (void)setContainer:(id)arg0;
- (void)setPlayerController:(id)arg0;
- (id)delegate;
- (BOOL)isActive;
- (id)statusDelegate;
- (void)setPageType:(id)arg0;
- (unsigned long long)displayState;
- (void)setStatusDelegate:(id)arg0;
- (id)interactionView;
- (void)setDelegate:(id)arg0;
- (id)view;
- (void)setIsFullScreen:(BOOL)arg0;
- (long long)playState;
- (void)setPlayState:(long long)arg0;
- (unsigned long long)currentSection;
- (void)setCurrentSection:(unsigned long long)arg0;

@optional

- (void)pauseWithAnimation;
- (void)playWithAnimation;
- (BOOL)shouldUseTTPlayerForXiGuaVideo;
- (void)updatePlayerIfNeeded;
- (void)setPlayerSeekTime:(double)arg0 completion:(id /* block */)arg1;
- (void)playMusicAnimations;
- (void)updateCoverImage;
- (void)startMagnifyTransition;
- (void)endShrinkTransition;
- (BOOL)delayInteraction;
- (BOOL)shouldSetMask;
- (void)updatePlayTime:(double)arg0 canPlayTime:(double)arg1 totalTime:(double)arg2;
- (void)resetForTransition;
- (void)checkPlayStatus;
- (void)updatePlayProgressWithTime:(double)arg0 totalDuration:(double)arg1 model:(id)arg2;
- (void)updateProgressWithTimeStamp:(id)arg0 selectedIndex:(long long)arg1;
- (BOOL)needHideProgressBar:(id)arg0;
- (BOOL)isLandscapeVideo;
- (void)forcePauseByNoWiFi;
- (id)getImageSliderView;
- (void)awe_viewDidLoad;
- (void)awe_viewWillAppear:(BOOL)arg0;
- (void)awe_viewWillDisappear:(BOOL)arg0;
- (void)trackAdPlayValidAndBreakIfNeeded;
- (void)awe_viewDidLayoutSubviews;
- (void)hideControlViews:(BOOL)arg0;
- (void)seuptPlaybackRate:(double)arg0;
- (BOOL)shouldShowAdOperationView;
- (void)closeAdOperationGuideView:(unsigned long long)arg0;
- (BOOL)adOperationViewDidShown;
- (long long)currentImageSliderViewIndex;
- (id)transitionContext;
- (BOOL)play;
- (BOOL)pause;
- (void)reset;

@end
