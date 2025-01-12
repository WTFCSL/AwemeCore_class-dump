//
//     Generated by private class-dump
//

@class NSTimer, NSMutableArray, NSString;

@interface TVLDNSCacheManager : NSObject <TVLDNSCaching> {
    BOOL _shouldUseCacheRecordExpiredDate;
    NSMutableArray *_caches;
    NSTimer *_autoFlushTimer;
}

@property (retain, nonatomic) NSMutableArray *caches;
@property (retain, nonatomic) NSTimer *autoFlushTimer;
@property (nonatomic) BOOL shouldUseCacheRecordExpiredDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)arg0;
+ (id)defaultManager;

- (void)setCaches:(id)arg0;
- (void)setShouldUseCacheRecordExpiredDate:(BOOL)arg0;
- (void)setAutoFlushTimer:(id)arg0;
- (BOOL)shouldUseCacheRecordExpiredDate;
- (id)autoFlushTimer;
- (id)DNSCacheWithHostname:(id)arg0;
- (BOOL)tryCachingIPAddresses:(id)arg0 withHost:(id)arg1 timeToLive:(double)arg2;
- (id)cachedIPAddressesForHost:(id)arg0;
- (id)init;
- (id)mutableCopy;
- (void).cxx_destruct;
- (id)copy;
- (void)flush;
- (id)caches;

@end
