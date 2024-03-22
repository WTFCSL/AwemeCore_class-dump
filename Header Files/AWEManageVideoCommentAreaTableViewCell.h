//
//     Generated by private class-dump
//

@class AWEManageVideoCommentAreaSettingItemModel, UIImageView, DUXSettingSwitch, UILabel, UIButton;

@interface AWEManageVideoCommentAreaTableViewCell : UITableViewCell {
    unsigned long long _cornerType;
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    UIButton *_explainButton;
    DUXSettingSwitch *_switchButton;
    AWEManageVideoCommentAreaSettingItemModel *_model;
}

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *explainButton;
@property (retain, nonatomic) DUXSettingSwitch *switchButton;
@property (retain, nonatomic) AWEManageVideoCommentAreaSettingItemModel *model;
@property (nonatomic) unsigned long long cornerType;

- (void)switchStatusChanged:(id)arg0;
- (void)setupCorners;
- (void)highlightWithAnimation;
- (void)highlightWithAnimationWithDuration:(double)arg0 dismissDelay:(double)arg1;
- (void)setSwitchButton:(id)arg0;
- (id)explainButton;
- (void)goExplainPage:(id)arg0;
- (void)setExplainButton:(id)arg0;
- (void)setModel:(id)arg0;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (void).cxx_destruct;
- (id)model;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg0;
- (id)iconImageView;
- (void)setIconImageView:(id)arg0;
- (void)configureWithModel:(id)arg0;
- (unsigned long long)cornerType;
- (void)setCornerType:(unsigned long long)arg0;
- (id)switchButton;

@end
