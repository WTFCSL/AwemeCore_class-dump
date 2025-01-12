//
//     Generated by private class-dump
//

@class IESLivePKGuestInteractSettingAuthorityItem, UISwitch, UIImageView, UILabel, UIView, UIButton;

@interface IESLivePKGuestInteractSettingAuthorityCell : UITableViewCell {
    BOOL _isAvailable;
    UIButton *_onOffSwitchTouchButton;
    UILabel *_titleLabel;
    UIView *_redDotView;
    UILabel *_indicateLabel;
    UIButton *_moreDetailButton;
    UISwitch *_onOffSuperficialSwitch;
    UIImageView *_indicateImageView;
    IESLivePKGuestInteractSettingAuthorityItem *_item;
    UIView *_separator;
}

@property (retain, nonatomic) UIButton *onOffSwitchTouchButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *redDotView;
@property (retain, nonatomic) UILabel *indicateLabel;
@property (retain, nonatomic) UIButton *moreDetailButton;
@property (retain, nonatomic) UISwitch *onOffSuperficialSwitch;
@property (retain, nonatomic) UIImageView *indicateImageView;
@property (retain, nonatomic) IESLivePKGuestInteractSettingAuthorityItem *item;
@property (retain, nonatomic) UIView *separator;
@property (nonatomic) BOOL isAvailable;

- (id)redDotView;
- (void)setRedDotView:(id)arg0;
- (id)indicateImageView;
- (void)setIndicateImageView:(id)arg0;
- (id)onOffSwitchTouchButton;
- (id)onOffSuperficialSwitch;
- (void)setOnOffSwitchTouchButton:(id)arg0;
- (void)setOnOffSuperficialSwitch:(id)arg0;
- (id)moreDetailButton;
- (id)indicateLabel;
- (void)didClickMoreDetailButton;
- (void)setMoreDetailButton:(id)arg0;
- (void)setIndicateLabel:(id)arg0;
- (id)item;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (void).cxx_destruct;
- (id)separator;
- (void)setSeparator:(id)arg0;
- (id)titleLabel;
- (void)setIsAvailable:(BOOL)arg0;
- (BOOL)isAvailable;
- (void)updateItem:(id)arg0;
- (void)setTitleLabel:(id)arg0;
- (void)setupConstraints;
- (void)setItem:(id)arg0;
- (void)setupViews;
- (void)tapAction;

@end
