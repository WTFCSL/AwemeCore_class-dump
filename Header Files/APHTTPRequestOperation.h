//
//     Generated by private class-dump
//

@class NSRecursiveLock, NSHTTPURLResponse, NSError, NSURLRequest, NSObject;
@protocol OS_dispatch_queue;

@interface APHTTPRequestOperation : APURLConnectionOperation {
    NSError *_HTTPError;
    NSObject<OS_dispatch_queue> *_successCallbackQueue;
    NSObject<OS_dispatch_queue> *_failureCallbackQueue;
}

@property (retain, nonatomic) NSURLRequest *request;
@property (retain, nonatomic) NSHTTPURLResponse *response;
@property (retain, nonatomic) NSError *HTTPError;
@property (retain, nonatomic) NSRecursiveLock *lock;
@property (readonly, nonatomic) BOOL hasAcceptableStatusCode;
@property (readonly, nonatomic) BOOL hasAcceptableContentType;
@property (nonatomic) NSObject<OS_dispatch_queue> *successCallbackQueue;
@property (nonatomic) NSObject<OS_dispatch_queue> *failureCallbackQueue;

+ (id)acceptableContentTypes;
+ (id)acceptableStatusCodes;
+ (void)addAcceptableStatusCodes:(id)arg0;
+ (void)addAcceptableContentTypes:(id)arg0;
+ (BOOL)canProcessRequest:(id)arg0;

- (void)setCompletionBlockWithSuccess:(id /* block */)arg0 failure:(id /* block */)arg1;
- (unsigned long long)responseStringEncoding;
- (id)HTTPError;
- (BOOL)hasAcceptableStatusCode;
- (BOOL)hasAcceptableContentType;
- (void)setHTTPError:(id)arg0;
- (id)failureCallbackQueue;
- (id)successCallbackQueue;
- (void)setSuccessCallbackQueue:(id)arg0;
- (void)setFailureCallbackQueue:(id)arg0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)pause;
- (id)error;

@end
