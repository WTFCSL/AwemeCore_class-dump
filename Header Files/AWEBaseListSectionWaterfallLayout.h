//
//     Generated by private class-dump
//

@class NSMutableArray;
@protocol AWEBaseListSectionWaterfallLayoutDelegate;

@interface AWEBaseListSectionWaterfallLayout : AWEBaseListBaseWaterfallLayout {
    long long _sectionColumnCount;
    double _verticalSpacing;
    double _horizontalSpacing;
    double _contentHeight;
    NSMutableArray *_columnHeights;
    NSMutableArray *_sectionItemAttributes;
    id<AWEBaseListSectionWaterfallLayoutDelegate> _baseDelegate;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _totalSectionsInset;
}

@property (nonatomic) double contentHeight;
@property (retain, nonatomic) NSMutableArray *columnHeights;
@property (retain, nonatomic) NSMutableArray *sectionItemAttributes;
@property (weak, nonatomic) id<AWEBaseListSectionWaterfallLayoutDelegate> baseDelegate;
@property (nonatomic) long long sectionColumnCount;
@property (nonatomic) double verticalSpacing;
@property (nonatomic) double horizontalSpacing;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } totalSectionsInset;

- (void)awelistkit_updateInitialLayoutAttributes:(id)arg0 forAppearingCellAtIndexPath:(id)arg1 isInserted:(BOOL)arg2;
- (void)awelistkit_updateFinalLayoutAttributes:(id)arg0 forAppearingCellAtIndexPath:(id)arg1 isDeleted:(BOOL)arg2;
- (void)setSectionColumnCount:(long long)arg0;
- (void)setTotalSectionsInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })totalSectionsInset;
- (id)sectionItemAttributes;
- (void)setSectionItemAttributes:(id)arg0;
- (long long)sectionColumnCount;
- (unsigned long long)longestColumnIndex;
- (unsigned long long)shortestColumnIndex;
- (id)columnHeights;
- (void)setColumnHeights:(id)arg0;
- (void)prepareLayout;
- (id)layoutAttributesForItemAtIndexPath:(id)arg0;
- (id)init;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (void).cxx_destruct;
- (double)contentHeight;
- (void)setContentHeight:(double)arg0;
- (struct CGPoint { double x0; double x1; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x0; double x1; })arg0;
- (double)verticalSpacing;
- (double)horizontalSpacing;
- (void)setHorizontalSpacing:(double)arg0;
- (id)baseDelegate;
- (void)setBaseDelegate:(id)arg0;
- (void)setVerticalSpacing:(double)arg0;

@end