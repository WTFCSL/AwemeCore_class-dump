//
//     Generated by private class-dump
//

@class NSMutableArray, UICollectionView;

@protocol CAKSelectedAssetsViewProtocol <CAKAlbumViewModelObserverProtocol>

@property (readonly, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) NSMutableArray *assetModelArray;
@property (copy, nonatomic) id /* block */ deleteAssetModelBlock;
@property (copy, nonatomic) id /* block */ changeOrderBlock;
@property (copy, nonatomic) id /* block */ touchAssetModelBlock;
@property (nonatomic) long long sourceType;
@property (nonatomic) BOOL isVideoAndPicMixed;
@property (nonatomic) BOOL shouldAdjustPreviewPage;

- (void)reloadSelectView;
- (id)assetModelArray;
- (void)setAssetModelArray:(id)arg0;
- (id /* block */)deleteAssetModelBlock;
- (void)setDeleteAssetModelBlock:(id /* block */)arg0;
- (id)collectionView;

@optional

- (BOOL)isVideoAndPicMixed;
- (void)setIsVideoAndPicMixed:(BOOL)arg0;
- (id)currentNilIndexArray;
- (long long)currentSelectViewHighlightIndex;
- (id /* block */)touchAssetModelBlock;
- (id)currentAssetModelArray;
- (void)scrollToNextSelectCell;
- (void)updateSelectViewOrderWithNilArray:(id)arg0;
- (void)updateSelectViewHighlightIndex:(long long)arg0;
- (void)updateCheckMaterialRepeatSelect:(BOOL)arg0;
- (void)updateSelectViewFromBottomView:(BOOL)arg0;
- (void)enableDrageToMoveAssets:(BOOL)arg0;
- (id /* block */)changeOrderBlock;
- (void)setChangeOrderBlock:(id /* block */)arg0;
- (void)setTouchAssetModelBlock:(id /* block */)arg0;
- (BOOL)shouldAdjustPreviewPage;
- (void)setShouldAdjustPreviewPage:(BOOL)arg0;
- (void)setSourceType:(long long)arg0;
- (long long)sourceType;

@end
