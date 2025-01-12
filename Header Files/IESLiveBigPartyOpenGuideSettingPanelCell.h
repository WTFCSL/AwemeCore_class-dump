//
//     Generated by private class-dump
//

@class UIButton, NSString, UISwitch, IESLiveBigPartyOpenGuideSettingPanelCellConfig, UILabel, UIView;

@interface IESLiveBigPartyOpenGuideSettingPanelCell : UITableViewCell <IESLiveBigPartyOpenGuideSettingPanelCellProtocol> {
    IESLiveBigPartyOpenGuideSettingPanelCellConfig *_config;
    UIView *_switchAndTitleContentView;
    UILabel *_titleLabel;
    UISwitch *_onOffSuperficialSwitch;
    UIButton *_onOffSwitchTouchButton;
    UIView *_containerView;
}

@property (retain, nonatomic) IESLiveBigPartyOpenGuideSettingPanelCellConfig *config;
@property (retain, nonatomic) UIView *switchAndTitleContentView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UISwitch *onOffSuperficialSwitch;
@property (retain, nonatomic) UIButton *onOffSwitchTouchButton;
@property (retain, nonatomic) UIView *containerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)onOffSwitchTouchButton;
- (id)onOffSuperficialSwitch;
- (void)setOnOffSwitchTouchButton:(id)arg0;
- (void)setOnOffSuperficialSwitch:(id)arg0;
- (void)setSwitchAndTitleContentView:(id)arg0;
- (id)switchAndTitleContentView;
- (void)onOffSwitchTouchButtonDidClick;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (id)config;
- (id)titleLabel;
- (void)updateWithConfig:(id)arg0;
- (void)setContainerView:(id)arg0;
- (id)containerView;
- (void)setTitleLabel:(id)arg0;
- (void)setupUI;

@end
