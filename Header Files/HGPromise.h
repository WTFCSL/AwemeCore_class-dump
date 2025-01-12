//
//     Generated by private class-dump
//

@class NSMutableSet, NSError, NSObject, NSMutableArray;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface HGPromise : NSObject {
    long long _state;
    NSMutableSet *_pendingObjects;
    id _value;
    NSError *_error;
    NSMutableArray *_observers;
}

@property (class, readonly, nonatomic) NSObject<OS_dispatch_group> *dispatchGroup;
@property (class, retain) NSObject<OS_dispatch_queue> *defaultDispatchQueue;

@property (readonly, nonatomic) BOOL isPending;
@property (readonly, nonatomic) BOOL isFulfilled;
@property (readonly, nonatomic) BOOL isRejected;
@property (readonly, nonatomic) NSMutableSet *pendingObjects;
@property (readonly, nonatomic) id value;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) BOOL isPending;

+ (id)onQueue:(id)arg0 async:(id /* block */)arg1;
+ (id)onQueue:(id)arg0 all:(id)arg1;
+ (id)resolvedWith:(id)arg0;
+ (void)setDefaultDispatchQueue:(id)arg0;
+ (void)initialize;
+ (id)pendingPromise;
+ (id)all:(id)arg0;
+ (id)dispatchGroup;
+ (id /* block */)resolved;
+ (id)async:(id /* block */)arg0;
+ (id /* block */)pending;
+ (id)defaultDispatchQueue;

- (id)onQueue:(id)arg0 then:(id /* block */)arg1;
- (id)onQueue:(id)arg0 catch:(id /* block */)arg1;
- (void)observeOnQueue:(id)arg0 fulfill:(id /* block */)arg1 reject:(id /* block */)arg2;
- (id)initPending;
- (id)chainOnQueue:(id)arg0 chainedFulfill:(id /* block */)arg1 chainedReject:(id /* block */)arg2;
- (id)pendingObjects;
- (BOOL)isPending;
- (id)then:(id /* block */)arg0;
- (void).cxx_destruct;
- (id)value;
- (id)description;
- (id)catch:(id /* block */)arg0;
- (void)dealloc;
- (BOOL)isFulfilled;
- (id)error;
- (void)reject:(id)arg0;
- (BOOL)isRejected;
- (void)fulfill:(id)arg0;
- (id)initWithResolution:(id)arg0;

@end
