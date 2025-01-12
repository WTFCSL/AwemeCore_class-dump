//
//     Generated by private class-dump
//

@class UIImageView, UIView, AWEUserModel, YYLabel;

@interface AWEPunishBanView : UIView {
    UIView *_sepView;
    YYLabel *_descriptionLabel;
    UIImageView *_iconView;
    AWEUserModel *_user;
    UIImageView *_arrowView;
}

@property (retain, nonatomic) UIView *sepView;
@property (retain, nonatomic) YYLabel *descriptionLabel;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) AWEUserModel *user;
@property (retain, nonatomic) UIImageView *arrowView;

- (id)sepView;
- (void)setSepView:(id)arg0;
- (void)__setupUI;
- (void)__configDescriptionLabel;
- (void)__trackEnterEvent;
- (void)__openPunishDetailVC;
- (void)setUser:(id)arg0;
- (id)user;
- (void).cxx_destruct;
- (id)iconView;
- (void)setIconView:(id)arg0;
- (void)setDescriptionLabel:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)descriptionLabel;
- (id)arrowView;
- (void)setArrowView:(id)arg0;
- (void)updateWithUser:(id)arg0;

@end
