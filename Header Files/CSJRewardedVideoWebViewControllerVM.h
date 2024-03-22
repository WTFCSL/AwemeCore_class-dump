//
//     Generated by private class-dump
//

@class NSString, CSJRewardedVideoWebViewController, BUTimer, NSMutableDictionary, UIButton, CSJMaterialMeta, BUThreadSafeMutableArray, CSJRewardedRetainAlertManager, CSJRewardedVideoWebDefaultView, CSJRewardedAgianAlertView;
@protocol CSJRewardedVideoWebViewDelegate, CSJRewardedVideoAgianDelegate;

@interface CSJRewardedVideoWebViewControllerVM : CSJWebViewControllerViewModel <CSJRewardedVideoWebDefaultViewDelegate> {
    struct { BOOL webViewDidStartLoadFlag; BOOL webViewDidFinishLoadFlag; BOOL webViewDidFailLoadWithErrorFlag; } flags;
    BOOL _isTransform;
    BOOL _isRewardedVideo;
    BOOL _mute;
    BOOL _isLoadFinish;
    BOOL _hasClosed;
    BOOL _renderFailed;
    BOOL _isRenderSuc;
    BOOL _isViewShow;
    BOOL _isLandscape;
    BOOL _isNativeExpress;
    BOOL _handleTapReported;
    BOOL _ignoreSecondAd;
    id<CSJRewardedVideoWebViewDelegate> _delegate;
    unsigned long long _transformDirection;
    CSJMaterialMeta *_materialMeta;
    NSString *_ritScene;
    id _rewardAd;
    CSJRewardedVideoWebViewController *_videoWebVC;
    CSJRewardedVideoWebDefaultView *_defaultView;
    UIButton *_silentButton;
    UIButton *_dislikeButton;
    UIButton *_closeButton;
    long long _delayTimeCount;
    long long _VCLifeCycleStatus;
    double _showTime;
    NSMutableDictionary *_logH5Dictinary;
    BUThreadSafeMutableArray *_switchBackgroundArray;
    CSJRewardedAgianAlertView *_againAlertView;
    id<CSJRewardedVideoAgianDelegate> _rewardAgianAd;
    BUTimer *_closeTimer;
    CSJRewardedRetainAlertManager *_alertManger;
    struct CGSize { double width; double height; } _customSize;
    struct CGSize { double width; double height; } _originSize;
}

@property (nonatomic) BOOL isLandscape;
@property (nonatomic) struct CGSize { double width; double height; } originSize;
@property (nonatomic) BOOL isNativeExpress;
@property (nonatomic) double showTime;
@property (retain, nonatomic) NSMutableDictionary *logH5Dictinary;
@property (retain, nonatomic) BUThreadSafeMutableArray *switchBackgroundArray;
@property (nonatomic) BOOL handleTapReported;
@property (retain, nonatomic) CSJRewardedAgianAlertView *againAlertView;
@property (retain, nonatomic) id<CSJRewardedVideoAgianDelegate> rewardAgianAd;
@property (readonly, nonatomic) BOOL ignoreSecondAd;
@property (retain, nonatomic) BUTimer *closeTimer;
@property (retain, nonatomic) CSJRewardedRetainAlertManager *alertManger;
@property (weak, nonatomic) id<CSJRewardedVideoWebViewDelegate> delegate;
@property (nonatomic) BOOL isTransform;
@property (nonatomic) unsigned long long transformDirection;
@property (nonatomic) BOOL isRewardedVideo;
@property (retain, nonatomic) CSJMaterialMeta *materialMeta;
@property (copy, nonatomic) NSString *ritScene;
@property (nonatomic) BOOL mute;
@property (nonatomic) BOOL isLoadFinish;
@property (nonatomic) BOOL hasClosed;
@property (nonatomic) BOOL renderFailed;
@property (weak, nonatomic) id rewardAd;
@property (weak, nonatomic) CSJRewardedVideoWebViewController *videoWebVC;
@property (retain, nonatomic) CSJRewardedVideoWebDefaultView *defaultView;
@property (retain, nonatomic) UIButton *silentButton;
@property (retain, nonatomic) UIButton *dislikeButton;
@property (retain, nonatomic) UIButton *closeButton;
@property (nonatomic) long long delayTimeCount;
@property (nonatomic) long long VCLifeCycleStatus;
@property (nonatomic) BOOL isRenderSuc;
@property (nonatomic) BOOL isViewShow;
@property (nonatomic) struct CGSize { double width; double height; } customSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)pageUrlWithMeta:(id)arg0 pageType:(unsigned long long)arg1;
+ (struct CGSize { double x0; double x1; })webViewSizeWithMeta:(id)arg0;
+ (id)newWithAd:(id)arg0 isNativeExpress:(BOOL)arg1 pageType:(unsigned long long)arg2;

