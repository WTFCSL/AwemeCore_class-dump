//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary, NSObject, NSCache;
@protocol OS_dispatch_source;

@interface LynxTextRendererCache : NSObject <NSCacheDelegate> {
    NSCache *_cache;
    NSMutableDictionary *_attrStringRenderers;
    long long _hitCount;
    long long _missCount;
    NSObject<OS_dispatch_source> *_timer;
}

@property (nonatomic) long long hitCount;
@property (nonatomic) long long missCount;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cache;

- (unsigned long long)totalCostLimitFromSettings;
- (void)startTimeCounter;
- (long long)missCount;
- (void)setMissCount:(long long)arg0;
- (id)_suitableRendererWithString:(id)arg0 layoutSpec:(id)arg1;
- (id)rendererWithString:(id)arg0 layoutSpec:(id)arg1;
- (id)timer;
- (id)init;
- (void).cxx_destruct;
- (void)clearCache;
- (void)setTimer:(id)arg0;
- (long long)hitCount;
- (void)cache:(id)arg0 willEvictObject:(id)arg1;
- (void)setHitCount:(long long)arg0;

@end
