//
//     Generated by private class-dump
//

@interface AWELikeListPrivacyActionSheet : NSObject

+ (Class)aAWEPadModuleAdapterClass;
+ (void)showWithEnterFrom:(id)arg0 completion:(id /* block */)arg1;
+ (void)showWithEnterFrom:(id)arg0 useCardUIStyle:(BOOL)arg1 completion:(id /* block */)arg2 loadingBlock:(id /* block */)arg3 dismissBlock:(id /* block */)arg4;
+ (void)showWithEnterFrom:(id)arg0 completion:(id /* block */)arg1 loadingBlock:(id /* block */)arg2 dismissBlock:(id /* block */)arg3;
+ (id)__settingModel:(id)arg0 withIndex:(long long)arg1 isSelected:(BOOL)arg2;
+ (id)__getLogStatusString:(long long)arg0;
+ (void)changeLikeListPrivacySetting:(long long)arg0 completion:(id /* block */)arg1;
+ (void)__trackCancelSelectWithEnterFrom:(id)arg0 type:(long long)arg1;

- (id)aAWEPadModuleAdapter;

@end
