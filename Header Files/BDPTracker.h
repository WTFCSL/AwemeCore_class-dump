//
//     Generated by private class-dump
//

@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue, BDPTrackerSampleProtocol;

@interface BDPTracker : NSObject {
    NSObject<OS_dispatch_queue> *_taskQueue;
    NSMutableArray *_cache;
    id<BDPTrackerSampleProtocol> _trackerSampler;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *taskQueue;
@property (retain, nonatomic) NSMutableArray *cache;
@property (retain, nonatomic) id<BDPTrackerSampleProtocol> trackerSampler;

+ (void)executeBlkInTrackerQueue:(id /* block */)arg0;
+ (void)event:(id)arg0 attributes:(id)arg1;
+ (void)eventV1:(id)arg0 label:(id)arg1 extra:(id)arg2;
+ (void)flushCacheIfNeed;
+ (void)event:(id)arg0 attributes:(id)arg1 ignoreALog:(BOOL)arg2;
+ (void)setTrackerSampleDelegate:(id)arg0;
+ (id)sharedInstance;

- (void)setTrackerSampleDelegate:(id)arg0;
- (void)setTrackerSampler:(id)arg0;
- (id)trackerSampler;
- (void)setCache:(id)arg0;
- (id)cache;
- (id)init;
- (void).cxx_destruct;
- (void)setTaskQueue:(id)arg0;
- (id)taskQueue;
- (void)dealloc;

@end
