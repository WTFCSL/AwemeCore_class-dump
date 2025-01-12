//
//     Generated by private class-dump
//

@class NPSchedulingRequestInfo, NSMutableDictionary, NSDictionary, NSOperationQueue, NSError, NSObject;
@protocol OS_dispatch_source, NPNodeSchedulerRequestDelegate;

@interface NPNodeScheduler : NSObject {
    BOOL _shouldRequestSpecificHosts;
    id<NPNodeSchedulerRequestDelegate> _requestDelegate;
    unsigned long long _state;
    NSError *_error;
    NPSchedulingRequestInfo *_schedulingRequestInfo;
    NSMutableDictionary *_nodes;
    NSObject<OS_dispatch_source> *_timer;
    NSOperationQueue *_operationQueue;
    unsigned long long _networkStatus;
}

@property unsigned long long state;
@property (retain) NSError *error;
@property BOOL shouldRequestSpecificHosts;
@property (retain, nonatomic) NPSchedulingRequestInfo *schedulingRequestInfo;
@property (retain, nonatomic) NSMutableDictionary *nodes;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (nonatomic) unsigned long long networkStatus;
@property (readonly, nonatomic) NSDictionary *currentNodes;
@property (copy, nonatomic) id /* block */ appInfoRequest;
@property (weak, nonatomic) id<NPNodeSchedulerRequestDelegate> requestDelegate;

+ (id)sharedScheduler;

- (void)setRequestDelegate:(id)arg0;
- (id)requestDelegate;
- (id)strategyRelatedToNetworkWithUserInfo:(id)arg0;
- (id)schedulingRequestInfo;
- (void)setSchedulingRequestInfo:(id)arg0;
- (void)updateSchedulingResultWithCurrentRequestInfo;
- (void)updateCurrentNetworkStatus:(unsigned long long)arg0 withCacheFlushed:(BOOL)arg1;
- (void)updateCurrentNodesInfoWithIPMap:(id)arg0 schedulingInfo:(id)arg1 withNotification:(BOOL)arg2;
- (void)updateCurrentNodesDnsSetting:(id)arg0;
- (void)performRequestWithURL:(id)arg0 method:(id)arg1 customRequestSerilizer:(Class)arg2 params:(id)arg3 success:(id /* block */)arg4 failure:(id /* block */)arg5;
- (BOOL)shouldRequestSpecificHosts;
- (void)setShouldRequestSpecificHosts:(BOOL)arg0;
- (void)_updateSchedulingResultWithCurrentRequestInfo;
- (void)requestSpecificHostsWithCompletion:(id /* block */)arg0;
- (id)IPMapWithNodes:(id)arg0;
- (id)IPMapWithHosts:(id)arg0;
- (void)updateCurrentNodesInfoWithIPMap:(id)arg0 schedulingInfo:(id)arg1;
- (id)excuteWithCommand:(id)arg0 userInfo:(id)arg1;
- (id)currentSchedulingRequestInfo;
- (void)updateCurrentSchedulingRequestInfo:(id)arg0;
- (id)nodeWithHost:(id)arg0;
- (void)updateCurrentNetworkStatus:(unsigned long long)arg0;
- (id)currentNodes;
- (id /* block */)appInfoRequest;
- (void)setAppInfoRequest:(id /* block */)arg0;
- (id)timer;
- (id)init;
- (void)setOperationQueue:(id)arg0;
- (unsigned long long)networkStatus;
- (void).cxx_destruct;
- (unsigned long long)state;
- (void)flush;
- (void)stopTimer;
- (void)setState:(unsigned long long)arg0;
- (void)stop;
- (void)_stopTimer;
- (void)setNodes:(id)arg0;
- (void)_setupTimer;
- (id)operationQueue;
- (void)setTimer:(id)arg0;
- (id)nodes;
- (void)setNetworkStatus:(unsigned long long)arg0;
- (void)setError:(id)arg0;
- (void)start;
- (id)error;
- (void)setupTimer;
- (void)didReceiveError:(id)arg0;

@end
