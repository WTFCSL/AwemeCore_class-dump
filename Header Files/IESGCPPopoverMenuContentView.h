//
//     Generated by private class-dump
//

@class UIColor;

@interface IESGCPPopoverMenuContentView : UIView {
    UIColor *_fillColor;
    struct CGPoint { double x; double y; } _anchorPoint;
}

@property (nonatomic) struct CGPoint { double x; double y; } anchorPoint;
@property (retain, nonatomic) UIColor *fillColor;

- (void)setAnchorPoint:(struct CGPoint { double x0; double x1; })arg0;
- (struct CGPoint { double x0; double x1; })anchorPoint;
- (void)setFillColor:(id)arg0;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)fillColor;

@end