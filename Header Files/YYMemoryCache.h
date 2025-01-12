//
//     Generated by private class-dump
//

@class NSString, _YYLinkedMap, NSObject;
@protocol OS_dispatch_queue;

@interface YYMemoryCache : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
    _YYLinkedMap *_lru;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _lastTrimTime;
    BOOL _shouldRemoveAllObjectsOnMemoryWarning;
    BOOL _shouldRemoveAllObjectsWhenEnteringBackground;
    NSString *_name;
    unsigned long long _countLimit;
    unsigned long long _costLimit;
    double _ageLimit;
    double _autoTrimInterval;
    id /* block */ _didReceiveMemoryWarningBlock;
    id /* block */ _didEnterBackgroundBlock;
}

@property (copy) NSString *name;
@property (readonly) unsigned long long totalCount;
@property (readonly) unsigned long long totalCost;
@property unsigned long long countLimit;
@property unsigned long long costLimit;
@property double ageLimit;
@property double autoTrimInterval;
@property BOOL shouldRemoveAllObjectsOnMemoryWarning;
@property BOOL shouldRemoveAllObjectsWhenEnteringBackground;
@property (copy) id /* block */ didReceiveMemoryWarningBlock;
@property (copy) id /* block */ didEnterBackgroundBlock;
@property BOOL releaseOnMainThread;
@property BOOL releaseAsynchronously;

- (void)setShouldRemoveAllObjectsOnMemoryWarning:(BOOL)arg0;
- (void)setShouldRemoveAllObjectsWhenEnteringBackground:(BOOL)arg0;
- (double)autoTrimInterval;
- (unsigned long long)costLimit;
- (void)setCostLimit:(unsigned long long)arg0;
- (void)setAutoTrimInterval:(double)arg0;
- (BOOL)shouldRemoveAllObjectsOnMemoryWarning;
- (BOOL)shouldRemoveAllObjectsWhenEnteringBackground;
- (void)_appDidReceiveMemoryWarningNotification;
- (void)_trimInBackground;
- (void)_trimRecursively;
- (void)_trimToCost:(unsigned long long)arg0;
- (void)_trimToCount:(unsigned long long)arg0;
- (void)_trimToAge:(double)arg0;
- (void)trimToCount:(unsigned long long)arg0;
- (void)trimToCost:(unsigned long long)arg0;
- (void)trimToAge:(double)arg0;
- (id /* block */)didReceiveMemoryWarningBlock;
- (id /* block */)didEnterBackgroundBlock;
- (void)_appDidEnterBackgroundNotification;
- (void)_trimInOperationQueue;
- (BOOL)containsObjectForKey:(id)arg0 exceptObject:(id)arg1;
- (void)setObject:(id)arg0 forKey:(id)arg1 withCost:(unsigned long long)arg2;
- (void)_trimToMark;
- (void)setReleaseOnMainThread:(BOOL)arg0;
- (BOOL)releaseAsynchronously;
- (void)setReleaseAsynchronously:(BOOL)arg0;
- (void)trimToMark;
- (void)setDidReceiveMemoryWarningBlock:(id /* block */)arg0;
- (void)setDidEnterBackgroundBlock:(id /* block */)arg0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)containsObjectForKey:(id)arg0;
- (void)setObject:(id)arg0 forKey:(id)arg1;
- (void)removeObjectForKey:(id)arg0;
- (void)setName:(id)arg0;
- (id)description;
- (id)objectForKey:(id)arg0;
- (void)dealloc;
- (unsigned long long)totalCount;
- (id)name;
- (void)mark;
- (void)removeAllObjects;
- (void)setCountLimit:(unsigned long long)arg0;
- (unsigned long long)countLimit;
- (void)_mark;
- (BOOL)releaseOnMainThread;
- (double)ageLimit;
- (void)setAgeLimit:(double)arg0;
- (unsigned long long)totalCost;

@end
