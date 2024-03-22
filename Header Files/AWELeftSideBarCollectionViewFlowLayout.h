//
//     Generated by private class-dump
//

@class NSMutableArray;

@interface AWELeftSideBarCollectionViewFlowLayout : UICollectionViewFlowLayout {
    NSMutableArray *_decorationViewAttrs;
}

@property (retain, nonatomic) NSMutableArray *decorationViewAttrs;

- (void)setDecorationViewAttrs:(id)arg0;
- (id)decorationViewAttrs;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calculateOriginalFrameWithSectionFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 sectionInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calculateBorderFrameWithSectionFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 sectionInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg1;
- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg0 atIndexPath:(id)arg1;
- (id)init;
- (void).cxx_destruct;
- (void)setup;

@end