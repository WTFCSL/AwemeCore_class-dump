//
//     Generated by private class-dump
//

@class AWEPayCollectionModel;

@interface AWEPayExchangeRedPacketLayout : UICollectionViewFlowLayout {
    AWEPayCollectionModel *_model;
}

@property (retain, nonatomic) AWEPayCollectionModel *model;

- (void)p_initWithModel;
- (id)initWithModel:(id)arg0;
- (void)setModel:(id)arg0;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void).cxx_destruct;
- (id)model;

@end