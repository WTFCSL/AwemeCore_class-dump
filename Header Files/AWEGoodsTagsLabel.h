//
//     Generated by private class-dump
//

@interface AWEGoodsTagsLabel : UILabel {
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _inserts;
}

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } inserts;

- (void)drawTextInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setInserts:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })inserts;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })textRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 limitedToNumberOfLines:(long long)arg1;

@end
