//
//     Generated by private class-dump
//

@class NSURL, UIImageView, AWEPaymentVideoMaskView, AWEFeedVideoCardQualityLayoutAdjuster, MediaDecrypter, NSDictionary, UIView, NSString, AWEPaymentVideoTagView, AWEAwemeModel, AWEFeedVideoSingleCardLayoutAdjuster, AWEModernFeedPlayerInteractionView, UIImage;
@protocol AWEPlayInteractionViewControllerNewProtocol, AWEPlayVideoDelegate, AWEAwemeBizPlayVideoProtocol, AWEPlayVideoViewControllerStatusDelegate, AWEAwemePlayInteractionUpdateDelegate, AWEAwemePlayInteractionCommerceDelegate, AWEPlayInteractionBizControllerProtocol, AWEAwemePlayInteractionPlayDelegate, AWEVideoInteractiveProtocol, AWEPlayVideoViewControllerContainerProtocol, IESVideoPlayerProtocol, AWEAwemePlayVideoTrackProtocol, AFDSlidesViewProtocol, AWEPlayVideoViewControllerDelegate, AWEAwemePlayInteractionPanelDelegate;

@interface AWEModernFeedPlayVideoViewController : AWEPlayVideoExtraAbilityViewController <AWEAwemePlayInteractionPlayDelegate, AWEVideoInteractiveDelegate, AWEVideoInteractiveDataSource, AWESearchAdAppointmentResultMessage, AWEPlayVideoDelegate, AWECommentSearchMusicMessage, AFDSlidesViewActionDelegate, AWEAwemePlayVideoInteractionProtocol, AWESearchVideoMixCardPlayerProtocol> {
    BOOL _isActive;
    BOOL _forceUpdatePlayer;
    BOOL _shouldHideMusicComponents;
    BOOL _shouldHidePauseComponent;
    BOOL _hiddingControlViews;
    BOOL _isLightLandingWebShowing;
    BOOL _isNewAlbumStyle;
    BOOL _hasEnteredFullScreen;
    BOOL _isReadyForDisplay;
    BOOL _isValid;
    BOOL _loadingSign;
    BOOL _musicInfoIsAnimating;
    BOOL _musicInfoIsPaused;
    BOOL _shouldPreventUpdatePlayer;
    BOOL _isAutoPlay;
    BOOL _sectionViewIsTriggerd;
    BOOL _isStopUI;
    BOOL _adMaskViewHasAlreadyShown;
    BOOL _shouldTrackAdReplayForOperationView;
    BOOL _isHeadphonesOn;
    unsigned long long _displayState;
    unsigned long long _pauseType;
    unsigned long long _playerActivationType;
    unsigned long long _displayType;
    AWEAwemeModel *_repostItem;
    AWEAwemeModel *_fromAweme;
    NSURL *_localPlayURL;
    UIImage *_localCoverImage;
    AWEFeedVideoSingleCardLayoutAdjuster *_layoutAdjuster;
    AWEFeedVideoCardQualityLayoutAdjuster *_qualityLayoutAdjuster;
    AWEModernFeedPlayerInteractionView *_interactionView;
    id<AWEVideoInteractiveProtocol> _interactiveContainer;
    unsigned long long _currentSection;
    id /* block */ _playButtonClickedBlock;
    id /* block */ _pauseButtonClickedBlock;
    id /* block */ _enterMusicDetailBlock;
    id /* block */ _forcePlayVideoActionBlock;
    id /* block */ _resumePlayVideoWithForcePauseBlock;
    id /* block */ _showAdOperationBlock;
    id /* block */ _adOperationIsHiddenBlock;
    id /* block */ _progressOffsetFromCenter;
    id /* block */ _adOperationSuperViewBlock;
    id /* block */ _albumIndexUpdateBlock;
    id /* block */ _mixVideoBarWillEnterDetailBlock;
    id /* block */ _enterFeedAndShowFullTextBlock;
    id /* block */ _playerStatusChanged;
    id /* block */ _trackVideoPause;
    UIImageView *_coverImageView;
    double _lastPlayDuration;
    id /* block */ _playerDidUpdatedBlock;
    AWEPaymentVideoMaskView *_paymentVideoMask;
    AWEPaymentVideoTagView *_paymentVideoTag;
    MediaDecrypter *_decrypter;
    unsigned long long _previsousSection;
    UIView<AFDSlidesViewProtocol> *_imageSliderView;
}

