//
//     Generated by private class-dump
//

@interface BDSuperResolutionTransformer : BDBaseTransformer

@property (class, nonatomic) double minLevel;
@property (class, nonatomic) double maxLevel;
@property (class, nonatomic) BOOL enableMultiThread;
@property (class, nonatomic) unsigned long long maxConcurrentCount;
@property (class, nonatomic) unsigned long long concurrencyExceededStrategy;
@property (class, nonatomic) unsigned long long maxCacheCount;

@property (nonatomic) struct CGSize { double x0; double x1; } targetSize;
@property (nonatomic) unsigned long long cacheControl;

+ (double)minLevel;
+ (void)setMinLevel:(double)arg0;
+ (double)maxLevel;
+ (void)setMaxLevel:(double)arg0;
+ (void)removeSuperResolutionCache_sync;
+ (void)removeSuperResolutionCache_async;
+ (BOOL)enableMultiThread;
+ (void)setEnableMultiThread:(BOOL)arg0;
+ (void)setMaxConcurrentCount:(unsigned long long)arg0;
+ (unsigned long long)concurrencyExceededStrategy;
+ (void)setConcurrencyExceededStrategy:(unsigned long long)arg0;
+ (unsigned long long)maxCacheCount;
+ (void)setMaxCacheCount:(unsigned long long)arg0;
+ (id)allocWithZone:(struct _NSZone { } *)arg0;
+ (unsigned long long)maxConcurrentCount;

- (struct CGSize { double x0; double x1; })targetSize;
- (void)setTargetSize:(struct CGSize { double x0; double x1; })arg0;
- (unsigned long long)cacheControl;
- (void)setCacheControl:(unsigned long long)arg0;

@end