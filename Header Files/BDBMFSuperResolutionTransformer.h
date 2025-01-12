//
//     Generated by private class-dump
//

@class NSError, NSString;

@interface BDBMFSuperResolutionTransformer : BDSuperResolutionTransformer {
    BOOL _srFinished;
    unsigned long long cacheControl;
    NSError *_error;
    long long _srDuration;
    long long _srWidth;
    long long _srHeight;
    double _srStretch;
    long long _srStatus;
    NSString *_srType;
    struct CGSize { double width; double height; } targetSize;
}

@property (class, nonatomic) double minLevel;
@property (class, nonatomic) double maxLevel;
@property (class, nonatomic) BOOL enableMultiThread;
@property (class, nonatomic) unsigned long long maxConcurrentCount;
@property (class, nonatomic) unsigned long long concurrencyExceededStrategy;
@property (class, nonatomic) unsigned long long maxCacheCount;

@property (nonatomic) BOOL srFinished;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) long long srDuration;
@property (nonatomic) long long srWidth;
@property (nonatomic) long long srHeight;
@property (nonatomic) double srStretch;
@property (nonatomic) long long srStatus;
@property (copy, nonatomic) NSString *srType;
@property (nonatomic) struct CGSize { double width; double height; } targetSize;
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
+ (unsigned long long)maxConcurrentCount;

- (id)appendingStringForCacheKey;
- (id)transformImageBeforeStoreWithImage:(id)arg0;
- (id)transformImageRecoder;
- (BOOL)isAppliedToThumbnail;
- (void)setSrFinished:(BOOL)arg0;
- (void)setSrDuration:(long long)arg0;
- (void)setSrWidth:(long long)arg0;
- (void)setSrHeight:(long long)arg0;
- (void)setSrStretch:(double)arg0;
- (void)setSrStatus:(long long)arg0;
- (void)setSrType:(id)arg0;
- (BOOL)srFinished;
- (long long)srStatus;
- (id)srType;
- (long long)srWidth;
- (long long)srHeight;
- (long long)srDuration;
- (double)srStretch;
- (struct CGSize { double x0; double x1; })targetSize;
- (id)init;
- (void).cxx_destruct;
- (void)setError:(id)arg0;
- (void)setTargetSize:(struct CGSize { double x0; double x1; })arg0;
- (id)error;
- (unsigned long long)cacheControl;
- (void)setCacheControl:(unsigned long long)arg0;

@end
