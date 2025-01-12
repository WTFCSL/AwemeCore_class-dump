//
//     Generated by private class-dump
//

@class UIScrollView, CAKAlbumAssetModel, NSCache;

@interface CAKAlbumPreviewAndSelectCell : UICollectionViewCell {
    UIScrollView *_zoomScrollView;
    CAKAlbumAssetModel *_assetModel;
    NSCache *_coverImageCache;
    id /* block */ _fetchIcloudCompletion;
    id /* block */ _scrollViewDidZoomBlock;
    id /* block */ _scrollViewDidEndZoomBlock;
}

@property (retain, nonatomic) UIScrollView *zoomScrollView;
@property (retain, nonatomic) CAKAlbumAssetModel *assetModel;
@property (weak, nonatomic) NSCache *coverImageCache;
@property (copy, nonatomic) id /* block */ fetchIcloudCompletion;
@property (copy, nonatomic) id /* block */ scrollViewDidZoomBlock;
@property (copy, nonatomic) id /* block */ scrollViewDidEndZoomBlock;

- (id)assetModel;
- (void)setAssetModel:(id)arg0;
- (id)zoomScrollView;
- (void)setZoomScrollView:(id)arg0;
- (id /* block */)fetchIcloudCompletion;
- (void)setPlayerLayer:(id)arg0 withPlayerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg1;
- (void)removeCoverImageView;
- (void)setFetchIcloudCompletion:(id /* block */)arg0;
- (id)coverImageCache;
- (void)setCoverImageCache:(id)arg0;
- (void)willAppearCellWithAsset:(id)arg0 withPlayFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg1 greyMode:(BOOL)arg2;
- (void)configCellWithAsset:(id)arg0 withViewModel:(id)arg1 withPlayFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg2 greyMode:(BOOL)arg3;
- (id /* block */)scrollViewDidZoomBlock;
- (id /* block */)scrollViewDidEndZoomBlock;
- (void)setScrollViewDidZoomBlock:(id /* block */)arg0;
- (void)setScrollViewDidEndZoomBlock:(id /* block */)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;

@end
