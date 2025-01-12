//
//     Generated by private class-dump
//

@class NSObject, IESLiveLinkMicAudienceListResponse_ListUser, UIImageView, IESLiveGCDTimer, UILabel, IESLiveAudienceInteractiveInterestedCellInviteButton, UIView;
@protocol OS_dispatch_queue;

@interface IESLiveAudienceInteractiveInterestedCell : UITableViewCell {
    UIImageView *_avatarView;
    UILabel *_nicknameLabel;
    UILabel *_statusLabel;
    IESLiveAudienceInteractiveInterestedCellInviteButton *_inviteButton;
    UIImageView *_statusIcon;
    UIView *_iconView;
    IESLiveGCDTimer *_invitingTimer;
    NSObject<OS_dispatch_queue> *_timerQueue;
    IESLiveLinkMicAudienceListResponse_ListUser *_userModel;
    id /* block */ _inviteBlock;
}

@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UILabel *nicknameLabel;
@property (retain, nonatomic) UILabel *statusLabel;
@property (retain, nonatomic) IESLiveAudienceInteractiveInterestedCellInviteButton *inviteButton;
@property (retain, nonatomic) UIImageView *statusIcon;
@property (retain, nonatomic) UIView *iconView;
@property (retain, nonatomic) IESLiveGCDTimer *invitingTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *timerQueue;
@property (retain, nonatomic) IESLiveLinkMicAudienceListResponse_ListUser *userModel;
@property (copy, nonatomic) id /* block */ inviteBlock;

- (id)inviteButton;
- (void)setInviteButton:(id)arg0;
- (id)statusIcon;
- (void)setStatusIcon:(id)arg0;
- (void)setInviteBlock:(id /* block */)arg0;
- (void)initComponents;
- (void)p_setInviteButtonDisabled:(BOOL)arg0;
- (void)p_stopInvitingTimer;
- (BOOL)p_isHasBeenInvited:(id)arg0;
- (id /* block */)inviteBlock;
- (void)setInvitingTimer:(id)arg0;
- (id)invitingTimer;
- (BOOL)p_isInviting;
- (double)p_restInvitingTime;
- (void)p_startInvitingTimerWithSeconds:(double)arg0;
- (BOOL)p_canCalling;
- (void)p_didTapInviteButton;
- (void)updateWithModel:(id)arg0 withInviteBlock:(id /* block */)arg1;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (void)setAvatarView:(id)arg0;
- (id)avatarView;
- (void).cxx_destruct;
- (id)timerQueue;
- (id)iconView;
- (void)setIconView:(id)arg0;
- (id)userModel;
- (void)setUserModel:(id)arg0;
- (void)prepareForReuse;
- (void)dealloc;
- (id)statusLabel;
- (void)setStatusLabel:(id)arg0;
- (id)nicknameLabel;
- (void)setNicknameLabel:(id)arg0;
- (void)setTimerQueue:(id)arg0;

@end
