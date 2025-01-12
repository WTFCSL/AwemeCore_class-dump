//
//     Generated by private class-dump
//

@class NSOperationQueue;

@interface AFDFamiliarOperationEngine : NSObject {
    id /* block */ _operationBlock;
    id /* block */ _completionBlock;
    id /* block */ _cancelBlock;
    NSOperationQueue *_queue;
}

@property (retain, nonatomic) NSOperationQueue *queue;
@property (copy, nonatomic) id /* block */ operationBlock;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (copy, nonatomic) id /* block */ cancelBlock;

- (void)addOperationWithContext:(id)arg0;
- (id)init;
- (void)cancelAllOperations;
- (id /* block */)cancelBlock;
- (void).cxx_destruct;
- (id /* block */)completionBlock;
- (void)setCompletionBlock:(id /* block */)arg0;
- (void)setCancelBlock:(id /* block */)arg0;
- (id)queue;
- (void)setQueue:(id)arg0;
- (id /* block */)operationBlock;
- (void)setOperationBlock:(id /* block */)arg0;

@end
