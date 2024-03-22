//
//     Generated by private class-dump
//

@class BFTaskCompletionSource, BFCancellationTokenSource, NSString;
@protocol IESIMHttpTask;

@interface AWEIMNetworkRequestTask : NSObject <IESIMHttpTask> {
    long long state;
    BFTaskCompletionSource *_task;
    id<IESIMHttpTask> _request;
    BFCancellationTokenSource *_cancellationToken;
}

@property (retain, nonatomic) BFTaskCompletionSource *task;
@property (retain, nonatomic) id<IESIMHttpTask> request;
@property (retain, nonatomic) BFCancellationTokenSource *cancellationToken;
@property (readonly) long long state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)resume;
- (void).cxx_destruct;
- (long long)state;
- (void)setRequest:(id)arg0;
- (void)suspend;
- (void)setPriority:(float)arg0;
- (id)request;
- (void)setTask:(id)arg0;
- (void)cancel;
- (id)task;
- (id)cancellationToken;
- (void)setCancellationToken:(id)arg0;

@end
