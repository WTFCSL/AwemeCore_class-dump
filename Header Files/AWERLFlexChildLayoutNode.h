//
//     Generated by private class-dump
//

@interface AWERLFlexChildLayoutNode : AWERLLayoutNode {
    struct AWERLFlexChildStyle { unsigned long long position; double top; double bottom; double left; double right; } _style;
}

@property (nonatomic) struct AWERLFlexChildStyle { unsigned long long position; double top; double bottom; double left; double right; } style;

- (struct CGSize { double x0; double x1; })computeLayoutThatFits:(struct CGSize { double x0; double x1; })arg0;
- (id)initWithStyle:(struct AWERLFlexChildStyle { unsigned long long x0; double x1; double x2; double x3; double x4; })arg0 virtualNode:(id)arg1;
- (struct AWERLFlexChildStyle { unsigned long long x0; double x1; double x2; double x3; double x4; })style;
- (void)setStyle:(struct AWERLFlexChildStyle { unsigned long long x0; double x1; double x2; double x3; double x4; })arg0;

@end
