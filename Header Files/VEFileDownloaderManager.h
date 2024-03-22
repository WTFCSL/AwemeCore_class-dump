//
//     Generated by private class-dump
//

@class NSMutableDictionary;

@interface VEFileDownloaderManager : NSObject {
    NSMutableDictionary *_downloaderMap;
}

@property (copy, nonatomic) NSMutableDictionary *downloaderMap;

+ (id)fileCacheWithURL:(id)arg0 cacheDir:(id)arg1;
+ (BOOL)checkFileValid:(id)arg0;
+ (id)sharedInstance;

- (void)appWillTerminateNotification;
- (id)downloaderMap;
- (void)stopFileDownloadWithURL:(id)arg0;
- (id)fetchFileDownloadWithURL:(id)arg0;
- (id)createDownloadWithConfig:(id)arg0 error:(id *)arg1;
- (void)setDownloaderMap:(id)arg0;
- (void)addNotificationObservers;
- (id)init;
- (void).cxx_destruct;
- (id)description;
- (void)dealloc;

@end