@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) AWEPaymentVideoMaskView *paymentVideoMask;
@property (retain, nonatomic) AWEPaymentVideoTagView *paymentVideoTag;
@property (retain, nonatomic) MediaDecrypter *decrypter;
@property (nonatomic) BOOL hasEnteredFullScreen;
@property (nonatomic) BOOL isReadyForDisplay;
@property (nonatomic) BOOL isValid;
@property (nonatomic) BOOL loadingSign;
@property (nonatomic) BOOL musicInfoIsAnimating;
@property (nonatomic) BOOL musicInfoIsPaused;
@property (nonatomic) BOOL shouldPreventUpdatePlayer;
@property (nonatomic) BOOL isAutoPlay;
@property (nonatomic) unsigned long long previsousSection;
@property (nonatomic) BOOL sectionViewIsTriggerd;
@property (nonatomic) BOOL isStopUI;
@property (nonatomic) BOOL adMaskViewHasAlreadyShown;
@property (nonatomic) BOOL shouldTrackAdReplayForOperationView;
@property (nonatomic) BOOL isHeadphonesOn;
@property (retain, nonatomic) UIView<AFDSlidesViewProtocol> *imageSliderView;
@property (nonatomic) unsigned long long displayState;
@property (nonatomic) BOOL isActive;
@property (nonatomic) unsigned long long pauseType;
@property (nonatomic) unsigned long long playerActivationType;
@property (nonatomic) unsigned long long displayType;
@property (retain, nonatomic) AWEAwemeModel *repostItem;
@property (retain, nonatomic) AWEAwemeModel *fromAweme;
@property (nonatomic) BOOL forceUpdatePlayer;
@property (weak, nonatomic) NSURL *localPlayURL;
@property (weak, nonatomic) UIImage *localCoverImage;
@property (retain, nonatomic) AWEFeedVideoSingleCardLayoutAdjuster *layoutAdjuster;
@property (retain, nonatomic) AWEFeedVideoCardQualityLayoutAdjuster *qualityLayoutAdjuster;
@property (retain, nonatomic) AWEModernFeedPlayerInteractionView *interactionView;
@property (retain, nonatomic) id<AWEVideoInteractiveProtocol> interactiveContainer;
@property (nonatomic) unsigned long long currentSection;
@property (copy, nonatomic) id /* block */ playButtonClickedBlock;
@property (copy, nonatomic) id /* block */ pauseButtonClickedBlock;
@property (copy, nonatomic) id /* block */ enterMusicDetailBlock;
@property (copy, nonatomic) id /* block */ forcePlayVideoActionBlock;
@property (copy, nonatomic) id /* block */ resumePlayVideoWithForcePauseBlock;
@property (copy, nonatomic) id /* block */ showAdOperationBlock;
@property (copy, nonatomic) id /* block */ adOperationIsHiddenBlock;
@property (copy, nonatomic) id /* block */ progressOffsetFromCenter;
@property (copy, nonatomic) id /* block */ adOperationSuperViewBlock;
@property (copy, nonatomic) id /* block */ albumIndexUpdateBlock;
@property (copy, nonatomic) id /* block */ mixVideoBarWillEnterDetailBlock;
@property (copy, nonatomic) id /* block */ enterFeedAndShowFullTextBlock;
@property (copy, nonatomic) id /* block */ playerStatusChanged;
@property (copy, nonatomic) id /* block */ trackVideoPause;
@property (nonatomic) BOOL shouldHideMusicComponents;
@property (nonatomic) BOOL shouldHidePauseComponent;
@property (nonatomic) double lastPlayDuration;
@property (nonatomic) BOOL hiddingControlViews;
@property (nonatomic) BOOL isLightLandingWebShowing;
@property (nonatomic) BOOL isNewAlbumStyle;
@property (copy, nonatomic) id /* block */ playerDidUpdatedBlock;
@property (retain, nonatomic) UIView *view;
@property (nonatomic) BOOL hideMusicInfo;
@property (nonatomic) long long mediaType;
@property (nonatomic) unsigned long long interactionType;
@property (nonatomic) BOOL showGoodsElement;
@property (nonatomic) BOOL showGoodsCardAnchorElement;
@property (nonatomic) BOOL showFollowStatus;
@property (nonatomic) BOOL pureMode;
@property (nonatomic) BOOL isHotSearchStatus;
@property (nonatomic) BOOL isBottomHotBarShowing;
@property (nonatomic) BOOL shouldShowSearchVideoFeedMaskView;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSDictionary *logExtraDict;
@property (copy, nonatomic) NSDictionary *trackContext;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *shareTokenHandlerID;
@property (copy, nonatomic) NSString *cityInfoString;
@property (copy, nonatomic) NSString *adEventName;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) AWEAwemeModel *fromModel;
@property (weak, nonatomic) id<AWEAwemeBizPlayVideoProtocol, AWEAwemePlayVideoTrackProtocol> videoDelegate;
@property (nonatomic) double controlOffset;
@property (nonatomic) BOOL isFromRecommendBigCard;
@property (copy, nonatomic) id /* block */ pureModeBlock;
@property (weak, nonatomic) UIView *playerView;
@property (nonatomic) BOOL needsSetPureMode;
@property (nonatomic) BOOL shouldPrepareForDisplay;
@property (nonatomic) BOOL canShowAttachMaterial;
@property (nonatomic) BOOL isSlidingPorgressSlider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UIView *contentView;
@property (weak, nonatomic) id<AWEAwemePlayInteractionPlayDelegate, AWEAwemePlayInteractionPanelDelegate, AWEAwemePlayInteractionCommerceDelegate, AWEAwemePlayInteractionUpdateDelegate, AWEPlayInteractionBizControllerProtocol> interactionDelegate;
@property (weak, nonatomic) id<AWEPlayInteractionViewControllerNewProtocol> interactionNewDelegate;
@property (nonatomic) long long playState;
@property (retain, nonatomic) id<IESVideoPlayerProtocol> playerController;
@property (copy, nonatomic) NSString *pageType;
@property (weak, nonatomic) id<AWEPlayVideoDelegate> playerDelegate;
@property (nonatomic) BOOL pauseBySingleClick;
@property (nonatomic) double defaultSeekToTime;
@property (readonly, nonatomic) long long loopTimes;
@property (readonly, nonatomic) double currentPlaybackTime;
@property (nonatomic) BOOL isFullScreen;
@property (copy, nonatomic) id /* block */ playerFinishedPlayingBlock;
@property (weak, nonatomic) id<AWEPlayVideoViewControllerDelegate> delegate;
@property (weak, nonatomic) id<AWEPlayVideoViewControllerContainerProtocol> container;
@property (weak, nonatomic) id<AWEPlayVideoViewControllerStatusDelegate> statusDelegate;
@property (nonatomic) BOOL needsRespondingToVideoResourceRecall;

