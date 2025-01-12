//
//     Generated by private class-dump
//

@class MMKV;

@interface BDUGDeviceUnionCacheManager : NSObject {
    MMKV *_cache;
}

@property (retain, nonatomic) MMKV *cache;

+ (id)sharedInstance;

- (id)getObjectOfClass:(Class)arg0 forKey:(id)arg1;
- (BOOL)setString:(id)arg0 forKey:(id)arg1 withExpiredTimestampMS:(double)arg2;
- (BOOL)boolForKey:(id)arg0 defaultValue:(BOOL)arg1;
- (void)setCache:(id)arg0;
- (BOOL)setBool:(BOOL)arg0 forKey:(id)arg1;
- (id)cache;
- (BOOL)containsKey:(id)arg0;
- (id)init;
- (id)stringForKey:(id)arg0;
- (id)dictionaryForKey:(id)arg0;
- (BOOL)setDictionary:(id)arg0 forKey:(id)arg1;
- (void).cxx_destruct;
- (BOOL)boolForKey:(id)arg0;
- (BOOL)setObject:(id)arg0 forKey:(id)arg1;
- (id)stringForKey:(id)arg0 defaultValue:(id)arg1;
- (void)removeObjectForKey:(id)arg0;
- (BOOL)setString:(id)arg0 forKey:(id)arg1;
- (void)removeObjectsForKeys:(id)arg0;
- (void)removeAllObjects;
- (BOOL)setInt64:(long long)arg0 forKey:(id)arg1;
- (long long)int64ForKey:(id)arg0;

@end
