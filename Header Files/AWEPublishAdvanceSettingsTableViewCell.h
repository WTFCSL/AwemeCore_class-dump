//
//     Generated by private class-dump
//

@class AFDRoundedView, UIView, NSString, UIImageView, UIButton, AWEPublishAdvanceSettingsItem, UILabel, NSIndexPath;
@protocol AWEPublishAdvanceSettingsCellDelegate, AWESettingSwitchProtocol;

@interface AWEPublishAdvanceSettingsTableViewCell : UITableViewCell <AWEPublishAdvanceSettingsCellProtocol> {
    BOOL _needUseCardUI;
    id<AWEPublishAdvanceSettingsCellDelegate> _delegate;
    NSIndexPath *_indexPath;
    unsigned long long _cornerType;
    AWEPublishAdvanceSettingsItem *_item;
    UIView *_bgView;
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIView *_lineView;
    UIView<AWESettingSwitchProtocol> *_switcher;
    UIButton *_tipButton;
    UIView *_switchMaskView;
    AFDRoundedView *_containerView;
    UIImageView *_indicatorView;
    UILabel *_indicatorLabel;
}

@property (retain, nonatomic) AWEPublishAdvanceSettingsItem *item;
@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) UIView<AWESettingSwitchProtocol> *switcher;
@property (retain, nonatomic) UIButton *tipButton;
@property (retain, nonatomic) UIView *switchMaskView;
@property (retain, nonatomic) AFDRoundedView *containerView;
@property (nonatomic) BOOL needUseCardUI;
@property (retain, nonatomic) UIImageView *indicatorView;
@property (retain, nonatomic) UILabel *indicatorLabel;
@property (nonatomic) unsigned long long cornerType;
@property (retain, nonatomic) NSIndexPath *indexPath;
@property (weak, nonatomic) id<AWEPublishAdvanceSettingsCellDelegate> delegate;
@property (copy, nonatomic) id /* block */ onSwitcherToggledBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)cellHeight;

- (void)awe_themeDidChange:(long long)arg0;
- (void)setupCorners;
- (id)switcher;
- (void)setSwitcher:(id)arg0;
- (void)setNeedUseCardUI:(BOOL)arg0;
- (BOOL)needUseCardUI;
- (void)showBottomLine:(BOOL)arg0;
- (void)onCellClicked;
- (void)updateViewWithControlEnabled:(BOOL)arg0;
- (void)onSwitcherToggled:(BOOL)arg0;
- (id)tipButton;
- (void)setTipButton:(id)arg0;
- (void)p_showDisableToast;
- (void)p_accessibilityActivate;
- (void)tipButtonTapped:(id)arg0;
- (void)tapSwitchMaskView;
- (id)switchMaskView;
- (void)setSwitchMaskView:(id)arg0;
- (void)setIndicatorLabel:(id)arg0;
- (void)setHighlighted:(BOOL)arg0 animated:(BOOL)arg1;
- (void)setSubtitleLabel:(id)arg0;
- (id)item;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (void).cxx_destruct;
- (void)setIndexPath:(id)arg0;
- (id)titleLabel;
- (void)setContainerView:(id)arg0;
- (id)subtitleLabel;
- (id)indexPath;
- (id)delegate;
- (id)indicatorView;
- (id)containerView;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg0;
- (void)setTitleLabel:(id)arg0;
- (id)iconImageView;
- (void)updateWithItem:(id)arg0;
- (void)setItem:(id)arg0;
- (id)bgView;
- (void)setBgView:(id)arg0;
- (void)setIconImageView:(id)arg0;
- (void)setIndicatorView:(id)arg0;
- (id)lineView;
- (void)setLineView:(id)arg0;
- (void)setupUI;
- (unsigned long long)cornerType;
- (void)setCornerType:(unsigned long long)arg0;
- (id)indicatorLabel;

@end
