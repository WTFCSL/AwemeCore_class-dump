//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary, AWEMediaDownloadInfo;

@interface AWESharePanelDownloadManager : NSObject <AWESharePanelDownload> {
    id /* block */ _progressBlock;
    id /* block */ _resultBlock;
    NSMutableDictionary *_feedVideoCachedFileURLs;
    NSMutableDictionary *_downloadTypeDic;
    AWEMediaDownloadInfo *_downloadInfo;
    double _progress;
}

@property (copy, nonatomic) id /* block */ progressBlock;
@property (copy, nonatomic) id /* block */ resultBlock;
@property (retain, nonatomic) NSMutableDictionary *feedVideoCachedFileURLs;
@property (retain, nonatomic) NSMutableDictionary *downloadTypeDic;
@property (retain, nonatomic) AWEMediaDownloadInfo *downloadInfo;
@property (nonatomic) double progress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)cancelDownloadWithAwemeModel:(id)arg0;
+ (unsigned long long)getCurrentDownloadStatus:(id)arg0;
+ (BOOL)localCachedFileAlreadyExistForAwemeID:(id)arg0;
+ (id)feedCachedFileURLForAwemeID:(id)arg0;
+ (void)toastDownloadFinish;
+ (void)toastAlreadyDownloaded;
+ (void)toastOtherDownloading;
+ (id)destinationURLForURI:(id)arg0;
+ (id)downloadWithOptions:(id)arg0 progressBlock:(id /* block */)arg1 resultBlock:(id /* block */)arg2;
+ (BOOL)isShareOffsite:(id)arg0;
+ (void)setShareOffsite:(BOOL)arg0 forAwemeID:(id)arg1;
+ (id)sharedInstance;
+ (void)clearCache;

- (void)p_clearCache;
- (void)setFeedVideoCachedFileURLs:(id)arg0;
- (void)setDownloadTypeDic:(id)arg0;
- (id)p_downloadWithOptions:(id)arg0 progressBlock:(id /* block */)arg1 resultBlock:(id /* block */)arg2;
- (void)p_cancelDownloadWithAwemeModel:(id)arg0;
- (unsigned long long)p_getCurrentDownloadStatus:(id)arg0;
- (BOOL)p_localCachedFileAlreadyExistForAwemeID:(id)arg0;
- (id)p_feedCachedFileURLForAwemeID:(id)arg0;
- (BOOL)p_isShareOffsite:(id)arg0;
- (void)p_setShareOffsite:(BOOL)arg0 forAwemeID:(id)arg1;
- (void)p_recordCachedFileURL:(id)arg0 forAwemeID:(id)arg1;
- (id)feedVideoCachedFileURLs;
- (id)downloadTypeDic;
- (void).cxx_destruct;
- (void)setResultBlock:(id /* block */)arg0;
- (void)setProgressBlock:(id /* block */)arg0;
- (double)progress;
- (id /* block */)progressBlock;
- (void)setProgress:(double)arg0;
- (id /* block */)resultBlock;
- (id)downloadInfo;
- (void)setDownloadInfo:(id)arg0;

@end
