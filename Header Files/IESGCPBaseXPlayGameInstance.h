//
//     Generated by private class-dump
//

@class UIView, NSString, NSArray, NSError, IESGCPXPlayGameAPI, IESGCPPBGamePlatformInfo, IESGCPXPlayGameModel, UIViewController;
@protocol IESGCPXPlayGameResolution, XPlayBusinessConfigProtocol, XPlayItemProtocol, XPlayScreenRecordTask;

@interface IESGCPBaseXPlayGameInstance : NSObject <IESGCPXPlayGameBatManAlertSubscriber, IESGCPXPlayGameInstance, XPlayItemDelegate, XPlayItemBusinessDelegate, XPlayScreenRecordTaskDelegate, XPlayPermissionDelegate> {
    BOOL isShowing;
    BOOL _enterQueue;
    BOOL _isRecording;
    BOOL _inAuthRequest;
    IESGCPXPlayGameModel *_gameModel;
    id<XPlayItemProtocol> _xPlayItem;
    IESGCPPBGamePlatformInfo *_downloadGameInfo;
    NSError *_downloadGameInfoError;
    NSString *_unifiedGameId;
    IESGCPXPlayGameAPI *_api;
    long long _rtcExceptionState;
    id /* block */ _retryAuthBlock;
    id<XPlayBusinessConfigProtocol> _xplayBusinessConfig;
    id<XPlayScreenRecordTask> _screenRecordTask;
    id /* block */ _getDownloadInfoCallback;
    NSString *_core;
}

@property (retain, nonatomic) IESGCPPBGamePlatformInfo *downloadGameInfo;
@property (retain, nonatomic) NSError *downloadGameInfoError;
@property (copy, nonatomic) NSString *unifiedGameId;
@property (retain, nonatomic) IESGCPXPlayGameAPI *api;
@property (nonatomic) long long rtcExceptionState;
@property (nonatomic) BOOL enterQueue;
@property (copy, nonatomic) id /* block */ retryAuthBlock;
@property (retain, nonatomic) id<XPlayBusinessConfigProtocol> xplayBusinessConfig;
@property (retain, nonatomic) id<XPlayScreenRecordTask> screenRecordTask;
@property (nonatomic) BOOL isRecording;
@property (nonatomic) BOOL inAuthRequest;
@property (copy, nonatomic) id /* block */ getDownloadInfoCallback;
@property (copy, nonatomic) NSString *core;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UIViewController *controller;
@property (readonly, nonatomic) UIView *view;
@property (readonly, nonatomic) long long orientation;
@property (readonly, copy, nonatomic) NSArray *supportResolutions;
@property (readonly, nonatomic) id<IESGCPXPlayGameResolution> currentResolution;
@property (nonatomic) BOOL isShowing;
@property (retain, nonatomic) IESGCPXPlayGameModel *gameModel;
@property (retain, nonatomic) id<XPlayItemProtocol> xPlayItem;
@property (readonly, nonatomic) BOOL isPause;

+ (id)_loadingPageCacheKeyWithGameId:(id)arg0 playType:(long long)arg1;
+ (id)loadingPageConfigWithGameId:(id)arg0 playType:(long long)arg1;

