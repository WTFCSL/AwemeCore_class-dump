//
//     Generated by private class-dump
//

@class NSString;

@interface DownloadProgressInfo : NSObject {
    float _progress;
    NSString *_urlKey;
    NSString *_secondUrl;
    long long _netDownloadSpeed;
    long long _downloadedSize;
    long long _totalSize;
}

@property (copy) NSString *urlKey;
@property (copy) NSString *secondUrl;
@property float progress;
@property long long netDownloadSpeed;
@property long long downloadedSize;
@property long long totalSize;

- (long long)downloadedSize;
- (long long)netDownloadSpeed;
- (void)setNetDownloadSpeed:(long long)arg0;
- (void)setDownloadedSize:(long long)arg0;
- (id)secondUrl;
- (void)setSecondUrl:(id)arg0;
- (void).cxx_destruct;
- (float)progress;
- (void)setProgress:(float)arg0;
- (long long)totalSize;
- (void)setTotalSize:(long long)arg0;
- (id)urlKey;
- (void)setUrlKey:(id)arg0;

@end