- (void)registerJSBridge3;
- (id)materialMeta;
- (id)jsCallNative_dynamicTrackWithParams:(id)arg0;
- (void)jsCallNative_webview_time_trackWithParams:(id)arg0;
- (id)buJSB3_dynamicTrackWithViewModel:(id)arg0;
- (id)buJSB3_clickEventWithViewModel:(id)arg0;
- (id)buJSB3_openPrivacyWithViewModel:(id)arg0;
- (id)buJSB3_webview_time_trackWithViewModel:(id)arg0;
- (id)buJSB3_rewardPlayAgainWithViewModel:(id)arg0;
- (id)jsCallNative_open_app_store;
- (void)jsCallNative_rewardPlayAgainWithParams:(id)arg0;
- (id)trackTag;
- (id)ritScene;
- (double)showTime;
- (void)setShowTime:(double)arg0;
- (void)setMaterialMeta:(id)arg0;
- (id)dislikeButton;
- (void)setDislikeButton:(id)arg0;
- (BOOL)isNativeExpress;
- (void)setIsNativeExpress:(BOOL)arg0;
- (id)initViewControllerWithAd:(id)arg0 isNativeExpress:(BOOL)arg1 pageType:(unsigned long long)arg2;
- (void)setCustomSize:(struct CGSize { double x0; double x1; })arg0;
- (void)setVCLifeCycleStatus:(long long)arg0;
- (void)setDelayTimeCount:(long long)arg0;
- (void)registerJSB_Plugin;
- (void)appendURLParameters;
- (struct CGSize { double x0; double x1; })originSize;
- (void)setOriginSize:(struct CGSize { double x0; double x1; })arg0;
- (BOOL)useLandingPageNewStyle;
- (void)setUpRewardAgian;
- (void)addAccessibilityIdentifier;
- (void)startCloseCountDown;
- (void)handleViewWillAppear:(BOOL)arg0;
- (void)sendEndcardControlEvent:(BOOL)arg0;
- (BOOL)isPlayFailRewardTiming;
- (void)updateFullLinkRewardCloseButton;
- (void)handleViewDidAppear:(BOOL)arg0;
- (void)setIsViewShow:(BOOL)arg0;
- (void)handleViewDidDisappear:(BOOL)arg0;
- (void)handleViewWillLayoutSubviews;
- (struct CGSize { double x0; double x1; })customSize;
- (BOOL)isTransform;
- (unsigned long long)transformDirection;
- (double)getCloseButtonWidthWithStr:(id)arg0;
- (void)layoutSubViewsForNativeExpress;
- (void)updateDislikeButtonFrame;
- (void)appDidEnterBackgroundNotification:(id)arg0;
- (id)getTrackTag;
- (BOOL)isViewShow;
- (void)switchBackgroundAndForegroundLog:(id)arg0 extraDic:(id)arg1;
- (void)appWillEnterForegroundNotification:(id)arg0;
- (void)webCloseButtonTapped;
- (void)dislikeButtonTapped;
- (id)videoWebVC;
- (void)trackLoading;
- (BOOL)isRewardedVideo;
- (id)jsCallNative_landscape_click;
- (id)jsCallNative_isViewable;
- (id)jsCallNative_getScreenSize;
- (id)jsCallNative_getVolume;
- (void)jsCallNative_clickEventWithParams:(id)arg0;
- (void)jsCallNative_endcard_loadWithParams:(id)arg0;
- (id)jsCallNative_getCloseButtonInfo;
- (id)jsCallNative_intercept_resource_list;
- (void)jsCallNative_onClickBrowseCloseCallbackWithParams:(id)arg0;
- (void)jsCallNative_commonConvertWithParams:(id)arg0;
- (void)jsCallNative_openPrivacy;
- (void)jsCallNative_sendPlayableReward;
- (void)openInternalStoreWithMaterial:(id)arg0;
- (long long)VCLifeCycleStatus;
- (void)setIsRenderSuc:(BOOL)arg0;
- (BOOL)isRenderSuc;
- (id)logH5Dictinary;
- (void)showToastWithMessage:(id)arg0;
- (void)showRewardAgainMethod;
- (void)webCloseAction;
- (double)getCloseDelayTime;
- (BOOL)isJoinRewardTiming;
- (id)closeTimer;
- (void)onCloseCountDown;
- (void)setCloseTimer:(id)arg0;
- (long long)delayTimeCount;
- (void)updateCloseButton;
- (BOOL)shouldshowRewardAlert;
- (void)showRewardAlert;
- (BOOL)shouldShowRewardAgainAlert;
- (void)showRewardAgainAlert;
- (void)preloadRewardVideoAdAfterQuiteRewardAgainFirst;
- (void)setAlertManger:(id)arg0;
- (id)alertManger;
- (id)closeDictWithDuration:(double)arg0;
- (id)getLogExtraDic;
- (void)updateSlientBtnState:(BOOL)arg0;
- (void)silentButtonTapped;
- (BOOL)renderFailed;
- (double)getDislikeButtonWidthWithStr:(id)arg0;
- (id)rewardAd;
- (void)setRewardAgianAd:(id)arg0;
- (id)rewardAgianAd;
- (id)againAlertView;
- (void)rewardAgianCloseNotificationMethod:(id)arg0;
- (BOOL)ignoreSecondAd;
- (void)setAgainAlertView:(id)arg0;
- (id)switchBackgroundArray;
- (BOOL)isRealPlayablePage;
- (id)getPageUrlString;
- (void)appendNativeExpressOrientation;
- (void)setPageUrlString:(id)arg0;
- (void)appendEndcardGrayscale;
- (void)downloadButtonTapped:(id)arg0 extraDic:(id)arg1;
- (void)logoImageViewTapped:(id)arg0;
- (void)customNavigationBarDidClickCloseButton:(id)arg0;
- (void)customNavigationBarDidClickDislikeButton:(id)arg0;
- (void)handleTapWithInfo:(id)arg0;
- (id)buJSB3_open_app_storeWithViewModel:(id)arg0;
- (id)buJSB3_landscape_clickWithViewModel:(id)arg0;
- (id)buJSB3_isViewableWithViewModel:(id)arg0;
- (id)buJSB3_getScreenSizeWithViewModel:(id)arg0;
- (id)buJSB3_getVolumeWithViewModel:(id)arg0;
- (id)buJSB3_endcard_loadWithViewModel:(id)arg0;
- (id)buJSB3_getCloseButtonInfoWithViewModel:(id)arg0;
- (id)buJSB3_intercept_resource_listWithViewModel:(id)arg0;
- (id)buJSB3_onClickBrowseCloseCallbackWithViewModel:(id)arg0;
- (id)buJSB3_commonConvertWithViewModel:(id)arg0;
- (id)buJSB3_sendPlayableRewardWithViewModel:(id)arg0;
- (void)skipRewardDuration:(long long)arg0;
- (id)silentButton;
- (BOOL)shouldShowRewardAgainEntrance;
- (void)sendTrackDataWithParameters:(id)arg0;
- (void)setIsTransform:(BOOL)arg0;
- (void)setTransformDirection:(unsigned long long)arg0;
- (void)setIsRewardedVideo:(BOOL)arg0;
- (void)setRitScene:(id)arg0;
- (BOOL)isLoadFinish;
- (void)setIsLoadFinish:(BOOL)arg0;
- (void)setRenderFailed:(BOOL)arg0;
- (void)setRewardAd:(id)arg0;
- (void)setVideoWebVC:(id)arg0;
- (void)setDefaultView:(id)arg0;
- (void)setSilentButton:(id)arg0;
- (void)setLogH5Dictinary:(id)arg0;
- (void)setSwitchBackgroundArray:(id)arg0;
- (BOOL)handleTapReported;
- (void)setHandleTapReported:(BOOL)arg0;
- (BOOL)mute;
- (void).cxx_destruct;
- (void)setIsLandscape:(BOOL)arg0;
- (id)delegate;
- (BOOL)isLandscape;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (void)setMute:(BOOL)arg0;
- (void)webView:(id)arg0 didFailLoadWithError:(id)arg1;
- (void)webViewDidFinishLoad:(id)arg0;
- (void)setHasClosed:(BOOL)arg0;
- (BOOL)hasClosed;
- (id)closeButton;
- (void)setCloseButton:(id)arg0;
- (void)handleViewDidLoad;
- (id)defaultView;

@end