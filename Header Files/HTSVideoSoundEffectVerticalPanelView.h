//
//     Generated by private class-dump
//

@class UIView, AWEVerticalSlider, UIImageView, NSString, UISlider, UILabel, ACCAnimatedButton;
@protocol HTSVideoSoundEffectPanelViewActionDelegate;

@interface HTSVideoSoundEffectVerticalPanelView : UIView <HTSVideoSoundEffectPanelViewProtocol> {
    BOOL _userControlVoiceDisable;
    BOOL _preconditionVoiceDisable;
    BOOL _preconditionBgmMusicDisable;
    float _voiceVolume;
    float _musicVolume;
    id<HTSVideoSoundEffectPanelViewActionDelegate> _actionDelegate;
    UISlider *_bgmSlider;
    UISlider *_voiceSlider;
    ACCAnimatedButton *_backButton;
    AWEVerticalSlider *_bgmSliderView;
    UILabel *_bgmValueLabel;
    AWEVerticalSlider *_voiceSliderView;
    UILabel *_voiceValueLabel;
    UIImageView *_voiceImageView;
    UIView *_headerView;
    UILabel *_titleLabel;
}

@property (retain, nonatomic) UISlider *bgmSlider;
@property (retain, nonatomic) UISlider *voiceSlider;
@property (retain, nonatomic) ACCAnimatedButton *backButton;
@property (retain, nonatomic) AWEVerticalSlider *bgmSliderView;
@property (retain, nonatomic) UILabel *bgmValueLabel;
@property (retain, nonatomic) AWEVerticalSlider *voiceSliderView;
@property (retain, nonatomic) UILabel *voiceValueLabel;
@property (retain, nonatomic) UIImageView *voiceImageView;
@property (retain, nonatomic) UIView *headerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (nonatomic) float voiceVolume;
@property (nonatomic) float musicVolume;
@property (weak, nonatomic) id<HTSVideoSoundEffectPanelViewActionDelegate> actionDelegate;
@property (nonatomic) BOOL userControlVoiceDisable;
@property (nonatomic) BOOL preconditionVoiceDisable;
@property (nonatomic) BOOL preconditionBgmMusicDisable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setMusicVolume:(float)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 useBlurBackground:(BOOL)arg1;
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
- (id)voiceSliderView;
- (id)bgmSliderView;
- (void)setVoiceSliderView:(id)arg0;
- (void)setBgmSliderView:(id)arg0;
- (void)sliderValueDidFinishChange:(id)arg0;
- (void)setVoiceSlider:(id)arg0;
- (void)setBgmSlider:(id)arg0;
- (id)voiceValueLabel;
- (id)bgmValueLabel;
- (void)layoutValueLabels;
- (void)setBgmValueLabel:(id)arg0;
- (void)setVoiceValueLabel:(id)arg0;
- (id)voiceImageView;
- (void)setVoiceImageView:(id)arg0;
- (void)sliderValueChanged:(id)arg0;
- (float)musicVolume;
- (void).cxx_destruct;
- (id)actionDelegate;
- (void)close;
- (void)show;
- (id)titleLabel;
- (void)setHeaderView:(id)arg0;
- (void)layoutSubviews;
- (id)headerView;
- (void)setTitleLabel:(id)arg0;
- (id)backButton;
- (void)setBackButton:(id)arg0;
- (void)setActionDelegate:(id)arg0;
- (float)voiceVolume;
- (void)setVoiceVolume:(float)arg0;
- (void)backButtonTapped;

@end
