//
//     Generated by private class-dump
//

@class UIImage;

@interface AWEPlayTagLabel : AWEHollowLabel {
    UIImage *_shapeImage;
}

@property (retain, nonatomic) UIImage *shapeImage;

+ (id)formateDuration:(id)arg0;
+ (struct CGSize { double x0; double x1; })viewSizeWithPlayDuration:(id)arg0;
+ (id)viewWithPlayDuration:(id)arg0;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })playLabelInsets;
+ (id)playLabelFont;
+ (struct CGSize { double x0; double x1; })labelSizeWithPlayDuration:(id)arg0;

- (id)shapeImage;
- (void)setShapeImage:(id)arg0;
- (id)initWithPlayDuration:(id)arg0;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;

@end