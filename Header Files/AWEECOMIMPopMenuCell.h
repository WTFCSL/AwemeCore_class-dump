//
//     Generated by private class-dump
//

@class UILabel, UIImageView;

@interface AWEECOMIMPopMenuCell : UICollectionViewCell {
    UILabel *_titleLabel;
    UIImageView *_icon;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *icon;

+ (struct CGSize { double x0; double x1; })itemSize;

- (void)reloadCellWithModel:(id)arg0;
- (id)icon;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setIcon:(id)arg0;
- (void)layoutSubviews;
- (void)setTitleLabel:(id)arg0;

@end
