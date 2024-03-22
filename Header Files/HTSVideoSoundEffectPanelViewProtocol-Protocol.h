//
//     Generated by private class-dump
//

@class UISlider;
@protocol HTSVideoSoundEffectPanelViewActionDelegate;

@protocol HTSVideoSoundEffectPanelViewProtocol <NSObject>

@property (nonatomic) float voiceVolume;
@property (nonatomic) float musicVolume;
@property (readonly, nonatomic) UISlider *bgmSlider;
@property (readonly, nonatomic) UISlider *voiceSlider;
@property (weak, nonatomic) id<HTSVideoSoundEffectPanelViewActionDelegate> actionDelegate;
@property (nonatomic) BOOL userControlVoiceDisable;
@property (nonatomic) BOOL preconditionVoiceDisable;
@property (nonatomic) BOOL preconditionBgmMusicDisable;

- (void)setMusicVolume:(float)arg0;
- (void)adjustForMusicSelectPanelOptimizationWithDelegate:(id)arg0;
- (void)setUserControlVoiceDisable:(BOOL)arg0;
- (BOOL)preconditionVoiceDisable;
- (id)bgmSlider;
- (id)voiceSlider;
- (BOOL)userControlVoiceDisable;
- (void)setPreconditionVoiceDisable:(BOOL)arg0;
- (BOOL)preconditionBgmMusicDisable;
- (void)setPreconditionBgmMusicDisable:(BOOL)arg0;
- (void)updateBgmMaximumValue:(double)arg0;
- (float)musicVolume;
- (id)actionDelegate;
- (void)close;
- (void)show;
- (void)setActionDelegate:(id)arg0;
- (float)voiceVolume;
- (void)setVoiceVolume:(float)arg0;

@end
