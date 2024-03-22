//
//     Generated by private class-dump
//

@interface AWERLGridVirtualLayoutNode : AWERLLayoutNode {
    struct AWERLGridStyle { struct CGSize { double width; double height; } itemSize; struct UIEdgeInsets { double top; double left; double bottom; double right; } padding; double minimumInteritemSpacing; double minimumLineSpacing; } _style;
}

@property (nonatomic) struct AWERLGridStyle { struct CGSize { double width; double height; } itemSize; struct UIEdgeInsets { double top; double left; double bottom; double right; } padding; double minimumInteritemSpacing; double minimumLineSpacing; } style;

- (struct CGSize { double x0; double x1; })computeLayoutThatFits:(struct CGSize { double x0; double x1; })arg0;
- (id)initWithSize:(struct CGSize { double x0; double x1; })arg0 style:(struct AWERLGridStyle { struct CGSize { double x0; double x1; } x0; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x1; double x2; double x3; })arg1 virtualNode:(id)arg2;
- (struct AWERLGridStyle { struct CGSize { double x0; double x1; } x0; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x1; double x2; double x3; })style;
- (void)setStyle:(struct AWERLGridStyle { struct CGSize { double x0; double x1; } x0; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x1; double x2; double x3; })arg0;

@end
