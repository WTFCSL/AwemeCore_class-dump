//
//     Generated by private class-dump
//

@class DownloadGlobalParameters, NSString, NSDictionary, TTDownloadTaskExtendConfig, NSMutableArray;

@interface TTDownloadTaskConfig : NSObject {
    char _sliceTotalNeedDownload;
    char _isSupportRange;
    char _restoreTimesAuto;
    BOOL _isAutoRestore;
    BOOL _isEnableWhenLru;
    short _versionType;
    NSString *_urlKey;
    NSString *_secondUrl;
    NSString *_fileStorageName;
    NSString *_fileStorageDir;
    long long _downloadStatus;
    NSDictionary *_extraEventParams;
    NSMutableArray *_downloadSliceTaskConfigArray;
    NSString *_md5Value;
    id /* block */ _progressBlock;
    id /* block */ _resultBlock;
    DownloadGlobalParameters *_userParam;
    TTDownloadTaskExtendConfig *_extendConfig;
}

@property (copy) NSString *urlKey;
@property (copy) NSString *secondUrl;
@property (copy) NSString *fileStorageName;
@property (copy) NSString *fileStorageDir;
@property long long downloadStatus;
@property (nonatomic) NSDictionary *extraEventParams;
@property (retain) NSMutableArray *downloadSliceTaskConfigArray;
@property (copy, nonatomic) NSString *md5Value;
@property (nonatomic) char sliceTotalNeedDownload;
@property (nonatomic) char isSupportRange;
@property char restoreTimesAuto;
@property BOOL isAutoRestore;
@property short versionType;
@property (copy, nonatomic) id /* block */ progressBlock;
@property (copy, nonatomic) id /* block */ resultBlock;
@property (retain) DownloadGlobalParameters *userParam;
@property (retain) TTDownloadTaskExtendConfig *extendConfig;
@property BOOL isEnableWhenLru;

- (short)versionType;
- (void)setVersionType:(short)arg0;
- (id)fileStorageName;
- (id)extendConfig;
- (BOOL)isEnableWhenLru;
- (long long)getTotalLength;
- (id)downloadSliceTaskConfigArray;
- (char)restoreTimesAuto;
- (void)setIsAutoRestore:(BOOL)arg0;
- (id)fileStorageDir;
- (void)setFileStorageDir:(id)arg0;
- (id)secondUrl;
- (void)setSecondUrl:(id)arg0;
- (void)setFileStorageName:(id)arg0;
- (void)setMd5Value:(id)arg0;
- (void)setSliceTotalNeedDownload:(char)arg0;
- (void)setIsEnableWhenLru:(BOOL)arg0;
- (char)sliceTotalNeedDownload;
- (void)setExtendConfig:(id)arg0;
- (void)setRestoreTimesAuto:(char)arg0;
- (void)setIsSupportRange:(char)arg0;
- (char)isSupportRange;
- (void)clearUserBlock;
- (BOOL)isAutoRestore;
- (void)setDownloadSliceTaskConfigArray:(id)arg0;
- (id)extraEventParams;
- (void)setExtraEventParams:(id)arg0;
- (id)md5Value;
- (id)init;
- (void).cxx_destruct;
- (void)setResultBlock:(id /* block */)arg0;
- (id)userParam;
- (void)setProgressBlock:(id /* block */)arg0;
- (void)setUserParam:(id)arg0;
- (id /* block */)progressBlock;
- (void)dealloc;
- (id /* block */)resultBlock;
- (long long)downloadStatus;
- (void)setDownloadStatus:(long long)arg0;
- (id)urlKey;
- (void)setUrlKey:(id)arg0;

@end
