//
//     Generated by private class-dump
//

@class UIColor, UIFont, UIImage, AWEURLModel;

@interface AWESelectableTextImageView : AWETextImageView {
    BOOL _selected;
    UIColor *_selectedTextColor;
    UIFont *_selectedTextFont;
    UIColor *_originBackgroundColor;
    UIColor *_selectedBackgroundColor;
    AWEURLModel *_imageUrl;
    AWEURLModel *_selectedImageUrl;
    UIImage *_selectedImage;
    double _borderWidth;
    UIColor *_originBorderColor;
    UIColor *_selectedBorderColor;
    struct CGSize { double width; double height; } _imageSize;
}

@property (nonatomic) BOOL selected;
@property (retain, nonatomic) UIColor *selectedTextColor;
@property (retain, nonatomic) UIFont *selectedTextFont;
@property (retain, nonatomic) UIColor *originBackgroundColor;
@property (retain, nonatomic) UIColor *selectedBackgroundColor;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (retain, nonatomic) AWEURLModel *imageUrl;
@property (retain, nonatomic) AWEURLModel *selectedImageUrl;
@property (retain, nonatomic) UIImage *selectedImage;
@property (nonatomic) double borderWidth;
@property (retain, nonatomic) UIColor *originBorderColor;
@property (retain, nonatomic) UIColor *selectedBorderColor;

- (void)setSelectedTextFont:(id)arg0;
- (id)selectedTextFont;
- (id)originBackgroundColor;
- (void)setOriginBackgroundColor:(id)arg0;
- (id)selectedBorderColor;
- (void)setOriginBorderColor:(id)arg0;
- (id)originBorderColor;
- (void)setSelectedImageUrl:(id)arg0;
- (void)setSelectedBorderColor:(id)arg0;
- (id)selectedImageUrl;
- (struct CGSize { double x0; double x1; })p_imageContentSize;
- (BOOL)selected;
- (id)accessibilityLabel;
- (double)borderWidth;
- (struct CGSize { double x0; double x1; })imageSize;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setBorderWidth:(double)arg0;
- (void)setSelected:(BOOL)arg0;
- (id)selectedBackgroundColor;
- (void)setSelectedBackgroundColor:(id)arg0;
- (void)setSelectedImage:(id)arg0;
- (id)selectedImage;
- (void)setImageSize:(struct CGSize { double x0; double x1; })arg0;
- (void)setSelectedTextColor:(id)arg0;
- (id)selectedTextColor;
- (id)imageUrl;
- (void)setImageUrl:(id)arg0;

@end