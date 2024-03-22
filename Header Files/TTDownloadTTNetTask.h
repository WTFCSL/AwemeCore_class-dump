//
//     Generated by private class-dump
//

@class TTHttpTask, NSString;

@interface TTDownloadTTNetTask : NSObject <TTDownloadTaskProtocol> {
    TTHttpTask *_task;
}

@property (retain, nonatomic) TTHttpTask *task;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setThrottleNetSpeed:(long long)arg0;
- (void)setRecvHeaderTimeout:(double)arg0;
- (void)setReadDataTimeout:(double)arg0;
- (void)setProtectTimeout:(double)arg0;
- (id)initWithTTNetTask:(id)arg0;
- (void)setEnableHttpCache:(BOOL)arg0;
- (void)setSkipSSLCertificateError:(BOOL)arg0;
- (void)setTimeoutInterval:(double)arg0;
- (void)resume;
- (void).cxx_destruct;
- (void)setTask:(id)arg0;
- (void)cancel;
- (id)task;

@end
