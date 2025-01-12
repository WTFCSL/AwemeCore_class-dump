//
//     Generated by private class-dump
//

@class NSDictionary, CSJVideoTopMask, CSJAdSlot, CSJFullScreenInterstitialAdView, CSJDislikeContext, UILabel, NSString, CSJVideoAdTracker, CSJVideoBottomMask, BUTimer, UIActivityIndicatorView, CSJRewardedVideoWebMaskView, CSJMaterialMeta, NSTimer, BUPlayer, CSJVideoDetailLoadingView, CSJPlayerTimeObserverModel, UIView, CSJVideoDetailAppInfoView, CSJRewardedVideoTopBarView, UISwipeGestureRecognizer, CSJWebViewController, CSJRewardedRetainAlertManager, UIImageView, CSJRewardedVideoDownloadBarView, NSURL, CSJURitSettingModel, UITapGestureRecognizer, CSJRewardedLiveCountDownView;
@protocol CSJRewardedVideoDisplayDelegate, BUWebView;

@interface CSJRewardedVideoDisplayViewController : UIViewController <BUVideoPlayerDelegate, CSJRewardedVideoDownloadBarDelegate, CSJCSJVideoTopMaskClickDelegate, CSJCSJVideoBottomMaskClickDelegate, CSJRewardedVideoTopBarDelegate, CSJFullScreenInterstitialAdDelegate, BUWebViewDelegate, CSJVideoDetailAppInfoViewDelegate> {
    BOOL _isTransform;
    BOOL _isRewardedVideo;
    BOOL _storeKitOpened;
    BOOL _isStopTimerEnterBackground;
    BOOL _isAlreadyPlayed;
    BOOL _isSkipTap;
    BOOL _isReportEvent;
    BOOL _isFirstAnimation;
    BOOL _isPlaying;
    BOOL _playingOnline;
    BOOL _hasPlayed;
    BOOL _isShowAlert;
    BOOL _displayDidDisappear;
    BOOL _resignActivity;
    BOOL _hasAddButtonToPlayerView;
    BOOL _isRewardLive;
    BOOL _liveAlertShowed;
    BOOL _liveJumped;
    BOOL _liveAutoJumping;
    BOOL _webviewLoadFinished;
    BOOL _loadingTimeFinished;
    BOOL _firstTimeClickWebview;
    BOOL _videoLoadFail;
    BOOL _isAreadyPreload;
    BOOL _isLoopPlaying;
    BOOL _isFullSizePicAd;
    BOOL _isClosedFromRewardAlert;
    id<CSJRewardedVideoDisplayDelegate> _delegate;
    BUPlayer *_player;
    CSJRewardedVideoTopBarView *_topBarView;
    CSJMaterialMeta *_materialMeta;
    CSJAdSlot *_slot;
    double _screenWidth;
    double _screenHeight;
    NSTimer *_timer;
    long long _repeatsCount;
    UIView *_adlogoView;
    UILabel *_ADXLabel;
    UIView *_playerView;
    UIActivityIndicatorView *_activityIndicator;
    CSJRewardedVideoDownloadBarView *_downloadView;
    CSJVideoTopMask *_topMask;
    CSJVideoBottomMask *_bottomMask;
    NSDictionary *_touchDict;
    double _lastTime;
    CSJURitSettingModel *_ritModel;
    BUTimer *_quitTimer;
    CSJDislikeContext *_dislikeContext;
    CSJVideoAdTracker *_videoTracker;
    CSJFullScreenInterstitialAdView *_fullScreenInterstitialAdView;
    long long _imageAdLeftSeconds;
    CSJRewardedLiveCountDownView *_liveCountDownView;
    CSJWebViewController *_webViewController;
    UIView<BUWebView> *_webView;
    NSURL *_requestURL;
    CSJVideoDetailLoadingView *_loadingView;
    CSJRewardedVideoWebMaskView *_webmaskView;
    UISwipeGestureRecognizer *_maskViewSwipeGesture;
    UITapGestureRecognizer *_maskViewTapGesture;
    CSJVideoDetailAppInfoView *_detailAppInfoView;
    UIImageView *_adImageView;
    CSJPlayerTimeObserverModel *_playerTimeObserverModel;
    CSJRewardedRetainAlertManager *_alertManger;
    long long _retainAlertReduceRewardTime;
}

