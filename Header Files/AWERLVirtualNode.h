//
//     Generated by private class-dump
//

@class AWERLProps, NSString, UIView;

@interface AWERLVirtualNode : NSObject <AWERLVirtualNodeProtocol> {
    AWERLProps *_props;
    struct CGSize { double width; double height; } _size;
    struct CGSize { double width; double height; } _computedSize;
    struct CGPoint { double x; double y; } _computedPosition;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _computedFrame;
}

@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) struct CGSize { double width; double height; } computedSize;
@property (nonatomic) struct CGPoint { double x; double y; } computedPosition;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } computedFrame;
@property (retain, nonatomic) AWERLProps *props;
@property (readonly, nonatomic) UIView *mountedView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setComputedSize:(struct CGSize { double x0; double x1; })arg0;
- (struct CGPoint { double x0; double x1; })computedPosition;
- (void)setComputedPosition:(struct CGPoint { double x0; double x1; })arg0;
- (id)createLayoutNode;
- (id)mountedView;
- (id)mountWithContext:(id)arg0;
- (void)unmount;
- (void)childrenDidMount;
- (id)initWithSize:(struct CGSize { double x0; double x1; })arg0 props:(id)arg1;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })size;
- (id)props;
- (void)setSize:(struct CGSize { double x0; double x1; })arg0;
- (unsigned long long)numberOfChildren;
- (id)childAtIndex:(unsigned long long)arg0;
- (struct CGSize { double x0; double x1; })computedSize;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })computedFrame;
- (void)setComputedFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setProps:(id)arg0;

@end