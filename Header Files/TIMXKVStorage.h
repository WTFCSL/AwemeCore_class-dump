//
//     Generated by private class-dump
//

@class NSString, NSDictionary, TIMXSDKInstance, NSObject;
@protocol OS_dispatch_semaphore, OS_dispatch_queue, TIMXCurrentUserCredentialProtocol;

@interface TIMXKVStorage : NSObject <TIMXKVStorageProtocol, TIMXStartUpTaskProtocol, TIMXInstanceScopeSingleton> {
    TIMXSDKInstance *_r;
    NSDictionary *_openedMMKV;
    id<TIMXCurrentUserCredentialProtocol> _currentUserImp;
    NSObject<OS_dispatch_semaphore> *_sema;
    NSObject<OS_dispatch_queue> *_p_sharedOperationQueue_default;
}

@property (retain, nonatomic) NSDictionary *openedMMKV;
@property (retain, nonatomic) id<TIMXCurrentUserCredentialProtocol> currentUserImp;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *sema;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *p_sharedOperationQueue_default;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)startUpOrder;
+ (void)startUpWithRootObject:(id)arg0;

- (id)getObjectOfClass:(Class)arg0 forKey:(id)arg1;
- (unsigned long long)actualSize;
- (void)enumerateKeys:(id /* block */)arg0;
- (void)removeValuesForKeys:(id)arg0;
- (id)currentUserMMKV;
- (void)clearStoreForUser:(long long)arg0;
- (void)migrateConfigFromWCDBToMMKV;
- (BOOL)isMigrated;
- (void)userDidLogout:(id)arg0;
- (id)currentUserImp;
- (void)setOpenedMMKV:(id)arg0;
- (id)sharedOperationalQueue;
- (id)currentUserMMKVOfUid:(long long)arg0;
- (id)openedMMKV;
- (void)setCurrentUserImp:(id)arg0;
- (id)pathWithUserId:(id)arg0;
- (id)p_sharedOperationQueue_default;
- (id)getDB;
- (BOOL)containsKey:(id)arg0;
- (void).cxx_destruct;
- (void)setObject:(id)arg0 forKey:(id)arg1;
- (void)close;
- (void)setKeyValues:(id)arg0;
- (id)allKeys;
- (id)sema;
- (void)setSema:(id)arg0;
- (unsigned long long)count;
- (void)dealloc;
- (id)basePath;
- (void)removeValueForKey:(id)arg0;
- (unsigned long long)totalSize;
- (id)initWithRootObject:(id)arg0;
- (void)clearStore;

@end
