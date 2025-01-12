//
//     Generated by private class-dump
//

@class ACCCanvasAdaptor;

@interface AWEAlbumStudioViewModel : AWEAlbumDefaultViewModel {
    ACCCanvasAdaptor *_canvasAdaptor;
}

@property (retain, nonatomic) ACCCanvasAdaptor *canvasAdaptor;

- (BOOL)shouldShowAssetsInReverseOrderForAlbumViewController:(id)arg0;
- (id)initWithInputData:(id)arg0;
- (void)goToNextWithMultiSelect:(BOOL)arg0;
- (id)canvasAdaptor;
- (void)handlePhotosImportCompletion:(id)arg0 repoContainer:(id)arg1 error:(id)arg2;
- (void)setCanvasAdaptor:(id)arg0;
- (void)resetLivePhotoStatusIfNeeded:(id)arg0;
- (void)present:(id)arg0 animated:(BOOL)arg1;
- (BOOL)needFetchAlbumAssetsWhenClickNext;
- (id)configClipInputData:(id)arg0 withRepoContainer:(id)arg1;
- (BOOL)supportSlidesImportWithAssets:(id)arg0;
- (BOOL)isAllLivePhotoAssets:(id)arg0;
- (long long)livePhotoCountInAssets:(id)arg0;
- (long long)iCloudCountWith:(id)arg0;
- (BOOL)isInfiniAllowed;
- (id)p_commonVideoTrackInfoWithAssetArr:(id)arg0 trackAsset:(id)arg1;
- (void)convertShortVideoToImages;
- (void)fetchLocationiInfo:(id)arg0;
- (id)getGeneratePlaceHolderAssets;
- (void)applyLivePhotoDecisionWithContext:(id)arg0 multiAssets:(BOOL)arg1;
- (unsigned long long)willEnterEditPageModeWith:(id)arg0 isMultiSelect:(BOOL)arg1 contextParams:(id)arg2;
- (BOOL)infiniNeedFetch:(id)arg0;
- (void)handleAIClipCompletion:(id)arg0 repoContainer:(id)arg1 clipInputData:(id)arg2 error:(id)arg3;
- (void)handleLivePhotoCompletion:(id)arg0 repoContainer:(id)arg1 context:(id)arg2 error:(id)arg3;
- (void)handleVideosImportCompletion:(id)arg0 repoContainer:(id)arg1 error:(id)arg2;
- (void)handleLivePhoto2VideoCompletion:(id)arg0 repoContainer:(id)arg1 error:(id)arg2;
- (void)handleSlidesWithCompletion:(id)arg0 repoContainer:(id)arg1 error:(id)arg2;
- (void)trackNextClick:(id)arg0 withMode:(unsigned long long)arg1 publishModel:(id)arg2 withMultiSelect:(BOOL)arg3;
- (void)livePhotoExceptionModeWithResults:(id)arg0 repoContainer:(id)arg1 error:(id)arg2;
- (BOOL)p_isAIClipByAsset:(id)arg0 contextParams:(id)arg1;
- (BOOL)isLivePhotoModeAllowed:(id)arg0;
- (id)getNextPageForTrackWithInputData:(id)arg0 FinalAssets:(id)arg1 contextParams:(id)arg2;
- (void)trackAIClipNextClick:(id)arg0;
- (void)trackNormalNextClick:(id)arg0 withMode:(unsigned long long)arg1 publishModel:(id)arg2 withMultiSelect:(BOOL)arg3;
- (void)trackToolPerformanceAlbumNextWithMulti:(BOOL)arg0 inputData:(id)arg1 finalAssets:(id)arg2 contextParams:(id)arg3;
- (void).cxx_destruct;

@end
