//
//     Generated by private class-dump
//

@interface AFDAlbumPreviewFlowLayout : UICollectionViewFlowLayout {
    void /* unknown type, empty encoding */ layoutAttributes;
    void /* unknown type, empty encoding */ normalCellSize;
    void /* unknown type, empty encoding */ selectedCellSize;
    void /* unknown type, empty encoding */ spacing;
    void /* unknown type, empty encoding */ contentSize;
}

@property (nonatomic) double minimumInteritemSpacing;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } collectionViewContentSize;

- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)invalidationContextForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)layoutAttributesForItemAtIndexPath:(id)arg0;
- (id)init;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg0;
- (void)setMinimumInteritemSpacing:(double)arg0;
- (double)minimumInteritemSpacing;
- (struct CGPoint { double x0; double x1; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x0; double x1; })arg0 withScrollingVelocity:(struct CGPoint { double x0; double x1; })arg1;

@end
