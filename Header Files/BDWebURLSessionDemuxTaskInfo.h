//
//     Generated by private class-dump
//

@class NSThread, NSURLSessionDataTask, NSArray;
@protocol NSURLSessionDataDelegate;

@interface BDWebURLSessionDemuxTaskInfo : NSObject {
    NSURLSessionDataTask *_task;
    id<NSURLSessionDataDelegate> _delegate;
    NSThread *_thread;
    NSArray *_modes;
}

@property (retain) id<NSURLSessionDataDelegate> delegate;
@property (retain) NSThread *thread;
@property (readonly) NSURLSessionDataTask *task;
@property (readonly, copy) NSArray *modes;

- (void).cxx_destruct;
- (void)performBlock:(id /* block */)arg0;
- (void)invalidate;
- (id)delegate;
- (id)thread;
- (void)setDelegate:(id)arg0;
- (id)task;
- (id)modes;
- (void)setThread:(id)arg0;
- (void)performBlockOnClientThread:(id /* block */)arg0;
- (id)initWithTask:(id)arg0 delegate:(id)arg1 modes:(id)arg2;

@end
