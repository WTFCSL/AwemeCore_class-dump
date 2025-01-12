//
//     Generated by private class-dump
//

@class NSObject;
@protocol OS_dispatch_queue;

@interface HMDWebViewMonitor : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _mutexLock;
    BOOL _isMonitoring;
    NSObject<OS_dispatch_queue> *_webviewQueue;
}

@property BOOL isMonitoring;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *webviewQueue;

+ (id)sharedMonitor;

- (id)webviewQueue;
- (id)recordWithRequest:(id)arg0 response:(id)arg1 additionalInfo:(id)arg2 netMonitorConfig:(id)arg3;
- (void)bdw_URLSchemeTask:(id)arg0 didReceiveResponse:(id)arg1;
- (void)bdw_URLProtocolTask:(id)arg0 didReceiveResponse:(id)arg1;
- (void)setWebviewQueue:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isMonitoring;
- (void)stop;
- (void)start;
- (void)setIsMonitoring:(BOOL)arg0;

@end
