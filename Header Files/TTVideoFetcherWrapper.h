//
//     Generated by private class-dump
//

@class NSString, TTVideoEngineInfoFetcher;

@interface TTVideoFetcherWrapper : NSObject <TTVideoInfoFetcherDelegate> {
    BOOL _isLoading;
    int _resolution;
    struct { char *x0; char *x1; int x2; int x3; int x4; } *_videoInfo;
    TTVideoEngineInfoFetcher *_fetcher;
    void *_context;
}

@property (retain, nonatomic) TTVideoEngineInfoFetcher *fetcher;
@property (nonatomic) int resolution;
@property (nonatomic) void *context;
@property BOOL isLoading;
@property (nonatomic) struct { char *x0; char *x1; int x2; int x3; int x4; } *videoInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct { char *x0; char *x1; int x2; int x3; int x4; } *)videoInfo;
- (void)setVideoInfo:(struct { char *x0; char *x1; int x2; int x3; int x4; } *)arg0;
- (void)infoFetcherDidFinish:(long long)arg0;
- (void)infoFetcherDidFinish:(id)arg0 error:(id)arg1;
- (void)infoFetcherShouldRetry:(id)arg0;
- (void)infoFetcherDidCancel;
- (void)infoFetcherFinishWithDNSError:(id)arg0;
- (id)initWithMetaURL:(id)arg0 resolution:(int)arg1;
- (int)getSupportedResolution:(id)arg0;
- (void)setResolutionMask:(int *)arg0 forResolution:(unsigned long long)arg1;
- (BOOL)isLoading;
- (void)setResolution:(int)arg0;
- (void)cancel:(void *)arg0;
- (int)resolution;
- (void).cxx_destruct;
- (void)setContext:(void *)arg0;
- (void *)context;
- (void)dealloc;
- (void)setIsLoading:(BOOL)arg0;
- (id)fetcher;
- (void)setFetcher:(id)arg0;

@end
