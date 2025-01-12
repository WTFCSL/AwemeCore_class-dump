//
//     Generated by private class-dump
//

@class IESLiveInteractSubtitleViewModel, NSString, IESLiveInteractSubtitleApi, IESLiveInteractSubtitleView, IESLiveInteractSubtitleConfig, IESLivePopupItem;

@interface IESLiveInteractSubtitleComponent : IESLiveInteractComponentBase <IESLiveInteractSubtitleCallbackReceiver, HTSLiveMessageSubscriber, IESLiveInteractSubtitleRouter, IESLiveSEIListener, IESLiveInteractionLinkerServiceAction, IESLiveToolbarComponentHandler, HTSLiveCleanScreenActions, IESLivePaidStreamAction, IESLiveScreenRecordActions> {
    BOOL _subtitleStateForRoom;
    BOOL _allowSubtitle;
    BOOL _switchIsOn;
    BOOL _settingLoaded;
    BOOL _readyToStartSubtitle;
    BOOL _subtitleStateForAudience;
    BOOL _dismissCalledByUnmount;
    BOOL _isMusicPlaying;
    BOOL _subtitleOpenByEnterRoom;
    BOOL _subtitleNeedHide;
    BOOL _isRecording;
    BOOL _firstMessageReceived;
    BOOL _pressPublicScreen;
    BOOL _subtitleStartedForLinkedUser;
    IESLiveInteractSubtitleView *_subtitleView;
    IESLiveInteractSubtitleViewModel *_viewModel;
    IESLiveInteractSubtitleApi *_api;
    IESLiveInteractSubtitleConfig *_config;
    IESLivePopupItem *_popupItem;
    long long _msgVersion;
    double _startTime;
    double _startPlayingTime;
    double _startPauseTime;
    unsigned long long _anchorExperimentGroup;
}

