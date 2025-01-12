//
//     Generated by private class-dump
//

@class UIStackView, ACCImageAlbumThumbnailListAndAddView, NSString, UIView, AWEVideoPublishViewModel, UITapGestureRecognizer;
@protocol ACCImageAlbumThumbnailListContainerViewDelegate, ACCEditServiceProtocol;

@interface ACCImageAlbumThumbnailListContainerView : UIView <ACCImageAlbumThumbnailListAndAddViewDelegate> {
    BOOL _isThumbnailListFolded;
    BOOL _disableAddImage;
    BOOL _touchPointInContainer;
    id<ACCImageAlbumThumbnailListContainerViewDelegate> _delegate;
    AWEVideoPublishViewModel *_publishViewModel;
    id<ACCEditServiceProtocol> _editService;
    ACCImageAlbumThumbnailListAndAddView *_thumbnailListAndAddView;
    UIView *_topLineView;
    UIStackView *_thumbnailListShowTipView;
    UIView *_playGestureView;
    UITapGestureRecognizer *_tapGesture;
}

@property (retain, nonatomic) AWEVideoPublishViewModel *publishViewModel;
@property (retain, nonatomic) id<ACCEditServiceProtocol> editService;
@property (retain, nonatomic) ACCImageAlbumThumbnailListAndAddView *thumbnailListAndAddView;
@property (retain, nonatomic) UIView *topLineView;
@property (retain, nonatomic) UIStackView *thumbnailListShowTipView;
@property (nonatomic) BOOL isThumbnailListFolded;
@property (nonatomic) BOOL touchPointInContainer;
@property (retain, nonatomic) UIView *playGestureView;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (weak, nonatomic) id<ACCImageAlbumThumbnailListContainerViewDelegate> delegate;
@property (nonatomic) BOOL disableAddImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)publishViewModel;
- (void)scrollToItemAtIndex:(long long)arg0;
- (void)p_setupViews;
- (void)p_addGesture;
- (id)editService;
- (void)setEditService:(id)arg0;
- (void)setPublishViewModel:(id)arg0;
- (void)setDisableAddImage:(BOOL)arg0;
- (BOOL)disableAddImage;
- (void)reloaData;
- (void)updateThumbnailListShowStatusWithNeedShow:(BOOL)arg0 animated:(BOOL)arg1;
- (BOOL)isThumbnailListFolded;
- (id)initWithPublishViewModel:(id)arg0 editService:(id)arg1 gestureView:(id)arg2;
- (void)showThumbnailListTipView;
- (void)didClickAddButtonInThumbnailListAndAddView:(id)arg0;
- (void)didOpenAlbumViewControllerInThumbnailListAndAddView:(id)arg0;
- (void)didSelectAlbumAssetInThumbnailListAndAddView:(id)arg0;
- (void)thumbnailListAndAddView:(id)arg0 didClickNextButtonWithMultiContentStatus:(BOOL)arg1;
- (void)thumbnailListAndAddView:(id)arg0 didPreviewAlbumAssetWithSelectedStatus:(BOOL)arg1;
- (void)thumbnailListAndAddView:(id)arg0 didSelectItemAtIndex:(long long)arg1;
- (void)thumbnailListAndAddView:(id)arg0 didMoveItemFromIndex:(long long)arg1 toIndex:(long long)arg2 newCoverIndex:(long long)arg3;
- (void)thumbnailListAndAddView:(id)arg0 didEditWithNewData:(id)arg1 selectedAssets:(id)arg2;
- (void)thumbnailListAndAddView:(id)arg0 willBeginDraggingItemAtIndex:(long long)arg1;
- (void)thumbnailListAndAddView:(id)arg0 draggingCurrentView:(id)arg1 fromCollectionView:(id)arg2;
- (void)thumbnailListAndAddView:(id)arg0 willEndDraggingItemFromIndex:(long long)arg1 toIndex:(long long)arg2;
- (id)thumbnailListAndAddView;
- (id)thumbnailListShowTipView;
- (void)handleSwipeAction:(id)arg0;
- (id)playGestureView;
- (BOOL)touchPointInContainer;
- (void)setThumbnailListShowTipView:(id)arg0;
- (void)setIsThumbnailListFolded:(BOOL)arg0;
- (void)p_showThumbnailListTipViewIfNeeded;
- (void)p_setupThumbnailListShowTipView;
- (void)setThumbnailListAndAddView:(id)arg0;
- (void)setTouchPointInContainer:(BOOL)arg0;
- (void)setPlayGestureView:(id)arg0;
- (void).cxx_destruct;
- (id)tapGesture;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)handleTapAction:(id)arg0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;
- (id)topLineView;
- (void)setTopLineView:(id)arg0;
- (void)removeItemAtIndex:(long long)arg0;
- (void)setTapGesture:(id)arg0;

@end
