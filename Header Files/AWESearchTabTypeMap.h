//
//     Generated by private class-dump
//

@interface AWESearchTabTypeMap : NSObject

+ (id)fetchTabStrWithTabNum:(long long)arg0;
+ (id)fetchTabTypeWithTabString:(id)arg0;
+ (id)dynamicTabStrCache;
+ (id)dynamicTabNumCache;
+ (id)dynamicTabNameCache;
+ (id)fetchTabNameWithTabStr:(id)arg0;
+ (void)addDynamicTabStrCacheWithStr:(id)arg0 andNum:(id)arg1;
+ (void)addDynamicTabNumCacheWithType:(id)arg0 andTabStr:(id)arg1;
+ (void)addDynamicTabNameCacheWithStr:(id)arg0 andTabStr:(id)arg1;

@end