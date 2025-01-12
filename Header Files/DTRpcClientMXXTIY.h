//
//     Generated by private class-dump
//

@class DTRpcConfigManagerMXXTIY, NSOperationQueue, NSMutableArray, NSLock;

@interface DTRpcClientMXXTIY : NSObject {
    NSOperationQueue *_requestQueue;
    DTRpcConfigManagerMXXTIY *_configManager;
    NSMutableArray *_interceptors;
    NSLock *_lock;
}

@property (retain, nonatomic) NSOperationQueue *requestQueue;
@property (retain, nonatomic) DTRpcConfigManagerMXXTIY *configManager;
@property (retain, nonatomic) NSMutableArray *interceptors;
@property (retain, nonatomic) NSLock *lock;

+ (id)defaultClient;

- (void)addInterceptor:(id)arg0;
- (id)interceptors;
- (void)setInterceptors:(id)arg0;
- (id)executeMethod:(id)arg0 params:(id)arg1;
- (id)configForScope:(int)arg0;
- (id)preferredConfig:(id)arg0;
- (id)executeMethodAsync:(id)arg0 params:(id)arg1 completionBlock:(id /* block */)arg2;
- (id)preferredConfig;
- (void)cancelAllOperationsInThread:(id)arg0;
- (void)setConfig:(id)arg0 forScope:(int)arg1;
- (id)requestQueue;
- (void)setRequestQueue:(id)arg0;
- (void).cxx_destruct;
- (id)lock;
- (id)configManager;
- (void)setLock:(id)arg0;
- (void)setConfigManager:(id)arg0;
- (id)executeOperation:(id)arg0;

@end
