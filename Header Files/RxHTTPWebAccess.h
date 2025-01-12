//
//     Generated by private class-dump
//

@class NSOperationQueue, NSCache;
@protocol RxHTTPClient;

@interface RxHTTPWebAccess : NSObject {
    id<RxHTTPClient> _httpClient;
    NSOperationQueue *_httpOperationQueue;
    NSCache *_requestCache;
}

@property (readonly, nonatomic) id<RxHTTPClient> httpClient;
@property (readonly, nonatomic) NSOperationQueue *httpOperationQueue;
@property (readonly, nonatomic) NSCache *requestCache;

+ (id)rxInjectorInitializer;

- (id)initWithHTTPClient:(id)arg0 httpOperationQueue:(id)arg1;
- (id)httpOperationQueue;
- (id)_checkAndReturnErrorForNetworkResponse:(id)arg0;
- (BOOL)_isSuccessfulStatusCode:(unsigned long long)arg0;
- (id)httpResponseWithRequest:(id)arg0;
- (void).cxx_destruct;
- (id)requestCache;
- (id)httpClient;

@end
