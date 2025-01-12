//
//     Generated by private class-dump
//

@class NSOperationQueue, IESLiveGameOpenPlatformHTTPSessionManager;

@interface IESLiveGameOpenPlatformRequestDispatchQueue : NSObject {
    NSOperationQueue *_operationQueue;
    IESLiveGameOpenPlatformHTTPSessionManager *_httpSessionManager;
}

@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (retain, nonatomic) IESLiveGameOpenPlatformHTTPSessionManager *httpSessionManager;

- (id)httpSessionManager;
- (void)setHttpSessionManager:(id)arg0;
- (unsigned long long)requestWithRequestModel:(id)arg0;
- (id)initWithHTTPSessionManager:(id)arg0;
- (void)setOperationQueue:(id)arg0;
- (void).cxx_destruct;
- (id)operationQueue;

@end
