//
//     Generated by private class-dump
//

@class NSString, AWESelectTemplateDataExporter, AWESelectTemplateDataProvider, UIView, NSObject;
@protocol OS_dispatch_queue, ACCMVTemplateManagerProtocol, AWEStudioMusicModelProtocol, ACCProcessViewProtcol, UIViewControllerTransitioningDelegate;

@interface ACCTarotImportManager : NSObject {
    BOOL _hasBeenCanceled;
    id<AWEStudioMusicModelProtocol> _defaultMusicForSoundSync;
    AWESelectTemplateDataProvider *_dataProvider;
    AWESelectTemplateDataExporter *_dataExporter;
    NSObject<OS_dispatch_queue> *_getFirstFrameQueue;
    id<UIViewControllerTransitioningDelegate> _nextTranslationTransitionDelegate;
    NSString *_convertTaskId;
    id<ACCMVTemplateManagerProtocol> _mvTemplateManager;
    UIView<ACCProcessViewProtcol> *_progressIndicator;
}

@property (retain, nonatomic) id<UIViewControllerTransitioningDelegate> nextTranslationTransitionDelegate;
@property (retain, nonatomic) NSString *convertTaskId;
@property (retain, nonatomic) id<ACCMVTemplateManagerProtocol> mvTemplateManager;
@property (retain, nonatomic) AWESelectTemplateDataProvider *dataProvider;
@property (retain, nonatomic) AWESelectTemplateDataExporter *dataExporter;
@property (retain, nonatomic) UIView<ACCProcessViewProtcol> *progressIndicator;
@property (nonatomic) BOOL hasBeenCanceled;
@property (retain, nonatomic) id<AWEStudioMusicModelProtocol> defaultMusicForSoundSync;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *getFirstFrameQueue;

+ (BOOL)videoArrayIsValid:(id)arg0;
+ (id)createPreloadTasksWithAssets:(id)arg0 taskID:(id)arg1;
+ (id)livePhotoAssetWithImportTask:(id)arg0;
+ (void)configInfiniGeneralSettingsIfNeed:(id)arg0 firstFrameImage:(id)arg1;
+ (id)videoAssetInvalidReasonIfNotValid:(id)arg0;
+ (void)p_trackError:(id)arg0 key:(id)arg1 extraInfo:(id)arg2;
+ (BOOL)videoAssetIsValid:(id)arg0;
+ (id)shareInstance;

