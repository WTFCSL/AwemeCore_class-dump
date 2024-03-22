//
//     Generated by private class-dump
//

@protocol IESScreenCastMixAdapter <NSObject>

@optional

- (unsigned long long)playStatus;
- (void)showCastSearchDevicesView;
- (void)closeSearchDeviceViewController;
- (id)byteScreenCastContext;
- (BOOL)isScreenCasting;
- (void)showCastControlViewWithConfig:(id)arg0;
- (void)startupScreenCastIfNeed;
- (void)closeScreenCast:(BOOL)arg0 disconnect:(BOOL)arg1;
- (void)seekToProgress:(double)arg0;
- (id)screenCastSDKCommonParams;
- (void)setupScreenCastIfNeed;
- (void)updateVideoID:(id)arg0 XsgIndentifyStatus:(unsigned long long)arg1;
- (void)showConnectErrorAlert;
- (BOOL)canSkipSearch;
- (void)closeScreenCast:(BOOL)arg0;
- (void)updateScreenCastControlViewConfig:(id)arg0;
- (void)startFetchUrl;
- (void)didFetchUrlWithError:(id)arg0;
- (BOOL)isConnectError;
- (void)showClarityChooseView;
- (BOOL)isOpenWeakenWith:(id)arg0;
- (id)recommendAppWith:(id)arg0;
- (id)screenCastSDKTrackParams;
- (void)castPlayWithPlayItem:(id)arg0;
- (BOOL)isShowFullSearchView;
- (void)setScreenCastDelegate:(id)arg0;
- (long long)currentTime;
- (BOOL)isPlaying;
- (void)play;
- (void)pause;
- (void)updateSceneID:(id)arg0;
- (void)showLocalNetworkAlertToViewController:(id)arg0;

@end
