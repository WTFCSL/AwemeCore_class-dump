//
//     Generated by private class-dump
//

@class UIImageView, UILabel;

@interface AFDPlayRemoteLiveStreamCloseView : UIView {
    UIImageView *_avatarView;
    UILabel *_userNameLabel;
    UILabel *_titleLabel;
}

@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UILabel *userNameLabel;
@property (retain, nonatomic) UILabel *titleLabel;

- (void)renderModel:(id)arg0;
- (id)userNameLabel;
- (void)setUserNameLabel:(id)arg0;
- (void)__createComponents;
- (void)__layoutComponents;
- (void)setAvatarView:(id)arg0;
- (id)avatarView;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setTitleLabel:(id)arg0;

@end
