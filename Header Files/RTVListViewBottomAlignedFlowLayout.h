//
//     Generated by private class-dump
//

@class NSArray;

@interface RTVListViewBottomAlignedFlowLayout : UICollectionViewFlowLayout {
    NSArray *_insertedItems;
    NSArray *_deletedItems;
}

@property (copy, nonatomic) NSArray *insertedItems;
@property (copy, nonatomic) NSArray *deletedItems;

- (double)__excessContentSizeComparedToCollectionViewBound;
- (void)setInsertedItems:(id)arg0;
- (BOOL)__scrollViewCanScroll;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg0;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg0;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void).cxx_destruct;
- (void)prepareForCollectionViewUpdates:(id)arg0;
- (void)finalizeCollectionViewUpdates;
- (id)deletedItems;
- (void)setDeletedItems:(id)arg0;
- (id)insertedItems;

@end