//
//     Generated by private class-dump
//

@protocol AWEBaseListViewControllerOverride <NSObject, AWEBaseListViewControllerDataSource>

+ (Class)viewModelClass;
+ (Class)collectionViewClass;
+ (Class)viewHolderClass;

@optional

- (void)customLayoutCollectionView:(id)arg0;
- (id)layoutForCollectionView;
- (BOOL)disableContentOffsetRestorationAnchor;
- (BOOL)enableStickHeader;
- (BOOL)enableStickCollectionView;
- (BOOL)enableInteractiveMovement;
- (void)setupCollectionView:(id)arg0;

@end
