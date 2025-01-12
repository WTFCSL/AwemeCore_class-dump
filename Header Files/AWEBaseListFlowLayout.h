//
//     Generated by private class-dump
//

@protocol AWEBaseListFlowLayoutDelegate;

@interface AWEBaseListFlowLayout : UICollectionViewFlowLayout {
    BOOL _enableStickHeader;
    id<AWEBaseListFlowLayoutDelegate> _baseDelegate;
}

@property (weak, nonatomic) id<AWEBaseListFlowLayoutDelegate> baseDelegate;
@property (nonatomic) BOOL enableStickHeader;

+ (Class)customDecorationViewClass;

- (BOOL)enableStickHeader;
- (BOOL)shouldStickHeaderAtSection:(long long)arg0;
- (void)setEnableStickHeader:(BOOL)arg0;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg0 atIndexPath:(id)arg1;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg0;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)prepareLayout;
- (id)indexPathsToDeleteForDecorationViewOfKind:(id)arg0;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg0;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg0 atIndexPath:(id)arg1;
- (id)init;
- (void).cxx_destruct;
- (void)prepareForCollectionViewUpdates:(id)arg0;
- (void)finalizeCollectionViewUpdates;
- (struct CGPoint { double x0; double x1; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x0; double x1; })arg0;
- (id)initialLayoutAttributesForAppearingSupplementaryElementOfKind:(id)arg0 atIndexPath:(id)arg1;
- (id)finalLayoutAttributesForDisappearingSupplementaryElementOfKind:(id)arg0 atIndexPath:(id)arg1;
- (id)baseDelegate;
- (void)setBaseDelegate:(id)arg0;

@end
