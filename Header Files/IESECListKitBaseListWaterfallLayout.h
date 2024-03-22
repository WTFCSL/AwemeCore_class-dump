//
//     Generated by private class-dump
//

@class NSMutableArray, NSMutableDictionary;
@protocol IESECListKitBaseListWaterfallLayoutDelegate;

@interface IESECListKitBaseListWaterfallLayout : IESECListKitBaseListBaseWaterfallLayout {
    BOOL _enableStickHeader;
    NSMutableArray *_columnHeights;
    NSMutableArray *_sectionItemAttributes;
    NSMutableDictionary *_sectionOriginStickerHeaderSticked;
    NSMutableDictionary *_sectionOriginStickerHeaderFrameY;
    id<IESECListKitBaseListWaterfallLayoutDelegate> _baseDelegate;
}

@property (retain, nonatomic) NSMutableArray *columnHeights;
@property (retain, nonatomic) NSMutableArray *sectionItemAttributes;
@property (retain, nonatomic) NSMutableDictionary *sectionOriginStickerHeaderSticked;
@property (retain, nonatomic) NSMutableDictionary *sectionOriginStickerHeaderFrameY;
@property (weak, nonatomic) id<IESECListKitBaseListWaterfallLayoutDelegate> baseDelegate;
@property (nonatomic) BOOL enableStickHeader;

- (BOOL)enableStickHeader;
- (id)sectionItemAttributes;
- (void)setSectionItemAttributes:(id)arg0;
- (BOOL)shouldStickHeaderAtSection:(long long)arg0;
- (void)setEnableStickHeader:(BOOL)arg0;
- (id)columnHeights;
- (long long)columnCountForSection:(long long)arg0;
- (unsigned long long)longestColumnIndexInSection:(long long)arg0;
- (unsigned long long)shortestColumnIndexInSection:(long long)arg0;
- (void)setColumnHeights:(id)arg0;
- (id)ieseclistkit_extraLayoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)ieseclistkit_updateInitialLayoutAttributes:(id)arg0 forAppearingCellAtIndexPath:(id)arg1 isInserted:(BOOL)arg2;
- (void)ieseclistkit_updateFinalLayoutAttributes:(id)arg0 forAppearingCellAtIndexPath:(id)arg1 isDeleted:(BOOL)arg2;
- (id)sectionOriginStickerHeaderFrameY;
- (id)sectionOriginStickerHeaderSticked;
- (BOOL)isSectionHeaderSticked:(long long)arg0;
- (void)setSectionOriginStickerHeaderSticked:(id)arg0;
- (void)setSectionOriginStickerHeaderFrameY:(id)arg0;
- (id)indexPathsToInsertForDecorationViewOfKind:(id)arg0;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg0 atIndexPath:(id)arg1;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)prepareLayout;
- (id)indexPathsToDeleteForDecorationViewOfKind:(id)arg0;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)layoutAttributesForItemAtIndexPath:(id)arg0;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg0 atIndexPath:(id)arg1;
- (id)init;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (void).cxx_destruct;
- (struct CGPoint { double x0; double x1; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x0; double x1; })arg0;
- (id)initialLayoutAttributesForAppearingSupplementaryElementOfKind:(id)arg0 atIndexPath:(id)arg1;
- (id)finalLayoutAttributesForDisappearingSupplementaryElementOfKind:(id)arg0 atIndexPath:(id)arg1;
- (id)baseDelegate;
- (void)setBaseDelegate:(id)arg0;

@end
