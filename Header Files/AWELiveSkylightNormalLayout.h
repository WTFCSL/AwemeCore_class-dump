//
//     Generated by private class-dump
//

@class NSMutableDictionary;

@interface AWELiveSkylightNormalLayout : UICollectionViewLayout {
    double _itemHorizontalSpace;
    NSMutableDictionary *_cacheCellAttributes;
    NSMutableDictionary *_cacheHeaderAttributes;
    NSMutableDictionary *_cacheFooterAttributes;
    double _nextItemX;
    long long _nextZIndex;
}

@property (retain, nonatomic) NSMutableDictionary *cacheCellAttributes;
@property (retain, nonatomic) NSMutableDictionary *cacheHeaderAttributes;
@property (retain, nonatomic) NSMutableDictionary *cacheFooterAttributes;
@property (nonatomic) double nextItemX;
@property (nonatomic) long long nextZIndex;
@property (nonatomic) double itemHorizontalSpace;

- (void)setNextItemX:(double)arg0;
- (void)setNextZIndex:(long long)arg0;
- (void)setCacheCellAttributes:(id)arg0;
- (void)setCacheHeaderAttributes:(id)arg0;
- (void)setCacheFooterAttributes:(id)arg0;
- (double)nextItemX;
- (id)buildAttributesWithX:(double)arg0 itemType:(unsigned long long)arg1 indexPath:(id)arg2;
- (id)cacheHeaderAttributes;
- (double)itemHorizontalSpace;
- (id)cacheCellAttributes;
- (id)cacheFooterAttributes;
- (id)flowLayoutDelegate;
- (double)attributeYAlignmentBottom:(struct CGSize { double x0; double x1; })arg0;
- (long long)nextZIndex;
- (void)setItemHorizontalSpace:(double)arg0;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg0 atIndexPath:(id)arg1;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)layoutAttributesForItemAtIndexPath:(id)arg0;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (void).cxx_destruct;

@end