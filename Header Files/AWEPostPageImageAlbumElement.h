//
//     Generated by private class-dump
//

@class NSString, ACCImageAlbumEditTagsUploadImageHelper, AWENewPublishImageAlbumTableViewCell, ACCImageAlbumThumbnailListDeleteView, UIView;

@interface AWEPostPageImageAlbumElement : AWEPostPageCellElement <AWEZoomTransitionOuterContextProvider, AWENewPublishImageAlbumTableViewCellActionDelegate> {
    BOOL _showDeleteLimitToast;
    id /* block */ _endTitleInputBlock;
    AWENewPublishImageAlbumTableViewCell *_orderableImageAlbumTableViewCell;
    ACCImageAlbumThumbnailListDeleteView *_imageAlbumDeleteView;
    UIView *_draggingCurrentView;
    ACCImageAlbumEditTagsUploadImageHelper *_uploadImageHelper;
    long long _initialPreviewIdx;
}

@property (retain, nonatomic) AWENewPublishImageAlbumTableViewCell *orderableImageAlbumTableViewCell;
@property (retain, nonatomic) ACCImageAlbumThumbnailListDeleteView *imageAlbumDeleteView;
@property (retain, nonatomic) UIView *draggingCurrentView;
@property (nonatomic) BOOL showDeleteLimitToast;
@property (retain, nonatomic) ACCImageAlbumEditTagsUploadImageHelper *uploadImageHelper;
@property (nonatomic) long long initialPreviewIdx;
@property (copy, nonatomic) id /* block */ endTitleInputBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_aweLazyRegisterPostPage;

- (id)zoomTransitionStartViewForOffset:(long long)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })focusViewPlaceholderFrame;
- (id)reedit;
- (id)p_commonTrackParams;
- (id)orderableImageAlbumTableViewCell;
- (void)preloadResourceForNewImageAlbumCoverEditPage;
- (void)p_trackClickAddButton;
- (void)p_trackOpenAlbumViewController;
- (void)p_trackSelectAlbumAsset;
- (void)p_trackClickNextButtonAfterSelectAlbumAssetIfIsMultiContent:(BOOL)arg0;
- (void)configMoveCacheThumbnailAction;
- (void)setInitialPreviewIdx:(long long)arg0;
- (void)uploadImageToCloudWithIndex:(long long)arg0;
- (void)resetPreuploadTaskIfNeed;
- (void)p_updateCoverWithSelectedAssets:(id)arg0;
- (BOOL)checkAssetsDidChanged:(id)arg0;
- (void)setShowDeleteLimitToast:(BOOL)arg0;
- (id)imageAlbumDeleteView;
- (void)setImageAlbumDeleteView:(id)arg0;
- (void)imageAlbumCell:(id)arg0 willBeginDraggingItemAtIndex:(long long)arg1;
- (void)setDraggingCurrentView:(id)arg0;
- (BOOL)showDeleteLimitToast;
- (void)p_trackDeleteThumbnailListItem:(long long)arg0;
- (id)draggingCurrentView;
- (void)p_trackMoveThumbnailListItemFromIndex:(long long)arg0 toIndex:(long long)arg1;
- (void)p_trackPreviewAlbumAssestWithIfIsSelected:(BOOL)arg0;
- (id)uploadImageHelper;
- (void)imageAlbumCell:(id)arg0 didGetPreviewImageAtIndex:(long long)arg1 preferredSize:(struct CGSize { double x0; double x1; })arg2 processed:(BOOL)arg3 completion:(id /* block */)arg4;
- (void)didSelectCoverInImageAlbumCell:(id)arg0;
- (void)didClickAddButtonInImageAlbumCell:(id)arg0;
- (void)didOpenAlbumViewControllerInImageAlbumCell:(id)arg0;
- (void)didSelectAlbumAssetInImageAlbumCell:(id)arg0;
- (void)imageAlbumCell:(id)arg0 didClickNextButtonWithMultiContentStatus:(BOOL)arg1;
- (void)imageAlbumCell:(id)arg0 didPreviewAlbumAssetWithSelectedStatus:(BOOL)arg1;
- (void)imageAlbumCell:(id)arg0 didSelectItemAtIndex:(long long)arg1;
- (void)imageAlbumCell:(id)arg0 didMoveItemFromIndex:(long long)arg1 toIndex:(long long)arg2 newCoverIndex:(long long)arg3;
- (void)imageAlbumCell:(id)arg0 didEditWithNewData:(id)arg1 selectedAssets:(id)arg2;
- (void)imageAlbumCell:(id)arg0 draggingCurrentView:(id)arg1 fromCollectionView:(id)arg2;
- (void)imageAlbumCell:(id)arg0 willEndDraggingItemFromIndex:(long long)arg1 toIndex:(long long)arg2;
- (id /* block */)endTitleInputBlock;
- (void)setEndTitleInputBlock:(id /* block */)arg0;
- (void)setOrderableImageAlbumTableViewCell:(id)arg0;
- (void)setUploadImageHelper:(id)arg0;
- (long long)initialPreviewIdx;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (id)type;
- (void)viewWillAppear:(BOOL)arg0;
- (void)viewDidLoad;
- (id)service;
- (BOOL)isVisible;
- (id)cell;

@end
