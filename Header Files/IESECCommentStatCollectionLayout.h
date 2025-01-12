//
//     Generated by private class-dump
//

@class NSArray;
@protocol IESECCommentStatCellLayoutSizeDelegate;

@interface IESECCommentStatCollectionLayout : UICollectionViewFlowLayout {
    NSArray *_layoutAttributes;
    id<IESECCommentStatCellLayoutSizeDelegate> _sizeDelegate;
}

@property (copy, nonatomic) NSArray *layoutAttributes;
@property (weak, nonatomic) id<IESECCommentStatCellLayoutSizeDelegate> sizeDelegate;

- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)layoutAttributes;
- (void).cxx_destruct;
- (void)setLayoutAttributes:(id)arg0;
- (id)sizeDelegate;
- (void)setSizeDelegate:(id)arg0;

@end
