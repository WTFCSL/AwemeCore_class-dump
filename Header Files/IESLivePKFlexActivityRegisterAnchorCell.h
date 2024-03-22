//
//     Generated by private class-dump
//

@class FlexActivity_RegisteredUser, UIImageView, UILabel, UIButton;

@interface IESLivePKFlexActivityRegisterAnchorCell : UICollectionViewCell {
    UIImageView *_avatarImageView;
    UIButton *_friendTag;
    UILabel *_nameLabel;
    UILabel *_descriptionLabel;
    FlexActivity_RegisteredUser *_registeredUser;
}

@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UIButton *friendTag;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (weak, nonatomic) FlexActivity_RegisteredUser *registeredUser;

- (id)friendTag;
- (void)setFriendTag:(id)arg0;
- (id)registeredUser;
- (void)setRegisteredUser:(id)arg0;
- (void).cxx_destruct;
- (void)setDescriptionLabel:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)descriptionLabel;
- (id)nameLabel;
- (void)setNameLabel:(id)arg0;
- (id)avatarImageView;
- (void)setAvatarImageView:(id)arg0;
- (void)setupSubviews;
- (void)updateWithUser:(id)arg0;

@end
