//
//     Generated by private class-dump
//

@class UIImageView, UILabel;

@interface AWEAnchorNotificationSettingViewCell : UITableViewCell {
    UIImageView *_avatarView;
    UILabel *_nameLabel;
    UIImageView *_iconView;
    long long _uid;
    long long _pushStatus;
}

@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UIImageView *iconView;
@property (nonatomic) long long uid;
@property (nonatomic) long long pushStatus;

- (long long)pushStatus;
- (void)setPushStatus:(long long)arg0;
- (void)setUid:(long long)arg0;
- (long long)uid;
- (void)setAvatarView:(id)arg0;
- (id)avatarView;
- (void).cxx_destruct;
- (id)iconView;
- (void)setIconView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)nameLabel;
- (void)setNameLabel:(id)arg0;
- (void)setupUI;

@end
