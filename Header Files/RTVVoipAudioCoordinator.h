//
//     Generated by private class-dump
//

@class AVAudioPlayer, NSString, NSMutableArray, AVAudioSession, RxPromise, NSNumber, RTVVoipSession;
@protocol RTVXRSettingsInterface, RTVVoipConfigureManagerInterface, RxInjector, RTVCallObserver, RTVVoipResourceFetcherInterface, RTVVoipContextManagerInterface;

@interface RTVVoipAudioCoordinator : NSObject <RTVVoipAudioCoordinatorProtocol, AVAudioPlayerDelegate, RTVVoipSessionObserver, RTVVoipObserver> {
    BOOL _isPlayContinuousSound;
    BOOL _isPlayCallerSound;
    BOOL _isContinuousShake;
    BOOL _isSoundInterruptedByEnterBackground;
    BOOL _isNarrowView;
    BOOL _avoidAutoPlaySoundForCallKit;
    id<RxInjector> _injector;
    id<RTVVoipConfigureManagerInterface> _voipConfigureManager;
    id<RTVCallObserver> _callObserver;
    AVAudioSession *_audioSession;
    AVAudioPlayer *_player;
    AVAudioPlayer *_endAlertPlayer;
    AVAudioPlayer *_connectAlertPlayer;
    NSNumber *_isSpeaker;
    id<RTVVoipResourceFetcherInterface> _resourceIMP;
    NSString *_audioSessionCategory;
    NSString *_audioSessionMode;
    long long _categoryOptions;
    RTVVoipSession *_session;
    id<RTVVoipContextManagerInterface> _voipContextManager;
    RxPromise *_freezeAudioSessionOperationPromise;
    NSMutableArray *_registerCallingPlayDemanders;
    id<RTVXRSettingsInterface> _settings;
}

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) id<RTVVoipConfigureManagerInterface> voipConfigureManager;
@property (readonly, nonatomic) id<RTVCallObserver> callObserver;
@property (readonly, nonatomic) AVAudioSession *audioSession;
@property (retain, nonatomic) AVAudioPlayer *player;
@property (retain, nonatomic) AVAudioPlayer *endAlertPlayer;
@property (retain, nonatomic) AVAudioPlayer *connectAlertPlayer;
@property (nonatomic) BOOL isPlayContinuousSound;
@property (nonatomic) BOOL isPlayCallerSound;
@property (nonatomic) BOOL isContinuousShake;
@property (nonatomic) BOOL isSoundInterruptedByEnterBackground;
@property (retain, nonatomic) NSNumber *isSpeaker;
@property (retain, nonatomic) id<RTVVoipResourceFetcherInterface> resourceIMP;
@property (copy, nonatomic) NSString *audioSessionCategory;
@property (copy, nonatomic) NSString *audioSessionMode;
@property (nonatomic) long long categoryOptions;
@property (weak, nonatomic) RTVVoipSession *session;
@property (readonly, nonatomic) id<RTVVoipContextManagerInterface> voipContextManager;
@property (nonatomic) BOOL isNarrowView;
@property (retain, nonatomic) RxPromise *freezeAudioSessionOperationPromise;
@property (retain, nonatomic) NSMutableArray *registerCallingPlayDemanders;
@property (retain, nonatomic) id<RTVXRSettingsInterface> settings;
@property (nonatomic) BOOL avoidAutoPlaySoundForCallKit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rxAwakeFromPropertyInjection;
- (void)renderModel:(id)arg0 context:(id)arg1;
- (BOOL)hasHeadset;
- (void)audioRouteChangeListenerCallback:(id)arg0;
- (void)stopPlay;
- (void)__addObserver;
- (void)voipService:(id)arg0 voip:(id)arg1 switchNarrow:(BOOL)arg2;
- (id)voipContextManager;
- (id)__logTag;
- (void)notifyDidChangeActive:(BOOL)arg0;
- (void)voipSession:(id)arg0 typeDidChangeTo:(long long)arg1 fromType:(long long)arg2;
- (void)rtvSession:(id)arg0 statusDidChangeTo:(long long)arg1 fromStatus:(long long)arg2;
- (void)rtvSession:(id)arg0 contextKeyPathChange:(id)arg1 fromValue:(id)arg2 toValue:(id)arg3;
- (void)rtvSession:(id)arg0 participatorsDidChange:(id)arg1 oldParticipators:(id)arg2;
- (void)playForReceive;
- (void)storeAudioSessionContextIfNeeded;
- (void)refreshPlayCallerSoundIfNeeded;
- (void)refreshPlayCallerSoundByCallKit;
- (void)startCallingPlayWithIdentifier:(id)arg0;
- (void)stopCallingPlayWithIdentifier:(id)arg0;
- (void)adjustAudioSessionOptionsIfNeededForPiP;
- (id)voipConfigureManager;
- (void)__stopShake;
- (void)__playShake;
- (BOOL)isContinuousShake;
- (void)setIsContinuousShake:(BOOL)arg0;
- (void)__handleEnterForegroundNotification:(id)arg0;
- (double)__currentTime;
- (void)__unFreezeAudioSessionIfNeeded:(BOOL)arg0;
- (void)__handleEnterBackgroundNotification:(id)arg0;
- (id)__getSoundPath:(id)arg0;
- (BOOL)isPlayContinuousSound;
- (void)__stopSoundOrShake;
- (void)setAvoidAutoPlaySoundForCallKit:(BOOL)arg0;
- (void)__handleStateChange:(long long)arg0 toStatus:(long long)arg1;
- (BOOL)__activeAudioSession;
- (void)__playSound;
- (BOOL)__setupPlaybackSessionForBackground;
- (void)__storeAudioSession;
- (void)__refreshPlayCallerSoundIfNeeded;
- (id)__playDemanders;
- (id)__playDemandersAdd:(id)arg0;
- (id)__playDemandersRemove:(id)arg0;
- (BOOL)avoidAutoPlaySoundForCallKit;
- (BOOL)isNarrowView;
- (id)registerCallingPlayDemanders;
- (void)handleApplicationAudioSessionInterrutionNotification:(id)arg0;
- (void)__applicationEnterForground:(id)arg0;
- (void)__freezeAudioSessionIfNeeded:(BOOL)arg0;
- (void)__playVoipEndSound;
- (id)endAlertPlayer;
- (id)connectAlertPlayer;
- (void)setIsPlayCallerSound:(BOOL)arg0;
- (id)resourceIMP;
- (id)__getSoundFullPath:(id)arg0;
- (void)__swizzleAudioSessionMethods;
- (id)freezeAudioSessionOperationPromise;
- (void)__swizzleAudioSessionMethodsOnce;
- (void)setFreezeAudioSessionOperationPromise:(id)arg0;
- (void)__asyncRecoverAudioSessionWithCategory:(id)arg0 mode:(id)arg1 options:(long long)arg2;
- (BOOL)isPlayCallerSound;
- (void)setIsSoundInterruptedByEnterBackground:(BOOL)arg0;
- (BOOL)isSoundInterruptedByEnterBackground;
- (void)__playVoipConnectSound;
- (BOOL)__enableSpeaker:(BOOL)arg0;
- (void)setIsNarrowView:(BOOL)arg0;
- (BOOL)__setupPlayAndRecordSession:(BOOL)arg0;
- (BOOL)__setupPlaybackSession;
- (void)setEndAlertPlayer:(id)arg0;
- (void)setConnectAlertPlayer:(id)arg0;
- (void)setIsPlayContinuousSound:(BOOL)arg0;
- (void)setResourceIMP:(id)arg0;
- (void)setRegisterCallingPlayDemanders:(id)arg0;
- (id)callObserver;
- (void).cxx_destruct;
- (void)setSession:(id)arg0;
- (void)setSettings:(id)arg0;
- (void)setAudioSessionCategory:(id)arg0;
- (id)isSpeaker;
- (id)session;
- (void)setPlayer:(id)arg0;
- (id)settings;
- (id)injector;
- (id)audioSessionCategory;
- (void)dealloc;
- (id)player;
- (id)audioSession;
- (void)audioPlayerDidFinishPlaying:(id)arg0 successfully:(BOOL)arg1;
- (void)audioPlayerDecodeErrorDidOccur:(id)arg0 error:(id)arg1;
- (long long)categoryOptions;
- (void)setIsSpeaker:(id)arg0;
- (id)audioSessionMode;
- (void)setAudioSessionMode:(id)arg0;
- (void)setCategoryOptions:(long long)arg0;

@end
