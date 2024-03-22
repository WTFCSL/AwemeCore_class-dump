//
//     Generated by private class-dump
//

@class NSString, HGRAPackResult, HGHttpDownloadTask, NSArray, NSURL, HGUniqueID;
@protocol HGRAPackDelegate;

@interface HGRAPackTask : NSObject {
    BOOL _useSortedUrls;
    BOOL _addGzip;
    BOOL _useTTNet;
    BOOL _isDownloadBr;
    float _priority;
    HGHttpDownloadTask *_downloadTask;
    NSString *_identifier;
    HGUniqueID *_uniqueId;
    id<HGRAPackDelegate> _delegate;
    NSArray *_requestURLs;
    unsigned long long _urlIndex;
    long long _readType;
    long long _appType;
    HGRAPackResult *_result;
    unsigned long long _lastUrlIndex;
}

@property (nonatomic) unsigned long long urlIndex;
@property (retain, nonatomic) HGRAPackResult *result;
@property (retain, nonatomic) HGHttpDownloadTask *downloadTask;
@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) HGUniqueID *uniqueId;
@property (weak, nonatomic) id<HGRAPackDelegate> delegate;
@property (copy, nonatomic) NSArray *requestURLs;
@property (readonly, nonatomic) NSURL *prevRequestURL;
@property (nonatomic) float priority;
@property (nonatomic) long long readType;
@property (nonatomic) long long appType;
@property (nonatomic) BOOL useSortedUrls;
@property (nonatomic) BOOL addGzip;
@property (nonatomic) BOOL useTTNet;
@property (nonatomic) BOOL isDownloadBr;
@property (readonly, nonatomic) NSURL *requestURL;
@property (readonly, nonatomic) BOOL isLastRequestURL;

- (id)requestURLs;
- (void)startTask;
- (BOOL)useSortedUrls;
- (void)setUseSortedUrls:(BOOL)arg0;
- (BOOL)useTTNet;
- (void)setUseTTNet:(BOOL)arg0;
- (BOOL)isDownloadBr;
- (void)setIsDownloadBr:(BOOL)arg0;
- (BOOL)addGzip;
- (void)setAddGzip:(BOOL)arg0;
- (unsigned long long)urlIndex;
- (void)setUrlIndex:(unsigned long long)arg0;
- (id)downloadFinished;
- (void)tryNextUrl;
- (BOOL)isLastRequestURL;
- (id)prevRequestURL;
- (void)setRequestURLs:(id)arg0;
- (long long)appType;
- (id)uniqueId;
- (void)setResult:(id)arg0;
- (void)setUniqueId:(id)arg0;
- (void).cxx_destruct;
- (id)result;
- (void)setPriority:(float)arg0;
- (id)identifier;
- (id)delegate;
- (id)requestURL;
- (void)setAppType:(long long)arg0;
- (void)setDelegate:(id)arg0;
- (float)priority;
- (void)setIdentifier:(id)arg0;
- (id)downloadTask;
- (void)setDownloadTask:(id)arg0;
- (long long)readType;
- (void)setReadType:(long long)arg0;
- (id)decodeData:(id)arg0 error:(id *)arg1;
- (void)suspendTask;
- (void)stopTask;

@end