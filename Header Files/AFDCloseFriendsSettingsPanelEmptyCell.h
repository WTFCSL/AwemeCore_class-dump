//
//     Generated by private class-dump
//

@class UIImageView, UILabel, UIView;

@interface AFDCloseFriendsSettingsPanelEmptyCell : UITableViewCell {
    UIView *_lineView;
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    UIImageView *_arrowImageView;
}

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UIView *lineView;

+ (id)reuseIdentifier;

- (void)renderModel:(id)arg0;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)awakeFromNib;
- (void)setTitleLabel:(id)arg0;
- (id)iconImageView;
- (void)setIconImageView:(id)arg0;
- (id)lineView;
- (void)setLineView:(id)arg0;
- (void)setupUI;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg0;
- (void)layoutUI;

@end