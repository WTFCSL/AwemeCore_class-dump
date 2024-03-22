//
//     Generated by private class-dump
//

@class UIImageView, UILabel;

@interface IESECHighlightButton : UIButton {
    double _selectedAlpha;
    UIImageView *_imageContentView;
    UILabel *_subTextLabel;
}

@property (nonatomic) double selectedAlpha;
@property (retain, nonatomic) UIImageView *imageContentView;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } hitTestEdgeInsets;
@property (retain, nonatomic) UILabel *subTextLabel;

+ (id)imageButtonWithSelectedAlpha:(double)arg0;
+ (id)buttonWithSelectedAlpha:(double)arg0;

- (void)setSelectedAlpha:(double)arg0;
- (double)selectedAlpha;
- (void)setSubTextLabel:(id)arg0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })hitTestEdgeInsets;
- (void)setHitTestEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0;
- (void)setHighlighted:(BOOL)arg0;
- (id)imageContentView;
- (void)setImageContentView:(id)arg0;
- (id)subTextLabel;

@end
