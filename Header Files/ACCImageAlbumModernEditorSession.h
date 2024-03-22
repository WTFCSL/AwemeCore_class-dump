//
//     Generated by private class-dump
//

@class NSMutableDictionary, ACCImageAlbumData, ACCImageAlbumAudioPlayer, ACCImageAlbumSessionPlayerViewModel, ACCImageAlbumExportManager;

@interface ACCImageAlbumModernEditorSession : NSObject <ACCImageAlbumEditorSessionProtocol> {
    BOOL _didFirstRenderedCallbacked;
    BOOL _filterImageLayer;
    ACCImageAlbumData *_albumData;
    id /* block */ onFirstImageEditorRendered;
    id /* block */ onCustomerContentViewRecovered;
    id /* block */ onCurrentImageEditorChanged;
    id /* block */ onPlayerDraggingStatusChangedHandler;
    id /* block */ willScrollToIndexHandler;
    id /* block */ onPreviewModeChanged;
    id /* block */ onWillReloadData;
    ACCImageAlbumAudioPlayer *_audioPlayer;
    NSMutableDictionary *_stickerUniqueIdStcikerIdMapping;
    ACCImageAlbumExportManager *_exportManager;
    ACCImageAlbumExportManager *_captureManager;
    ACCImageAlbumSessionPlayerViewModel *_playerViewModel;
    struct CGSize { double width; double height; } _containerSize;
    struct CGPoint { double x; double y; } _centerOffset;
}

@property (nonatomic) BOOL didFirstRenderedCallbacked;
@property (retain, nonatomic) ACCImageAlbumAudioPlayer *audioPlayer;
@property (retain, nonatomic) NSMutableDictionary *stickerUniqueIdStcikerIdMapping;
@property (retain, nonatomic) ACCImageAlbumExportManager *exportManager;
@property (retain, nonatomic) ACCImageAlbumExportManager *captureManager;
@property (retain, nonatomic) ACCImageAlbumSessionPlayerViewModel *playerViewModel;
@property (nonatomic) struct CGPoint { double x; double y; } centerOffset;
@property (nonatomic) BOOL filterImageLayer;

