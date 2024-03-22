//
//     Generated by private class-dump
//

@class UILabel, UIImageView, UIView;

@interface BDPUserInfoPermissionContentView_HG : UIView {
    UILabel *_titleLabel;
    UIImageView *_userIconView;
    UILabel *_userNameLabel;
    UILabel *_descriptionLabel;
    UIView *_contentContainer;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *contentContainer;
@property (retain, nonatomic) UIImageView *userIconView;
@property (retain, nonatomic) UILabel *userNameLabel;
@property (retain, nonatomic) UILabel *descriptionLabel;

- (id)userNameLabel;
- (void)setUserNameLabel:(id)arg0;
- (void)setupBorders;
- (void)setupDescriptionLabel;
- (void)setUserIconView:(id)arg0;
- (id)userIconView;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setDescriptionLabel:(id)arg0;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)descriptionLabel;
- (void)setTitleLabel:(id)arg0;
- (id)contentContainer;
- (void)setupUI;
- (void)setupTitleLabel;
- (void)setContentContainer:(id)arg0;

@end
