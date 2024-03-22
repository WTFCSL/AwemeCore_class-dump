//
//     Generated by private class-dump
//

@class UIImageView, UILabel;

@interface AWEFavoriteBatManTableViewCell : UITableViewCell {
    UIImageView *_iconView;
    UILabel *_titleLabel;
    UILabel *_introductionLabel;
}

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *introductionLabel;

+ (id)identifier;
+ (double)cellHeight;

- (id)introductionLabel;
- (void)setIntroductionLabel:(id)arg0;
- (void)setHighlighted:(BOOL)arg0 animated:(BOOL)arg1;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (void).cxx_destruct;
- (id)iconView;
- (void)setIconView:(id)arg0;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg0;
- (void)setupUI;
- (void)configureWithModel:(id)arg0;

@end