+ (BOOL)enableMixVideo:(id)arg0;

- (void)pauseWithAnimation;
- (void)playWithAnimation;
- (void)player:(id)arg0 playbackFailedWithError:(id)arg1;
- (void)playerDidReadyForDisplay:(id)arg0;
- (void)player:(id)arg0 didChangePlaybackStateWithAction:(long long)arg1;
- (void)playerWillLoopPlaying:(id)arg0;
- (void)player:(id)arg0 didChangeStallState:(long long)arg1 actionType:(long long)arg2 reason:(unsigned long long)arg3;
- (BOOL)shouldUseTTPlayerForXiGuaVideo;
- (id)currentDotFromCenter;
- (void)updatePlayerIfNeeded;
- (void)activatePlayAnimation;
- (void)updatePlayerController:(id)arg0 withPlayVideoVC:(id)arg1;
- (void)activatePauseAnimation;
- (id)internalLogExtraDict;
- (void)videoInteractiveViewWillShowBubbleView;
- (void)videoInteractiveViewTapWithStickerShow;
- (void)resumePlaying;
- (BOOL)videoInteractiveViewTapInCenter;
- (long long)videoScaleType;
- (void)videoController:(id)arg0 playerPlayTime:(double)arg1 canPlayTime:(double)arg2 totalTime:(double)arg3;
- (double)currentPlayTimeForMusicBeats;
- (void)progressDidUpdateWithIndex:(long long)arg0 progress:(double)arg1 duration:(double)arg2 animated:(BOOL)arg3;
- (void)progressDidUpdateWithIndex:(long long)arg0 progress:(double)arg1 duration:(double)arg2 currentDotFromCenter:(id)arg3 needScrollAnimation:(BOOL)arg4 animated:(BOOL)arg5;
- (BOOL)isHeadphonesOn;
- (void)playLoadingAnimation;
- (void)playMusicAnimations;
- (void)stopMusicAnimations;
- (void)awemePlayInteractionPause:(BOOL)arg0;
- (void)updateCoverImage;
- (id)repostItem;
- (void)setRepostItem:(id)arg0;
- (BOOL)alertIfNotValid;
- (id)getRepostItemFromSubclass;
- (id)getRepostFromAwemeForTrack;
- (id)getPlayExtraFromSubclass;
- (id)localVideoURL;
- (void)updatePlayerIfNeededFromInnerPlayer;
- (id)interactiveContainer;
- (id)imageSliderView;
- (void)setImageSliderView:(id)arg0;
- (void)setInteractiveContainer:(id)arg0;
- (id)localCoverImage;
- (void)setLocalCoverImage:(id)arg0;
- (void)setCoverImageView:(id)arg0;
- (id)coverImageView;
- (void)pauseMusicAnimations;
- (void)updateMusicInfoView;
- (void)stateOfHeadphones:(id)arg0;
- (void)commentSearchMusicDidStartPlay;
- (void)handleAppointmentResultWithAdModel:(id)arg0 sceneType:(long long)arg1 appointmentStatus:(BOOL)arg2 error:(id)arg3;
- (void)switchVideoStatusByClick:(id)arg0;
- (void)showPlayingUI;
- (void)showPauseUI;
- (void)trackAdPlayForLoop;
- (void)updatePlayTime:(double)arg0 canPlayTime:(double)arg1 totalTime:(double)arg2;
- (void)doActionIfNotValid;
- (void)doActionIfNotValidWithText:(id)arg0;
- (void)handleLynxNotification:(id)arg0;
- (void)resetImageSliderView;
- (void)updateProgressSliderWithTime:(double)arg0 totalDuration:(double)arg1 model:(id)arg2;
- (void)setFromAweme:(id)arg0;
- (BOOL)isStopUI;
- (id /* block */)playerStatusChanged;
- (BOOL)shouldPreventUpdatePlayer;
- (void)setShouldPreventUpdatePlayer:(BOOL)arg0;
- (BOOL)forceUpdatePlayer;
- (void)setLastPlayDuration:(double)arg0;
- (BOOL)hasEnteredFullScreen;
- (void)setHasEnteredFullScreen:(BOOL)arg0;
- (unsigned long long)pauseType;
- (id /* block */)resumePlayVideoWithForcePauseBlock;
- (id /* block */)forcePlayVideoActionBlock;
- (void)setPauseType:(unsigned long long)arg0;
- (unsigned long long)playerActivationType;
- (id)getVideoInformation:(id)arg0;
- (void)applyStickerInfo:(id)arg0;
- (void)setIsHeadphonesOn:(BOOL)arg0;
- (void)hideAllStatus;
- (id /* block */)trackVideoPause;
- (void)setLoadingSign:(BOOL)arg0;
- (double)lastPlayDuration;
- (BOOL)loadingSign;
- (void)setPlayerActivationType:(unsigned long long)arg0;
- (void)setIsStopUI:(BOOL)arg0;
- (double)videoCurrentPlayBackTime;
- (void)checkPlayStatus;
- (void)setPlayProgressWithTime:(double)arg0 totalDuration:(double)arg1 model:(id)arg2;
- (void)updatePlayProgressWithTime:(double)arg0 totalDuration:(double)arg1 model:(id)arg2;
- (void)updateProgressWithTimeStamp:(id)arg0 selectedIndex:(long long)arg1;
- (BOOL)needHideProgressBar:(id)arg0;
- (void)setShouldHidePauseComponent:(BOOL)arg0;
- (BOOL)isLandscapeVideo;
- (void)forcePauseByNoWiFi;
- (void)setForceUpdatePlayer:(BOOL)arg0;
- (id)localPlayURL;
- (void)setLocalPlayURL:(id)arg0;
- (void)setForcePlayVideoActionBlock:(id /* block */)arg0;
- (void)setResumePlayVideoWithForcePauseBlock:(id /* block */)arg0;
- (void)setPlayerStatusChanged:(id /* block */)arg0;
- (void)setTrackVideoPause:(id /* block */)arg0;
- (BOOL)shouldHidePauseComponent;
- (BOOL)hasSectionProgressInfo;
- (void)scrollToSectionViewWithIndex:(long long)arg0 isSelected:(BOOL)arg1;
- (id)fromAweme;
- (void)screenCapturedDidChange:(id)arg0;
- (id)qualityLayoutAdjuster;
- (void)setQualityLayoutAdjuster:(id)arg0;
- (id)getImageSliderView;
- (id)layoutAdjuster;
- (void)setLayoutAdjuster:(id)arg0;
- (void)trackAdPlayValidAndBreakIfNeeded;
- (BOOL)isNewAlbumStyle;
- (void)setIsNewAlbumStyle:(BOOL)arg0;
- (void)hideControlViews:(BOOL)arg0;
- (void)seuptPlaybackRate:(double)arg0;
- (void)trackShowEventForSectionProgress;
- (long long)currentSearchAlbumStyle;
- (BOOL)hiddingControlViews;
- (BOOL)shouldShowAdOperationView;
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
- (void)closeAdOperationGuideView:(unsigned long long)arg0;
- (BOOL)adOperationViewDidShown;
- (id /* block */)enterMusicDetailBlock;
- (long long)currentImageSliderViewIndex;
- (id /* block */)mixVideoBarWillEnterDetailBlock;
- (void)clipSeekButtonClick;
- (id)paymentVideoTag;
- (id)paymentVideoMask;
- (void)musicInfoTapped:(id)arg0;
- (void)learnMoreViewTapped:(id)arg0;
- (void)setMusicInfoIsPaused:(BOOL)arg0;
- (void)setMusicInfoIsAnimating:(BOOL)arg0;
- (void)updateAdLearnMoreButton;
- (BOOL)enableNewSearchAlbumPlayer;
- (void)setShouldTrackAdReplayForOperationView:(BOOL)arg0;
- (void)setAdMaskViewHasAlreadyShown:(BOOL)arg0;
- (void)updateAdComponentsWithDisplayState:(unsigned long long)arg0;
- (id /* block */)playButtonClickedBlock;
- (id /* block */)pauseButtonClickedBlock;
- (id /* block */)showAdOperationBlock;
- (void)showAdOperationGuideView;
- (BOOL)checkIsPaidMixScreenRecording;
- (void)updatePaymentInfoForCoverImage;
- (void)updateCoverImageStatus;
- (BOOL)shouldTrackAdReplayForOperationView;
- (void)trackerTextExtractionWithEvent:(id)arg0;
- (BOOL)musicInfoIsAnimating;
- (BOOL)musicInfoIsPaused;
- (void)updateProgressSectionViewWithPlayTime:(double)arg0;
- (void)setPrevisousSection:(unsigned long long)arg0;
- (void)trackClickEventForSectionProgress:(long long)arg0;
- (id /* block */)albumIndexUpdateBlock;
- (id /* block */)progressOffsetFromCenter;
- (id /* block */)adOperationIsHiddenBlock;
- (BOOL)adMaskViewHasAlreadyShown;
- (BOOL)isLightLandingWebShowing;
- (id)getCurrentPixelPlayerImage;
- (void)textExtractionViewInvokeAction;
- (id /* block */)enterFeedAndShowFullTextBlock;
- (id /* block */)adOperationSuperViewBlock;
- (void)setHiddingControlViews:(BOOL)arg0;
- (id /* block */)playerDidUpdatedBlock;
- (id)initWithHiddingControlViews:(BOOL)arg0;
- (void)showLearnMoreView:(BOOL)arg0;
- (void)setShouldHideMusicComponents:(BOOL)arg0;
- (BOOL)checkIfNeededContinueToPlay;
- (id)musicLabelStringInGroup:(BOOL)arg0;
- (BOOL)shouldHideMusicComponents;
- (void)setPaymentVideoMask:(id)arg0;
- (void)setPaymentVideoTag:(id)arg0;
- (unsigned long long)previsousSection;
- (BOOL)sectionViewIsTriggerd;
- (void)setSectionViewIsTriggerd:(BOOL)arg0;
- (void)setModel:(id)arg0;
- (void)setDecrypter:(id)arg0;
- (void)setDisplayState:(unsigned long long)arg0;
- (BOOL)isReadyForDisplay;
- (id)transitionContext;
- (void)viewDidLayoutSubviews;
- (void)setIsValid:(BOOL)arg0;
- (unsigned long long)displayType;
- (void).cxx_destruct;
- (void)setIsActive:(BOOL)arg0;
- (void)setDisplayType:(unsigned long long)arg0;
- (id)decrypter;
- (void)setInteractionView:(id)arg0;
- (BOOL)stop;
- (long long)type;
- (void)viewWillDisappear:(BOOL)arg0;
- (BOOL)isValid;
- (void)setPlayerController:(id)arg0;
- (BOOL)isActive;
- (unsigned long long)displayState;
- (void)viewWillAppear:(BOOL)arg0;
- (id)interactionView;
- (void)dealloc;
- (BOOL)play;
- (BOOL)pause;
- (void)reset;
- (void)viewDidLoad;
- (BOOL)isVideoPlaying;
- (void)stopLoadingAnimation;
- (id)videoPlayerView;
- (void)setIsAutoPlay:(BOOL)arg0;
- (BOOL)isAutoPlay;
- (BOOL)isOriginal;
- (unsigned long long)currentSection;
- (void)setCurrentSection:(unsigned long long)arg0;
- (void)setIsReadyForDisplay:(BOOL)arg0;

@end
