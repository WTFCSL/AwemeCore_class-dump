//
//     Generated by private class-dump
//

@interface LynxCollectionViewLayoutModel : NSObject <NSCopying> {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _frame;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;

+ (id)modelWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
+ (id)modelWithHeight:(double)arg0;
+ (id)modelWithWidth:(double)arg0;
+ (id)modelWithDefaultSize;
+ (double)defaultHeight;
+ (double)defaultWidth;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end
