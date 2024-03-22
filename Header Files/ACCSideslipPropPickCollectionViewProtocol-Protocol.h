//
//     Generated by private class-dump
//

@class ACCSideslipPropPickCollectionLayout, UICollectionView;

@protocol ACCSideslipPropPickCollectionViewProtocol <ACCCameraSubscription>

@property (readonly, nonatomic) UICollectionView *collectionView;
@property (readonly, nonatomic) ACCSideslipPropPickCollectionLayout *layout;
@property (nonatomic) BOOL allowBounces;
@property (readonly, nonatomic) BOOL isDragging;
@property (readonly, nonatomic) BOOL isDecelerating;
@property (nonatomic) unsigned long long supportExtendDirections;
@property (readonly, nonatomic) unsigned long long lastExtendDirectionType;
@property (readonly, nonatomic) double lastExtendProgress;

- (double)lastExtendProgress;
- (void)locateToIndex:(long long)arg0 animated:(BOOL)arg1 isUserTap:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)locateToIndex:(long long)arg0 animated:(BOOL)arg1 completion:(id /* block */)arg2;
- (unsigned long long)supportExtendDirections;
- (unsigned long long)lastExtendDirectionType;
- (BOOL)allowBounces;
- (void)setAllowBounces:(BOOL)arg0;
- (void)setSupportExtendDirections:(unsigned long long)arg0;
- (void)performBatchUpdates:(id /* block */)arg0 completion:(id /* block */)arg1;
- (id)collectionView;
- (BOOL)isDragging;
- (void)reloadData;
- (void)reloadItemsAtIndexes:(id)arg0;
- (BOOL)isDecelerating;
- (id)layout;
- (void)insertItemsAtIndexes:(id)arg0;
- (void)deleteItemsAtIndexes:(id)arg0;

@end