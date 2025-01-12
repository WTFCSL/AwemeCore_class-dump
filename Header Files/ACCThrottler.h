//
//     Generated by private class-dump
//

@class ACCRecursiveLock, NSObject;
@protocol OS_dispatch_queue;

@interface ACCThrottler : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    double _intervalSeconds;
    ACCRecursiveLock *_lockedWorkItem;
}

@property (retain, nonatomic) ACCRecursiveLock *lockedWorkItem;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) double intervalSeconds;

- (void)throttle:(id /* block */)arg0;
- (id)initWith:(id)arg0 intervalSeconds:(double)arg1;
- (id)lockedWorkItem;
- (double)intervalSeconds;
- (void)setLockedWorkItem:(id)arg0;
- (void).cxx_destruct;
- (id)queue;

@end
