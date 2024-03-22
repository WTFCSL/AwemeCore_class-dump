//
//     Generated by private class-dump
//

@class UIImageView, UILabel, UIView;

@interface IESLiveChatChannelUserListPanelSettingCell : IESLiveChatChannelUserListPanelBaseCell {
    UIView *_settingButtonContainer;
    UIImageView *_settingIcon;
    UILabel *_settingLabel;
    UIView *_inviteButtonContainer;
    UIImageView *_inviteIcon;
    UILabel *_inviteLabel;
}

@property (retain, nonatomic) UIView *settingButtonContainer;
@property (retain, nonatomic) UIImageView *settingIcon;
@property (retain, nonatomic) UILabel *settingLabel;
@property (retain, nonatomic) UIView *inviteButtonContainer;
@property (retain, nonatomic) UIImageView *inviteIcon;
@property (retain, nonatomic) UILabel *inviteLabel;

- (id)settingLabel;
- (void)setSettingLabel:(id)arg0;
- (void)setInviteLabel:(id)arg0;
- (id)inviteLabel;
- (id)inviteButtonContainer;
- (void)setInviteButtonContainer:(id)arg0;
- (void)reloadWithCellModel:(id)arg0;
- (void)settingButtonDidClicked:(id)arg0;
- (void)setSettingButtonContainer:(id)arg0;
- (void)setSettingIcon:(id)arg0;
- (id)settingButtonContainer;
- (id)settingIcon;
- (void)inviteButtonDidClicked:(id)arg0;
- (void)setInviteIcon:(id)arg0;
- (id)inviteIcon;
- (void)layoutTopBottomContentButton:(id)arg0;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (void).cxx_destruct;
- (void)setup;
- (void)layoutSubviews;

@end