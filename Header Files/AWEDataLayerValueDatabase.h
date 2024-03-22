//
//     Generated by private class-dump
//

@class AWEDataLayerFastMap;

@interface AWEDataLayerValueDatabase : AWEDataLayerBaseDatabase {
    BOOL _useQueue;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _tempCacheLock;
    AWEDataLayerFastMap *_tempCache;
    AWEDataLayerFastMap *_deletingDomainFlags;
    BOOL _duringRemoveAllObjects;
    struct sqlite3_stmt { } *_getStatement;
    struct sqlite3_stmt { } *_setStatement;
    struct sqlite3_stmt { } *_deleteStatement;
    struct sqlite3_stmt { } *_updateLastReadStatement;
    struct sqlite3_stmt { } *_updateMaxAgeStatement;
}

+ (id)getValueDatabaseWithUserId:(id)arg0;

- (void)databaseWillClose;
- (id)buildDeletingDomainsString;
- (void)handleErrorWithCode:(long long)arg0 message:(id)arg1;
- (BOOL)isDeletingDomain:(id)arg0;
- (void)removeMetadataForKey:(id)arg0 domain:(id)arg1;
- (id)createTempCacheIfNeededWithDomain:(id)arg0;
- (void)p_setMetadata:(id)arg0 forKey:(id)arg1 domain:(id)arg2;
- (void)p_removeMetadataForKey:(id)arg0 domain:(id)arg1;
- (void)setDomain:(id)arg0 isDeleting:(BOOL)arg1;
- (void)p_removeMetadatasInDomain:(id)arg0;
- (void)p_updateLastReadWithMetadata:(id)arg0 forKey:(id)arg1 domain:(id)arg2;
- (id)allMetadatas;
- (id)metadataForKey:(id)arg0 domain:(id)arg1;
- (void)setMetadata:(id)arg0 forKey:(id)arg1 domain:(id)arg2;
- (void)removeMetadatasInDomain:(id)arg0;
- (void)removeAllMetadatas;
- (void)updateLastReadWithMetadata:(id)arg0 forKey:(id)arg1 domain:(id)arg2;
- (void)updateMaxAge:(unsigned long long)arg0 forKey:(id)arg1 domain:(id)arg2;
- (id)init;
- (void).cxx_destruct;

@end
