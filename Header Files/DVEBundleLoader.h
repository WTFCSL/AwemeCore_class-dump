//
//     Generated by private class-dump
//

@interface DVEBundleLoader : NSObject

+ (id)shareManager;
+ (id)p_convertResourceCategoryModelsToEffectCategories:(id)arg0;
+ (id /* block */)commonLoadCompletion:(id /* block */)arg0;
+ (id)p_convertResourceModelsToEffectModels:(id)arg0;
+ (id)allocWithZone:(struct _NSZone { } *)arg0;

- (void)transition:(id)arg0 category:(id)arg1 completion:(id /* block */)arg2;
- (void)transitionCategory:(id)arg0 completion:(id /* block */)arg1;
- (void)runInGlobalThread:(id /* block */)arg0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)arg0;

@end
