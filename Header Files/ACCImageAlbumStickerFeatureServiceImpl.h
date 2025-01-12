//
//     Generated by private class-dump
//

@class NSString, AWEVideoPublishViewModel, ACCStickerContainerView, ACCImageAlbumItemModel;
@protocol ACCStickerServiceProtocol, ACCImageAlbumStickerServiceProtocol, IESServiceProvider, ACCEditServiceProtocol;

@interface ACCImageAlbumStickerFeatureServiceImpl : ACCImageAlbumFeatureService <ACCEditImageAlbumMixedMessageProtocol, ACCStickerContainerDelegate, ACCImageAlbumStickerFeatureServiceProtocol> {
    BOOL _ignoreMaskRadiusForXScreen;
    id /* block */ _onCreatedStickerContainerView;
    id /* block */ _didTapBlankExcludeSticker;
    id<ACCImageAlbumStickerServiceProtocol> _imageAlbumStickerService;
    id<ACCStickerServiceProtocol> _stickerService;
    ACCImageAlbumItemModel *_currentImageItemModel;
    ACCStickerContainerView *_containerView;
}

@property (retain, nonatomic) id<ACCImageAlbumStickerServiceProtocol> imageAlbumStickerService;
@property (retain, nonatomic) id<ACCStickerServiceProtocol> stickerService;
@property (retain, nonatomic) ACCImageAlbumItemModel *currentImageItemModel;
@property (retain, nonatomic) ACCStickerContainerView *containerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL ignoreMaskRadiusForXScreen;
@property (copy, nonatomic) id /* block */ onCreatedStickerContainerView;
@property (copy, nonatomic) id /* block */ didTapBlankExcludeSticker;
@property (readonly, nonatomic) id<ACCEditServiceProtocol> editService;
@property (readonly, weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (readonly, weak, nonatomic) AWEVideoPublishViewModel *repository;

- (id)containerConfig;
- (id)mediaContainerView;
- (void)bindServices:(id)arg0;
- (void)resetStickerInPlayer;
- (void)setStickerService:(id)arg0;
- (id)stickerService;
- (BOOL)ignoreMaskRadiusForXScreen;
- (void)setIgnoreMaskRadiusForXScreen:(BOOL)arg0;
- (BOOL)shouldRemovePreViewPlugin;
- (BOOL)shouldChangeAlbumImagePluginsWithMaterialSize;
- (Class)safeAreaViewClass;
- (id)currentImageItemModel;
- (void)readyForPublish;
- (void)saveCurrentStickersToPublishModel;
- (void)updateCurrentStickerContainerWithImageIndex:(long long)arg0;
- (id /* block */)onCreatedStickerContainerView;
- (id)getCoverSafeAreaMaskViewForStickerContainer:(id)arg0;
- (id /* block */)didTapBlankExcludeSticker;
- (void)setCurrentRootView:(id)arg0 stickerContainer:(id)arg1 stickerContainerIndex:(long long)arg2;
- (void)setCurrentImageItemModel:(id)arg0;
- (void)setStickersForReady;
- (id)createSimStickerContainer;
- (void)onImageEditorRecoveredAtIndex:(long long)arg0 contentView:(id)arg1 imageItem:(id)arg2 imageLayerSize:(struct CGSize { double x0; double x1; })arg3 originalImageLayerSize:(struct CGSize { double x0; double x1; })arg4;
- (void)stickerContainer:(id)arg0 gestureStarted:(id)arg1 onView:(id)arg2;
- (void)stickerContainer:(id)arg0 gestureEnded:(id)arg1 onView:(id)arg2;
- (BOOL)stickerContainerTapBlank:(id)arg0 gesture:(id)arg1;
- (id)currentStickerContainerView;
- (void)setImagePlayerScrollEnable:(BOOL)arg0;
- (void)integrationStickerInPlayer;
- (void)handlePublishServiceWillStart;
- (void)setOnCreatedStickerContainerView:(id /* block */)arg0;
- (void)setDidTapBlankExcludeSticker:(id /* block */)arg0;
- (void)onCurrentImageEditorChanged:(long long)arg0;
- (void)onImagePlayerWillReloadData;
- (void)onImagePlayerWillScrollToIndex:(long long)arg0 withAnimation:(BOOL)arg1 isByAutoTimer:(BOOL)arg2;
- (void)onImageEditorPreviewModeChangedAtContentView:(id)arg0 isPreviewMode:(BOOL)arg1;
- (id)imageAlbumStickerService;
- (void)setImageAlbumStickerService:(id)arg0;
- (void).cxx_destruct;
- (void)setContainerView:(id)arg0;
- (id)containerView;
- (long long)hierarchyLevel;

@end
