//
//     Generated by private class-dump
//

@class IESLiveGameOpenPlatformHTTPSessionManager, IESLiveGameOpenPlatfromRequestModel;

@interface IESLiveGameOpenPlatformHTTPOperation : NSOperation {
    BOOL _executing;
    BOOL _finished;
    IESLiveGameOpenPlatformHTTPSessionManager *_httpSessionManager;
    IESLiveGameOpenPlatfromRequestModel *_requestModel;
}

@property (retain, nonatomic) IESLiveGameOpenPlatformHTTPSessionManager *httpSessionManager;
@property (retain, nonatomic) IESLiveGameOpenPlatfromRequestModel *requestModel;

- (void)setRequestModel:(id)arg0;
- (id)httpSessionManager;
- (id)initWithHTTPSessionManager:(id)arg0 requestModel:(id)arg1;
- (void)setHttpSessionManager:(id)arg0;
- (void)setFinished:(BOOL)arg0;
- (BOOL)isFinished;
- (BOOL)isAsynchronous;
- (void).cxx_destruct;
- (BOOL)isExecuting;
- (id)requestModel;
- (void)start;
- (void)setExecuting:(BOOL)arg0;

@end
