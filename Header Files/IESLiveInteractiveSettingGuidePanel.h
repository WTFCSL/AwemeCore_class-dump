//
//     Generated by private class-dump
//

@class UIButton, IESLiveInteractiveSettingGuidePanelSceneSwitchConfig, UIImageView, UISwitch, UILabel, UIView, IESLiveInteractiveSettingGuidePanelSceneSwitch;

@interface IESLiveInteractiveSettingGuidePanel : UIView {
    id /* block */ _tapBlock;
    UILabel *_titleLabel;
    UIView *_titleSeperatorLineView;
    UIImageView *_previewImageView;
    IESLiveInteractiveSettingGuidePanelSceneSwitch *_floatSceneSwitch;
    IESLiveInteractiveSettingGuidePanelSceneSwitch *_equalSceneSwitch;
    UILabel *_micNumChangeWithOnlineNumLabel;
    UISwitch *_micNumChangeWithOnlineNumSwith;
    UIView *_bottomSeperatorLineView;
    UIButton *_okButton;
    IESLiveInteractiveSettingGuidePanelSceneSwitchConfig *_floatSceneSwitchConfig;
    IESLiveInteractiveSettingGuidePanelSceneSwitchConfig *_equalSceneSwitchConfig;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *titleSeperatorLineView;
@property (retain, nonatomic) UIImageView *previewImageView;
@property (retain, nonatomic) IESLiveInteractiveSettingGuidePanelSceneSwitch *floatSceneSwitch;
@property (retain, nonatomic) IESLiveInteractiveSettingGuidePanelSceneSwitch *equalSceneSwitch;
@property (retain, nonatomic) UILabel *micNumChangeWithOnlineNumLabel;
@property (retain, nonatomic) UISwitch *micNumChangeWithOnlineNumSwith;
@property (retain, nonatomic) UIView *bottomSeperatorLineView;
@property (retain, nonatomic) UIButton *okButton;
@property (retain, nonatomic) IESLiveInteractiveSettingGuidePanelSceneSwitchConfig *floatSceneSwitchConfig;
@property (retain, nonatomic) IESLiveInteractiveSettingGuidePanelSceneSwitchConfig *equalSceneSwitchConfig;
@property (copy, nonatomic) id /* block */ tapBlock;

- (id /* block */)tapBlock;
- (void)setTapBlock:(id /* block */)arg0;
- (id)titleSeperatorLineView;
- (void)setTitleSeperatorLineView:(id)arg0;
- (id)initWithType:(unsigned long long)arg0 isMicNumChangeWithOnlineNum:(BOOL)arg1;
- (void)p_updateSceneSwitchType:(unsigned long long)arg0 isMicNumChangeWithOnlineNum:(BOOL)arg1;
- (id)floatSceneSwitch;
- (id)equalSceneSwitch;
- (id)micNumChangeWithOnlineNumSwith;
- (id)p_getPreviewURL;
- (id)micNumChangeWithOnlineNumLabel;
- (id)bottomSeperatorLineView;
- (unsigned long long)p_getCurrentSceneSwitchType;
- (BOOL)p_isDynamic;
- (id)floatSceneSwitchConfig;
- (id)equalSceneSwitchConfig;
- (void)p_micNumChangeWithOnlineNumSwithAction:(id)arg0;
- (void)p_onClickOKButton;
- (void)setFloatSceneSwitch:(id)arg0;
- (void)setEqualSceneSwitch:(id)arg0;
- (void)setMicNumChangeWithOnlineNumLabel:(id)arg0;
- (void)setMicNumChangeWithOnlineNumSwith:(id)arg0;
- (void)setBottomSeperatorLineView:(id)arg0;
- (void)setFloatSceneSwitchConfig:(id)arg0;
- (void)setEqualSceneSwitchConfig:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)titleLabel;
- (id)okButton;
- (void)setOkButton:(id)arg0;
- (void)setTitleLabel:(id)arg0;
- (void)setupViews;
- (id)previewImageView;
- (void)setPreviewImageView:(id)arg0;

@end