//
//     Generated by private class-dump
//

@class UIView, AWEShareContext, AWEStoryTransferToEditVCManager, NSDate, NSString, AWEUIPopView, UIAlertController, AWEOpenShareResp, AWETaskModel;
@protocol ACCLoadingViewProtocol, ACCMVTemplateManagerProtocol;

@interface AWEOpenShareProviderIMP : NSObject <AWEPublishTaskMessage, AWEOpenShareDelegate> {
    BOOL _isInitlized;
    BOOL _isFromShareExtension;
    BOOL _isJianyingRedPack;
    UIView<ACCLoadingViewProtocol> *_loadingView;
    AWEUIPopView *_popView;
    id /* block */ _completionBlock;
    id /* block */ _stayInDouyinBlock;
    AWEOpenShareResp *_shareResp;
    AWEShareContext *_imShareContext;
    NSDate *_systemShareStartDate;
    id<ACCMVTemplateManagerProtocol> _mvTemplateManager;
    AWEStoryTransferToEditVCManager *_aweToEditVCManager;
    UIAlertController *_authorizedAlertView;
    AWETaskModel *_taskModel;
}

@property (retain, nonatomic) UIView<ACCLoadingViewProtocol> *loadingView;
@property (retain, nonatomic) AWEUIPopView *popView;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (copy, nonatomic) id /* block */ stayInDouyinBlock;
@property (retain, nonatomic) AWEOpenShareResp *shareResp;
@property (retain, nonatomic) AWEShareContext *imShareContext;
@property (retain, nonatomic) NSDate *systemShareStartDate;
@property (nonatomic) BOOL isInitlized;
@property (nonatomic) BOOL isFromShareExtension;
@property (retain, nonatomic) id<ACCMVTemplateManagerProtocol> mvTemplateManager;
@property (retain, nonatomic) AWEStoryTransferToEditVCManager *aweToEditVCManager;
@property (retain, nonatomic) UIAlertController *authorizedAlertView;
@property (retain, nonatomic) AWETaskModel *taskModel;
@property (nonatomic) BOOL isJianyingRedPack;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)shareExtensionEnterEditPageWithOnePhotoPath:(id)arg0;
+ (void)shareExtensionEnterEditPageWithMultiPhotoPaths:(id)arg0;
+ (void)shareExtensionEnterEditPageWithVideoPaths:(id)arg0;
+ (void)shareExtensionEnterEditPageWithMixedPaths:(id)arg0;
+ (id)assetModelWithPath:(id)arg0;
+ (id)timeStringWithDuration:(double)arg0;
+ (void)closeExistImageAlbumEditOrPublishWithCompletion:(id /* block */)arg0;
+ (void)shareExtensionEnterInfiniEditPageWithMultiPhotoPaths:(id)arg0 publishModel:(id)arg1;
+ (id)avAssetsFromPath:(id)arg0;
+ (id)shareProviderIMP;

