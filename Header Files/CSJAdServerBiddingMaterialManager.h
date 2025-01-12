//
//     Generated by private class-dump
//

@interface CSJAdServerBiddingMaterialManager : NSObject

+ (id)getBiddingPreFetchMaterialWithKey:(id)arg0 slot:(id)arg1 type:(long long)arg2;
+ (void)preLoadMaterialsWith:(id)arg0 slot:(id)arg1;
+ (id)getBiddingPreCacheInfoWithSlot:(id)arg0 error:(id *)arg1;
+ (void)biddingPreFetchMaterialWithSlot:(id)arg0 requestID:(id)arg1 success:(id /* block */)arg2 failure:(id /* block */)arg3;
+ (id)biddingPersistenceWithSlot:(id)arg0 type:(long long)arg1;
+ (void)removeMaterialWithMaterialMeta:(id)arg0 adSlot:(id)arg1;
+ (BOOL)invalidDecrypyAdm:(id)arg0;
+ (id)getBiddingPreCacheMaterialWithSlot:(id)arg0 error:(id *)arg1;
+ (id)getBiddingPreFetchMaterialWithAdmCreatives:(id)arg0 slot:(id)arg1;
+ (void)biddingGetMaterialWithSlot:(id)arg0 adm:(id)arg1 success:(id /* block */)arg2 failure:(id /* block */)arg3;
+ (void)biddingPreCacheMaterialWithSlot:(id)arg0 success:(id /* block */)arg1 failure:(id /* block */)arg2;
+ (id)allocWithZone:(struct _NSZone { } *)arg0;
+ (id)manager;

- (id)mutableCopy;
- (id)copy;

@end
