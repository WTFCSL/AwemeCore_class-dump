//
//     Generated by private class-dump
//

@class NSObject;
@protocol OS_dispatch_queue;

@interface AWEVideoDraftTracker : NSObject {
    BOOL _isTracked;
    NSObject<OS_dispatch_queue> *_taskQueue;
}

@property (nonatomic) BOOL isTracked;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *taskQueue;

- (void)asyncOperationBlock:(id /* block */)arg0;
- (void)trackDraftInfo;
- (id)init;
- (void).cxx_destruct;
- (void)setTaskQueue:(id)arg0;
- (id)taskQueue;
- (BOOL)isTracked;
- (void)setIsTracked:(BOOL)arg0;

@end