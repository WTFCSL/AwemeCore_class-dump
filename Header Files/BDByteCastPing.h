//
//     Generated by private class-dump
//

@class NSObject;
@protocol OS_dispatch_queue;

@interface BDByteCastPing : NSObject {
    NSObject<OS_dispatch_queue> *_taskQueue;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *taskQueue;

- (void)ping:(id)arg0 completionHandler:(id /* block */)arg1;
- (void)pingWithString:(id)arg0 completionHandler:(id /* block */)arg1;
- (id)init;
- (void).cxx_destruct;
- (void)setTaskQueue:(id)arg0;
- (id)taskQueue;

@end