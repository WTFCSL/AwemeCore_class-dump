//
//     Generated by private class-dump
//

@class NSDictionary;

@interface BDDownloadTaskConfig : NSObject {
    BOOL _immediately;
    BOOL _progressDownload;
    BOOL _progressDownloadForThumbnail;
    BOOL _verifyData;
    long long _priority;
    double _timeoutInterval;
    NSDictionary *_requestHeaders;
}

@property (nonatomic) long long priority;
@property (nonatomic) double timeoutInterval;
@property (nonatomic) BOOL immediately;
@property (nonatomic) BOOL progressDownload;
@property (nonatomic) BOOL progressDownloadForThumbnail;
@property (nonatomic) BOOL verifyData;
@property (copy, nonatomic) NSDictionary *requestHeaders;

- (void)setVerifyData:(BOOL)arg0;
- (BOOL)verifyData;
- (void)setImmediately:(BOOL)arg0;
- (void)setProgressDownload:(BOOL)arg0;
- (void)setProgressDownloadForThumbnail:(BOOL)arg0;
- (BOOL)progressDownload;
- (BOOL)progressDownloadForThumbnail;
- (BOOL)immediately;
- (id)init;
- (void)setTimeoutInterval:(double)arg0;
- (void).cxx_destruct;
- (void)setPriority:(long long)arg0;
- (double)timeoutInterval;
- (long long)priority;
- (id)requestHeaders;
- (void)setRequestHeaders:(id)arg0;

@end
