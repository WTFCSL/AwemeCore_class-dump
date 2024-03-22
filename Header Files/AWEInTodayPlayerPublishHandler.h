//
//     Generated by private class-dump
//

@class UIView, NSString, NSArray, AWEInTodaySchemaData, NSObject, UIViewController, NSDateFormatter, NSMutableArray;
@protocol ACCLoadingViewProtocol, ACCMVTemplateManagerProtocol, UIViewControllerTransitioningDelegate;

@interface AWEInTodayPlayerPublishHandler : NSObject {
    BOOL _isPublishing;
    BOOL _isCancel;
    BOOL _hasAwemeContent;
    BOOL _publishWithSilenceEnable;
    BOOL _isAlbum;
    BOOL _isAllLocalImage;
    int _iCloudRequestIdentifier;
    UIViewController *_viewController;
    NSString *_enterFrom;
    NSString *_shootWay;
    AWEInTodaySchemaData *_schemaData;
    long long _limitPublishCount;
    NSDateFormatter *_dateFormatter;
    UIView<ACCLoadingViewProtocol> *_loadingView;
    id<ACCMVTemplateManagerProtocol> _mvTemplateManager;
    NSString *_currentLocalIdentifier;
    NSObject *_publishIdentifier;
    id<UIViewControllerTransitioningDelegate> _nextTranslationTransitionDelegate;
    long long _videoCnt;
    long long _picCnt;
    NSString *_stickerText;
    NSString *_memoriesEnterMethod;
    NSArray *_models;
    NSString *_firstPublishInfoStickerId;
    NSMutableArray *_downloadedFirstPageStickers;
    NSArray *_publishedResources;
}

@property (retain, nonatomic) NSDateFormatter *dateFormatter;
@property (nonatomic) BOOL isCancel;
@property (weak, nonatomic) UIView<ACCLoadingViewProtocol> *loadingView;
@property (retain, nonatomic) id<ACCMVTemplateManagerProtocol> mvTemplateManager;
@property (copy, nonatomic) NSString *currentLocalIdentifier;
@property (nonatomic) int iCloudRequestIdentifier;
@property (retain, nonatomic) NSObject *publishIdentifier;
@property (nonatomic) BOOL hasAwemeContent;
@property (retain, nonatomic) id<UIViewControllerTransitioningDelegate> nextTranslationTransitionDelegate;
@property (nonatomic) long long videoCnt;
@property (nonatomic) long long picCnt;
@property (copy, nonatomic) NSString *stickerText;
@property (copy, nonatomic) NSString *memoriesEnterMethod;
@property (nonatomic) BOOL publishWithSilenceEnable;
@property (nonatomic) BOOL isAlbum;
@property (nonatomic) BOOL isAllLocalImage;
@property (copy, nonatomic) NSArray *models;
@property (copy, nonatomic) NSString *firstPublishInfoStickerId;
@property (retain, nonatomic) NSMutableArray *downloadedFirstPageStickers;
@property (copy, nonatomic) NSArray *publishedResources;
@property (weak, nonatomic) UIViewController *viewController;
@property (nonatomic) BOOL isPublishing;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *shootWay;
@property (retain, nonatomic) AWEInTodaySchemaData *schemaData;
@property (nonatomic) long long limitPublishCount;

