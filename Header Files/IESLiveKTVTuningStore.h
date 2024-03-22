//
//     Generated by private class-dump
//

@class UIColor, HTSEventContext, IESLiveKTVTuningEffectViewModel, NSString, IESLiveComponentContext, IESLiveKTVCommonApi;
@protocol IESLiveRoomService, IESLiveTuningStorePlayerProtocol;

@interface IESLiveKTVTuningStore : NSObject <IESLiveKTVTuningActions> {
    BOOL _isLiveRoom;
    BOOL _reverberationEnabled;
    BOOL _enableKTVToneChange;
    float _voiceVolume;
    float _musicVolume;
    id<IESLiveRoomService> _room;
    HTSEventContext *_trackContext;
    unsigned long long _voiceVolumePercent;
    double _toneVolume;
    id<IESLiveTuningStorePlayerProtocol> _player;
    IESLiveKTVTuningEffectViewModel *_tuningEffectViewModel;
    UIColor *_effectTitleColor;
    IESLiveKTVCommonApi *_ktvApi;
    IESLiveComponentContext *_componentContext;
    double _maxVoiceVolum;
}

@property (retain, nonatomic) IESLiveKTVCommonApi *ktvApi;
@property (retain, nonatomic) IESLiveComponentContext *componentContext;
@property (nonatomic) double maxVoiceVolum;
@property (nonatomic) BOOL isLiveRoom;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (nonatomic) unsigned long long voiceVolumePercent;
@property (nonatomic) float voiceVolume;
@property (nonatomic) float musicVolume;
@property (nonatomic) double toneVolume;
@property (nonatomic) BOOL reverberationEnabled;
@property (nonatomic) BOOL enableKTVToneChange;
@property (weak, nonatomic) id<IESLiveTuningStorePlayerProtocol> player;
@property (retain, nonatomic) IESLiveKTVTuningEffectViewModel *tuningEffectViewModel;
@property (retain, nonatomic) UIColor *effectTitleColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setMusicVolume:(float)arg0;
- (id)trackContext;
- (void)setTrackContext:(id)arg0;
- (id)componentContext;
- (void)setReverberationEnabled:(BOOL)arg0;
- (BOOL)reverberationEnabled;
- (void)setComponentContext:(id)arg0;
- (void)didSetAttachingDIContext;
- (void)setIsLiveRoom:(BOOL)arg0;
- (BOOL)isLiveRoom;
- (double)toneVolume;
- (void)setToneVolume:(double)arg0;
- (id)initWithRoom:(id)arg0 eventContext:(id)arg1 componentContext:(id)arg2;
- (id)ktvApi;
- (BOOL)enableKTVToneChange;
- (void)voiceValueChanged:(float)arg0;
- (void)musicValueChanged:(float)arg0;
- (void)toneValueChanged:(double)arg0;
- (void)toggleEarReturnMode;
- (void)toggleReverberationMode;
- (void)toggleCurrentTuningEffectWithNameID:(id)arg0;
- (void)setKtvApi:(id)arg0;
- (void)setEnableKTVToneChange:(BOOL)arg0;
- (id)tuningEffectViewModel;
- (unsigned long long)voiceVolumePercent;
- (id)p_kvStoreKeyFrom:(id)arg0;
- (id)effectTitleColor;
- (void)setEffectTitleColor:(id)arg0;
- (void)setTuningEffectViewModel:(id)arg0;
- (void)setMaxVoiceVolum:(double)arg0;
- (double)maxVoiceVolum;
- (void)setVoiceVolumePercent:(unsigned long long)arg0;
- (float)musicVolume;
- (void).cxx_destruct;
- (void)stop;
- (void)setPlayer:(id)arg0;
- (void)enter;
- (void)reset;
- (void)exit;
- (id)player;
- (float)voiceVolume;
- (void)setVoiceVolume:(float)arg0;
- (id)room;
- (void)setRoom:(id)arg0;

@end