//
//     Generated by private class-dump
//

@class BDSCUserActionCenter, NSString, BDScreenCastPlayItem, BDByteScreenCastUIHandler, BDByteScreenCastBackgroundActiveHolder, BDByteScreenCastContext, BDByteScreenCastDurationHeartbeatTracker, BDSCProblemDiagnosisCenter, NSMutableSet, NSCache, BDByteScreenCastMessageHandler, BDSCWebJSBridgeHandler;
@protocol BDByteScreenCastTrackerService, BDByteScreenCastManagerDelegate;

@interface BDByteScreenCastManager : NSObject <BDByteScreenCastDeviceManagerDelegate, BDSCPlayerDelegate, BDByteScreenCastUIHandlerDelegate, BDByteScreenCastMessageHandlerDelegate, BDByteCastLogDelegate> {
    BOOL _shouldShowFloatBall;
    BOOL _didTriggerPreSearch;
    BOOL _shouldSearchAfterEnterApp;
    id<BDByteScreenCastManagerDelegate> _delegate;
    id<BDByteScreenCastTrackerService> _trackerService;
    BDSCWebJSBridgeHandler *_webJSBridgeHandler;
    BDByteScreenCastContext *_byteScreenCastContext;
    BDByteScreenCastUIHandler *_uiHandler;
    BDByteScreenCastBackgroundActiveHolder *_activeHolder;
    BDByteScreenCastMessageHandler *_messageHandler;
    NSMutableSet *_preloadedXsgIpSet;
    NSString *_preCheckSessionIDWhenError;
    NSString *_networkStatusToken;
    BDScreenCastPlayItem *_preloadPlayItem;
    BDByteScreenCastDurationHeartbeatTracker *_durationHeartbeatTracker;
    BDSCUserActionCenter *_userActionCenter;
    BDSCProblemDiagnosisCenter *_diagnosisCenter;
    NSCache *_onlyXsgCache;
}

@property (retain, nonatomic) BDByteScreenCastUIHandler *uiHandler;
@property (retain, nonatomic) BDByteScreenCastBackgroundActiveHolder *activeHolder;
@property (retain, nonatomic) BDByteScreenCastMessageHandler *messageHandler;
@property (retain, nonatomic) BDByteScreenCastContext *byteScreenCastContext;
@property (retain, nonatomic) BDSCWebJSBridgeHandler *webJSBridgeHandler;
@property (nonatomic) BOOL shouldShowFloatBall;
@property (nonatomic) BOOL didTriggerPreSearch;
@property (retain, nonatomic) NSMutableSet *preloadedXsgIpSet;
@property (copy, nonatomic) NSString *preCheckSessionIDWhenError;
@property (copy, nonatomic) NSString *networkStatusToken;
@property (retain, nonatomic) BDScreenCastPlayItem *preloadPlayItem;
@property (retain, nonatomic) BDByteScreenCastDurationHeartbeatTracker *durationHeartbeatTracker;
@property (retain, nonatomic) BDSCUserActionCenter *userActionCenter;
@property (retain, nonatomic) BDSCProblemDiagnosisCenter *diagnosisCenter;
@property (retain, nonatomic) NSCache *onlyXsgCache;
@property (nonatomic) BOOL shouldSearchAfterEnterApp;
@property (weak, nonatomic) id<BDByteScreenCastManagerDelegate> delegate;
@property (weak, nonatomic) id<BDByteScreenCastTrackerService> trackerService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setupSDKSettings:(id)arg0;
+ (id)shareInstance;

