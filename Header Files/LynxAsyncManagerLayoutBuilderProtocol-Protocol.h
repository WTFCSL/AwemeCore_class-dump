//
//     Generated by private class-dump
//

@class NSObject;
@protocol OS_dispatch_queue;

@protocol LynxAsyncManagerLayoutBuilderProtocol <NSObject>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) long long maxConcurrentOperationCount;
@property (nonatomic) unsigned long long cacheCountLimit;
@property (nonatomic) unsigned long long cacheTotalCostLimit;

- (unsigned long long)cacheTotalCostLimit;
- (void)setCacheTotalCostLimit:(unsigned long long)arg0;
- (void)setCacheCountLimit:(unsigned long long)arg0;
- (unsigned long long)cacheCountLimit;
- (id)queue;
- (void)setMaxConcurrentOperationCount:(long long)arg0;
- (void)setQueue:(id)arg0;
- (long long)maxConcurrentOperationCount;

@end
