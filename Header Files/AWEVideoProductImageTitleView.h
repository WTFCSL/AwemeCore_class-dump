//
//     Generated by private class-dump
//

@class UIImageView, UILabel;

@interface AWEVideoProductImageTitleView : UIView {
    UIImageView *_titleImageView;
    UILabel *_titleLabel;
    double _rightOffset;
    double _margin;
    struct CGSize { double width; double height; } _imageSize;
}

@property (retain, nonatomic) UIImageView *titleImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (nonatomic) double rightOffset;
@property (nonatomic) double margin;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;

- (double)rightOffset;
- (void)setRightOffset:(double)arg0;
- (void)setImageTitleMargin:(double)arg0;
- (void)removeTitleImageView;
- (void)setImageWithURLArray:(id)arg0;
- (void)setTitleRightOffset:(double)arg0;
- (double)margin;
- (id)accessibilityLabel;
- (void)setTitleText:(id)arg0;
- (id)init;
- (struct CGSize { double x0; double x1; })imageSize;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setImage:(id)arg0;
- (void)setMargin:(double)arg0;
- (id)titleImageView;
- (void)setTitleColor:(id)arg0;
- (BOOL)accessibilityElementsHidden;
- (void)setTitleLabel:(id)arg0;
- (BOOL)isAccessibilityElement;
- (void)setTitleFont:(id)arg0;
- (void)setImageSize:(struct CGSize { double x0; double x1; })arg0;
- (void)setupSubviews;
- (void)setTitleImageView:(id)arg0;

@end
