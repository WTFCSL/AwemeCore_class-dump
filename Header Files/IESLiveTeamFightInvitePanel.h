//
//     Generated by private class-dump
//

@class UIImageView, UILabel, HTSLiveUser;

@interface IESLiveTeamFightInvitePanel : UIView {
    UIImageView *_avatarView;
    UILabel *_nicknameLabel;
    HTSLiveUser *_user;
    long long _seatIndex;
    id /* block */ _actionBlock;
    id /* block */ _inviteBlock;
}

@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UILabel *nicknameLabel;
@property (retain, nonatomic) HTSLiveUser *user;
@property (nonatomic) long long seatIndex;
@property (copy, nonatomic) id /* block */ actionBlock;
@property (copy, nonatomic) id /* block */ inviteBlock;

- (void)setInviteBlock:(id /* block */)arg0;
- (id /* block */)inviteBlock;
- (long long)seatIndex;
- (void)setSeatIndex:(long long)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 user:(id)arg1 block:(id /* block */)arg2 DIContext:(id)arg3;
- (void)didTapInviteJoinTeamButton:(id)arg0;
- (id)createJoinTeamButtonWithTag:(long long)arg0 title:(id)arg1 backgroundColor:(id)arg2 cornerRadius:(double)arg3 action:(SEL)arg4;
- (void)setUser:(id)arg0;
- (void)setAvatarView:(id)arg0;
- (id)avatarView;
- (id)user;
- (void).cxx_destruct;
- (id /* block */)actionBlock;
- (void)setupUI;
- (void)setActionBlock:(id /* block */)arg0;
- (id)nicknameLabel;
- (void)setNicknameLabel:(id)arg0;

@end
