//
//     Generated by private class-dump
//

@interface ACCAdvanceEditResourceInfoManager : NSObject

+ (id)typeToPanel;
+ (id)panelForType:(long long)arg0;
+ (id)sharedManager;

- (void)downloadEffect:(id)arg0 progress:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)dealWithResponse:(id)arg0 resourceType:(long long)arg1 categoryId:(id)arg2 completion:(id /* block */)arg3;
- (void)p_fetchEffectListForType:(long long)arg0 completion:(id /* block */)arg1;
- (void)p_downloadEffect:(id)arg0 progress:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)fetchEffectDataForType:(long long)arg0 categoryId:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchEffectCategoriesForType:(long long)arg0 completion:(id /* block */)arg1;

@end