- (void)setIsShowing:(BOOL)arg0;
- (void)setAudioMute:(BOOL)arg0;
- (BOOL)startNetworkDetection;
- (void)stopRecord;
- (void)startRecord;
- (void)startPlay;
- (BOOL)isPause;
- (id)supportResolutions;
- (id)sendCustomMessage:(id)arg0;
- (void)switchResolution:(id)arg0 callback:(id /* block */)arg1;
- (void)stopNetworkDetection;
- (void)playItem:(id)arg0 didReceiveMessage:(id)arg1;
- (void)screenRecordTask:(id)arg0 didStart:(id)arg1;
- (void)screenRecordTask:(id)arg0 didStop:(id)arg1;
- (void)screenRecordTask:(id)arg0 didCompletion:(id)arg1;
- (void)playItem:(id)arg0 didReceiveAuthRequest:(id)arg1 callback:(id /* block */)arg2;
- (void)playitem:(id)arg0 didReceiveRealNameRequest:(id)arg1 callback:(id /* block */)arg2;
- (void)playItem:(id)arg0 didReceiveExitRequest:(id /* block */)arg1;
- (void)playItem:(id)arg0 customMessage:(id)arg1 didReceiveCustomRequest:(id /* block */)arg2;
- (void)playItem:(id)arg0 playStatusDidUpdated:(unsigned long long)arg1 info:(id)arg2;
- (void)playItem:(id)arg0 preloadDidSucceed:(id)arg1;
- (void)playItem:(id)arg0 preloadDidFailed:(id)arg1;
- (void)playItemViewWillAppear:(id)arg0;
- (void)playItem:(id)arg0 netStatus:(long long)arg1 rtt:(long long)arg2 needToast:(BOOL)arg3 needNotification:(BOOL)arg4;
- (void)playItem:(id)arg0 config:(id)arg1;
- (void)playItemDidLostConnection:(id)arg0;
- (void)playItem:(id)arg0 remoteVideoRotationChanged:(long long)arg1;
- (void)playItem:(id)arg0 onCustomMessageReceivedWithCode:(int)arg1 uniqueSeq:(id)arg2 message:(id)arg3;
- (void)playItem:(id)arg0 remoteVideoStateChangeWith:(long long)arg1 withVideoStateReason:(long long)arg2;
- (void)systemPermissionFailedWith:(unsigned long long)arg0 info:(id)arg1;
- (void)requestRecordPermissionWithCompletion:(id /* block */)arg0;
- (void)playItem:(id)arg0 canJoinQueue:(id)arg1 callback:(id /* block */)arg2;
- (void)playItem:(id)arg0 didUpdateQueueInfo:(id)arg1;
- (void)playItem:(id)arg0 didDequeue:(id)arg1;
- (void)playItem:(id)arg0 didFinishQueue:(id)arg1;
- (void)playItem:(id)arg0 didExpireQueue:(id)arg1;
- (BOOL)checkIsShowing;
- (id)unifiedGameId;
- (void)onBatManPrivacyAlertShow:(long long)arg0;
- (void)onBatManPrivacyAlertClicked:(long long)arg0 buttonType:(long long)arg1 privacyCheck:(long long)arg2;
- (void)onBatManAuthPhoneNumAlertShow;
- (void)onBatManAuthPhoneNumAlertFinished:(long long)arg0;
- (void)onBatManAuthRealNameAlertShow;
- (void)onBatManAuthRealNameAlertFinished:(long long)arg0;
- (void)onBatManRetainAlertShow:(long long)arg0;
- (void)onBatManRetainAlertClicked:(long long)arg0 buttonType:(long long)arg1;
- (void)onBatManRealNameEvent:(long long)arg0 result:(long long)arg1 extraInfo:(id)arg2;
- (id)xPlayItem;
- (id)initWithGameModel:(id)arg0;
- (void)setXPlayItem:(id)arg0;
- (id)xplayBusinessConfig;
- (void)setXplayBusinessConfig:(id)arg0;
- (void)setUnifiedGameId:(id)arg0;
- (id /* block */)getDownloadInfoCallback;
- (void)setGetDownloadInfoCallback:(id /* block */)arg0;
- (void)_requestDownloadGameInfoWithCompletion:(id /* block */)arg0;
- (void)_requestLoadingPageConfig;
- (void)setDownloadGameInfoError:(id)arg0;
- (void)setDownloadGameInfo:(id)arg0;
- (id)downloadGameInfo;
- (id)downloadGameInfoError;
- (void)downloadGame;
- (void)_setupXPlayTrackerDelegate;
- (id /* block */)retryAuthBlock;
- (void)setRetryAuthBlock:(id /* block */)arg0;
- (BOOL)inAuthRequest;
- (void)setInAuthRequest:(BOOL)arg0;
- (id)serviceGameInfo;
- (void)trackAbnormalStatisticsEvent:(long long)arg0;
- (void)_handleAuthResultFailed;
- (void)trackXplayGameQuitType:(long long)arg0;
- (void)_handleAuthResultUserExit;
- (BOOL)enterQueue;
- (void)setCodeRateConfigration;
- (void)_handleGameForceStopWithInfo:(id)arg0;
- (void)setEnterQueue:(BOOL)arg0;
- (void)setRtcExceptionState:(long long)arg0;
- (long long)rtcExceptionState;
- (void)_showTimeupAlert;
- (BOOL)supportDownload;
- (id)getDeviceConfig;
- (id)getPackageConfig:(id)arg0;
- (long long)getMaxKbpsWithNetwork:(id)arg0;
- (long long)getMaxKbps:(long long)arg0 withH265ratio:(double)arg1;
- (long long)getMaxKbpsWithConfig;
- (id)_trackAuthResultStringFromAlertButtonType:(long long)arg0;
- (id)_windowTypeFromRetainAlertType:(long long)arg0;
- (id)_realNameTrackEventStringWithEvent:(long long)arg0 result:(long long)arg1;
- (void)setScreenRecordTask:(id)arg0;
- (id)screenRecordTask;
- (id)functionPanelItems;
- (void)hideKeyboard:(id /* block */)arg0;
- (void)getDownloadInfoWithCallback:(id /* block */)arg0;
- (void)queryCollectStatusWithCompletion:(id /* block */)arg0;
- (void)updateCollectStatus:(BOOL)arg0 withCompletion:(id /* block */)arg1;
- (id)downloadActionTitle;
- (BOOL)isRecording;
- (void)resume;
- (void).cxx_destruct;
- (void)setIsRecording:(BOOL)arg0;
- (void)preload;
- (void)stop;
- (long long)orientation;
- (id)controller;
- (BOOL)isShowing;
- (void)dequeue;
- (void)dealloc;
- (void)play;
- (void)pause;
- (id)view;
- (id)core;
- (id)api;
- (void)_willEnterForegroundNotification:(id)arg0;
- (void)_didEnterBackgroundNotification:(id)arg0;
- (void)setCore:(id)arg0;
- (id)currentResolution;
- (void)setApi:(id)arg0;
- (id)gameModel;
- (void)setGameModel:(id)arg0;

@end
