//
//     Generated by private class-dump
//

@interface AWEAdEvaluateTagLabelView : UILabel {
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _edgeInsets;
}

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } edgeInsets;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 WithEdges:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg1;
- (void)drawTextInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })edgeInsets;

@end
