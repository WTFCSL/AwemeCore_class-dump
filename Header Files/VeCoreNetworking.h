//
//     Generated by private class-dump
//

@class NSArray;

@interface VeCoreNetworking : NSObject {
    NSArray *_opaqueData;
}

@property (retain, nonatomic) NSArray *opaqueData;

+ (id)getWithURL:(id)arg0 params:(id)arg1 headers:(id)arg2 auth:(id)arg3 config:(id)arg4 successBlock:(id /* block */)arg5 failureBlock:(id /* block */)arg6;
+ (void)reportRetryEventWithHost:(id)arg0 path:(id)arg1;
+ (void)reportRetryResultEventWithHost:(id)arg0 config:(id)arg1 error:(id)arg2;
+ (id)postWithURL:(id)arg0 params:(id)arg1 headers:(id)arg2 auth:(id)arg3 config:(id)arg4 successBlock:(id /* block */)arg5 failureBlock:(id /* block */)arg6;
+ (BOOL)isTokenExpireErrorWithResponse:(id)arg0;
+ (id)getWithURL:(id)arg0 params:(id)arg1 headers:(id)arg2 config:(id)arg3 successBlock:(id /* block */)arg4 failureBlock:(id /* block */)arg5;
+ (id)postWithURL:(id)arg0 params:(id)arg1 headers:(id)arg2 config:(id)arg3 successBlock:(id /* block */)arg4 failureBlock:(id /* block */)arg5;
+ (id)sharedInstance;

- (void)receiveSettingUpdateNotification:(id)arg0;
- (void)setOpaqueData:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)opaqueData;

@end