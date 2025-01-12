//
//     Generated by private class-dump
//

@class NSArray, IESECHorizonFlowLayoutConfig;
@protocol IESECHorizonFlowItemSizeDelegate;

@interface IESECHorizonFlowLayout : UICollectionViewLayout {
    id<IESECHorizonFlowItemSizeDelegate> _itemSizeDelegate;
    NSArray *_layoutAttributes;
    IESECHorizonFlowLayoutConfig *_config;
}

@property (copy, nonatomic) NSArray *layoutAttributes;
@property (retain, nonatomic) IESECHorizonFlowLayoutConfig *config;
@property (weak, nonatomic) id<IESECHorizonFlowItemSizeDelegate> itemSizeDelegate;

- (void)updateConfig:(id)arg0;
- (id)itemSizeDelegate;
- (id)initWithLayoutConfig:(id)arg0;
- (void)setItemSizeDelegate:(id)arg0;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)layoutAttributes;
- (id)layoutAttributesForItemAtIndexPath:(id)arg0;
- (void)setConfig:(id)arg0;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (void).cxx_destruct;
- (id)config;
- (void)setLayoutAttributes:(id)arg0;

@end
