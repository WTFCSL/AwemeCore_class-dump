//
//     Generated by private class-dump
//

@class NSURLSession, NSString, NSURLSessionConfiguration, NSObject, DIRSContext;
@protocol OS_dispatch_queue;

@interface DIRSNetworkPlugin : DIRSBasicModule <IRISModule, IRISNetworkProvider> {
    NSObject<OS_dispatch_queue> *networkQueue;
    NSURLSessionConfiguration *configuration;
    NSURLSession *session;
}

@property BOOL isEnabled;
@property long long state;
@property (readonly) DIRSContext *context;
@property (copy, nonatomic) NSString *category;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)moduleId;
+ (BOOL)isPlugin;
+ (id)moduleVersion;

- (void)request:(id)arg0 method:(id)arg1 headerFields:(id)arg2 body:(id)arg3 options:(id)arg4 completion:(id /* block */)arg5;
- (void).cxx_destruct;
- (void)commonInit;
- (id)executionQueue;

@end