//
//     Generated by private class-dump
//

@class AWEButton, UILabel, UIView;

@interface AWEAwemeIMDetailTopContainerView : UIView {
    id /* block */ _avatarClickedBlock;
    UIView *_containerView;
    AWEButton *_userAvatarView;
    UILabel *_titleLabel;
    UILabel *_supplementaryLabel;
}

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) AWEButton *userAvatarView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *supplementaryLabel;
@property (copy, nonatomic) id /* block */ avatarClickedBlock;

- (void)p_setupUI;
- (id)userAvatarView;
- (void)setUserAvatarView:(id)arg0;
- (void)updateViewWithAvatarUrl:(id)arg0 naviTitle:(id)arg1 repliedText:(id)arg2;
- (void)p_setupConstraints;
- (id /* block */)avatarClickedBlock;
- (void)setAvatarClickedBlock:(id /* block */)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setContainerView:(id)arg0;
- (id)containerView;
- (void)setTitleLabel:(id)arg0;
- (id)supplementaryLabel;
- (void)setSupplementaryLabel:(id)arg0;

@end