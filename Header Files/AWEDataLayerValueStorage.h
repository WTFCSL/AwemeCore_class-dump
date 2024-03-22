//
//     Generated by private class-dump
//

@class NSString, AWEDataLayerValueMetadataStorage;

@interface AWEDataLayerValueStorage : NSObject <AWEDataLayerKVStorageInterface> {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
    NSString *_domain;
    AWEDataLayerValueMetadataStorage *_metadataStorage;
}

@property (class, nonatomic) BOOL useQueueForValueStorage;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setLogCallback:(void /* function */ *)arg0;
+ (id)storageWithDomain:(id)arg0;
+ (BOOL)useQueueForValueStorage;
+ (void)setUseQueueForValueStorage:(BOOL)arg0;
+ (id)sharedStorage;

- (id)objectForKey:(id)arg0 config:(id)arg1;
- (void)updateMaxAge:(unsigned long long)arg0 forKey:(id)arg1 userId:(id)arg2;
- (void)setDictionary:(id)arg0 forKey:(id)arg1 config:(id)arg2;
- (void)setArray:(id)arg0 forKey:(id)arg1 config:(id)arg2;
- (void)setData:(id)arg0 forKey:(id)arg1 config:(id)arg2;
- (void)setString:(id)arg0 forKey:(id)arg1 config:(id)arg2;
- (void)removeObjectForKey:(id)arg0 userId:(id)arg1;
- (BOOL)boolForKey:(id)arg0 config:(id)arg1;
- (id)p_valueForKey:(id)arg0 config:(id)arg1;
- (void)setBool:(BOOL)arg0 forKey:(id)arg1 config:(id)arg2;
- (void)setValue:(id)arg0 forKey:(id)arg1 valueType:(int)arg2 config:(id)arg3;
- (long long)integerForKey:(id)arg0 config:(id)arg1;
- (void)setInteger:(long long)arg0 forKey:(id)arg1 config:(id)arg2;
- (double)doubleForKey:(id)arg0 config:(id)arg1;
- (void)setDouble:(double)arg0 forKey:(id)arg1 config:(id)arg2;
- (id)stringForKey:(id)arg0 config:(id)arg1;
- (id)objectForKey:(id)arg0 objectClass:(Class)arg1 config:(id)arg2;
- (void)setObject:(id)arg0 forKey:(id)arg1 objectClass:(Class)arg2 valueType:(int)arg3 config:(id)arg4;
- (id)arrayForKey:(id)arg0 config:(id)arg1;
- (id)dictionaryForKey:(id)arg0 config:(id)arg1;
- (id)dataForKey:(id)arg0 config:(id)arg1;
- (void)removeValueForKey:(id)arg0 userId:(id)arg1;
- (void)removeAllObjectsWithUserId:(id)arg0;
- (id)cacheInfoForKey:(id)arg0 userId:(id)arg1;
- (void)p_setValue:(id)arg0 forKey:(id)arg1 userId:(id)arg2 valueType:(int)arg3 config:(id)arg4;
- (void)updateMaxAge:(unsigned long long)arg0 forKey:(id)arg1;
- (id)cacheInfoForKey:(id)arg0;
- (long long)integerForKey:(id)arg0;
- (double)doubleForKey:(id)arg0;
- (id)arrayForKey:(id)arg0;
- (void)setBool:(BOOL)arg0 forKey:(id)arg1;
- (void)setDouble:(double)arg0 forKey:(id)arg1;
- (id)stringForKey:(id)arg0;
- (id)dictionaryForKey:(id)arg0;
- (void)setInteger:(long long)arg0 forKey:(id)arg1;
- (void)setArray:(id)arg0 forKey:(id)arg1;
- (void)setData:(id)arg0 forKey:(id)arg1;
- (void)setDictionary:(id)arg0 forKey:(id)arg1;
- (id)dataForKey:(id)arg0;
- (void).cxx_destruct;
- (BOOL)boolForKey:(id)arg0;
- (void)removeObjectForKey:(id)arg0;
- (void)setString:(id)arg0 forKey:(id)arg1;
- (id)objectForKey:(id)arg0;
- (void)removeAllObjects;
- (void)clearMemoryCache;

@end
