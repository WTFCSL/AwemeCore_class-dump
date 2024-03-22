//
//     Generated by private class-dump
//

@class UIImageView, UILabel;

@interface AWEUIFavoriteTableViewCell : UITableViewCell {
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    UILabel *_infoLabel;
    long long _cellType;
}

@property (nonatomic) long long cellType;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UILabel *infoLabel;

+ (id)identifier;
+ (double)cellHeight;

- (double)coverImageHeight;
- (void)configWithTitleText:(id)arg0 secondLineText:(id)arg1 thirdLineText:(id)arg2;
- (id)initWithCellType:(long long)arg0 cellStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)configWithTitleText:(id)arg0 secondLineText:(id)arg1;
- (void)setHighlighted:(BOOL)arg0 animated:(BOOL)arg1;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setCellType:(long long)arg0;
- (void)setTitleLabel:(id)arg0;
- (id)iconImageView;
- (long long)cellType;
- (void)setIconImageView:(id)arg0;
- (id)subTitleLabel;
- (void)setSubTitleLabel:(id)arg0;
- (id)infoLabel;
- (void)setInfoLabel:(id)arg0;

@end