- (void)task:(id)arg0 didEndWithResult:(long long)arg1 error:(id)arg2;
- (id)taskModel;
- (void)setTaskModel:(id)arg0;
- (BOOL)isColdLaunch;
- (void)configPassthroughVideoEditorAB;
- (void)getPasteboardItemsWithCert:(id)arg0 completion:(id /* block */)arg1;
- (void)setPopView:(id)arg0;
- (id)popView;
- (id)coverForAVAsset:(id)arg0;
- (void)endLoading;
- (void)updateCompletionRespWithStatusCode:(unsigned long long)arg0 completionResp:(id)arg1;
- (void)shareGameInvitationWithShareResponse:(id)arg0 completionResp:(id)arg1 completion:(id /* block */)arg2;
- (void)jumpToProfileWithOpenId:(id)arg0 targetOpenId:(id)arg1 clientKey:(id)arg2 extraParams:(id)arg3 completionResp:(id)arg4 completion:(id /* block */)arg5;
- (void)jumpToAlbumWithResp:(id)arg0 completion:(id /* block */)arg1;
- (void)jumpToContactWithOpenId:(id)arg0 targetOpenId:(id)arg1 clientKey:(id)arg2 completionResp:(id)arg3 completion:(id /* block */)arg4;
- (void)shareGameAddGroupWithId:(id)arg0 openId:(id)arg1 clientKey:(id)arg2 addGroupType:(long long)arg3 groupType:(long long)arg4 completionResp:(id)arg5 completion:(id /* block */)arg6;
- (void)shareIMLinkWithShareResponse:(id)arg0 backToSourceAppBlock:(id /* block */)arg1 stayInDouyinBlock:(id /* block */)arg2;
- (void)shareIMImageWithShareResponse:(id)arg0 backToSourceAppBlock:(id /* block */)arg1 stayInDouyinBlock:(id /* block */)arg2;
- (BOOL)requireLoginBeforeStart;
- (void)didEnterAwemeFromThridAppShareWithThridAppKey:(id)arg0 shareParam:(id)arg1;
- (void)shareWithShareResponse:(id)arg0 backToSourceAppBlock:(id /* block */)arg1 stayInDouyinBlock:(id /* block */)arg2;
- (void)captureWithShareResponse:(id)arg0 backToSourceAppBlock:(id /* block */)arg1 stayInDouyinBlock:(id /* block */)arg2;
- (id)shareResp;
- (void)handleSaveAsDraft:(id)arg0;
- (void)setShareResp:(id)arg0;
- (void)reportMonitorWithTask:(id)arg0 withPublishModel:(id)arg1 withResp:(id)arg2 error:(id)arg3;
- (BOOL)isJianyingRedPack;
- (BOOL)checkShouldShowPopView;
- (void)logShareSucceed:(BOOL)arg0 parameters:(id)arg1;
- (void)setIsJianyingRedPack:(BOOL)arg0;
- (void)basicInit;
- (void)setIsInitlized:(BOOL)arg0;
- (void)setIsFromShareExtension:(BOOL)arg0;
- (BOOL)isInitlized;
- (BOOL)isFromShareExtension;
- (void)handleTask:(id)arg0 WithResult:(long long)arg1 error:(id)arg2;
- (void)handlePublishSuccessWithTask:(id)arg0 info:(id)arg1;
- (void)handlePublishFailureWithTask:(id)arg0 error:(id)arg1;
- (void)setStayInDouyinBlock:(id /* block */)arg0;
- (void)setImShareContext:(id)arg0;
- (id /* block */)stayInDouyinBlock;
- (void)updateOpenPlatformIMShareWithStatusCode:(unsigned long long)arg0;
- (void)reportIMMonitorsWithCode:(unsigned long long)arg0 transferBack:(BOOL)arg1 didChooseMultiple:(BOOL)arg2;
- (void)shareIMTransferBack:(BOOL)arg0;
- (void)processLunaAudio;
- (void)processMediaData;
- (void)handleCancelEvent;
- (void)handleNoPhotoLibraryPermissionError;
- (void)checkPHAuthorizationWithShareResponse:(id)arg0 completion:(id /* block */)arg1;
- (void)reportCardMonitorWith:(id)arg0 resp:(id)arg1;
- (void)getGameInvitationIMInfoFromShareRespInfo:(id)arg0 completion:(id /* block */)arg1;
- (void)p_shouldShareToPublishWithShareResponse:(id)arg0 resultBlock:(id /* block */)arg1;
- (void)p_addAnchorModelToPublishModel:(id)arg0;
- (id)unmodifiablePublishParamsForShareStory:(id)arg0;
- (void)handleProcessMediaError;
- (BOOL)shouldUseNewShare;
- (BOOL)checkPhotoesValid:(id)arg0;
- (id)sortMediaRescource:(id)arg0 ByOrder:(id)arg1;
- (void)shareMulPhotosWithAssetModels:(id)arg0 imageLocalUrls:(id)arg1;
- (void)shareOnePhotoWithPHAsset:(id)arg0;
- (void)shareStoryWithVideoAssetModel:(id)arg0 imagePHAsset:(id)arg1;
- (void)handleParamInvalidError;
- (void)shareMulVideoWithAssetModels:(id)arg0;
- (void)processVideos:(id)arg0 locations:(id)arg1 videoLocalUrls:(id)arg2;
- (void)shareVideosAndImagesWithAssetModels:(id)arg0;
- (id)extraInfoForShareStory:(id)arg0;
- (void)handleLunaAudioError;
- (id)shareMusicForForShareStory:(id)arg0 shareImage:(BOOL)arg1;
- (void)handleImageStoryModelCanvas:(id)arg0;
- (void)handleVideoStoryModelCanvas:(id)arg0;
- (void)AVURLPathWithAssetModels:(id)arg0 completion:(id /* block */)arg1;
- (id)imShareContext;
- (BOOL)checkPhotoValid:(id)arg0;
- (void)handleMediaInCloudError;
- (void)shareOnePhotoWithImage:(id)arg0 asset:(id)arg1 locationInfos:(id)arg2;
- (id)mvTemplateManager;
- (void)shareWithMVTemplateCreator:(id /* block */)arg0 locationInfos:(id)arg1;
- (id)fetchLocationInfosWithAssetArray:(id)arg0;
- (void)setAweToEditVCManager:(id)arg0;
- (void)startEditorWithAssetModels:(id)arg0 phAsset:(id)arg1 videoLocalURLs:(id)arg2 imageLocalURLs:(id)arg3 withExtraInfo:(id)arg4 needClip:(BOOL)arg5 processDataBlock:(id /* block */)arg6 publishModel:(id)arg7 isAlbumMode:(BOOL)arg8 completionBlock:(id /* block */)arg9;
- (id)aweToEditVCManager;
- (void)shareTransferToEditCreator:(id /* block */)arg0 locationInfos:(id)arg1;
- (id)createPublishModelForShare;
- (void)setMvTemplateManager:(id)arg0;
- (BOOL)checkVideosValid:(id)arg0;
- (void)handleObtainMediaError;
- (void)fetchAVAssetsWithAssetModels:(id)arg0 completion:(id /* block */)arg1;
- (BOOL)checkVideosAndImagesMixValid:(id)arg0;
- (void)fetchAVAssetsWithMixAssetModels:(id)arg0 completion:(id /* block */)arg1;
- (void)processVideos:(id)arg0 locations:(id)arg1 videoLocalUrls:(id)arg2 needClip:(BOOL)arg3 fromShareExtension:(BOOL)arg4;
- (void)p_addRedPackInfo:(id)arg0;
- (void)startVideoViewControllerOrEditorWithAssetModels:(id)arg0 videoLocalURLs:(id)arg1 withExtraInfo:(id)arg2 needClip:(BOOL)arg3 processDataBlock:(id /* block */)arg4 completionBlock:(id /* block */)arg5;
- (BOOL)isMixedMediaTypeWithAssetModels:(id)arg0;
- (void)startVideoViewControllerWithAssetModels:(id)arg0 withExtraInfo:(id)arg1 needClip:(BOOL)arg2 processDataBlock:(id /* block */)arg3 completionBlock:(id /* block */)arg4;
- (void)addImageStickerWithParamConfig:(id)arg0;
- (void)addMentionsAndHashtagsWithExtras:(id)arg0 body:(id)arg1;
- (void)addMentionStickerWithParamConfig:(id)arg0;
- (void)invokePublisherWithParamConfig:(id)arg0 publishModel:(id)arg1 needClip:(BOOL)arg2 processDataBlock:(id /* block */)arg3 completionBlock:(id /* block */)arg4;
- (void)reportPanelShowMonitor:(BOOL)arg0 didChooseMultiple:(BOOL)arg1;
- (void)reportPanelClickMonitor:(BOOL)arg0 isFromIM:(BOOL)arg1 didChooseMultiple:(BOOL)arg2;
- (id)systemShareStartDate;
- (void)reportMonitorForShareExtension:(id)arg0 terminalPageString:(id)arg1;
- (void)p_preparePhotoMovieModelWithPhotos:(id)arg0 locationInfos:(id)arg1 fromShareExtension:(BOOL)arg2;
- (void)handleMVWithOnePhotoWith:(id)arg0 asset:(id)arg1 publishModel:(id)arg2 locationInfos:(id)arg3;
- (void)handlePhotoResolutionError;
- (void)handleVideoResolutionError;
- (void)handleVideoTimeLimitError;
- (id)authorizedAlertView;
- (void)setAuthorizedAlertView:(id)arg0;
- (BOOL)checkDurationValid:(id)arg0;
- (BOOL)checkVideosSupportFastImport:(id)arg0;
- (id)styleIDFromShareReq;
- (void)handleShareCompletionWithPopView:(BOOL)arg0 info:(id)arg1;
- (void)jumpToThirdAppDirectly;
- (void)shouldShareToPublishWithShareResponse:(id)arg0 resultBlock:(id /* block */)arg1;
- (void)showEditorWithPublishModel:(id)arg0;
- (void)setSystemShareStartDate:(id)arg0;
- (void).cxx_destruct;
- (id /* block */)completionBlock;
- (void)setCompletionBlock:(id /* block */)arg0;
- (void)dealloc;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (void)showLoading;

@end
