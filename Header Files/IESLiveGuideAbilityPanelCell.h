//
//     Generated by private class-dump
//

@class UIImageView, UISwitch, UILabel, UIView, CreateInfoResponse_ConfigItem;

@interface IESLiveGuideAbilityPanelCell : UITableViewCell {
    UIView *_topSeparator;
    unsigned long long _style;
    unsigned long long _liveType;
    UIImageView *_leftIcon;
    UIImageView *_rightIcon;
    UILabel *_leftTitle;
    UILabel *_leftSubTitle;
    UILabel *_rightTitle;
    UISwitch *_rightSwitch;
    UIView *_redDot;
    CreateInfoResponse_ConfigItem *_configItem;
}

@property (retain, nonatomic) UIImageView *leftIcon;
@property (retain, nonatomic) UIImageView *rightIcon;
@property (retain, nonatomic) UILabel *leftTitle;
@property (retain, nonatomic) UILabel *leftSubTitle;
@property (retain, nonatomic) UILabel *rightTitle;
@property (retain, nonatomic) UISwitch *rightSwitch;
@property (retain, nonatomic) UIView *redDot;
@property (retain, nonatomic) CreateInfoResponse_ConfigItem *configItem;
@property (retain, nonatomic) UIView *topSeparator;
@property (nonatomic) unsigned long long style;
@property (nonatomic) unsigned long long liveType;

- (void)configWithItem:(id)arg0;
- (void)setLiveType:(unsigned long long)arg0;
- (unsigned long long)liveType;
- (id)configItem;
- (void)setConfigItem:(id)arg0;
- (void)setLeftIcon:(id)arg0;
- (void)setRedDot:(id)arg0;
- (id)redDot;
- (void)setRightIcon:(id)arg0;
- (void)setLeftSubTitle:(id)arg0;
- (id)leftSubTitle;
- (void)setRightSwitch:(id)arg0;
- (id)rightSwitch;
- (void)handleItemTappedTrack:(id)arg0;
- (void)trackEvent:(id)arg0 extraTrackParams:(id)arg1;
- (void)triggerSwitch:(id)arg0;
- (void)updateDisable:(BOOL)arg0;
- (void)prepareUILayout;
- (id)stringfromLiveType;
- (unsigned long long)style;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (void).cxx_destruct;
- (void)setup;
- (id)topSeparator;
- (void)setStyle:(unsigned long long)arg0;
- (void)setTopSeparator:(id)arg0;
- (void)setLeftTitle:(id)arg0;
- (void)setRightTitle:(id)arg0;
- (id)leftTitle;
- (id)rightTitle;
- (id)leftIcon;
- (id)rightIcon;

@end
