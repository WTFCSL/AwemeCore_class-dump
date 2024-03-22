//
//     Generated by private class-dump
//

@class NSArray, DownloadGlobalParameters;

@interface HybridRLCDNProcessor : HybridRLBaseProcessor {
    DownloadGlobalParameters *_downloadParameters;
    NSArray *_endRetryCodes;
    id /* block */ _downloadCompletion;
    double _lastAbsoluteTime;
}

@property (retain) DownloadGlobalParameters *downloadParameters;
@property (retain, nonatomic) NSArray *endRetryCodes;
@property (copy, nonatomic) id /* block */ downloadCompletion;
@property (nonatomic) double lastAbsoluteTime;

+ (void)deleteCDNCacheForResource:(id)arg0;
+ (id)identityWithUrl:(id)arg0;

- (id)downloadParameters;
- (void)setDownloadParameters:(id)arg0;
- (id)resourceLoaderName;
- (void)fetchResourceWithURL:(id)arg0 container:(id)arg1 loaderConfig:(id)arg2 taskConfig:(id)arg3 resolve:(id /* block */)arg4 reject:(id /* block */)arg5;
- (void)setEndRetryCodes:(id)arg0;
- (void)configDownloadParams;
- (void)setLastAbsoluteTime:(double)arg0;
- (void)fetchShuffleDomains:(id)arg0 resolve:(id /* block */)arg1 reject:(id /* block */)arg2;
- (double)lastAbsoluteTime;
- (void)_fetchResourceWithSourceURL:(id)arg0 resolve:(id /* block */)arg1 reject:(id /* block */)arg2;
- (void)downloadWithIdentity:(id)arg0 URLString:(id)arg1;
- (id)endRetryCodes;
- (void)appendFlagOfCurrentProcessor:(BOOL)arg0 url:(id)arg1;
- (id)init;
- (void).cxx_destruct;
- (void)appendFlag:(id)arg0;
- (void)cancelLoad;
- (void)dealloc;
- (id /* block */)downloadCompletion;
- (void)setDownloadCompletion:(id /* block */)arg0;

@end