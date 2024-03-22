//
//     Generated by private class-dump
//

@class NSNumber, NSString;

@interface AFDAudioManager : NSObject <AWEDigitalWellbeingMessage, AWERTVMessage, AWEUserMessage, AFDAudioManagerProtocol> {
    BOOL _isMute;
    BOOL _needShowExpendAnimation;
    BOOL _isInForbiddingScene;
    BOOL _needRecoveryGlobalMute;
    NSNumber *_volumeHandlerID;
    double _lastUnactivedTimestamp;
    long long _forbidMuteScene;
}

@property (nonatomic) BOOL isMute;
@property (retain, nonatomic) NSNumber *volumeHandlerID;
@property (nonatomic) BOOL needShowExpendAnimation;
@property (nonatomic) double lastUnactivedTimestamp;
@property (nonatomic) BOOL isInForbiddingScene;
@property (nonatomic) BOOL needRecoveryGlobalMute;
@property (nonatomic) long long forbidMuteScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)muteAwemeFeatureIsEnabled;
+ (id)audioManager;

- (void)didFinishLogout;
- (void)muteAwemeWithNeedShowExpendAnimation:(BOOL)arg0;
- (void)showExpendAnimation;
- (BOOL)shouldShowExpendAnimation;
- (BOOL)enableCancelPreemptAudioFocusGlobalKey;
- (void)keepSecondaryAudioInTTVideoWithEnableKeepSecondaryAudio:(BOOL)arg0;
- (void)globalMuteSceneForbidding:(BOOL)arg0 scene:(long long)arg1;
- (void)setIsMute:(BOOL)arg0;
- (void)onVolumeChangeNotification:(id)arg0;
- (id)systemVolumeDidChangeNotification;
- (id)audioCategoryNotificationParameter;
- (id)changeReasonNotificationParameter;
- (void)teenModeDidChange:(BOOL)arg0 isLogout:(BOOL)arg1;
- (void)setVolumeHandlerID:(id)arg0;
- (id)volumeHandlerID;
- (void)voiceOverStatusChanged:(id)arg0;
- (void)p_addObserver;
- (void)p_applicationWillEnterForeground;
- (BOOL)afd_allowMuteWhenVoiceOverRunning;
- (BOOL)enableTrackAdjustVolumeSinceColdStart;
- (BOOL)enableMuteAwemeCancelHideVolumeSlider;
- (BOOL)isGlobalMuteSysVolumeShow;
- (BOOL)cancelMuteAwemeUseSystemVolume;
- (void)afd_trackSilenceLaunchApp:(BOOL)arg0;
- (void)trackAdjustVolumeSinceColdStartIfNeeded;
- (void)trackQuitSilenceModeClickWithEventType:(id)arg0;
- (void)afd_trackWarmLaunchApp;
- (void)trackClickSystemVolumeButtonWithFailedReason:(id)arg0;
- (BOOL)isInSpecialMode;
- (BOOL)isValidPlaying;
- (void)initMuteAweme;
- (void)enableSDKGlobalMuteFeatureIfNeeded;
- (void)p_registerMessage;
- (void)rtvServiceWillBegin:(id)arg0;
- (void)rtvServiceDidBegin:(id)arg0;
- (void)rtvServiceWillFinish:(id)arg0;
- (void)rtvServiceDidFinish:(id)arg0;
- (void)setNeedShowExpendAnimation:(BOOL)arg0;
- (void)p_muteAweme;
- (void)p_unmuteAwemeForced:(BOOL)arg0 completion:(id /* block */)arg1;
- (void)p_setSystemVolumeViewHidden:(BOOL)arg0;
- (BOOL)needShowExpendAnimation;
- (void)keepSecondaryAudioInLiveVideoWithEnableKeepSecondaryAudio:(BOOL)arg0;
- (void)p_resumeVolume;
- (void)p_changeVolume:(double)arg0 completion:(id /* block */)arg1;
- (void)observerSystemVolumeChanged:(id /* block */)arg0;
- (void)p_applicationEnterBackground;
- (BOOL)isInForbiddingScene;
- (BOOL)needRecoveryGlobalMute;
- (double)lastUnactivedTimestamp;
- (void)setLastUnactivedTimestamp:(double)arg0;
- (void)p_muteAwemeAfterWarmStartIfNeeded;
- (BOOL)enableForbidCameraMusicPanelWhenMute;
- (void)setIsInForbiddingScene:(BOOL)arg0;
- (void)setNeedRecoveryGlobalMute:(BOOL)arg0;
- (void)setForbidMuteScene:(long long)arg0;
- (void)unmuteAweme;
- (long long)forbidMuteScene;
- (void)createAndHideSysVolumeViewIfNeeded;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)isMute;

@end