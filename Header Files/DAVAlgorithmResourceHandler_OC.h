//
//     Generated by private class-dump
//

@interface DAVAlgorithmResourceHandler_OC : DAVResourceHandler_OC

@property (nonatomic) struct shared_ptr<davinci::algorithm::AlgorithmResourceHandler> { struct AlgorithmResourceHandler *x0; struct __shared_weak_count *x1; } internalHandler;

- (BOOL)canHandleWithResource:(id)arg0;
- (id)initWithHandler:(struct shared_ptr<davinci::algorithm::AlgorithmResourceHandler> { struct AlgorithmResourceHandler *x0; struct __shared_weak_count *x1; })arg0;
- (id)initWithConfig:(id)arg0;

@end