//
//     Generated by private class-dump
//

@class NSArray;
@protocol BURaptorTrackerNetworkOperationDelegate;

@interface BURaptorTrackerNetworkOperation : NSOperation {
    BOOL _executing;
    BOOL _finished;
    id<BURaptorTrackerNetworkOperationDelegate> _delegate;
    long long _sendIndex;
    NSArray *_modelArray;
}

@property (nonatomic, getter=isExecuting) BOOL executing;
@property (nonatomic, getter=isFinished) BOOL finished;
@property (copy, nonatomic) NSArray *modelArray;
@property (weak, nonatomic) id<BURaptorTrackerNetworkOperationDelegate> delegate;
@property (nonatomic) long long sendIndex;

- (id)modelArray;
- (void)setModelArray:(id)arg0;
- (id)initWithModelArray:(id)arg0;
- (void)setSendIndex:(long long)arg0;
- (long long)sendIndex;
- (void)safeDelegate_operation:(id)arg0 sendWithModelArray:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setFinished:(BOOL)arg0;
- (BOOL)isFinished;
- (BOOL)isConcurrent;
- (void).cxx_destruct;
- (BOOL)isExecuting;
- (id)delegate;
- (void)start;
- (void)setDelegate:(id)arg0;
- (void)setExecuting:(BOOL)arg0;

@end
