//
//     Generated by private class-dump
//

@class UIImageView, UILabel, DUXCheckBox;

@interface DYSecondAccountUnbindTableViewCell : UITableViewCell {
    UIImageView *_avatarView;
    UILabel *_title;
    UILabel *_subTitle;
    DUXCheckBox *_checkBox;
}

@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UILabel *title;
@property (retain, nonatomic) UILabel *subTitle;
@property (retain, nonatomic) DUXCheckBox *checkBox;

- (void)configWithModel:(id)arg0;
- (void)setCheckBox:(id)arg0;
- (id)checkBox;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (void)setAvatarView:(id)arg0;
- (id)avatarView;
- (void).cxx_destruct;
- (id)title;
- (void)setSelected:(BOOL)arg0 animated:(BOOL)arg1;
- (void)setSubTitle:(id)arg0;
- (id)subTitle;
- (void)setTitle:(id)arg0;
- (void)setupUI;

@end
