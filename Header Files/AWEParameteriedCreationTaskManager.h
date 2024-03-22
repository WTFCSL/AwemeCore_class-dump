//
//     Generated by private class-dump
//

@class NSOperationQueue, NSMutableArray;

@interface AWEParameteriedCreationTaskManager : NSObject {
    BOOL _cancelSuccessFlag;
    BOOL _willCancel;
    id /* block */ _finishedCallback;
    id /* block */ _failedCallback;
    id /* block */ _canceledCallback;
    NSOperationQueue *_queue;
    long long _totalOpCount;
    long long _needCancelOpCount;
    NSMutableArray *_readyOps;
    id /* block */ _theCompletion;
    id /* block */ _theCancelCallback;
    NSMutableArray *_errors;
    double _startTime;
}

@property (retain, nonatomic) NSOperationQueue *queue;
@property (nonatomic) long long totalOpCount;
@property long long needCancelOpCount;
@property (retain, nonatomic) NSMutableArray *readyOps;
@property (copy, nonatomic) id /* block */ theCompletion;
@property (copy, nonatomic) id /* block */ theCancelCallback;
@property (nonatomic) BOOL cancelSuccessFlag;
@property (retain, nonatomic) NSMutableArray *errors;
@property BOOL willCancel;
@property (nonatomic) double startTime;
@property (copy, nonatomic) id /* block */ finishedCallback;
@property (copy, nonatomic) id /* block */ failedCallback;
@property (copy, nonatomic) id /* block */ canceledCallback;

+ (id)createManagerAndHold;

- (id /* block */)failedCallback;
- (void)setFailedCallback:(id /* block */)arg0;
- (void)setWillCancel:(BOOL)arg0;
- (void)setFinishedCallback:(id /* block */)arg0;
- (void)cancelExcute;
- (void)startExcuteWithCompletion:(id /* block */)arg0 didCancel:(id /* block */)arg1;
- (id)readyOps;
- (id /* block */)finishedCallback;
- (long long)totalOpCount;
- (void)setTotalOpCount:(long long)arg0;
- (id /* block */)theCompletion;
- (long long)needCancelOpCount;
- (void)setNeedCancelOpCount:(long long)arg0;
- (void)setCancelSuccessFlag:(BOOL)arg0;
- (id /* block */)theCancelCallback;
- (BOOL)cancelSuccessFlag;
- (void)setTheCompletion:(id /* block */)arg0;
- (void)setTheCancelCallback:(id /* block */)arg0;
- (void)setReadyOps:(id)arg0;
- (void)setCanceledCallback:(id /* block */)arg0;
- (id)init;
- (void)setStartTime:(double)arg0;
- (void).cxx_destruct;
- (void)setErrors:(id)arg0;
- (void)addTask:(id)arg0;
- (double)startTime;
- (id)errors;
- (id /* block */)canceledCallback;
- (id)queue;
- (void)dealloc;
- (void)setQueue:(id)arg0;
- (BOOL)willCancel;

@end
