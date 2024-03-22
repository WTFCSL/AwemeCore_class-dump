//
//     Generated by private class-dump
//

@class UIColor, UIFont, NSString, UIImage;

@interface AWEMusicStreamingImpl.BNImageLayoutView : UIView {
    void /* unknown type, empty encoding */ style;
    void /* unknown type, empty encoding */ imageTitleSpace;
    void /* unknown type, empty encoding */ verticalTitleOffset;
    void /* unknown type, empty encoding */ imageView;
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ textWidth;
}

@property (nonatomic) void /* unknown type, empty encoding */ style;
@property (nonatomic) void /* unknown type, empty encoding */ imageTitleSpace;
@property (nonatomic) void /* unknown type, empty encoding */ verticalTitleOffset;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, retain) UIColor *textColor;
@property (nonatomic, retain) UIFont *font;
@property (nonatomic, copy) NSString *text;
@property (nonatomic) BOOL isHiddenImage;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ imageView;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

- (double)imageTitleSpace;
- (void)setImageTitleSpace:(double)arg0;
- (double)verticalTitleOffset;
- (void)setVerticalTitleOffset:(double)arg0;
- (BOOL)isHiddenImage;
- (void)setIsHiddenImage:(BOOL)arg0;
- (long long)style;
- (void).cxx_destruct;
- (void)setText:(id)arg0;
- (id)image;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)font;
- (void)setImage:(id)arg0;
- (id)initWithCoder:(id)arg0;
- (id)text;
- (void)setFont:(id)arg0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })arg0;
- (void)setTextColor:(id)arg0;
- (void)layoutSubviews;
- (void)setStyle:(long long)arg0;
- (id)textColor;

@end