//
//     Generated by private class-dump
//

@class UIImageView, UILabel, UIView;

@interface IESLiveInteractivePlayModeSelectPanelCell : UITableViewCell {
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    UIView *_redDot;
}

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UIView *redDot;

- (void)setRedDot:(id)arg0;
- (id)redDot;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (void).cxx_destruct;
- (void)setDescriptionLabel:(id)arg0;
- (id)titleLabel;
- (id)descriptionLabel;
- (void)setTitleLabel:(id)arg0;
- (id)iconImageView;
- (void)setIconImageView:(id)arg0;
- (void)setupViews;
- (void)updateWithConfiguration:(id)arg0;

@end
