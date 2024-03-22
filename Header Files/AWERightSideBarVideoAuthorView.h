//
//     Generated by private class-dump
//

@class NSString, UIImageView, DUXButton, UILabel;

@interface AWERightSideBarVideoAuthorView : UIView <AWERightSidebarPageBottomViewProtocol> {
    id /* block */ _followBlock;
    id /* block */ _nameLabelClickBlock;
    id /* block */ _avartarClickBlock;
    UILabel *_nickNameLabel;
    DUXButton *_followButton;
    UIImageView *_avatarImageView;
}

@property (retain, nonatomic) UILabel *nickNameLabel;
@property (retain, nonatomic) DUXButton *followButton;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (copy, nonatomic) id /* block */ followBlock;
@property (copy, nonatomic) id /* block */ nameLabelClickBlock;
@property (copy, nonatomic) id /* block */ avartarClickBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupSubViews;
- (id)followButton;
- (id)nickNameLabel;
- (void)setNickNameLabel:(id)arg0;
- (void)setFollowButton:(id)arg0;
- (void)followButtonAction;
- (id /* block */)followBlock;
- (void)setFollowBlock:(id /* block */)arg0;
- (void)updateFollowBtnWithUser:(id)arg0;
- (void)updateAuthorName:(id)arg0;
- (void)setAvartarClickBlock:(id /* block */)arg0;
- (void)setNameLabelClickBlock:(id /* block */)arg0;
- (void)updateAvatarView:(id)arg0;
- (id /* block */)avartarClickBlock;
- (id /* block */)nameLabelClickBlock;
- (void)nameLabelClickAction;
- (void)avartarClickAction;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)avatarImageView;
- (void)setAvatarImageView:(id)arg0;
- (void)updateWithModel:(id)arg0;

@end