- (void)setEnterFrom:(id)arg0;
- (id)enterMethod;
- (id)enterFrom;
- (void)dismissLoadingView;
- (void)setShootWay:(id)arg0;
- (BOOL)isAlbum;
- (id)shootWay;
- (id)stickerText;
- (void)setStickerText:(id)arg0;
- (void)setVideoCnt:(long long)arg0;
- (void)setPicCnt:(long long)arg0;
- (long long)videoCnt;
- (long long)picCnt;
- (BOOL)useNewApi;
- (void)setIsAlbum:(BOOL)arg0;
- (id)nextTranslationTransitionDelegate;
- (void)setNextTranslationTransitionDelegate:(id)arg0;
- (id)mvTemplateManager;
- (void)setMvTemplateManager:(id)arg0;
- (void)publishWithSilence:(id)arg0;
- (void)setIsPublishing:(BOOL)arg0;
- (int)iCloudRequestIdentifier;
- (void)setICloudRequestIdentifier:(int)arg0;
- (id)publishCancelError;
- (void)trackOpenEditorWithError:(id)arg0;
- (id)downloadedFirstPageStickers;
- (id)publishInfoStickerId;
- (void)setFirstPublishInfoStickerId:(id)arg0;
- (id)firstPublishInfoStickerId;
- (void)preloadInfoStickers:(id)arg0 firstPage:(BOOL)arg1 complete:(id /* block */)arg2;
- (void)setPublishWithSilenceEnable:(BOOL)arg0;
- (void)p_publishWithPlayerTileModels:(id)arg0 triggerFrom:(id)arg1 publishFrom:(id)arg2;
- (void)setPublishedResources:(id)arg0;
- (void)setMemoriesEnterMethod:(id)arg0;
- (void)trackPublishClickWithModels:(id)arg0 TriggerFrom:(id)arg1;
- (long long)limitPublishCount;
- (void)setPublishIdentifier:(id)arg0;
- (void)setHasAwemeContent:(BOOL)arg0;
- (void)showPrpgressLoadingViewWithCancelBlock:(id /* block */)arg0;
- (void)setIsAllLocalImage:(BOOL)arg0;
- (void)publishAlbumImagesWithModels:(id)arg0 isAllLocal:(BOOL)arg1;
- (void)updatePrpgressLoadingView:(double)arg0;
- (id)publishIdentifier;
- (void)infiniPublishWithModels:(id)arg0;
- (void)publishSinglePhotoWithModel:(id)arg0;
- (void)publishVideoWithModels:(id)arg0;
- (void)configEditComposerModel:(id)arg0 publishComposer:(id)arg1 isAlbum:(BOOL)arg2 singlePhotoImage:(id)arg3 models:(id)arg4;
- (void)createTaskWithEditComposerModel:(id)arg0 publishComposer:(id)arg1 isAlbum:(BOOL)arg2 singlePhotoImage:(id)arg3 firstFrameImage:(id)arg4 videoCount:(id)arg5 isAllLocalImage:(BOOL)arg6;
- (id)stickerTextForModels:(id)arg0;
- (BOOL)publishWithSilenceEnable;
- (BOOL)enableChallengeStickerIsMultiPhotos:(BOOL)arg0;
- (void)addInfoStickerWithEditComposer:(id)arg0 stickerId:(id)arg1 imageIndex:(long long)arg2;
- (BOOL)hasAwemeContent;
- (id)memoriesEnterMethod;
- (void)addChallengeStickerWithPublishViewModel:(id)arg0;
- (void)trackPublishAction;
- (void)addTextStickerIfNeededWithInstance:(id)arg0 stickerConfig:(id)arg1;
- (void)addInfoStickerIfNeededWithInstance:(id)arg0 stickerConfig:(id)arg1;
- (void)addMusicIfNeededWithEditor:(id)arg0;
- (void)addFlashMobStickerIfNeededWithEditor:(id)arg0;
- (void)addAnchorIfNeededWithPublish:(id)arg0;
- (void)addHashTagIfNeededWithPublish:(id)arg0;
- (id)publishedResources;
- (void)predownloadAwemeVideoWithModels:(id)arg0;
- (void)prepareForPublish;
- (void)publishDiaryWithPlayerTileModels:(id)arg0 triggerFrom:(id)arg1 publishFrom:(id)arg2;
- (void)publishWithPlayerTileModels:(id)arg0 triggerFrom:(id)arg1 publishFrom:(id)arg2;
- (id)createStickerImageWithModels:(id)arg0;
- (void)setLimitPublishCount:(long long)arg0;
- (id)currentLocalIdentifier;
- (void)setCurrentLocalIdentifier:(id)arg0;
- (BOOL)isAllLocalImage;
- (void)setDownloadedFirstPageStickers:(id)arg0;
- (void)setViewController:(id)arg0;
- (id)viewController;
- (void).cxx_destruct;
- (void)setDateFormatter:(id)arg0;
- (id)dateFormatter;
- (id)models;
- (void)setModels:(id)arg0;
- (BOOL)isCancel;
- (void)setIsCancel:(BOOL)arg0;
- (BOOL)isPublishing;
- (void)showLoadingView;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (id)schemaData;
- (void)setSchemaData:(id)arg0;

@end