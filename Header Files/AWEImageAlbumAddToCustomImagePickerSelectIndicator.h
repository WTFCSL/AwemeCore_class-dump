//
//     Generated by private class-dump
//

@class UIColor, UIImage;

@interface AWEImageAlbumAddToCustomImagePickerSelectIndicator : UIView {
    BOOL _selected;
    UIColor *_borderColor;
    UIColor *_selectedBorderColor;
    UIColor *_fillColor;
    UIImage *_checkIcon;
    double _selectedBorderWidth;
}

@property (retain, nonatomic) UIColor *borderColor;
@property (retain, nonatomic) UIColor *selectedBorderColor;
@property (retain, nonatomic) UIColor *fillColor;
@property (retain, nonatomic) UIImage *checkIcon;
@property (nonatomic) double selectedBorderWidth;
@property (nonatomic) BOOL selected;

- (void)setCheckIcon:(id)arg0;
- (id)selectedBorderColor;
- (void)setSelectedBorderColor:(id)arg0;
- (void)setSelectedBorderWidth:(double)arg0;
- (double)selectedBorderWidth;
- (BOOL)selected;
- (void)setFillColor:(id)arg0;
- (void).cxx_destruct;
- (id)strokeColor;
- (id)borderColor;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setBorderColor:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)fillColor;
- (void)setSelected:(BOOL)arg0;
- (id)checkIcon;

@end
