//
//     Generated by private class-dump
//

@class NSString, NSMutableArray;
@protocol AWEEcomNewSearchResultLayout;

@interface AWEEcomSearchResultLayout : UICollectionViewFlowLayout <AWEEcomSearchResultLayoutProtocol> {
    BOOL _enableCacheItems;
    BOOL _supportsFullWidthCell;
    long long _columnCount;
    double _minimumColumnSpacing;
    double _minimumContentHeight;
    id<AWEEcomNewSearchResultLayout> _delegate;
    NSMutableArray *_columnHeights;
    NSMutableArray *_sectionItemAttributes;
    NSMutableArray *_allItemAttributes;
    NSMutableArray *_unionRects;
}

@property (weak, nonatomic) id<AWEEcomNewSearchResultLayout> delegate;
@property (retain, nonatomic) NSMutableArray *columnHeights;
@property (retain, nonatomic) NSMutableArray *sectionItemAttributes;
@property (retain, nonatomic) NSMutableArray *allItemAttributes;
@property (retain, nonatomic) NSMutableArray *unionRects;
@property (nonatomic) BOOL enableCacheItems;
@property (nonatomic) long long columnCount;
@property (nonatomic) double minimumColumnSpacing;
@property (nonatomic) double minimumContentHeight;
@property (nonatomic) BOOL supportsFullWidthCell;
@property (nonatomic) double minimumInteritemSpacing;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } sectionInset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setMinimumColumnSpacing:(double)arg0;
- (id)allItemAttributes;
- (id)unionRects;
- (void)setAllItemAttributes:(id)arg0;
- (void)setUnionRects:(id)arg0;
- (id)sectionItemAttributes;
- (void)setSectionItemAttributes:(id)arg0;
- (id)columnHeights;
- (long long)columnCountForSection:(long long)arg0;
- (unsigned long long)longestColumnIndexInSection:(long long)arg0;
- (unsigned long long)shortestColumnIndexInSection:(long long)arg0;
- (void)setColumnHeights:(id)arg0;
- (double)minimumColumnSpacing;
- (BOOL)enableCacheItems;
- (BOOL)supportsFullWidthCell;
- (unsigned long long)nextColumnIndexForItem:(long long)arg0 inSection:(long long)arg1;
- (void)setEnableCacheItems:(BOOL)arg0;
- (void)setMinimumContentHeight:(double)arg0;
- (void)setSupportsFullWidthCell:(BOOL)arg0;
- (long long)columnCount;
- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)layoutAttributesForItemAtIndexPath:(id)arg0;
- (id)init;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (void).cxx_destruct;
- (void)commonInit;
- (id)delegate;
- (id)initWithCoder:(id)arg0;
- (void)setColumnCount:(long long)arg0;
- (void)setDelegate:(id)arg0;
- (double)minimumContentHeight;

@end