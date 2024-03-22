//
//     Generated by private class-dump
//

@class NSString, ACCImageAlbumThumbnailListDeleteView, UIView, ACCImageAlbumThumbnailListContainerView;
@protocol ACCEditServiceProtocol, ACCEditViewContainer, ACCVideoEditFlowControlService, ACCVideoEditBottomControlService, ACCImageAlbumThumbnailFeatureServiceProtocol;

@interface ACCImageAlbumThumbnailComponent : ACCFeatureComponent <ACCEditSessionLifeCircleEvent, ACCImageAlbumThumbnailListContainerViewDelegate, ACCEditImageAlbumMixedMessageProtocolD, ACCVideoEditFlowControlSubscriber> {
    BOOL _showDeleteLimitToast;
    BOOL _didHandleDefaultShow;
    id<ACCEditServiceProtocol> _editService;
    id<ACCVideoEditFlowControlService> _flowService;
    id<ACCImageAlbumThumbnailFeatureServiceProtocol> _featureService;
    id<ACCEditViewContainer> _viewContainer;
    ACCImageAlbumThumbnailListContainerView *_thumbnailListContainerView;
    ACCImageAlbumThumbnailListDeleteView *_imageAlbumDeleteView;
    UIView *_draggingCurrentView;
    id<ACCVideoEditBottomControlService> _editBottomControlService;
}

@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) id<ACCVideoEditFlowControlService> flowService;
@property (retain, nonatomic) id<ACCImageAlbumThumbnailFeatureServiceProtocol> featureService;
@property (retain, nonatomic) id<ACCEditViewContainer> viewContainer;
@property (retain, nonatomic) ACCImageAlbumThumbnailListContainerView *thumbnailListContainerView;
@property (retain, nonatomic) ACCImageAlbumThumbnailListDeleteView *imageAlbumDeleteView;
@property (retain, nonatomic) UIView *draggingCurrentView;
@property (nonatomic) BOOL showDeleteLimitToast;
@property (nonatomic) BOOL didHandleDefaultShow;
@property (weak, nonatomic) id<ACCVideoEditBottomControlService> editBottomControlService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (void)componentWillAppear;
- (id)editService;
- (void)setEditService:(id)arg0;
- (void)bindServices:(id)arg0;
- (id)flowService;
- (void)setFlowService:(id)arg0;
- (void)firstRenderWithEditService:(id)arg0;
- (id)p_commonTrackParams;
- (void)p_trackClickAddButton;
- (void)p_trackOpenAlbumViewController;
- (void)p_trackSelectAlbumAsset;
- (void)p_trackClickNextButtonAfterSelectAlbumAssetIfIsMultiContent:(BOOL)arg0;
- (void)setShowDeleteLimitToast:(BOOL)arg0;
- (id)imageAlbumDeleteView;
- (void)setImageAlbumDeleteView:(id)arg0;
- (void)setDraggingCurrentView:(id)arg0;
- (BOOL)showDeleteLimitToast;
- (void)p_trackDeleteThumbnailListItem:(long long)arg0;
- (id)draggingCurrentView;
- (void)p_trackMoveThumbnailListItemFromIndex:(long long)arg0 toIndex:(long long)arg1;
- (void)p_trackPreviewAlbumAssestWithIfIsSelected:(BOOL)arg0;
- (void)didQuickPublishGuideDismiss:(id)arg0;
- (void)onImagePlayerWillScrollToIndex:(long long)arg0 withAnimation:(BOOL)arg1 isByAutoTimer:(BOOL)arg2;
- (void)onCurrentImageEditorChanged:(long long)arg0 isByAutoTimer:(BOOL)arg1;
- (id)featureService;
- (void)setFeatureService:(id)arg0;
- (id)editBottomControlService;
- (void)setEditBottomControlService:(id)arg0;
- (BOOL)p_disableImageAlbumThumbnailModule;
- (id)thumbnailListContainerView;
- (void)p_updateProgressView;
- (void)p_addThumbnailListContainerViewIfNeed;
- (BOOL)didHandleDefaultShow;
- (void)setDidHandleDefaultShow:(BOOL)arg0;
- (void)p_showThumbnailListTipView;
- (void)p_trackClickThumbnailListItemAtIndex:(long long)arg0;
- (void)setThumbnailListContainerView:(id)arg0;
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
- (void).cxx_destruct;
- (id)viewContainer;
- (void)setViewContainer:(id)arg0;

@end
