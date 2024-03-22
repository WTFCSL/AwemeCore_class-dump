//
//     Generated by private class-dump
//

@class IESECBFFRowSectionLayout, UICollectionView, IESECGoodsDetailSectionObject, IESECGoodsDetailSliceManager;

@interface IESECBFFSliceSectionController : IESECGoodsDetailBaseSectionController {
    BOOL _isSmallMode;
    IESECGoodsDetailSectionObject *_sectionObject;
    UICollectionView *_collectionView;
    IESECGoodsDetailSliceManager *_sliceManager;
    IESECBFFRowSectionLayout *_sectionLayout;
}

@property (retain, nonatomic) IESECBFFRowSectionLayout *sectionLayout;
@property (nonatomic) BOOL isSmallMode;
@property (retain, nonatomic) IESECGoodsDetailSectionObject *sectionObject;
@property (weak, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) IESECGoodsDetailSliceManager *sliceManager;

- (id)cellForItemAtIndex:(long long)arg0;
- (id)sectionLayout;
- (double)getSliceHeightAtIndex:(long long)arg0;
- (id)getSliceViewAtIndex:(long long)arg0;
- (id)sliceManager;
- (BOOL)isSmallMode;
- (void)setIsSmallMode:(BOOL)arg0;
- (void)setSectionObject:(id)arg0;
- (void)setSliceManager:(id)arg0;
- (void)setSectionLayout:(id)arg0;
- (long long)numberOfItems;
- (void).cxx_destruct;
- (id)collectionView;
- (void)setCollectionView:(id)arg0;
- (id)sectionObject;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)arg0;

@end