@property (retain, nonatomic) IESLiveInteractSubtitleView *subtitleView;
@property (retain, nonatomic) IESLiveInteractSubtitleViewModel *viewModel;
@property (retain, nonatomic) IESLiveInteractSubtitleApi *api;
@property (retain, nonatomic) IESLiveInteractSubtitleConfig *config;
@property (retain, nonatomic) IESLivePopupItem *popupItem;
@property (nonatomic) BOOL subtitleStateForRoom;
@property (nonatomic) BOOL allowSubtitle;
@property (nonatomic) BOOL switchIsOn;
@property (nonatomic) long long msgVersion;
@property (nonatomic) BOOL settingLoaded;
@property (nonatomic) BOOL readyToStartSubtitle;
@property (nonatomic) BOOL subtitleStateForAudience;
@property (nonatomic) double startTime;
@property (nonatomic) BOOL dismissCalledByUnmount;
@property (nonatomic) BOOL isMusicPlaying;
@property (nonatomic) BOOL subtitleOpenByEnterRoom;
@property (nonatomic) BOOL subtitleNeedHide;
@property (nonatomic) double startPlayingTime;
@property (nonatomic) double startPauseTime;
@property (nonatomic) BOOL isRecording;
@property (nonatomic) BOOL firstMessageReceived;
@property (nonatomic) BOOL pressPublicScreen;
@property (nonatomic) unsigned long long anchorExperimentGroup;
@property (nonatomic) BOOL subtitleStartedForLinkedUser;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isMusicPlaying;
- (void)didStartRecording;
- (void)componentMount;
- (void)componentUnmount;
- (void)toolbarReceiveComponent:(id)arg0 completion:(id /* block */)arg1;
- (void)switchCleanScreenMode:(long long)arg0;
- (void)paidStreamTrialDidStart:(long long)arg0;
- (void)paidStreamTrialDidStop:(long long)arg0;
- (void)paidStreamTrialDidFinish:(long long)arg0 reason:(unsigned long long)arg1;
- (void)paidStreamTrialDidPromised:(long long)arg0;
- (void)paidStreamTrialDidInstall:(long long)arg0 reason:(unsigned long long)arg1;
- (unsigned long long)supportSeiTypes;
- (void)onParseredWithSEIResult:(id)arg0;
- (void)updateSubtitleSetting:(BOOL)arg0 requestPage:(id)arg1 completion:(id /* block */)arg2;
- (void)openSubtitleSettingPanel:(BOOL)arg0;
- (BOOL)isSubtitleDefaultStyle;
- (void)setPopupItem:(id)arg0;
- (id)popupItem;
- (void)onSubtitleStateChanged:(id)arg0;
- (void)onSubtitleMessageReceived:(id)arg0;
- (BOOL)needPressPublicScreen;
- (void)loadSetting;
- (void)updateSubtitleStyle:(long long)arg0;
- (void)interactionLinkerServiceInteractDidStart:(id)arg0;
- (void)interactionLinkerServiceInteractWillEnd:(id)arg0;
- (void)setIsMusicPlaying:(BOOL)arg0;
- (void)showSubtitleView;
- (void)componentBindContext;
- (double)startPlayingTime;
- (void)setStartPlayingTime:(double)arg0;
- (BOOL)allowStartSubtitle;
- (BOOL)subtitleStarted;
- (void)deleteSubtitleView;
- (BOOL)isSingingCheck:(id)arg0;
- (void)needUpdateCoordinate;
- (BOOL)enableAudioSubtitle;
- (void)setMsgVersion:(long long)arg0;
- (void)setSubtitleStateForRoom:(BOOL)arg0;
- (void)setSettingLoaded:(BOOL)arg0;
- (void)setReadyToStartSubtitle:(BOOL)arg0;
- (void)setDismissCalledByUnmount:(BOOL)arg0;
- (void)setSubtitleOpenByEnterRoom:(BOOL)arg0;
- (void)setAnchorExperimentGroup:(unsigned long long)arg0;
- (void)fetchAudienceSubtitleSetting;
- (void)anchorObserveKTVStatus;
- (BOOL)subtitleStateForRoom;
- (void)trackUseDuration:(id)arg0;
- (void)trackPauseDuration:(id)arg0;
- (BOOL)subtitleStateForAudience;
- (void)dismissSubtitleView;
- (void)setSubtitleStateForAudience:(BOOL)arg0;
- (unsigned long long)anchorExperimentGroup;
- (void)startSubtitleForRoom;
- (BOOL)subtitleNeedHide;
- (BOOL)allowSubtitle;
- (BOOL)switchIsOn;
- (void)trackAnchorSubtitleStart:(BOOL)arg0;
- (void)trackSubtitleClose:(id)arg0;
- (void)trackSubtitleSettingPanelClicked:(id)arg0;
- (BOOL)pressPublicScreen;
- (BOOL)readyToStartSubtitle;
- (BOOL)subtitleStartedForLinkedUser;
- (void)setSubtitleStartedForLinkedUser:(BOOL)arg0;
- (void)setPressPublicScreen:(BOOL)arg0;
- (BOOL)subtitleOpenByEnterRoom;
- (BOOL)dismissCalledByUnmount;
- (void)setAllowSubtitle:(BOOL)arg0;
- (void)trackOpenSubtitleSettingPanel:(id)arg0;
- (BOOL)settingLoaded;
- (long long)msgVersion;
- (id)getUserType;
- (void)messageCheckIn;
- (void)messageStart;
- (void)messageStop;
- (void)setStartPauseTime:(double)arg0;
- (void)setSubtitleNeedHide:(BOOL)arg0;
- (void)hideSubtitleView:(BOOL)arg0 inPaidScene:(long long)arg1;
- (double)startPauseTime;
- (void)hideSubtitleView;
- (void)keyboardDidHide:(id)arg0;
- (BOOL)isRecording;
- (void)setConfig:(id)arg0;
- (void)setStartTime:(double)arg0;
- (void).cxx_destruct;
- (void)setIsRecording:(BOOL)arg0;
- (id)config;
- (void)keyboardWillShow:(id)arg0;
- (void)setViewModel:(id)arg0;
- (void)setSubtitleView:(id)arg0;
- (double)startTime;
- (id)viewModel;
- (void)updateStyle:(long long)arg0;
- (id)subtitleView;
- (void)messageReceived:(id)arg0;
- (void)setSwitchIsOn:(BOOL)arg0;
- (id)getConfig;
- (id)api;
- (BOOL)firstMessageReceived;
- (void)setFirstMessageReceived:(BOOL)arg0;
- (void)didStopRecording;
- (void)setApi:(id)arg0;

@end
