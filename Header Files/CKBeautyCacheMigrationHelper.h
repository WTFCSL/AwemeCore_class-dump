//
//     Generated by private class-dump
//

@class AWEComposerBeautyCacheViewModel;

@interface CKBeautyCacheMigrationHelper : NSObject {
    AWEComposerBeautyCacheViewModel *_aweCacheManager;
}

@property (retain, nonatomic) AWEComposerBeautyCacheViewModel *aweCacheManager;

- (void)p_setupOldCacheManager;
- (void)p_migrateDataIfNeededWithCacheManager:(id)arg0 itemModels:(id)arg1 rootNode:(id)arg2 gender:(long long)arg3;
- (id)aweCacheManager;
- (id)p_generateValueCacheKeyForOldCacheWithresourceID:(id)arg0 tag:(id)arg1 gender:(long long)arg2;
- (long long)convertToAWEGenderFromCKGender:(long long)arg0;
- (id)migrateCacheFromOldToNewWithItemModels:(id)arg0 rootNode:(id)arg1 gender:(long long)arg2;
- (void)migrateDataIfNeededWithCacheManager:(id)arg0 itemModels:(id)arg1 rootNode:(id)arg2;
- (void)setAweCacheManager:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end