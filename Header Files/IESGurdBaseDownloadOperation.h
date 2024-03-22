//
//     Generated by private class-dump
//

@class NSString, IESGurdDownloadPackageInfo, IESGurdResourceModel, IESGurdDownloadInfoModel;

@interface IESGurdBaseDownloadOperation : NSOperation {
    BOOL _executing;
    BOOL _finished;
    BOOL _retryDownload;
    BOOL _isPatch;
    NSString *_accessKey;
    NSString *_channel;
    id /* block */ _downloadCompletion;
    long long _downloadPriority;
    IESGurdDownloadInfoModel *_downloadInfoModel;
    IESGurdResourceModel *_config;
    IESGurdDownloadPackageInfo *_downloadPackageInfo;
}

@property (nonatomic) BOOL isPatch;
@property (retain, nonatomic) IESGurdResourceModel *config;
@property (copy, nonatomic) id /* block */ downloadCompletion;
@property long long downloadPriority;
@property (retain, nonatomic) IESGurdDownloadPackageInfo *downloadPackageInfo;
@property (nonatomic, getter=isExecuting) BOOL executing;
@property (nonatomic, getter=isFinished) BOOL finished;
@property (retain, nonatomic) IESGurdDownloadInfoModel *downloadInfoModel;
@property (copy, nonatomic) NSString *accessKey;
@property (copy, nonatomic) NSString *channel;
@property (nonatomic) BOOL retryDownload;

+ (id)operationWithConfig:(id)arg0 isPatch:(BOOL)arg1 downloadCompletion:(id /* block */)arg2;

- (void)setRetryDownload:(BOOL)arg0;
- (id)downloadInfoModel;
- (void)setDownloadInfoModel:(id)arg0;
- (id)downloadPackageInfo;
- (BOOL)checkNeedDownload;
- (void)log:(id)arg0 hasError:(BOOL)arg1;
- (void)downloadOdr;
- (void)onCheckError:(long long)arg0 msg:(id)arg1;
- (BOOL)isResourceActiveWithMeta:(id)arg0;
- (void)handleOperationCancel;
- (id)getUpdateStageMode:(BOOL)arg0;
- (void)sendUpdateStats;
- (void)innerFinishDownload:(BOOL)arg0 error:(id)arg1;
- (void)callDownloadCompletion:(BOOL)arg0 error:(id)arg1;
- (void)handleDownloadResult:(id)arg0 downloadInfo:(id)arg1 error:(id)arg2;
- (void)handleDownloadResultWithDownloadInfo:(id)arg0 succeed:(BOOL)arg1 error:(id)arg2;
- (void)handleBusinessFailedWithType:(id)arg0;
- (void)updateDownloadPriority:(long long)arg0;
- (id)getResourceModel;
- (void)setDownloadPackageInfo:(id)arg0;
- (void)setFinished:(BOOL)arg0;
- (BOOL)isFinished;
- (id)channel;
- (BOOL)isConcurrent;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (void)setIsPatch:(BOOL)arg0;
- (BOOL)isExecuting;
- (void)setChannel:(id)arg0;
- (long long)downloadPriority;
- (id)config;
- (BOOL)isPatch;
- (void)setDownloadPriority:(long long)arg0;
- (void)cancel;
- (void)start;
- (void)setExecuting:(BOOL)arg0;
- (id /* block */)downloadCompletion;
- (id)accessKey;
- (void)setAccessKey:(id)arg0;
- (BOOL)retryDownload;
- (void)setDownloadCompletion:(id /* block */)arg0;
- (void)operationDidStart;

@end
