//
//     Generated by private class-dump
//

@interface DitoNodeFloatLayout : DitoNodeLayout {
    BOOL _hasBeenInitedPageview;
    double _halfContainerInitialRatio;
    unsigned long long _halfContainerType;
    double _initialPageviewOriginY;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _floatContainerBounds;
}

@property (nonatomic) double initialPageviewOriginY;
@property (nonatomic) BOOL hasBeenInitedPageview;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } floatContainerBounds;
@property (nonatomic) double halfContainerInitialRatio;
@property (nonatomic) unsigned long long halfContainerType;

- (double)halfContainerInitialRatio;
- (unsigned long long)halfContainerType;
- (void)setHalfContainerType:(unsigned long long)arg0;
- (void)nodeDidLayout;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })floatContainerBounds;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })displayFrameWithNodeSize:(struct CGSize { double x0; double x1; })arg0 floatGravity:(unsigned long long)arg1 isScroll:(BOOL)arg2;
- (void)setInitialPageviewOriginY:(double)arg0;
- (BOOL)isStickyFloat:(BOOL)arg0;
- (double)initialPageviewOriginY;
- (void)setFloatContainerBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setHalfContainerInitialRatio:(double)arg0;
- (BOOL)hasBeenInitedPageview;
- (void)setHasBeenInitedPageview:(BOOL)arg0;

@end