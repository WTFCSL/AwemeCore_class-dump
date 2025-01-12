//
//     Generated by private class-dump
//

@class UIStackView, IESLiveWaitingListUser, UIImageView, IESLivePKGuestInteractiveNormalInfoView, UILabel, UIButton;

@interface IESLivePKGuestInteractiveApplyCell : UITableViewCell {
    unsigned long long _scene;
    id /* block */ _permitUserBlock;
    IESLivePKGuestInteractiveNormalInfoView *_normalInfoView;
    UIButton *_acceptButton;
    UIImageView *_avatarView;
    UIImageView *_genderIcon;
    UILabel *_nicknameLabel;
    UILabel *_rankLabel;
    UILabel *_reasonLabel;
    IESLiveWaitingListUser *_userModel;
    UIStackView *_tagContainer;
}

@property (nonatomic) unsigned long long scene;
@property (copy, nonatomic) id /* block */ permitUserBlock;
@property (retain, nonatomic) IESLivePKGuestInteractiveNormalInfoView *normalInfoView;
@property (retain, nonatomic) UIButton *acceptButton;
@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UIImageView *genderIcon;
@property (retain, nonatomic) UILabel *nicknameLabel;
@property (retain, nonatomic) UILabel *rankLabel;
@property (retain, nonatomic) UILabel *reasonLabel;
@property (retain, nonatomic) IESLiveWaitingListUser *userModel;
@property (retain, nonatomic) UIStackView *tagContainer;

- (id)tagContainer;
- (void)setTagContainer:(id)arg0;
- (void)removeAllTagViews;
- (void)setGenderIcon:(id)arg0;
- (id)genderIcon;
- (void)setPermitUserBlock:(id /* block */)arg0;
- (void)updateWithModel:(id)arg0 now:(id)arg1 permitUserBlock:(id /* block */)arg2 scene:(unsigned long long)arg3 showPermit:(BOOL)arg4 rank:(id)arg5 sortByTime:(BOOL)arg6;
- (id /* block */)permitUserBlock;
- (id)normalInfoView;
- (void)setNormalInfoView:(id)arg0;
- (void)didTapAcceptButton;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (void)setAvatarView:(id)arg0;
- (id)avatarView;
- (void)setScene:(unsigned long long)arg0;
- (void).cxx_destruct;
- (id)userModel;
- (void)setUserModel:(id)arg0;
- (void)prepareForReuse;
- (unsigned long long)scene;
- (id)acceptButton;
- (void)setAcceptButton:(id)arg0;
- (id)rankLabel;
- (void)setRankLabel:(id)arg0;
- (id)nicknameLabel;
- (void)setNicknameLabel:(id)arg0;
- (id)reasonLabel;
- (void)setReasonLabel:(id)arg0;
- (void)layoutUI;

@end