- (void)scrollToIndex:(long long)arg0;
- (double)currentPlayTime;
- (void)removeTimeObserver;
- (void)setScrollEnable:(BOOL)arg0;
- (double)bgmVolume;
- (void)releasePlayer;
- (id)albumData;
- (id)capturePreviewUIImage;
- (BOOL)isPreviewMode;
- (void)setIsPreviewMode:(BOOL)arg0;
- (void)setVolumeForAudio:(double)arg0;
- (void)updateInfoStickerTemplateParam:(int)arg0 json:(id)arg1;
- (id)nativeGetInfoStickerTemplateParam:(int)arg0;
- (void)pauseMusic;
- (void)reloadCurrentPlayerItem;
- (void)continuePlayMusic;
- (void)setAudioClipRange:(id)arg0;
- (id)geometryModelWithLayer:(id)arg0 fromNLEImageWrapper:(id)arg1 mediaSize:(struct CGSize { double x0; double x1; })arg2;
- (id)currentImageItemModel;
- (void)getProcessedPreviewImageAtIndex:(long long)arg0 preferredSize:(struct CGSize { double x0; double x1; })arg1 compeletion:(id /* block */)arg2;
- (void)setPlayerViewModel:(id)arg0;
- (id)playerViewModel;
- (void)updatePageProgressViewShowStatus:(BOOL)arg0;
- (void)resetWithContainerView:(id)arg0;
- (void)replaceMusic:(id)arg0;
- (void)replayMusic;
- (void)p_saveImage:(id)arg0 toFile:(id)arg1;
- (void)setPlayerCenterOffset:(struct CGPoint { double x0; double x1; })arg0;
- (void)updateInteractionContainerAlpha:(double)arg0;
- (void)getSourcePreviewImageAtIndex:(long long)arg0 preferredSize:(struct CGSize { double x0; double x1; })arg1 compeletion:(id /* block */)arg2;
- (void)reloadPlayerItemAtIndex:(long long)arg0;
- (void)beginCurrentImageEditorBatchUpdate;
- (void)endCurrentImageEditorBatchUpdate;
- (long long)uniqueIdForStickerId:(long long)arg0;
- (void)exportImagesWithProgress:(id /* block */)arg0 onSucceed:(id /* block */)arg1 onFaild:(id /* block */)arg2;
- (void)beginImageAlbumPreviewTaskExportItemRetainAndReuse;
- (void)endImageAlbumPreviewTaskExportItemRetainAndReuse;
- (void)setAutoPlayInterval:(double)arg0;
- (void)setDisableTransitionAnimation:(BOOL)arg0;
- (double)progressBottomInsert;
- (id)playerGestureView;
- (void)setOnCurrentImageEditorChanged:(id /* block */)arg0;
- (void)setOnCustomerContentViewRecovered:(id /* block */)arg0;
- (void)setOnPreviewModeChanged:(id /* block */)arg0;
- (void)setWillScrollToIndexHandler:(id /* block */)arg0;
- (void)setOnPlayerDraggingStatusChangedHandler:(id /* block */)arg0;
- (void)setOnWillReloadData:(id /* block */)arg0;
- (id)customerContentViewAtIndex:(long long)arg0;
- (id)imageItemAtIndex:(long long)arg0;
- (void)exportImagesWithProgress:(id /* block */)arg0 onSucceed:(id /* block */)arg1 onFaild:(id /* block */)arg2 needUniqueId:(BOOL)arg3;
- (struct CGSize { double x0; double x1; })imageLayerSizeAtIndex:(long long)arg0 needClip:(BOOL)arg1;
- (struct CGSize { double x0; double x1; })imageOriginalSizeAtIndex:(long long)arg0;
- (long long)totalImageItemCount;
- (void)updatePageProgressAnimationEnable:(BOOL)arg0;
- (void)startAutoPlay;
- (void)stopAutoPlay;
- (void)updateComposerFilterWithFilterId:(id)arg0 filePath:(id)arg1 intensity:(float)arg2;
- (void)batchUpdateComposerFilterWithFilterId:(id)arg0 filePath:(id)arg1 intensity:(float)arg2;
- (void)setupLensHDRModelWithFilePath:(id)arg0;
- (void)setHDREnable:(BOOL)arg0;
- (void)setOnFirstImageEditorRendered:(id /* block */)arg0;
- (void)updateAlbumData:(id)arg0;
- (id)initWithImageAlbumData:(id)arg0 containerSize:(struct CGSize { double x0; double x1; })arg1;
- (void)setFilterImageLayer:(BOOL)arg0;
- (void)removeInfoStickerWithUniqueId:(long long)arg0;
- (long long)addInfoStickerWithPath:(id)arg0 effectInfo:(id)arg1 userInfo:(id)arg2 imageIndex:(long long)arg3;
- (id)nativeGetTextStickerParam:(int)arg0;
- (void)updateTextStickerTextParams:(long long)arg0 textParams:(id)arg1;
- (void)updateInfoStickerWithUniqueId:(long long)arg0 updateTypes:(unsigned long long)arg1 props:(id)arg2;
- (id)stickerWithUniqueId:(long long)arg0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })getInfoStickerBoundingBoxWithUniqueId:(long long)arg0;
- (void)removeInfoStickerWithUniqueId:(long long)arg0 traverseAllEditorIfNeed:(BOOL)arg1;
- (long long)addTextSticker:(id)arg0 withUserInfo:(id)arg1 imageIndex:(long long)arg2;
- (BOOL)applyTemplateFile:(id)arg0 diffJson:(id)arg1 imageIndex:(long long)arg2;
- (id)getNeedDownloadedResourceForImageIndex:(long long)arg0;
- (id)exportTemplateInfoOnlyImageForImageIndex:(long long)arg0;
- (id)getNleWrapperAtImageIndex:(long long)arg0;
- (id)getNleImageAlbumEditorAtImageIndex:(long long)arg0;
- (void)updateOriginImageInfoForTemplateIndex:(long long)arg0;
- (BOOL)userAddedLayerFlag:(id)arg0 AtImageIndex:(long long)arg1;
- (void)updateTemplateInfoAfterDownloadIfSuccess:(BOOL)arg0 downloadTemplateCache:(id)arg1 callBack:(id /* block */)arg2 data:(id)arg3 forImageIndex:(long long)arg4;
- (void)p_logInfoWithLogMsg:(id)arg0;
- (void)setupAudioPlayerIfNeed;
- (void)p_logErrorWithLogMsg:(id)arg0;
- (void)p_setupPlayerDataSource;
- (id /* block */)onCustomerContentViewRecovered;
- (id /* block */)onPreviewModeChanged;
- (id /* block */)onCurrentImageEditorChanged;
- (id /* block */)onWillReloadData;
- (void)p_updateStickerIdMappingWithUniqueId:(long long)arg0 stickerId:(long long)arg1;
- (BOOL)didFirstRenderedCallbacked;
- (void)setDidFirstRenderedCallbacked:(BOOL)arg0;
- (id /* block */)onFirstImageEditorRendered;
- (id /* block */)willScrollToIndexHandler;
- (id /* block */)onPlayerDraggingStatusChangedHandler;
- (long long)p_getVEStickerIdWithUniqueId:(long long)arg0;
- (id)stickerUniqueIdStcikerIdMapping;
- (void)p_getPreviewImageAtIndex:(long long)arg0 preferredSize:(struct CGSize { double x0; double x1; })arg1 usingOriginalImage:(BOOL)arg2 compeletion:(id /* block */)arg3;
- (void)p_logInfoWithLogMsg:(id)arg0 isError:(BOOL)arg1;
- (void)saveImageAlbumTemplateStickersWithImageEditor:(id)arg0 ImageItem:(id)arg1;
- (BOOL)filterImageLayer;
- (int)setRedrawCallback:(id /* block */)arg0 data:(id)arg1 forImageIndex:(long long)arg2;
- (void)setStickerUniqueIdStcikerIdMapping:(id)arg0;
- (id)captureManager;
- (void)setCaptureManager:(id)arg0;
- (struct CGPoint { double x0; double x1; })centerOffset;
- (void)setCenterOffset:(struct CGPoint { double x0; double x1; })arg0;
- (struct CGSize { double x0; double x1; })containerSize;
- (void).cxx_destruct;
- (long long)currentIndex;
- (id)audioPlayer;
- (void)reloadData;
- (void)setAudioPlayer:(id)arg0;
- (void)setPreviewSize:(struct CGSize { double x0; double x1; })arg0;
- (void)addPeriodicTimeObserverForInterval:(double)arg0 queue:(id)arg1 usingBlock:(id /* block */)arg2;
- (id)exportManager;
- (void)setExportManager:(id)arg0;
- (void)setBottomOffset:(double)arg0;

@end
