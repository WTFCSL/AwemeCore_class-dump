//
//     Generated by private class-dump
//

@class NSURLSessionTask, NSURLSession;

@interface TVLNetworkClient : NSObject {
    BOOL _canceled;
    NSURLSession *_session;
    NSURLSessionTask *_task;
}

@property (retain, nonatomic) NSURLSession *session;
@property (retain, nonatomic) NSURLSessionTask *task;
@property (nonatomic, getter=isCanceled) BOOL canceled;

- (void)invalidAndCancel;
- (void)requestWithURL:(id)arg0 completion:(id /* block */)arg1;
- (BOOL)isCanceled;
- (id)init;
- (void).cxx_destruct;
- (void)setSession:(id)arg0;
- (id)session;
- (void)setTask:(id)arg0;
- (void)cancel;
- (void)setCanceled:(BOOL)arg0;
- (id)task;

@end