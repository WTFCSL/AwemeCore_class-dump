//
//     Generated by private class-dump
//

@class AFDFeedListPreloadContext, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface AFDFeedListPreloadOptimizeHelper : NSObject {
    NSObject<OS_dispatch_queue> *_setToDiskCacheSerialQueue;
    NSMutableArray *_avatarUids;
    long long _preloadCacheExpiredCount;
    double _forbidRequestStartDate;
    long long _preloadRequestTimes;
    AFDFeedListPreloadContext *_context;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *setToDiskCacheSerialQueue;
@property (retain, nonatomic) NSMutableArray *avatarUids;
@property (nonatomic) long long preloadCacheExpiredCount;
@property (nonatomic) double forbidRequestStartDate;
@property (nonatomic) long long preloadRequestTimes;
@property (retain, nonatomic) AFDFeedListPreloadContext *context;

- (id)currentUid;
- (void)readDataFromDisk;
- (void)clearPreloadRequestTimes;
- (void)clearExpiredDiskCache;
- (id)avatarUids;
- (long long)sensitiveLruMaxCount;
- (void)opt_log:(id)arg0;
- (long long)preloadStopExpireTimes;
- (double)preloadStopTimeInterval;
- (double)forbidRequestStartDate;
- (long long)preloadCacheExpiredCount;
- (long long)preloadRequestTimes;
- (void)debug_clearAllCache;
- (void)addUidToArray:(id)arg0;
- (void)markCacheExpiredOnce;
- (void)markPreloadRequestOnce;
- (id)setToDiskCacheSerialQueue;
- (void)setSetToDiskCacheSerialQueue:(id)arg0;
- (void)setAvatarUids:(id)arg0;
- (void)setPreloadCacheExpiredCount:(long long)arg0;
- (void)setForbidRequestStartDate:(double)arg0;
- (void)setPreloadRequestTimes:(long long)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)context;
- (void)clearMemoryCache;

@end
