//
//     Generated by private class-dump
//

@class NSString, UICollectionView, UIView, AWEFeedNearbyPOIShopCardModel;

@interface AWEFeedNearbyShopCardContentDishesView : UIView <UICollectionViewDelegate, UICollectionViewDataSource> {
    BOOL _isStructModel;
    UICollectionView *_dishesCollectionView;
    AWEFeedNearbyPOIShopCardModel *_model;
    UIView *_imageBackupView;
}

@property (retain, nonatomic) UICollectionView *dishesCollectionView;
@property (retain, nonatomic) AWEFeedNearbyPOIShopCardModel *model;
@property (retain, nonatomic) UIView *imageBackupView;
@property (nonatomic) BOOL isStructModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)dishesCollectionView;
- (void)setIsStructModel:(BOOL)arg0;
- (BOOL)isStructModel;
- (void)updateWithPOIShopCardModel:(id)arg0;
- (id)imageBackupView;
- (void)setDishesCollectionView:(id)arg0;
- (void)setImageBackupView:(id)arg0;
- (long long)numberOfSectionsInCollectionView:(id)arg0;
- (void)setModel:(id)arg0;
- (double)collectionView:(id)arg0 layout:(id)arg1 minimumInteritemSpacingForSectionAtIndex:(long long)arg2;
- (void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)arg0 layout:(id)arg1 insetForSectionAtIndex:(long long)arg2;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2;
- (void).cxx_destruct;
- (double)collectionView:(id)arg0 layout:(id)arg1 minimumLineSpacingForSectionAtIndex:(long long)arg2;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (id)model;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)layoutUI;

@end
