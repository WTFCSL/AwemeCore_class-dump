//
//     Generated by private class-dump
//

@protocol TIMXKVStorageProtocol <NSObject>

- (id)getObjectOfClass:(Class)arg0 forKey:(id)arg1;
- (unsigned long long)actualSize;
- (void)enumerateKeys:(id /* block */)arg0;
- (void)removeValuesForKeys:(id)arg0;
- (id)currentUserMMKV;
- (void)clearStoreForUser:(long long)arg0;
- (void)migrateConfigFromWCDBToMMKV;
- (BOOL)isMigrated;
- (id)currentUserMMKVOfUid:(long long)arg0;
- (id)pathWithUserId:(id)arg0;
- (BOOL)containsKey:(id)arg0;
- (void)setObject:(id)arg0 forKey:(id)arg1;
- (void)close;
- (void)setKeyValues:(id)arg0;
- (id)allKeys;
- (unsigned long long)count;
- (id)basePath;
- (void)removeValueForKey:(id)arg0;
- (unsigned long long)totalSize;
- (void)clearStore;

@end
