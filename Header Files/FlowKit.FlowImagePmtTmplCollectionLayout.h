//
//     Generated by private class-dump
//

@interface FlowKit.FlowImagePmtTmplCollectionLayout : UICollectionViewFlowLayout {
    void /* unknown type, empty encoding */ dataSource;
    void /* unknown type, empty encoding */ rowsCount;
    void /* unknown type, empty encoding */ layoutAttributes;
    void /* unknown type, empty encoding */ rowsHeights;
    void /* unknown type, empty encoding */ itemWidth;
    void /* unknown type, empty encoding */ noSpaceHeight;
    void /* unknown type, empty encoding */ itemSpace;
    void /* unknown type, empty encoding */ showDetail;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } collectionViewContentSize;

- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)init;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg0;

@end