@property (retain, nonatomic) CSJMaterialMeta *materialMeta;
@property (retain, nonatomic) CSJAdSlot *slot;
@property (nonatomic) double screenWidth;
@property (nonatomic) double screenHeight;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) BOOL isStopTimerEnterBackground;
@property (nonatomic) long long repeatsCount;
@property (retain, nonatomic) UIView *adlogoView;
@property (retain, nonatomic) UILabel *ADXLabel;
@property (retain, nonatomic) UIView *playerView;
@property (retain, nonatomic) UIActivityIndicatorView *activityIndicator;
@property (retain, nonatomic) CSJRewardedVideoDownloadBarView *downloadView;
@property (retain, nonatomic) CSJVideoTopMask *topMask;
@property (retain, nonatomic) CSJVideoBottomMask *bottomMask;
@property (copy, nonatomic) NSDictionary *touchDict;
@property (nonatomic) double lastTime;
@property (nonatomic) BOOL isAlreadyPlayed;
@property (nonatomic) BOOL isSkipTap;
@property (nonatomic) BOOL isReportEvent;
@property (retain, nonatomic) CSJURitSettingModel *ritModel;
@property (nonatomic) BOOL isFirstAnimation;
@property (retain, nonatomic) BUTimer *quitTimer;
@property (nonatomic) BOOL isPlaying;
@property (nonatomic) BOOL playingOnline;
@property (nonatomic) BOOL hasPlayed;
@property (nonatomic) BOOL isShowAlert;
@property (retain, nonatomic) CSJDislikeContext *dislikeContext;
@property (retain, nonatomic) CSJVideoAdTracker *videoTracker;
@property (retain, nonatomic) CSJFullScreenInterstitialAdView *fullScreenInterstitialAdView;
@property (readonly, nonatomic) BUPlayer *displayPlayer;
@property (nonatomic) long long imageAdLeftSeconds;
@property (nonatomic) BOOL displayDidDisappear;
@property (nonatomic) BOOL resignActivity;
@property (nonatomic) BOOL hasAddButtonToPlayerView;
@property (nonatomic) BOOL isRewardLive;
@property (retain, nonatomic) CSJRewardedLiveCountDownView *liveCountDownView;
@property (nonatomic) BOOL liveAlertShowed;
@property (nonatomic) BOOL liveJumped;
@property (nonatomic) BOOL liveAutoJumping;
@property (retain, nonatomic) CSJWebViewController *webViewController;
@property (retain, nonatomic) UIView<BUWebView> *webView;
@property (retain, nonatomic) NSURL *requestURL;
@property (retain, nonatomic) CSJVideoDetailLoadingView *loadingView;
@property (retain, nonatomic) CSJRewardedVideoWebMaskView *webmaskView;
@property (retain, nonatomic) UISwipeGestureRecognizer *maskViewSwipeGesture;
@property (retain, nonatomic) UITapGestureRecognizer *maskViewTapGesture;
@property (retain, nonatomic) CSJVideoDetailAppInfoView *detailAppInfoView;
@property (nonatomic) BOOL webviewLoadFinished;
@property (nonatomic) BOOL loadingTimeFinished;
@property (nonatomic) BOOL firstTimeClickWebview;
@property (nonatomic) BOOL videoLoadFail;
@property (retain, nonatomic) UIImageView *adImageView;
@property (nonatomic) BOOL isAreadyPreload;
@property (retain, nonatomic) CSJPlayerTimeObserverModel *playerTimeObserverModel;
@property (nonatomic) BOOL isLoopPlaying;
@property (nonatomic) BOOL isFullSizePicAd;
@property (nonatomic) BOOL isClosedFromRewardAlert;
@property (retain, nonatomic) CSJRewardedRetainAlertManager *alertManger;
@property (nonatomic) long long retainAlertReduceRewardTime;
@property (weak, nonatomic) id<CSJRewardedVideoDisplayDelegate> delegate;
@property (retain, nonatomic) BUPlayer *player;
@property (retain, nonatomic) CSJRewardedVideoTopBarView *topBarView;
@property (nonatomic) BOOL isTransform;
@property (nonatomic) BOOL isRewardedVideo;
@property (nonatomic) BOOL storeKitOpened;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)playerReadyToPlay:(id)arg0;
- (id)infoViewModel;
- (id)materialMeta;
- (void)fullScreenInterstitialAdViewDidTapLogoImageView:(id)arg0;
- (void)fullScreenInterstitialAdView:(id)arg0 downloadBarTapped:(id)arg1 extraDic:(id)arg2;
- (void)fullScreenInterstitialAdView:(id)arg0 downloadButtonTapped:(id)arg1 extraDic:(id)arg2;
- (void)fullScreenInterstitialAdViewDidClick:(id)arg0 extraDic:(id)arg1;
- (void)fullScreenInterstitialAdPlayerReadyToPlay:(id)arg0;
- (void)fullScreenInterstitialAdPlayerDidPlayFinish:(id)arg0;
- (void)fullScreenInterstitialAdVideoViewDidClick:(id)arg0;
- (void)fullScreenInterstitialAdView:(id)arg0 videoStateDidChanged:(long long)arg1;
- (void)fullScreenImageAdDidClick:(id)arg0 extraDic:(id)arg1;
- (id)adImageView;
- (id)ADXLabel;
- (id)dislikeContext;
- (void)setMaterialMeta:(id)arg0;
- (void)setDislikeContext:(id)arg0;
- (id)initViewControllerWithAd:(id)arg0 slot:(id)arg1;
- (void)receivedidBecomeActiveNotification:(id)arg0;
- (void)receiveWillResignActiveNotification:(id)arg0;
- (id)videoTracker;
- (void)setPlayerTimeObserverModel:(id)arg0;
- (id)playerTimeObserverModel;
- (void)preloadMaterialMeta;
- (BOOL)playingOnline;
- (void)judgeQuit:(id)arg0;
- (void)setQuitTimer:(id)arg0;
- (id)quitTimer;
- (BOOL)isShowAlert;
- (void)continuePlay;
- (void)checkRewardLiveBoxOpenState;
- (void)setStoreKitOpened:(BOOL)arg0;
- (void)setIsSkipTap:(BOOL)arg0;
- (BOOL)fullScreenImageNotSkipToEndcardAndNotDismiss;
- (void)handlePlayFinish:(id)arg0;
- (BOOL)isSkipTap;
- (void)showDislikeHUD;
- (void)setIsShowAlert:(BOOL)arg0;
- (void)setHasPlayed:(BOOL)arg0;
- (BOOL)isLoopPlaying;
- (void)setPlayingOnline:(BOOL)arg0;
- (double)watchedDuration;
- (long long)retainAlertReduceRewardTime;
- (BOOL)storeKitOpened;
- (void)setIsLoopPlaying:(BOOL)arg0;
- (void)handleSendRewardWhenSwitchToEndcard;
- (void)setRetainAlertReduceRewardTime:(long long)arg0;
- (BOOL)upToThirtySecondsStandard;
- (BOOL)isAreadyPreload;
- (void)setIsAreadyPreload:(BOOL)arg0;
- (void)checkToPlayOrPause;
- (void)playerReadyToPlayWhenApplicationEnterBackground:(id)arg0;
- (void)player:(id)arg0 stateDidChanged:(long long)arg1;
- (void)playerDidPlayFinish:(id)arg0 error:(id)arg1;
- (void)player:(id)arg0 decodeModeChanged:(unsigned long long)arg1;
- (void)setVideoTracker:(id)arg0;
- (void)updateLeftSeconds:(id)arg0;
- (BOOL)isReportEvent;
- (void)setIsReportEvent:(BOOL)arg0;
- (void)setIsFirstAnimation:(BOOL)arg0;
- (void)addNotification;
- (id)adlogoView;
- (void)setIsRewardLive:(BOOL)arg0;
- (id)displayPlayer;
- (void)receiveWillEnterForegroundNotification:(id)arg0;
- (void)receiveDidEnterBackgroundNotification:(id)arg0;
- (void)setResignActivity:(BOOL)arg0;
- (BOOL)isStopTimerEnterBackground;
- (void)startImageTimer;
- (BOOL)isRewardLive;
- (void)setIsStopTimerEnterBackground:(BOOL)arg0;
- (void)setDisplayDidDisappear:(BOOL)arg0;
- (BOOL)validFullScreenImageAndInterstitial;
- (void)buildImageAdView;
- (void)buildNorlmalView;
- (void)buildMaskView;
- (void)forceQuit;
- (void)playerViewCoverGaosi;
- (void)playRewardedVideo;
- (BOOL)isFirstAnimation;
- (long long)getdownloadBarShowTime;
- (void)downloadViewAnimation;
- (void)adjustLogoViewFrame;
- (void)layoutFullScreenImage;
- (void)layoutNormalSubviews;
- (id)fullScreenInterstitialAdView;
- (BOOL)videoAdaptionVideoHeightNotContainBar;
- (unsigned long long)isNewDowloadBar;
- (struct CGSize { double x0; double x1; })handlePortraitVideoSizeWithVideoAdaption;
- (double)handlePortraitVideoTopWithVideoAdaption;
- (struct CGSize { double x0; double x1; })handleLandscapeVideoSizeWithVideoAdaption;
- (BOOL)needFullScreenVideoAdaptation;
- (BOOL)hasAddButtonToPlayerView;
- (void)setHasAddButtonToPlayerView:(BOOL)arg0;
- (void)pbu_safeLogoLayout;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getLiveCountDownFrame;
- (id)liveCountDownView;
- (BOOL)isFullScreenImageAd;
- (void)reportEventIsNeedWatchPercent:(BOOL)arg0;
- (BOOL)isAlreadyPlayed;
- (void)reportLabel:(id)arg0 extraDic:(id)arg1 adExtraDataType:(long long)arg2 skipType:(long long)arg3;
- (id)extraDictionary:(id)arg0;
- (void)setTouchDict:(id)arg0;
- (BOOL)sendClickEventWithArea:(id)arg0;
- (void)touchEventTrackerWithLabel:(id)arg0 sendClick:(BOOL)arg1;
- (id)playerViewTapyDict;
- (BOOL)videoDefaultMute;
- (void)silentVideo;
- (void)buildCommonView;
- (void)unMuteVideo;
- (void)setIsAlreadyPlayed:(BOOL)arg0;
- (long long)videoBufferSecondForClose;
- (BOOL)displayDidDisappear;
- (BOOL)resignActivity;
- (BOOL)fullscreenNotShowEndcard;
- (void)fullScreenInterstitialTypeDidClose;
- (void)handlePlayFinish;
- (void)reportVideoEndCardTracker;
- (double)playerDuration;
- (id)c_xyDict;
- (id)getDurationAndPercentDic;
- (BOOL)liveAutoJumping;
- (BOOL)liveJumped;
- (void)setLiveJumped:(BOOL)arg0;
- (BOOL)rewardShowAlert;
- (BOOL)isFullSizePicAd;
- (long long)imageAdLeftSeconds;
- (void)reportLabel:(id)arg0 extraDic:(id)arg1 adExtraDataType:(long long)arg2;
- (void)setIsClosedFromRewardAlert:(BOOL)arg0;
- (void)closeDisplayVC;
- (void)dislikeDismissPlayVideo;
- (void)dislikeShowPauseVideo;
- (void)handleSkip;
- (id)ritModel;
- (BOOL)isClosedFromRewardAlert;
- (BOOL)videoUrlValiable;
- (void)updateImageLeftSeconds;
- (long long)repeatsCount;
- (void)setRepeatsCount:(long long)arg0;
- (void)updateRewardLiveCountDown;
- (void)setImageAdLeftSeconds:(long long)arg0;
- (void)touchEventTrackerForClick;
- (void)downloadBarTapped:(id)arg0 extraDic:(id)arg1;
- (void)tapAdLogo;
- (void)setPlayerVideoAdaption;
- (void)playerTap;
- (long long)topBarViewStyle;
- (void)clickAdImageView;
- (void)onRewardLiveBoxOpen;
- (BOOL)liveAlertShowed;
- (void)setLiveAlertShowed:(BOOL)arg0;
- (void)showRewardLiveAlert;
- (void)setLiveAutoJumping:(BOOL)arg0;
- (BOOL)firstTimeClickWebview;
- (void)setFirstTimeClickWebview:(BOOL)arg0;
- (BOOL)loadingTimeFinished;
- (BOOL)webviewLoadFinished;
- (void)loadingTimeIsFinished;
- (void)setWebviewLoadFinished:(BOOL)arg0;
- (void)webviewAnimationWithFullScreen;
- (void)clickWebviewFirstTime;
- (void)setLoadingTimeFinished:(BOOL)arg0;
- (void)setWebmaskView:(id)arg0;
- (id)webmaskView;
- (void)webViewMaskSwipeWithRecognizer:(id)arg0;
- (void)setMaskViewSwipeGesture:(id)arg0;
- (void)webViewMaskTapWithRecognizer:(id)arg0;
- (void)setMaskViewTapGesture:(id)arg0;
- (id)maskViewSwipeGesture;
- (id)maskViewTapGesture;
- (void)webViewMaskClickVoid;
- (void)webviewAnimationWithPlayerViewRatio:(double)arg0;
- (void)swipeWebviewMaskView;
- (void)playerViewImageGaosi;
- (void)videoTopMaskTapped:(id)arg0 extraDic:(id)arg1;
- (void)videoTopMaskSubViewsTapped:(id)arg0 extraDic:(id)arg1 clickTypeString:(id)arg2;
- (void)videoBottomMaskTapped:(id)arg0 extraDic:(id)arg1;
- (void)videoBottomMaskSubViewsTapped:(id)arg0 extraDic:(id)arg1;
- (void)videoTopBarTapped:(id)arg0 extraDic:(id)arg1;
- (void)videoTopBarSilentButtonTapped:(id)arg0;
- (void)videoTopBarCloseButtonTapped:(id)arg0;
- (void)videoTopBarDislikeButtonTapped:(id)arg0;
- (BOOL)videoTopBarCloseButtonShowCloseIcon;
- (void)touchEventTrackerForClickClose;
- (BOOL)isVideoNewDetailAndLandingPage;
- (long long)rewardWatchPercentForRport;
- (void)createWebViewControllerWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)fullScreenImageDownloadbar;
- (void)setAdlogoView:(id)arg0;
- (void)setADXLabel:(id)arg0;
- (void)setRitModel:(id)arg0;
- (void)setFullScreenInterstitialAdView:(id)arg0;
- (void)setLiveCountDownView:(id)arg0;
- (id)detailAppInfoView;
- (void)setDetailAppInfoView:(id)arg0;
- (BOOL)videoLoadFail;
- (void)setVideoLoadFail:(BOOL)arg0;
- (void)setAdImageView:(id)arg0;
- (void)setIsFullSizePicAd:(BOOL)arg0;
- (BOOL)isTransform;
- (id)getTrackTag;
- (BOOL)isRewardedVideo;
- (void)setAlertManger:(id)arg0;
- (id)alertManger;
- (void)downloadButtonTapped:(id)arg0 extraDic:(id)arg1;
- (void)setIsTransform:(BOOL)arg0;
- (void)setIsRewardedVideo:(BOOL)arg0;
- (void)videoDetailAppInfoViewClickDownloadButton:(id)arg0 extraDic:(id)arg1;
- (id)slot;
- (id)timer;
- (BOOL)shouldAutorotate;
- (void)setLastTime:(double)arg0;
- (void)setWebView:(id)arg0;
- (id)activityIndicator;
- (void)startTimer;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(BOOL)arg0;
- (id)webView;
- (void).cxx_destruct;
- (double)screenWidth;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)preferredInterfaceOrientationForPresentation;
- (void)stopTimer;
- (void)setScreenWidth:(double)arg0;
- (void)setScreenHeight:(double)arg0;
- (void)viewWillDisappear:(BOOL)arg0;
- (void)viewDidDisappear:(BOOL)arg0;
- (void)setPlayer:(id)arg0;
- (id)delegate;
- (void)setTimer:(id)arg0;
- (id)requestURL;
- (double)screenHeight;
- (double)lastTime;
- (void)setSlot:(id)arg0;
- (double)currentTime;
- (BOOL)isPlaying;
- (void)setRequestURL:(id)arg0;
- (id)playerView;
- (void)setActivityIndicator:(id)arg0;
- (BOOL)prefersStatusBarHidden;
- (void)viewWillAppear:(BOOL)arg0;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (void)setPlayerView:(id)arg0;
- (void)setIsPlaying:(BOOL)arg0;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (id)player;
- (id)touchDict;
- (void)webView:(id)arg0 didFailLoadWithError:(id)arg1;
- (void)webViewDidStartLoad:(id)arg0;
- (void)webViewDidFinishLoad:(id)arg0;
- (id)webViewController;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (id)topMask;
- (void)setTopMask:(id)arg0;
- (id)bottomMask;
- (void)setBottomMask:(id)arg0;
- (void)setWebViewController:(id)arg0;
- (id)topBarView;
- (void)setTopBarView:(id)arg0;
- (void)openAppStore;
- (void)applicationWillTerminateNotification:(id)arg0;
- (BOOL)hasPlayed;
- (void)setDownloadView:(id)arg0;
- (id)downloadView;

@end
