//
//     Generated by private class-dump
//

@class AWEMediaDownloadInfo, AWEShareLoadingCellModel, NSDictionary, NSMutableArray, AWEShareThirdPlatformCellModel;
@protocol AWEShareSaveAlbumDataCenterDelegate;

@interface AWEShareSaveAlbumDataCenter : NSObject {
    BOOL _successfullySavedToAlbum;
    NSMutableArray *_cellModels;
    id<AWEShareSaveAlbumDataCenterDelegate> _delegate;
    NSDictionary *_context;
    AWEShareLoadingCellModel *_loadingCellModel;
    AWEShareThirdPlatformCellModel *_thirdPlatformCellModel;
    AWEMediaDownloadInfo *_downloadInfo;
}

@property (copy, nonatomic) NSDictionary *context;
@property (retain, nonatomic) AWEShareLoadingCellModel *loadingCellModel;
@property (retain, nonatomic) AWEShareThirdPlatformCellModel *thirdPlatformCellModel;
@property (retain, nonatomic) AWEMediaDownloadInfo *downloadInfo;
@property (readonly, nonatomic) NSMutableArray *cellModels;
@property (weak, nonatomic) id<AWEShareSaveAlbumDataCenterDelegate> delegate;
@property (nonatomic) BOOL successfullySavedToAlbum;

+ (BOOL)localCachedFileAlreadyExistForAwemeID:(id)arg0;
+ (id)feedCachedFileURLForAwemeID:(id)arg0;
+ (id)downloadCellModelForContext:(id)arg0;
+ (BOOL)localCachedFileAlreadyExistForContext:(id)arg0;
+ (id)thirdPlatformCellModelForContext:(id)arg0;
+ (id)saveTitleViewModelForContext:(id)arg0;
+ (void)p_saveMediaToAlbumOnCompletion:(id)arg0 completion:(id /* block */)arg1;
+ (void)recordCachedFileURL:(id)arg0 forAwemeID:(id)arg1;
+ (id)feedCachedFileURLForContext:(id)arg0;
+ (void)saveVideoFile:(id)arg0 withDate:(id)arg1 toAlbumOnCompletion:(id /* block */)arg2;
+ (BOOL)enableWechatCopyLinkForContext:(id)arg0;
+ (id)cellTitleWithKey:(id)arg0;
+ (BOOL)enableShareIntensifyWechatCopyLink;
+ (void)initialize;
+ (void)clearCache;

- (id)cellModels;
- (void)setLoadingCellModel:(id)arg0;
- (id)loadingCellModel;
- (void)setThirdPlatformCellModel:(id)arg0;
- (id)thirdPlatformCellModel;
- (void)p_updateCellStyle:(unsigned long long)arg0;
- (void)p_updateProgressOfLoadingCell:(double)arg0;
- (void)setSuccessfullySavedToAlbum:(BOOL)arg0;
- (void)p_updateLoadingCellResult:(BOOL)arg0 errMsg:(id)arg1;
- (void)p_downloadFileIfNeededWithProgress:(id /* block */)arg0 onCompletion:(id /* block */)arg1;
- (void)p_addThirdPlatformCell;
- (void)p_insertCellModel:(id)arg0 afterModelOfClass:(Class)arg1 completion:(id /* block */)arg2;
- (void)prepareViewModelsOnCompletion:(id /* block */)arg0;
- (void)downloadFileIfNeeded;
- (void)saveFileIfNeeded;
- (double)totalContentHeight;
- (void)cancelDownloadingWithStyle:(unsigned long long)arg0;
- (id)p_getDownloadAwemeModel;
- (BOOL)successfullySavedToAlbum;
- (id)initWithContext:(id)arg0;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (void)downloadFile;
- (id)delegate;
- (id)context;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (id)downloadInfo;
- (void)setDownloadInfo:(id)arg0;

@end