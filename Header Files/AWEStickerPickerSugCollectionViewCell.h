//
//     Generated by private class-dump
//

@class UILabel, UIImageView, NSString;

@interface AWEStickerPickerSugCollectionViewCell : UICollectionViewCell {
    NSString *_title;
    UILabel *_label;
    UIImageView *_lensImageView;
}

@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIImageView *lensImageView;
@property (copy, nonatomic) NSString *title;

+ (id)identifier;

- (id)lensImageView;
- (void)setLensImageView:(id)arg0;
- (void)configCellWithModel:(id)arg0;
- (void).cxx_destruct;
- (void)setLabel:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)title;
- (id)label;
- (void)setTitle:(id)arg0;
- (void)setupSubviews;

@end
