//
//     Generated by private class-dump
//

@class NSArray;
@protocol IESECStoreSearchHistoryLayoutDelegate;

@interface IESECStoreSearchHistoryLayout : UICollectionViewFlowLayout {
    double _marginHorizontal;
    double _marginVertical;
    double _itemSpacing;
    double _marginBottom;
    id<IESECStoreSearchHistoryLayoutDelegate> _delegate;
    NSArray *_layoutSections;
    double _contentHeight;
}

@property (copy, nonatomic) NSArray *layoutSections;
@property (nonatomic) double contentHeight;
@property (nonatomic) double marginHorizontal;
@property (nonatomic) double marginVertical;
@property (nonatomic) double itemSpacing;
@property (nonatomic) double marginBottom;
@property (weak, nonatomic) id<IESECStoreSearchHistoryLayoutDelegate> delegate;

- (void)setMarginVertical:(double)arg0;
- (void)setMarginHorizontal:(double)arg0;
- (void)setLayoutSections:(id)arg0;
- (double)marginHorizontal;
- (double)marginVertical;
- (id)layoutSections;
- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)layoutAttributesForItemAtIndexPath:(id)arg0;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (void).cxx_destruct;
- (double)contentHeight;
- (double)itemSpacing;
- (void)setItemSpacing:(double)arg0;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)setContentHeight:(double)arg0;
- (double)marginBottom;
- (void)setMarginBottom:(double)arg0;

@end