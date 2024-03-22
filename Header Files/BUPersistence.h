//
//     Generated by private class-dump
//

@class NSString, BUPersistenceOption, BUDiskCache;

@interface BUPersistence : NSObject <BUPersistenceProtocol> {
    NSString *_name;
    BUDiskCache *_diskCache;
    BUPersistenceOption *_option;
}

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) BUDiskCache *diskCache;
@property (retain, nonatomic) BUPersistenceOption *option;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)persistenceWithName:(id)arg0 option:(id)arg1;
+ (id)persistenceWithName:(id)arg0;
+ (id)commonPersistence;
+ (id)cacheDirectory;
+ (void)initialize;
+ (id)sdkVersion;
+ (void)setSDKVersion:(id)arg0;

- (void)setDiskCache:(id)arg0;
- (void)_appDidReceiveMemoryWarningNotification;
- (id)_pbu_internal_objectForKey:(id)arg0;
- (id)_pbu_internal_objectsForKeys:(id)arg0;
- (id)_pbu_internal_allObjects;
- (BOOL)_pbu_internal_setObject:(id)arg0 forKey:(id)arg1;
- (void)_pbu_internal_updateObjectsForKeys:(id)arg0 WithBlock:(id /* block */)arg1;
- (BOOL)_pbu_internal_hasObjectForKey:(id)arg0;
- (BOOL)_pbu_internal_removeAll;
- (BOOL)_pbu_internal_removeObjectsForKeys:(id)arg0;
- (BOOL)_pbu_internal_save;
- (void)allObjectsWithSafeBlock:(id /* block */)arg0;
- (void)updateObjectsForKeys:(id)arg0 WithBlock:(id /* block */)arg1;
- (id)objectsForKeys:(id)arg0;
- (BOOL)removeAll;
- (void).cxx_destruct;
- (BOOL)setObject:(id)arg0 forKey:(id)arg1;
- (id)initWithName:(id)arg0;
- (id)diskCache;
- (BOOL)removeObjectsForKeys:(id)arg0;
- (void)setName:(id)arg0;
- (BOOL)save;
- (id)objectForKey:(id)arg0;
- (id)allObjects;
- (void)setOption:(id)arg0;
- (id)name;
- (id)option;
- (BOOL)hasObjectForKey:(id)arg0;

@end