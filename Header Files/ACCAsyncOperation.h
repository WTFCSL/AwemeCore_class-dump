//
//     Generated by private class-dump
//

@interface ACCAsyncOperation : NSOperation {
    BOOL _ready;
    BOOL _executing;
    BOOL _finished;
}

- (void)setFinished:(BOOL)arg0;
- (BOOL)isFinished;
- (BOOL)isAsynchronous;
- (id)init;
- (BOOL)isExecuting;
- (void)finish;
- (BOOL)isReady;
- (void)setReady:(BOOL)arg0;
- (void)start;
- (void)setExecuting:(BOOL)arg0;

@end
