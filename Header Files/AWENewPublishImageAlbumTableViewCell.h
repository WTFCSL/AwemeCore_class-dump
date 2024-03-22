//
//     Generated by private class-dump
//

@class UIView, NSString, ACCImageAlbumThumbnailListAddView, UIImage, AWEVideoPublishViewModel, AWEStudioExcludeSelfView, AWEPublishBubbleWindow, CAGradientLayer, UICollectionView, NSMutableArray;
@protocol ACCDUXPopoverInstance, AWENewPublishImageAlbumTableViewCellActionDelegate;

@interface AWENewPublishImageAlbumTableViewCell : UITableViewCell <UICollectionViewDataSource, UICollectionViewDelegate, ACCReorderableForCollectionViewDelegateFlowLayout, ACCReorderableForCollectionViewDataSource, ACCImageAlbumThumbnailListAddViewDelegate> {
    BOOL _hasDeleteAction;
    BOOL _isAddViewInBack;
    BOOL _isDraggingCoverItem;
    BOOL _isDraggingFirstItem;
    BOOL _draggingFlag4ChooseCoverAnimation;
    BOOL _showChooseCoverAnimation;
    BOOL _initialFetchPreviewImageFinish;
    BOOL _hasChangedCoverBeforeInitial;
    BOOL _coverBindingFirstImage;
    id<AWENewPublishImageAlbumTableViewCellActionDelegate> _delegate;
    UIView *_separateLineView;
    UICollectionView *_collectionView;
    AWEVideoPublishViewModel *_publishViewModel;
    NSMutableArray *_cacheImageList;
    long long _coverIndex;
    long long _fromIndex;
    UIImage *_coverImage;
    UIView *_gradientContainerView;
    CAGradientLayer *_gradientLayer;
    ACCImageAlbumThumbnailListAddView *_addImageView;
    UIView<ACCDUXPopoverInstance> *_coverBindFirstGuideView;
    AWEStudioExcludeSelfView *_bubbleContainerView;
    AWEPublishBubbleWindow *_bubbleWindow;
    UIImage *_coverImageInCacheImageList;
}

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) AWEVideoPublishViewModel *publishViewModel;
@property (retain, nonatomic) NSMutableArray *cacheImageList;
@property (nonatomic) long long coverIndex;
@property (nonatomic) long long fromIndex;
@property (nonatomic) BOOL hasDeleteAction;
@property (retain, nonatomic) UIImage *coverImage;
@property (retain, nonatomic) UIView *separateLineView;
@property (retain, nonatomic) UIView *gradientContainerView;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (nonatomic) BOOL isAddViewInBack;
@property (retain, nonatomic) ACCImageAlbumThumbnailListAddView *addImageView;
@property (retain, nonatomic) UIView<ACCDUXPopoverInstance> *coverBindFirstGuideView;
@property (retain, nonatomic) AWEStudioExcludeSelfView *bubbleContainerView;
@property (retain, nonatomic) AWEPublishBubbleWindow *bubbleWindow;
@property (retain, nonatomic) UIImage *coverImageInCacheImageList;
@property (nonatomic) BOOL isDraggingCoverItem;
@property (nonatomic) BOOL isDraggingFirstItem;
@property (nonatomic) BOOL draggingFlag4ChooseCoverAnimation;
@property (nonatomic) BOOL showChooseCoverAnimation;
@property (nonatomic) BOOL initialFetchPreviewImageFinish;
@property (nonatomic) BOOL hasChangedCoverBeforeInitial;
@property (nonatomic) BOOL coverBindingFirstImage;
@property (weak, nonatomic) id<AWENewPublishImageAlbumTableViewCellActionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setCoverImage:(id)arg0;
- (id)publishViewModel;
- (id)addImageView;
- (void)p_setupViews;
- (id)separateLineView;
- (void)setSeparateLineView:(id)arg0;
- (void)setPublishViewModel:(id)arg0;
- (void)updateCoverImage:(id)arg0;
- (id)gradientContainerView;
- (void)setGradientContainerView:(id)arg0;
- (void)refreshContentIfNeeded;
- (void)showCoverBindFirstImageGuide;
- (void)updateCoverImageAtIndex:(long long)arg0;
- (id)thumbnailViewAtIdx:(long long)arg0;
- (void)cleanLocalCoverImage;
- (long long)getCoverIndex;
- (void)moveCacheImageFromIdx:(long long)arg0 toIdx:(long long)arg1;
- (void)setCacheImageList:(id)arg0;
- (id)cacheImageList;
- (void)refreshUploadImages;
- (void)reloadAlbumData;
- (double)p_collectionViewWidth;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_gradientLayerFrame;
- (void)setIsAddViewInBack:(BOOL)arg0;
- (void)setHasChangedCoverBeforeInitial:(BOOL)arg0;
- (long long)coverIndex;
- (void)setCoverImageInCacheImageList:(id)arg0;
- (void)setHasDeleteAction:(BOOL)arg0;
- (void)showCoverBindFirstImageGuideAction;
- (void)loadUploadImages;
- (void)loadUploadPreparedImagesCompletion:(id /* block */)arg0;
- (void)setInitialFetchPreviewImageFinish:(BOOL)arg0;
- (void)p_updateCell:(id)arg0 atIndex:(unsigned long long)arg1;
- (void)setIsDraggingCoverItem:(BOOL)arg0;
- (void)setIsDraggingFirstItem:(BOOL)arg0;
- (void)hiddenChooseCoverIfNeededAtIndexPath:(id)arg0;
- (BOOL)isAddViewInBack;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_gradientLayerFrameWithMaxWidth;
- (void)dismissCoverBindFirstGuide;
- (double)p_collectionViewContentWidth;
- (double)p_maxCollectionViewWidth;
- (BOOL)hasDeleteAction;
- (void)p_reloadData4DragOrDelete;
- (void)p_didEndDraggingByMoveItemToIndex:(long long)arg0;
- (id)coverImageInCacheImageList;
- (void)p_setGradientMaskLayer;
- (BOOL)enableAddImage;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_gradientLayerFrameWithWidth:(double)arg0;
- (BOOL)isDraggingCoverItem;
- (BOOL)isDraggingFirstItem;
- (void)setDraggingFlag4ChooseCoverAnimation:(BOOL)arg0;
- (void)setShowChooseCoverAnimation:(BOOL)arg0;
- (BOOL)coverBindingFirstImage;
- (BOOL)draggingFlag4ChooseCoverAnimation;
- (id)bubbleContainerView;
- (void)setCoverBindFirstGuideView:(id)arg0;
- (id)bubbleWindow;
- (void)setBubbleContainerView:(id)arg0;
- (void)setBubbleWindow:(id)arg0;
- (BOOL)enableDeleteImage;
- (void)accReorderableCollectionView:(id)arg0 layout:(id)arg1 willBeginDraggingItemAtIndexPath:(id)arg2;
- (void)accReorderableCollectionView:(id)arg0 layout:(id)arg1 didDragItemAtIndexPath:(id)arg2 currentView:(id)arg3;
- (void)accReorderableCollectionView:(id)arg0 layout:(id)arg1 willEndDraggingItemAtIndexPath:(id)arg2;
- (void)accReorderableCollectionView:(id)arg0 layout:(id)arg1 didEndDraggingItemAtIndexPath:(id)arg2;
- (void)accReorderableCollectionView:(id)arg0 itemAtIndexPath:(id)arg1 willMoveToIndexPath:(id)arg2;
- (void)didClickAddButtonInThumbnailListAddView:(id)arg0;
- (void)didOpenAlbumViewControllerInThumbnailListAddView:(id)arg0;
- (void)didSelectAlbumAssetInThumbnailListAddView:(id)arg0;
- (void)thumbnailListAddView:(id)arg0 backToViewController:(id)arg1 withSelectedAssets:(id)arg2 completion:(id /* block */)arg3;
- (void)thumbnailListAddView:(id)arg0 didPreviewAlbumAssetWithSelectedStatus:(BOOL)arg1;
- (void)setCoverIndex:(long long)arg0;
- (void)setAddImageView:(id)arg0;
- (id)coverBindFirstGuideView;
- (BOOL)showChooseCoverAnimation;
- (BOOL)initialFetchPreviewImageFinish;
- (BOOL)hasChangedCoverBeforeInitial;
- (void)setCoverBindingFirstImage:(BOOL)arg0;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (id)gradientLayer;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)collectionView;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (void)setCollectionView:(id)arg0;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (long long)fromIndex;
- (void)setFromIndex:(long long)arg0;
- (void)setGradientLayer:(id)arg0;
- (void)loadModel:(id)arg0;
- (void)removeItemAtIndex:(long long)arg0;
- (id)coverImage;

@end