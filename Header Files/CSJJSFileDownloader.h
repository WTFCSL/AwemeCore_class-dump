//
//     Generated by private class-dump
//

@class NSURLSessionDownloadTask;
@protocol BUPersistenceProtocol;

@interface CSJJSFileDownloader : NSObject {
    NSURLSessionDownloadTask *_downloadTask;
    id<BUPersistenceProtocol> _persistence;
}

+ (id)sharedInstance;

- (void)downloadWithURLString:(id)arg0;
- (id)JSStringWithURLString:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end
