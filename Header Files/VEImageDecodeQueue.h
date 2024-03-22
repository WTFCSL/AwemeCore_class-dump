//
//     Generated by private class-dump
//

@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface VEImageDecodeQueue : IESMMObject {
    NSObject<OS_dispatch_queue> *_decodeQueue;
    NSMutableArray *_bufferCache;
    long long _maxCacheCount;
}

@property (retain, nonatomic) NSMutableArray *bufferCache;
@property (nonatomic) long long maxCacheCount;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *decodeQueue;

+ (id)shareInstance;

- (long long)maxCacheCount;
- (void)setMaxCacheCount:(long long)arg0;
- (void)p_registerMemoryWarningNotify;
- (long long)p_findBufferIndexByKey:(id)arg0;
- (id)decodeQueue;
- (id)fetchImageBufferByKey:(id)arg0;
- (void)returnBufferToCache:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)bufferCache;
- (void)setBufferCache:(id)arg0;
- (void)flushCaches;

@end