//
//     Generated by private class-dump
//

@class NSURL, VEFileDownloaderConfig, NSError;

@interface VEFileDownloader : NSObject {
    void *_networkWrapper;
    void *_config;
    float _loadedProgress;
    NSURL *_url;
    NSURL *_cacheDir;
    long long _status;
    long long _errorCode;
    NSError *_error;
    VEFileDownloaderConfig *_downloaderConfig;
}

@property (retain, nonatomic) VEFileDownloaderConfig *downloaderConfig;
@property (copy, nonatomic) NSURL *url;
@property (copy, nonatomic) NSURL *cacheDir;
@property (nonatomic) long long status;
@property (nonatomic) long long errorCode;
@property (nonatomic) float loadedProgress;
@property (retain, nonatomic) NSError *error;
@property (readonly, copy, nonatomic) NSURL *localPath;

- (void)setCacheDir:(id)arg0;
- (id)cacheDir;
- (void)setLoadedProgress:(float)arg0;
- (float)loadedProgress;
- (void)setDownloaderConfig:(id)arg0;
- (BOOL)initInternalDownloader;
- (id)getNetWorkIOErrorWithCode:(unsigned long long)arg0 Message:(id)arg1;
- (id)downloaderConfig;
- (double)bufferedTimeWithTargetTime:(double)arg0;
- (void).cxx_destruct;
- (long long)status;
- (void)stop;
- (void)setUrl:(id)arg0;
- (void)setErrorCode:(long long)arg0;
- (id)initWithConfig:(id)arg0;
- (long long)errorCode;
- (void)setStatus:(long long)arg0;
- (void)setError:(id)arg0;
- (void)dealloc;
- (id)url;
- (id)error;
- (id)localPath;
- (BOOL)startDownload;

@end