//
//     Generated by private class-dump
//

@class NSString, BDByteScreenCastManager, BDSCProgressInfo;
@protocol BDSCDeviceProtocol, IESScreenCastDelegate;

@interface IESScreenCastAdapter : NSObject <BDByteScreenCastManagerDelegate, IESScreenCastMixAdapter> {
    BOOL _shouldAutoConnect;
    BOOL _isConnectError;
    BOOL _initialized;
    id<IESScreenCastDelegate> _delegate;
    BDSCProgressInfo *_curProgressInfo;
    NSString *_sceneID;
    unsigned long long _playStatus;
    BDByteScreenCastManager *_castManager;
    id<BDSCDeviceProtocol> _currentDevice;
}

@property (retain, nonatomic) BDByteScreenCastManager *castManager;
@property (retain, nonatomic) BDSCProgressInfo *curProgressInfo;
@property (nonatomic) unsigned long long playStatus;
@property (copy, nonatomic) NSString *sceneID;
@property (nonatomic) BOOL initialized;
@property (retain, nonatomic) id<BDSCDeviceProtocol> currentDevice;
@property (nonatomic) BOOL isConnectError;
@property (weak, nonatomic) id<IESScreenCastDelegate> delegate;
@property (readonly, nonatomic) long long currentTime;
@property (nonatomic) BOOL shouldAutoConnect;
@property (readonly, nonatomic) BOOL enableRetryCheckConnect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareInstance;

- (unsigned long long)playStatus;
- (void)setPlayStatus:(unsigned long long)arg0;
- (void)showCastSearchDevicesView;
- (void)closeSearchDeviceViewController;
- (id)byteScreenCastContext;
- (id)controlViewConfig;
- (void)updateDayMode:(BOOL)arg0;
- (BOOL)isScreenCasting;
- (void)showCastControlViewWithConfig:(id)arg0;
- (void)startupScreenCastIfNeed;
- (void)closeScreenCast:(BOOL)arg0 disconnect:(BOOL)arg1;
- (BOOL)isCastViewShowing;
- (void)seekToProgress:(double)arg0;
- (void)preSearch;
- (void)stopPreSearchIfNeeded;
- (id)curProgressInfo;
- (void)castPlayProgressInfoChanged:(id)arg0;
- (void)castPlayStatusChanged:(unsigned long long)arg0;
- (id)screenCastSDKCommonParams;
- (void)setupScreenCastIfNeed;
- (id)LBSECRETKEY;
- (id)LBAPPID;
- (void)setCastManager:(id)arg0;
- (id)castManager;
- (void)setupBDByteAppInfo;
- (void)registerBDByteCastManager;
- (void)p_setupGeckoService;
- (void)updateVideoID:(id)arg0 XsgIndentifyStatus:(unsigned long long)arg1;
- (void)dismissControlViewWithCompletion:(id /* block */)arg0;
- (id)sceneConfigForSceneID:(id)arg0;
- (void)showConnectErrorAlert;
- (BOOL)canSkipSearch;
- (void)closeScreenCast:(BOOL)arg0;
- (void)updateScreenCastControlViewConfig:(id)arg0;
- (void)connectToDevice:(id)arg0 onError:(id)arg1;
- (void)didConnectToDevice:(id)arg0;
- (void)castControlViewBackButtonClicked;
- (void)setCurProgressInfo:(id)arg0;
- (void)startConnectToDevice:(id)arg0;
- (void)disConnectToDevice:(id)arg0;
- (void)castPlayClarityDidChanged:(id)arg0;
- (void)castPlayDidClosed:(id)arg0;
- (id)castPlayEventExtraParams:(id)arg0;
- (void)castPlaySeriesButtonClicked;
- (void)castPlayAttemptToChangeToLandscape:(BOOL)arg0;
- (void)castPlayClarityChooseButtonClicked;
- (void)castControlViewDanmakuButtonClicked:(id)arg0;
- (void)castPlayAttemptToShowToastWithTitle:(id)arg0;
- (void)didFindByteScreenCastDevices:(id)arg0 onError:(id)arg1;
- (void)castPlayNotSupportClarity:(id)arg0;
- (void)updateCastTrackerService:(id)arg0;
- (void)startFetchUrl;
- (void)didFetchUrlWithError:(id)arg0;
- (void)castPlayWithPlayItem:(id)arg0 onError:(id)arg1;
- (void)showTVToastWithContent:(id)arg0;
- (BOOL)isConnectError;
- (void)setIsConnectError:(BOOL)arg0;
- (void)markRefreshURL;
- (void)attemptChangeClarityToClarity:(id)arg0;
- (void)showClarityChooseView;
- (void)disConnectIfNeed;
- (void)retryConnect;
- (void)preloadPlayItem:(id)arg0;
- (void)seekLiveToNewest;
- (BOOL)enableRetryCheckConnect;
- (BOOL)isOpenWeakenWith:(id)arg0;
- (id)recommendAppWith:(id)arg0;
- (id)screenCastSDKTrackParams;
- (void)updateTraceLogInfo:(id)arg0;
- (void)castPlayWithPlayItem:(id)arg0;
- (void)preRedirectPlayItem:(id)arg0;
- (void)sendCastDanmakuSetting:(id)arg0;
- (void)liveSeekToProgress:(double)arg0;
- (void)setShouldAutoConnect:(BOOL)arg0;
- (BOOL)shouldAutoConnect;
- (BOOL)isShowFullSearchView;
- (void)setScreenCastDelegate:(id)arg0;
- (BOOL)isShowUnFoldControlView;
- (BOOL)initialized;
- (void)setInitialized:(BOOL)arg0;
- (void)setSceneID:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)currentDevice;
- (id)sceneID;
- (id)delegate;
- (long long)currentTime;
- (BOOL)isPlaying;
- (void)setDelegate:(id)arg0;
- (void)play;
- (void)pause;
- (void)setCurrentDevice:(id)arg0;
- (void)updateSceneID:(id)arg0;

@end