- (void)setupWithConfig:(id)arg0;
- (void)addNotifications;
- (void)onWarnWithMessage:(id)arg0;
- (void)onErrorWithMessage:(id)arg0;
- (void)startSearch;
- (void)showCastSearchDevicesView;
- (void)closeSearchDeviceViewController;
- (id)byteScreenCastContext;
- (void)showCastControlViewWithConfig:(id)arg0;
- (void)startupScreenCastIfNeed;
- (void)closeScreenCast:(BOOL)arg0 disconnect:(BOOL)arg1;
- (void)closeScreenCastOnlyRemoveCastControlView;
- (void)preSearch;
- (void)stopPreSearchIfNeeded;
- (void)preCheckForVideoInfo:(id)arg0 albumID:(id)arg1;
- (void)preCheckForVideoInfo:(id)arg0 albumID:(id)arg1 authorID:(id)arg2;
- (id)trackerService;
- (void)setTrackerService:(id)arg0;
- (void)showControlViewWithStatus:(unsigned long long)arg0 animated:(BOOL)arg1;
- (void)setupABTestConfig;
- (id)userActionCenter;
- (BOOL)isShowingSearchPage;
- (void)setupSDKSettings:(id)arg0;
- (id)webJSBridgeHandler;
- (void)updateVideoID:(id)arg0 XsgIndentifyStatus:(unsigned long long)arg1;
- (BOOL)isScreenCastPlaying;
- (BOOL)isConnectedXsgDevice;
- (void)dismissControlViewWithCompletion:(id /* block */)arg0;
- (void)didStartFetchUrl;
- (void)didFetchUrlResultWithError:(id)arg0;
- (unsigned long long)controlViewShowingStyle;
- (void)castPlay;
- (void)castPause;
- (void)castPlaySeekToTime:(long long)arg0;
- (void)openFeedbackPage:(id)arg0;
- (id)echoScreenCastTrackParams;
- (void)showConnectErrorAlert;
- (BOOL)canSkipSearch;
- (void)castPlayWithItem:(id)arg0 onError:(id)arg1;
- (void)closeScreenCast:(id)arg0;
- (void)updateScreenCastControlViewConfig:(id)arg0;
- (void)sendMessageWithCode:(unsigned long long)arg0 params:(id)arg1;
- (void)showViewWithModel:(id)arg0 config:(id)arg1;
- (void)updateViewModel:(id)arg0 config:(id)arg1;
- (void)registerWithProjectID:(id)arg0 leboAppID:(id)arg1 leboSecretKey:(id)arg2 leboAuthCallback:(id /* block */)arg3;
- (id)clarityListFromBusiness;
- (void)sendPlayListToTVWith:(id)arg0 with:(unsigned long long)arg1;
- (void)preRedirectParseWithUrl:(id)arg0;
- (id)onlyXsgCache;
- (void)setOnlyXsgCache:(id)arg0;
- (id)obtainTraceLogInfo;
- (void)setByteScreenCastContext:(id)arg0;
- (BOOL)floatBallShowing;
- (id)diagnosisCenter;
- (void)setDiagnosisCenter:(id)arg0;
- (void)byteCastDeviceManager:(id)arg0 didFindByteScreenCastDevices:(id)arg1 onError:(id)arg2;
- (void)byteCastDeviceManager:(id)arg0 startConnectToDevice:(id)arg1;
- (void)byteCastDeviceManager:(id)arg0 byteScreenCastConnection:(id)arg1 onError:(id)arg2;
- (void)byteCastDeviceManager:(id)arg0 byteScreenCastConnection:(id)arg1 didConnectToDevice:(id)arg2 isRetry:(BOOL)arg3;
- (void)byteCastDeviceManager:(id)arg0 byteScreenCastConnection:(id)arg1 disConnectToDevice:(id)arg2;
- (BOOL)byteCastDeviceManager:(id)arg0 shouldFilterWithPlayerConfig:(id)arg1;
- (void)byteCastDeviceManager:(id)arg0 hasDetectedToOfflineDevice:(id)arg1 deviceType:(unsigned long long)arg2;
- (void)byteCastDeviceManager:(id)arg0 didFindDeviceType:(unsigned long long)arg1;
- (void)byteCastDeviceManager:(id)arg0 willSearchBDLinkByIPWithDevice:(id)arg1;
- (void)byteCastDeviceManager:(id)arg0 didSearchBDLinkByIPWithDevice:(id)arg1 error:(id)arg2;
- (void)byteCastDeviceManager:(id)arg0 deviceFiltered:(id)arg1 extraInfo:(id)arg2;
- (void)byteCastDeviceManager:(id)arg0 didFindInvalidDevices:(id)arg1;
- (void)player:(id)arg0 onError:(id)arg1;
- (void)player:(id)arg0 playStatus:(unsigned long long)arg1;
- (void)player:(id)arg0 progressInfo:(id)arg1;
- (void)player:(id)arg0 dlnaMediaInfo:(id)arg1;
- (void)player:(id)arg0 changeCharity:(id)arg1;
- (void)player:(id)arg0 onCMDErrorCode:(long long)arg1;
- (void)player:(id)arg0 onPushCompletionWithError:(id)arg1;
- (void)playerStatusCallbackException:(id)arg0;
- (void)initialUtils;
- (void)setUserActionCenter:(id)arg0;
- (void)updateRecommendType;
- (id)getCacheKeyWithParams:(id)arg0;
- (id)preCheckSessionIDWhenError;
- (void)updateOnlyForXsg:(BOOL)arg0 error:(id)arg1;
- (void)setPreCheckSessionIDWhenError:(id)arg0;
- (void)registerManufacturer;
- (void)abTestExposure;
- (void)startMessageServer;
- (void)checkLocalNetworkPermission;
- (void)resetPreSearchState;
- (id)preloadedXsgIpSet;
- (void)setPreloadPlayItem:(id)arg0;
- (id)popAutoConnectDevice;
- (id)uiHandler;
- (void)screenCastUIHandler:(id)arg0 castPlayDidClosed:(id)arg1;
- (BOOL)shouldCastToCurrentDevice;
- (BOOL)didTriggerPreSearch;
- (void)setDidTriggerPreSearch:(BOOL)arg0;
- (id)networkStatusToken;
- (void)setNetworkStatusToken:(id)arg0;
- (long long)diagnoseWithType:(long long)arg0;
- (void)markRefreshURL;
- (void)appendFindDevicesLogError:(id)arg0 action:(id)arg1;
- (id)durationHeartbeatTracker;
- (void)sendVideoPlayBrokenEvent:(id)arg0;
- (void)sendVideoOverEventWithCompleted:(BOOL)arg0;
- (void)processingCastItemBeforePlayWithItem:(id)arg0 showToastIfNeed:(BOOL)arg1 useDefaultClarity:(BOOL)arg2;
- (void)preloadPlayItemWithOnlineDevices:(id)arg0;
- (void)attemptChangeClarityToClarity:(id)arg0;
- (void)changePlayItemClarityToClarity:(id)arg0;
- (void)changeConnectedDeviceToDevice:(id)arg0;
- (void)connectedDeviceToDevice:(id)arg0;
- (void)openTVDownloadPage;
- (void)sendMessageWithCode:(unsigned long long)arg0 params:(id)arg1 delay:(BOOL)arg2;
- (BOOL)allowToShowFloatBallWithTopVC:(id)arg0 className:(id)arg1;
- (void)showFloatBall:(BOOL)arg0;
- (void)showClarityChooseView;
- (void)attemptToShowToastWithTitle:(id)arg0 tvToastTitle:(id)arg1 toastOnDeviceType:(unsigned long long)arg2;
- (void)showLocalLocalNetworkPermissionAlert;
- (void)attemptToShowToastOnPhoneDevice:(id)arg0;
- (void)attemptToShowToastOnTv:(id)arg0;
- (id)preloadPlayItem;
- (void)setShouldSearchAfterEnterApp:(BOOL)arg0;
- (BOOL)shouldSearchAfterEnterApp;
- (void)sendVideoPlayEvent;
- (void)changeClaritySuccess;
- (void)stashCurrentConnectedDevice;
- (void)changeClarityFail;
- (void)retryCurrentMediaCastIfNeeded;
- (void)updateLastSearchResult;
- (void)showNetworkWarnAlert;
- (void)handleScreenCastFloatBallWithTopViewController:(id)arg0 fromClass:(id)arg1;
- (void)setShouldShowFloatBall:(BOOL)arg0;
- (BOOL)shouldShowFloatBall;
- (void)onlineDeviceListDidChange:(id)arg0;
- (void)screenCastUIHandler:(id)arg0 castPlayWillChangeClarity:(id)arg1;
- (void)screenCastUIHandler:(id)arg0 castPlayClarityChanged:(id)arg1;
- (void)screenCastUIHandler:(id)arg0 attemptToShowSeriesView:(id)arg1;
- (void)screenCastUIHandler:(id)arg0 attemptToChangeToLandscape:(BOOL)arg1;
- (void)screenCastUIHandler:(id)arg0 attemptToShowClarityChooseView:(id)arg1;
- (void)screenCastUIHandler:(id)arg0 controlViewBackButtonClicked:(id)arg1;
- (void)screenCastUIHandler:(id)arg0 searchViewDidDisappear:(id)arg1;
- (void)screenCastUIHandler:(id)arg0 attemptToShowToastWithTitle:(id)arg1 tvToastTitle:(id)arg2;
- (void)screenCastUIHandler:(id)arg0 failToChangeClarity:(id)arg1;
- (void)screenCastUIHandler:(id)arg0 castDanmakuDidClicked:(id)arg1;
- (void)screenCastUIHandler:(id)arg0 continuePlayButtonClicked:(id)arg1;
- (void)screenCastUIHandler:(id)arg0 showAlertWithTitle:(id)arg1 message:(id)arg2 cancelTitle:(id)arg3 confirmTitle:(id)arg4 cancelAction:(id /* block */)arg5 confirmAction:(id /* block */)arg6;
- (void)screenCastUIHandlerSearchOverTime:(id)arg0;
- (void)screenCastUIHandlerStartSearch:(id)arg0;
- (void)screenCastUIHandlerReStartSearchWithoutNetwork:(id)arg0;
- (BOOL)screenCastUIHandlerShouldClose:(id)arg0;
- (void)messageHandler:(id)arg0 clarityChanged:(id)arg1;
- (void)messageHandler:(id)arg0 videoDidChanged:(id)arg1 isAuto:(BOOL)arg2;
- (void)updateByteContextTraceLogInfo:(id)arg0;
- (void)disConnectIfNeed;
- (void)retryConnect;
- (void)preloadPlayItem:(id)arg0;
- (void)switchCastPlayStatus:(BOOL)arg0;
- (void)stopCast;
- (void)seekLiveToNewest;
- (BOOL)getCacheOnlyXsgWithParams:(id)arg0;
- (void)closeScreenCastWithoutStopPlayer;
- (id)echoScreenCastCommonParams;
- (void)handleScreenCastFloatBallWithTopViewController:(id)arg0;
- (void)setWebJSBridgeHandler:(id)arg0;
- (void)setUiHandler:(id)arg0;
- (id)activeHolder;
- (void)setActiveHolder:(id)arg0;
- (void)setPreloadedXsgIpSet:(id)arg0;
- (void)setDurationHeartbeatTracker:(id)arg0;
- (id)messageHandler;
- (id)init;
- (void).cxx_destruct;
- (id)delegate;
- (void)setMessageHandler:(id)arg0;
- (void)setDelegate:(id)arg0;
- (void)removeNotifications;
- (void)appDidBecomeActive;
- (void)applicationDidEnterBackgroundNotification:(id)arg0;
- (void)applicationWillEnterForegroundNotification:(id)arg0;

@end
