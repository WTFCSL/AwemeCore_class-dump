//
//     Generated by private class-dump
//

@class NSObject;
@protocol OS_dispatch_semaphore;

@interface DolphinTasksCooperator : NSObject {
    NSObject<OS_dispatch_semaphore> *_rerankSemaphore;
}

@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *rerankSemaphore;

- (void)startTask;
- (id)rerankSemaphore;
- (void)setRerankSemaphore:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)finishTask;

@end