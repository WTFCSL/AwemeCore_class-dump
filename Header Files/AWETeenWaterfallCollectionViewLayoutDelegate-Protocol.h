//
//     Generated by private class-dump
//

@protocol AWETeenWaterfallCollectionViewLayoutDelegate <NSObject>

- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2;

@optional

- (long long)collectionView:(id)arg0 layout:(id)arg1 columnCountForSection:(long long)arg2;
- (double)collectionView:(id)arg0 layout:(id)arg1 minimumColumnSpacingForSectionAtIndex:(long long)arg2;
- (double)collectionView:(id)arg0 layout:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)collectionView:(id)arg0 layout:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)arg0 layout:(id)arg1 insetForHeaderInSection:(long long)arg2;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)arg0 layout:(id)arg1 insetForFooterInSection:(long long)arg2;
- (double)collectionView:(id)arg0 layout:(id)arg1 minimumInteritemSpacingForSectionAtIndex:(long long)arg2;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)arg0 layout:(id)arg1 insetForSectionAtIndex:(long long)arg2;

@end
