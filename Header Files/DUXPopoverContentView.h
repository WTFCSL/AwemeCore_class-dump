//
//     Generated by private class-dump
//

@class UIColor;

@interface DUXPopoverContentView : UIView {
    unsigned long long _position;
    double _sharpOffset;
    UIColor *_popoverColor;
    double _duxPopoverCornerRadius;
}

@property (nonatomic) double duxPopoverCornerRadius;
@property (nonatomic) unsigned long long position;
@property (nonatomic) double sharpOffset;
@property (retain, nonatomic) UIColor *popoverColor;

- (void)awe_themeDidChange:(long long)arg0;
- (void)setPopoverColor:(id)arg0;
- (unsigned long long)colorStyleToSuit:(long long)arg0;
- (id)revisedContentTintColor:(id)arg0;
- (void)setSharpOffset:(double)arg0;
- (void)setDuxPopoverCornerRadius:(double)arg0;
- (double)sharpOffset;
- (double)duxPopoverCornerRadius;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (unsigned long long)position;
- (void)setPosition:(unsigned long long)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)popoverColor;

@end
