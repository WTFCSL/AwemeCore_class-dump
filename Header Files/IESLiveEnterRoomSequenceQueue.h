//
//     Generated by private class-dump
//

@class NSOperationQueue;

@interface IESLiveEnterRoomSequenceQueue : NSObject {
    BOOL _rooting;
    long long _suspendCount;
    NSOperationQueue *_operationQueue;
}

@property (nonatomic) long long suspendCount;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (nonatomic) BOOL rooting;

- (void)setRooting:(BOOL)arg0;
- (void)executeSequenceTask:(id /* block */)arg0;
- (BOOL)rooting;
- (void)resumeQueue;
- (long long)suspendCount;
- (id)init;
- (void)setOperationQueue:(id)arg0;
- (void).cxx_destruct;
- (id)operationQueue;
- (void)suspendQueue;
- (void)setSuspendCount:(long long)arg0;
- (void)cancelAll;

@end
