//
//     Generated by private class-dump
//

@class NSNumber, AWEComposerBeautyCacheViewModel, NSString;

@interface AWEComposerBeautyCacheMigration : NSObject <AWEComposerBeautyMigrationProtocol> {
    AWEComposerBeautyCacheViewModel *_beautyCacheManager;
    NSNumber *_lastABGroup;
    NSString *_panelName;
}

@property (retain, nonatomic) AWEComposerBeautyCacheViewModel *beautyCacheManager;
@property (retain, nonatomic) NSNumber *lastABGroup;
@property (retain, nonatomic) NSString *panelName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)migrationCacheKeyWithPanelName:(id)arg0;
+ (BOOL)needUpdateCacheWithPanelName:(id)arg0;
+ (void)markMigrationCompleteWithPanelName:(id)arg0;

- (id)initWithCacheManager:(id)arg0 panelName:(id)arg1;
- (void)setLastABGroup:(id)arg0;
- (void)migrateAppliedEffectListWithCategories:(id)arg0;
- (void)migrateAppliedEffectItemWithCategories:(id)arg0;
- (id)beautyCacheManager;
- (void)migrateAppliedEffectForCategory:(id)arg0;
- (void)migrateAppliedChildEffect:(id)arg0;
- (void)migrateEffectItem:(id)arg0 inEffect:(id)arg1;
- (void)migrateAppliedEffectForCategory:(id)arg0 forGender:(long long)arg1;
- (id)oldCacheKeyForCategory:(id)arg0 gender:(long long)arg1;
- (void)migrateAppliedChildEffect:(id)arg0 forGender:(long long)arg1;
- (id)oldCacheKeyForEffect:(id)arg0 gender:(long long)arg1;
- (void)migrateEffectItem:(id)arg0 inEffect:(id)arg1 forGender:(long long)arg2;
- (id)oldCacheKeyForEffectItem:(id)arg0 inEffect:(id)arg1 gender:(long long)arg2;
- (id)ratioNumberForTag_920:(id)arg0;
- (void)migrateAppliedEffectsWithEffects:(id)arg0 forGender:(long long)arg1;
- (void)startCacheDataMigration:(id)arg0 lastABGroup:(id)arg1 completion:(id /* block */)arg2;
- (void)setBeautyCacheManager:(id)arg0;
- (id)lastABGroup;
- (void).cxx_destruct;
- (id)panelName;
- (void)setPanelName:(id)arg0;

@end
