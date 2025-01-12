//
//     Generated by private class-dump
//

@class NSURLSessionDownloadTask, BDLOneCardStorage;

@interface BDLOneCardDownloader : NSObject {
    long long _downloadUrlIdx;
    BDLOneCardStorage *_storage;
    NSURLSessionDownloadTask *_downloadTask;
}

@property long long downloadUrlIdx;
@property (retain) BDLOneCardStorage *storage;
@property (retain) NSURLSessionDownloadTask *downloadTask;

- (void)setDownloadUrlIdx:(long long)arg0;
- (long long)downloadUrlIdx;
- (void)startNextDownload:(id /* block */)arg0;
- (void)setStorage:(id)arg0;
- (void).cxx_destruct;
- (id)initWithStorage:(id)arg0;
- (id)storage;
- (id)downloadTask;
- (void)setDownloadTask:(id)arg0;
- (void)startDownload:(id /* block */)arg0;

@end
