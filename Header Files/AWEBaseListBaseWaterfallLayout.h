//
//     Generated by private class-dump
//

@class NSMutableArray, NSMutableDictionary;

@interface AWEBaseListBaseWaterfallLayout : UICollectionViewLayout {
    NSMutableArray *_allItemAttributes;
    NSMutableDictionary *_headersAttributes;
    NSMutableDictionary *_footersAttributes;
    NSMutableArray *_unionRects;
}

@property (retain, nonatomic) NSMutableArray *allItemAttributes;
@property (retain, nonatomic) NSMutableDictionary *headersAttributes;
@property (retain, nonatomic) NSMutableDictionary *footersAttributes;
@property (retain, nonatomic) NSMutableArray *unionRects;

- (void)awelistkit_updateInitialLayoutAttributes:(id)arg0 forAppearingCellAtIndexPath:(id)arg1 isInserted:(BOOL)arg2;
- (void)awelistkit_updateFinalLayoutAttributes:(id)arg0 forAppearingCellAtIndexPath:(id)arg1 isDeleted:(BOOL)arg2;
- (id)allItemAttributes;
- (id)headersAttributes;
- (id)footersAttributes;
- (id)unionRects;
- (id)awelistkit_extraLayoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)buildUnionRects;
- (void)setAllItemAttributes:(id)arg0;
- (void)setHeadersAttributes:(id)arg0;
- (void)setFootersAttributes:(id)arg0;
- (void)setUnionRects:(id)arg0;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg0 atIndexPath:(id)arg1;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg0;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)prepareLayout;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg0;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)init;
- (void).cxx_destruct;
- (void)prepareForCollectionViewUpdates:(id)arg0;
- (void)finalizeCollectionViewUpdates;

@end
