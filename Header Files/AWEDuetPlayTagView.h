//
//     Generated by private class-dump
//

@class UIColor, NSAttributedString, UIImage;

@interface AWEDuetPlayTagView : UIView {
    NSAttributedString *_title;
    double _maxWidth;
    UIImage *_shapeImage;
    UIColor *_fillColor;
    double _cornerRadius;
    double _imageLeftOffset;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _textInsets;
}

@property (retain, nonatomic) UIColor *fillColor;
@property (nonatomic) double cornerRadius;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } textInsets;
@property (nonatomic) double imageLeftOffset;
@property (retain, nonatomic) NSAttributedString *title;
@property (nonatomic) double maxWidth;
@property (retain, nonatomic) UIImage *shapeImage;

+ (BOOL)replaceOperationAvailableForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg0 inText:(id)arg1;
+ (id)attributedStringByTruncatingString:(id)arg0 toWidth:(double)arg1;
+ (id)defaultDuetTagViewWithTitle:(id)arg0 maxWidth:(double)arg1 isShowInFeed:(BOOL)arg2;

- (id)shapeImage;
- (double)imageLeftOffset;
- (void)setShapeImage:(id)arg0;
- (void)setImageLeftOffset:(double)arg0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })textInsets;
- (void)setFillColor:(id)arg0;
- (void).cxx_destruct;
- (void)setMaxWidth:(double)arg0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (double)cornerRadius;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (double)maxWidth;
- (void)setTextInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0;
- (id)title;
- (id)fillColor;
- (void)setCornerRadius:(double)arg0;
- (void)setTitle:(id)arg0;

@end
