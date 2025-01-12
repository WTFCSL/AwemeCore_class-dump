//
//     Generated by private class-dump
//

@class AWEUserModel, UIImageView, DUXButton, UILabel, UIView, AWEAwemeModel;

@interface AWEFeedStablePageAuthorInfoView : UIView {
    id /* block */ _followBlock;
    UIImageView *_avatarImageView;
    UILabel *_nickNameLabel;
    DUXButton *_followButton;
    UIView *_dotView;
    AWEAwemeModel *_model;
    AWEUserModel *_user;
}

@property (copy, nonatomic) id /* block */ followBlock;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UILabel *nickNameLabel;
@property (retain, nonatomic) DUXButton *followButton;
@property (retain, nonatomic) UIView *dotView;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) AWEUserModel *user;

- (id)followButton;
- (id)nickNameLabel;
- (void)setNickNameLabel:(id)arg0;
- (void)setFollowButton:(id)arg0;
- (void)followButtonAction;
- (id /* block */)followBlock;
- (void)setFollowBlock:(id /* block */)arg0;
- (void)updateFollowBtnWithUser:(id)arg0;
- (void)setUser:(id)arg0;
- (void)setModel:(id)arg0;
- (id)user;
- (void).cxx_destruct;
- (id)model;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)dotView;
- (void)setDotView:(id)arg0;
- (id)avatarImageView;
- (void)setAvatarImageView:(id)arg0;
- (void)updateWithModel:(id)arg0;
- (void)configureConstraints;
- (void)configureSubviews;

@end
