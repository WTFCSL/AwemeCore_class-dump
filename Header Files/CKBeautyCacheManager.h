//
//     Generated by private class-dump
//

@interface CKBeautyCacheManager : NSObject

- (id)defaultUserId;
- (void)saveCacheWithUid:(id)arg0 gender:(long long)arg1 dict:(id)arg2;
- (void)markAlgorithmDetectGender:(long long)arg0;
- (long long)lastUsedGender;
- (void)saveLastUsedGender:(long long)arg0;
- (id)getCacheDictWithUid:(id)arg0 gender:(long long)arg1;
- (BOOL)isCachedBeautyOnForGender:(long long)arg0;
- (long long)lastAlgorithmDetectGender;
- (void)saveCacheWithUid:(id)arg0 gender:(long long)arg1 beautyState:(id)arg2;
- (void)saveCacheWithUid:(id)arg0 genders:(id)arg1 beautyState:(id)arg2;
- (BOOL)hasCacheForUid:(id)arg0 gender:(long long)arg1;
- (void)removeCacheWithUid:(id)arg0 gender:(long long)arg1;
- (id)generateStatusDictionaryForCacheWithState:(id)arg0;

@end
