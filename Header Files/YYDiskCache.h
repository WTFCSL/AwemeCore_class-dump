//
//     Generated by private class-dump
//

@class NSString, NSObject, YYKVStorage;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface YYDiskCache : NSObject {
    YYKVStorage *_kv;
    NSObject<OS_dispatch_semaphore> *_lock;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_name;
    NSString *_path;
    unsigned long long _inlineThreshold;
    id /* block */ _customArchiveBlock;
    id /* block */ _customUnarchiveBlock;
    id /* block */ _customFileNameBlock;
    unsigned long long _countLimit;
    unsigned long long _costLimit;
    unsigned long long _walSizeLimit;
    double _ageLimit;
    unsigned long long _freeDiskSpaceLimit;
    double _autoTrimInterval;
    double _memoryWarningTime;
}

@property double memoryWarningTime;
@property (copy) NSString *name;
@property (readonly) NSString *path;
@property (readonly) unsigned long long inlineThreshold;
@property (copy) id /* block */ customArchiveBlock;
@property (copy) id /* block */ customUnarchiveBlock;
@property (copy) id /* block */ customFileNameBlock;
@property unsigned long long countLimit;
@property unsigned long long costLimit;
@property unsigned long long walSizeLimit;
@property double ageLimit;
@property unsigned long long freeDiskSpaceLimit;
@property double autoTrimInterval;
@property BOOL errorLogsEnabled;

+ (void)setExtendedData:(id)arg0 toObject:(id)arg1;
+ (id)getExtendedDataFromObject:(id)arg0;
+ (void)setYYCacheTrimEnableAfterMemoryWarning:(BOOL)arg0 expirationSeconds:(long long)arg1;

- (void)removeObjectForKey:(id)arg0 withBlock:(id /* block */)arg1;
- (void)removeAllObjectsWithBlock:(id /* block */)arg0;
- (void)objectForKey:(id)arg0 withBlock:(id /* block */)arg1;
- (void)setObject:(id)arg0 forKey:(id)arg1 withBlock:(id /* block */)arg2;
- (double)autoTrimInterval;
- (unsigned long long)costLimit;
- (void)setCostLimit:(unsigned long long)arg0;
- (void)setAutoTrimInterval:(double)arg0;
- (void)containsObjectForKey:(id)arg0 withBlock:(id /* block */)arg1;
- (BOOL)errorLogsEnabled;
- (void)setErrorLogsEnabled:(BOOL)arg0;
- (unsigned long long)walSizeLimit;
- (void)setWalSizeLimit:(unsigned long long)arg0;
- (void)_trimInBackground;
- (void)_trimRecursively;
- (void)_trimToCost:(unsigned long long)arg0;
- (void)_trimToCount:(unsigned long long)arg0;
- (void)_trimToAge:(double)arg0;
- (unsigned long long)freeDiskSpaceLimit;
- (void)_trimToFreeDiskSpace:(unsigned long long)arg0;
- (BOOL)hasMemoryWarning;
- (void)_trimWAL;
- (void)setMemoryWarningTime:(double)arg0;
- (double)memoryWarningTime;
- (id)initWithPath:(id)arg0 inlineThreshold:(unsigned long long)arg1;
- (void)_appWillBeTerminated;
- (id)_filenameForKey:(id)arg0;
- (void)trimToCount:(unsigned long long)arg0;
- (void)trimToCost:(unsigned long long)arg0;
- (void)trimToAge:(double)arg0;
- (void)removeAllObjectsWithProgressBlock:(id /* block */)arg0 endBlock:(id /* block */)arg1;
- (void)totalCountWithBlock:(id /* block */)arg0;
- (void)totalCostWithBlock:(id /* block */)arg0;
- (void)trimToCount:(unsigned long long)arg0 withBlock:(id /* block */)arg1;
- (void)trimToCost:(unsigned long long)arg0 withBlock:(id /* block */)arg1;
- (void)trimToAge:(double)arg0 withBlock:(id /* block */)arg1;
- (unsigned long long)inlineThreshold;
- (id /* block */)customArchiveBlock;
- (void)setCustomArchiveBlock:(id /* block */)arg0;
- (id /* block */)customUnarchiveBlock;
- (void)setCustomUnarchiveBlock:(id /* block */)arg0;
- (id /* block */)customFileNameBlock;
- (void)setCustomFileNameBlock:(id /* block */)arg0;
- (void)setFreeDiskSpaceLimit:(unsigned long long)arg0;
- (id)initWithPath:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)containsObjectForKey:(id)arg0;
- (void)setObject:(id)arg0 forKey:(id)arg1;
- (id)path;
- (void)removeObjectForKey:(id)arg0;
- (void)removeObjectsForKeys:(id)arg0;
- (void)setName:(id)arg0;
- (id)description;
- (id)objectForKey:(id)arg0;
- (void)dealloc;
- (void)addEntriesFromDictionary:(id)arg0;
- (long long)totalCount;
- (void)_handleMemoryWarning;
- (id)name;
- (void)removeAllObjects;
- (void)setCountLimit:(unsigned long long)arg0;
- (unsigned long long)countLimit;
- (double)ageLimit;
- (void)setAgeLimit:(double)arg0;
- (void)_appDidEnterBackground;
- (unsigned long long)totalCost;

@end