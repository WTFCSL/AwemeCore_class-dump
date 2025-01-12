//
//     Generated by private class-dump
//

@class NSString;

@interface AWEHomePageRemoteGridModuleController : AWEHomePageRemoteBaseModuleController <AWEHomePageRemoteBaseCollectionViewCellDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)homePageRemoteCollectionViewCellOnCreateView:(id)arg0 withItemModel:(id)arg1;
- (void)reloadModuleControllerView;
- (id)supportBusinessTypes;
- (double)moduleControllerHeightByWidth:(double)arg0 withSection:(long long)arg1;
- (long long)collectionViewNumberOfItems:(id)arg0;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 sizeForItemAtRow:(long long)arg1 withCollectionWidth:(double)arg2;
- (double)collectionViewMinimumInteritemSpacing:(id)arg0;
- (double)collectionViewMinimumLineSpacing:(id)arg0;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 referenceSizeForHeaderInSection:(long long)arg1 withCollectionWidth:(double)arg2;
- (void)collectionView:(id)arg0 didSelectItemAtRow:(long long)arg1;
- (long long)p_getRealColumnAtRow:(long long)arg0;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;

@end
