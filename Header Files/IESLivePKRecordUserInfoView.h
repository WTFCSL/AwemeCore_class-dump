//
//     Generated by private class-dump
//

@class RecordResponse_BattleRecord, UIImageView, UILabel, UIView, UIButton;

@interface IESLivePKRecordUserInfoView : UIView {
    id /* block */ _followAction;
    UIImageView *_avatarView;
    UIImageView *_avatarDecorateView;
    UIView *_livingAnimationView;
    UILabel *_nicknameLabel;
    UILabel *_historyLabel;
    UIImageView *_genderView;
    UILabel *_relationLabel;
    UIButton *_followButton;
    RecordResponse_BattleRecord *_item;
}

@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UIImageView *avatarDecorateView;
@property (retain, nonatomic) UIView *livingAnimationView;
@property (retain, nonatomic) UILabel *nicknameLabel;
@property (retain, nonatomic) UILabel *historyLabel;
@property (retain, nonatomic) UIImageView *genderView;
@property (retain, nonatomic) UILabel *relationLabel;
@property (retain, nonatomic) UIButton *followButton;
@property (retain, nonatomic) RecordResponse_BattleRecord *item;
@property (copy, nonatomic) id /* block */ followAction;

- (id)relationLabel;
- (void)setRelationLabel:(id)arg0;
- (void)didClickFollowButton;
- (id)followButton;
- (void)setFollowButton:(id)arg0;
- (void)updateFollowStatus:(long long)arg0;
- (id)livingAnimationView;
- (void)setLivingAnimationView:(id)arg0;
- (id /* block */)followAction;
- (id)avatarDecorateView;
- (void)setAvatarDecorateView:(id)arg0;
- (id)genderView;
- (void)setGenderView:(id)arg0;
- (void)setFollowAction:(id /* block */)arg0;
- (id)item;
- (void)setAvatarView:(id)arg0;
- (id)avatarView;
- (void).cxx_destruct;
- (void)setItem:(id)arg0;
- (id)initWithItem:(id)arg0;
- (void)setupViews;
- (id)nicknameLabel;
- (void)setNicknameLabel:(id)arg0;
- (id)historyLabel;
- (void)setHistoryLabel:(id)arg0;

@end
