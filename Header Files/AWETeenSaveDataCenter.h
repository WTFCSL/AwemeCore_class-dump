//
//     Generated by private class-dump
//

@class NSMutableDictionary, AWEAwemeModel, AWETeenSaveButtonModel, AWETeenPlayInteractionContext, AWEMediaDownloadInfo;
@protocol AWETeenSaveDataCenterDelegate;

@interface AWETeenSaveDataCenter : NSObject {
    BOOL _succeedSavingToAlbum;
    id<AWETeenSaveDataCenterDelegate> _delegate;
    AWETeenSaveButtonModel *_buttonModel;
    AWEMediaDownloadInfo *_downloadInfo;
    AWEAwemeModel *_videoModel;
    AWETeenPlayInteractionContext *_context;
    NSMutableDictionary *_teenFeedVideoCachedFileURLs;
    double _downloadStartTime;
}

@property (retain, nonatomic) AWETeenSaveButtonModel *buttonModel;
@property (retain, nonatomic) AWEMediaDownloadInfo *downloadInfo;
@property (retain, nonatomic) AWEAwemeModel *videoModel;
@property (retain, nonatomic) AWETeenPlayInteractionContext *context;
@property (retain, nonatomic) NSMutableDictionary *teenFeedVideoCachedFileURLs;
@property (nonatomic) BOOL succeedSavingToAlbum;
@property (nonatomic) double downloadStartTime;
@property (weak, nonatomic) id<AWETeenSaveDataCenterDelegate> delegate;

+ (void)downloadAweme:(id)arg0 indicesToDownload:(id)arg1 enterFrom:(id)arg2 completion:(id /* block */)arg3;
+ (id)downloadButtonModelForAwemeModel:(id)arg0;
+ (void)downloadAweme:(id)arg0 indicesToDownload:(id)arg1 enterFrom:(id)arg2 logExtraDict:(id)arg3 completion:(id /* block */)arg4;
+ (void)downloadAweme:(id)arg0 indicesToDownload:(id)arg1 enterFrom:(id)arg2 logExtraDict:(id)arg3 progressBlock:(id /* block */)arg4 completion:(id /* block */)arg5;
+ (void)downloadMediaWithOptions:(id)arg0 completion:(id /* block */)arg1;
+ (void)showDownloadSuccessToastWithOptions:(id)arg0;
+ (void)showDownloadFailedToastWithOptions:(id)arg0 result:(id)arg1;
+ (void)downloadAweme:(id)arg0 enterFrom:(id)arg1 completion:(id /* block */)arg2;
+ (id)sharedInstance;

- (unsigned long long)getCurrentDownloadStatus:(id)arg0;
- (BOOL)localCachedFileAlreadyExistForAwemeID:(id)arg0;
- (id)destinationURLForURI:(id)arg0;
- (id)videoModel;
- (void)setVideoModel:(id)arg0;
- (id)buttonModel;
- (void)setButtonModel:(id)arg0;
- (void)updateWithAwemeModel:(id)arg0;
- (void)updateWithAwemeModel:(id)arg0 context:(id)arg1;
- (void)cancelDownloading;
- (void)p_updateCellStyle:(unsigned long long)arg0;
- (void)recordCachedFileURL:(id)arg0 forAwemeID:(id)arg1;
- (void)downloadFileIfNeeded;
- (BOOL)succeedSavingToAlbum;
- (void)p_updateLoadingResult:(BOOL)arg0 errorMsg:(id)arg1;
- (void)setTeenFeedVideoCachedFileURLs:(id)arg0;
- (void)p_downloadFile;
- (id)teenFeedCachedFileURLForAwemeID:(id)arg0;
- (void)setSucceedSavingToAlbum:(BOOL)arg0;
- (void)p_updateProgressOfLoading:(double)arg0;
- (id)teenFeedVideoCachedFileURLs;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)delegate;
- (double)downloadStartTime;
- (id)context;
- (void)setDelegate:(id)arg0;
- (void)setDownloadStartTime:(double)arg0;
- (id)downloadInfo;
- (void)setDownloadInfo:(id)arg0;

@end
