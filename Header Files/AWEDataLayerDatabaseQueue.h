//
//     Generated by private class-dump
//

@class NSObject;
@protocol OS_dispatch_queue;

@interface AWEDataLayerDatabaseQueue : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)queueWithIdentifier:(id)arg0;

- (void)after:(double)arg0 executeBlock:(id /* block */)arg1;
- (void)asyncExecuteBlock:(id /* block */)arg0;
- (void).cxx_destruct;

@end