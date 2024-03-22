//
//     Generated by private class-dump
//

@class IESLiveUserCardStore, NSString, UICollectionView, IESLiveUserCardHonorWallItemContainer, IESLiveUserCardBigGiftExhibitionView, IESLiveUserCardFansGroupOrVIPView;

@interface IESLiveUserCardHonorWallContainer : UIView <UICollectionViewDataSource, UICollectionViewDelegate> {
    BOOL _landscapeMode;
    BOOL _canExpand;
    UICollectionView *_collectionView;
    IESLiveUserCardFansGroupOrVIPView *_fansGroupView;
    IESLiveUserCardBigGiftExhibitionView *_bigGiftExhibitionView;
    IESLiveUserCardStore *_store;
    IESLiveUserCardHonorWallItemContainer *_itemContainer;
    NSString *_cellID;
}

@property (retain, nonatomic) IESLiveUserCardHonorWallItemContainer *itemContainer;
@property (retain, nonatomic) NSString *cellID;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) IESLiveUserCardFansGroupOrVIPView *fansGroupView;
@property (retain, nonatomic) IESLiveUserCardBigGiftExhibitionView *bigGiftExhibitionView;
@property (retain, nonatomic) IESLiveUserCardStore *store;
@property (nonatomic) BOOL landscapeMode;
@property (nonatomic) BOOL canExpand;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)getViewHeight;
- (id)fansGroupView;
- (void)setFansGroupView:(id)arg0;
- (void)setLandscapeMode:(BOOL)arg0;
- (void)usercardOpenFinished;
- (id)createUICollectionView;
- (void)setBigGiftExhibitionView:(id)arg0;
- (id)initWithStore:(id)arg0 landscape:(BOOL)arg1;
- (BOOL)threeBottomOperatingAreasMode;
- (BOOL)twoBottomOperatingAreasMode;
- (id)getHonorViewDecoration;
- (BOOL)newShowFansGroupOrVIPModeWithIndexPath:(id)arg0;
- (BOOL)needShowBigGiftExhibitionWithIndexPath:(id)arg0;
- (id)bigGiftExhibitionView;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2;
- (void).cxx_destruct;
- (id)collectionView;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (id)store;
- (void)setCollectionView:(id)arg0;
- (void)setStore:(id)arg0;
- (id)cellID;
- (void)setItemContainer:(id)arg0;
- (id)itemContainer;
- (void)setCellID:(id)arg0;
- (void)setupUI;
- (BOOL)canExpand;
- (void)setCanExpand:(BOOL)arg0;
- (BOOL)landscapeMode;

@end
