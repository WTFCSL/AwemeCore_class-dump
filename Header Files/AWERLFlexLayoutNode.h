//
//     Generated by private class-dump
//

@interface AWERLFlexLayoutNode : AWERLLayoutNode {
    struct AWERLFlexStyle { unsigned long long flexDirection; double flexGap; struct UIEdgeInsets { double top; double left; double bottom; double right; } padding; unsigned long long alignItem; unsigned long long justifyContent; BOOL fullfillParent; } _style;
}

@property (nonatomic) struct AWERLFlexStyle { unsigned long long flexDirection; double flexGap; struct UIEdgeInsets { double top; double left; double bottom; double right; } padding; unsigned long long alignItem; unsigned long long justifyContent; BOOL fullfillParent; } style;

- (struct CGSize { double x0; double x1; })computeLayoutThatFits:(struct CGSize { double x0; double x1; })arg0;
- (id)initWithSize:(struct CGSize { double x0; double x1; })arg0 style:(struct AWERLFlexStyle { unsigned long long x0; double x1; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x2; unsigned long long x3; unsigned long long x4; BOOL x5; })arg1 virtualNode:(id)arg2;
- (struct AWERLFlexStyle { unsigned long long x0; double x1; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x2; unsigned long long x3; unsigned long long x4; BOOL x5; })style;
- (void)setStyle:(struct AWERLFlexStyle { unsigned long long x0; double x1; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x2; unsigned long long x3; unsigned long long x4; BOOL x5; })arg0;

@end