- (id)nextTranslationTransitionDelegate;
- (void)setNextTranslationTransitionDelegate:(id)arg0;
- (void)importAssets:(id)arg0 repoContainer:(id)arg1 withMode:(unsigned long long)arg2 progressHandler:(id /* block */)arg3 params:(id)arg4 complete:(id /* block */)arg5;
- (id)mvTemplateManager;
- (id)fetchLocationInfosWithAssetArray:(id)arg0;
- (void)setMvTemplateManager:(id)arg0;
- (id)defaultMusicForSoundSync;
- (void)setDefaultMusicForSoundSync:(id)arg0;
- (void)cancelAllPreloadTask;
- (void)cancelCachedTasks;
- (BOOL)hasFinishedOrExecutingTaskWithID:(id)arg0;
- (id)addPreloadAsset:(id)arg0 taskID:(id)arg1 progressHandler:(id /* block */)arg2;
- (void)cancelPreloadTaskWithID:(id)arg0;
- (void)setConvertTaskId:(id)arg0;
- (id)convertTaskId;
- (id)getTaskWithID:(id)arg0 ofClass:(Class)arg1 needtrack:(BOOL)arg2;
- (BOOL)taskFetchAssetIsFinished:(id)arg0;
- (void)searchTaskWithID:(id)arg0 withCompletion:(id /* block */)arg1;
- (void)handleLivePhotoResultWithAssetModel:(id)arg0 outputInfo:(id)arg1 workspace:(id)arg2 project:(id)arg3;
- (void)initRepoLivePhotoInfoInstanceWithProject:(id)arg0 outputInfo:(id)arg1 phAssetLocalIdentifier:(id)arg2;
- (id)getFirstFrameQueue;
- (void)handleLivePhotoProjectConfig:(id)arg0 workspace:(id)arg1 config:(id)arg2 completion:(id /* block */)arg3;
- (void)handlePhotoProjectConfig:(id)arg0 workspace:(id)arg1 config:(id)arg2 completion:(id /* block */)arg3;
- (void)handleVideoProjectConfig:(id)arg0 workspace:(id)arg1 importTask:(id)arg2 config:(id)arg3 completion:(id /* block */)arg4;
- (void)handleLivePhotoSlidesTask:(id)arg0 workspace:(id)arg1 targetProject:(id)arg2 progressHandler:(id /* block */)arg3 config:(id)arg4 completion:(id /* block */)arg5;
- (void)handlePhotoSlidesTask:(id)arg0 workspace:(id)arg1 targetProject:(id)arg2 progressHandler:(id /* block */)arg3 config:(id)arg4 completion:(id /* block */)arg5;
- (void)handleVideoSlidesTask:(id)arg0 workspace:(id)arg1 progressHandler:(id /* block */)arg2 config:(id)arg3 completion:(id /* block */)arg4;
- (void)enterAIClipHandler:(id)arg0 repoContainer:(id)arg1 params:(id)arg2 complete:(id /* block */)arg3;
- (void)enterImageAlbumHandler:(id)arg0 repoContainer:(id)arg1 params:(id)arg2 complete:(id /* block */)arg3;
- (void)enterLivePhotoHandler:(id)arg0 repoContainer:(id)arg1 params:(id)arg2 complete:(id /* block */)arg3;
- (void)enterPhotoToVideoHandler:(id)arg0 repoContainer:(id)arg1 params:(id)arg2 complete:(id /* block */)arg3;
- (void)enterLivePhotoToVideoHandler:(id)arg0 repoContainer:(id)arg1 params:(id)arg2 complete:(id /* block */)arg3;
- (void)enterVideosImportisInfini:(id)arg0 repoContainer:(id)arg1 params:(id)arg2 complete:(id /* block */)arg3;
- (void)enterOneClickFilming:(id)arg0 repoContainer:(id)arg1 params:(id)arg2 progressHandler:(id /* block */)arg3 complete:(id /* block */)arg4;
- (void)enterSlidesWithAssets:(id)arg0 repoContainer:(id)arg1 params:(id)arg2 complete:(id /* block */)arg3;
- (void)dismissProgressIndicator;
- (void)setHasBeenCanceled:(BOOL)arg0;
- (id)dataExporter;
- (void)trackTaskSearchHitRatio:(id)arg0;
- (void)enterLivePhotoToVideoV2:(id)arg0 repoContainer:(id)arg1 params:(id)arg2 complete:(id /* block */)arg3;
- (void)enterLivePhotoToVideo:(id)arg0 repoContainer:(id)arg1 params:(id)arg2 complete:(id /* block */)arg3;
- (void)resetProgressIndicator;
- (BOOL)hasBeenCanceled;
- (void)requestVideoForAsset:(id)arg0 completion:(id /* block */)arg1;
- (void)enterPhotoToVideoV2:(id)arg0 repoContainer:(id)arg1 params:(id)arg2 complete:(id /* block */)arg3;
- (void)enterPhotoToVideo:(id)arg0 repoContainer:(id)arg1 params:(id)arg2 complete:(id /* block */)arg3;
- (void)singlePhotoImport:(id)arg0 repoContainer:(id)arg1 params:(id)arg2 complete:(id /* block */)arg3;
- (BOOL)forbidEnterPhotoesImportWithInfini:(id)arg0 repoContainer:(id)arg1;
- (void)enterPhotoesImport:(id)arg0 repoContainer:(id)arg1 params:(id)arg2 complete:(id /* block */)arg3;
- (void)enterLivePhotoWithTaskImportV2:(id)arg0 repoContainer:(id)arg1 params:(id)arg2 complete:(id /* block */)arg3;
- (void)enterLivePhotoWithSinglePhoto:(id)arg0 repoContainer:(id)arg1 params:(id)arg2 complete:(id /* block */)arg3;
- (id)p_getLivePhotoRequestOptions;
- (void)enterAIClipV2:(id)arg0 repoContainer:(id)arg1 params:(id)arg2 complete:(id /* block */)arg3;
- (void)enterAIClip:(id)arg0 repoContainer:(id)arg1 params:(id)arg2 complete:(id /* block */)arg3;
- (void)trackCacheStatusWithID:(id)arg0;
- (id)cachedVideoAssetWithAssetModel:(id)arg0;
- (void)videosImportUseMultiEditor:(id)arg0 repoContainer:(id)arg1 params:(id)arg2 taskID:(id)arg3 createID:(id)arg4 convertID:(id)arg5 complete:(id /* block */)arg6;
- (void)setDataExporter:(id)arg0;
- (void)cancelImportWithMode:(unsigned long long)arg0;
- (id)getTaskWithID:(id)arg0 ofClass:(Class)arg1;
- (void)enterLivePhotoWithTaskImport:(id)arg0 repoContainer:(id)arg1 params:(id)arg2 complete:(id /* block */)arg3;
- (void)resetLivePhotoStatusIfNeeded:(id)arg0;
- (void)present:(id)arg0 animated:(BOOL)arg1;
- (void)setGetFirstFrameQueue:(id)arg0;
- (id)dataProvider;
- (void)setDataProvider:(id)arg0;
- (void).cxx_destruct;
- (id)progressIndicator;
- (void)setProgressIndicator:(id)arg0;
- (void)updateProgressIndicator:(id)arg0;
- (void)showProgressIndicator;

@end
