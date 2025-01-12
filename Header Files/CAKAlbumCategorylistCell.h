//
//     Generated by private class-dump
//

@class UILabel, UIImageView;

@interface CAKAlbumCategorylistCell : UITableViewCell {
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    UIImageView *_iconView;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIImageView *iconView;

- (void)configCellWithAlbumModel:(id)arg0;
- (void)configBackgroundStyle:(long long)arg0;
- (id)accessibilityLabel;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (id)iconView;
- (void)setIconView:(id)arg0;
- (id)titleLabel;
- (void)prepareForReuse;
- (void)setTitleLabel:(id)arg0;
- (BOOL)isAccessibilityElement;
- (id)subTitleLabel;
- (void)setSubTitleLabel:(id)arg0;

@end
