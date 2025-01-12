//
//     Generated by private class-dump
//

@class UIImageView, UILabel;

@interface AWEFeedCapsuleView : UIView {
    BOOL _titleShadowDisabled;
    UIImageView *_imageView;
    UILabel *_titleLabel;
    unsigned long long _style;
    struct CGSize { double width; double height; } _imageSize;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _edgeInsets;
}

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (nonatomic) unsigned long long style;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } edgeInsets;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (nonatomic) BOOL titleShadowDisabled;

- (BOOL)titleShadowDisabled;
- (void)resetWithTitle:(id)arg0 image:(id)arg1;
- (void)setTitleShadowDisabled:(BOOL)arg0;
- (unsigned long long)style;
- (struct CGSize { double x0; double x1; })imageSize;
- (void)setEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0;
- (void).cxx_destruct;
- (id)imageView;
- (id)titleLabel;
- (void)setImageView:(id)arg0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })edgeInsets;
- (void)layoutSubviews;
- (void)setTitleLabel:(id)arg0;
- (void)setStyle:(unsigned long long)arg0;
- (void)setImageSize:(struct CGSize { double x0; double x1; })arg0;
- (void)resetUI;

@end
