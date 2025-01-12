//
//     Generated by private class-dump
//

@class NSString;

@interface ALMSysPlayerCacheWrapper : NSObject <AWEVideoCDNRequestDelegate, AWEVideoDownloadDelegate, ALMVideoCacheProtocol> {
    id /* block */ _requestBlock;
    id /* block */ _responseBlock;
    id /* block */ _speedTestBlock;
    long long _videoBSNetworkProfilerType;
}

@property (copy, nonatomic) id /* block */ requestBlock;
@property (copy, nonatomic) id /* block */ responseBlock;
@property (copy, nonatomic) id /* block */ speedTestBlock;
@property (nonatomic) long long videoBSNetworkProfilerType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedCache;

- (void)clearAllCache;
- (void)videoWillRequest:(id)arg0 isRedirectRequest:(BOOL)arg1;
- (void)videoDidReceiveResponse:(id)arg0 forRequest:(id)arg1;
- (long long)getIESVideoBSNetworkProfilerType;
- (void)videoDidDownloadDataLength:(unsigned long long)arg0 interval:(double)arg1;
- (BOOL)hasEnoughCacheForURLString:(id)arg0 videoDuration:(double)arg1 networkSpeed:(double)arg2;
- (void)setSpeedTestBlock:(id /* block */)arg0;
- (id /* block */)speedTestBlock;
- (long long)videoBSNetworkProfilerType;
- (void)hasCacheForVideoID:(id)arg0 URLString:(id)arg1 completion:(id /* block */)arg2;
- (void)getCacheSizeWithCompletion:(id /* block */)arg0;
- (void)setVideoDownloadSpeedTestAction:(id /* block */)arg0;
- (void)setIESVideoBSNetworkProfilerType:(long long)arg0;
- (void)setVideoBSNetworkProfilerType:(long long)arg0;
- (void)setCacheSizeLimit:(unsigned long long)arg0;
- (void)setCacheKeyParserBlock:(id /* block */)arg0;
- (void)setCacheReportBlock:(id /* block */)arg0;
- (void)setPlayerDidStartRequestURLBlock:(id /* block */)arg0;
- (void)setPlayerDidFinishRequestURLBlock:(id /* block */)arg0;
- (id)init;
- (void).cxx_destruct;
- (id /* block */)requestBlock;
- (void)setRequestBlock:(id /* block */)arg0;
- (id /* block */)responseBlock;
- (void)setResponseBlock:(id /* block */)arg0;

@end
