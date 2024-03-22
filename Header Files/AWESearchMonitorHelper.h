//
//     Generated by private class-dump
//

@class NSArray, NSMutableDictionary;

@interface AWESearchMonitorHelper : NSObject {
    NSMutableDictionary *_providers;
    NSArray *_protectedKeys;
    NSMutableDictionary *_nonContextMonitorCache;
}

@property (retain, nonatomic) NSMutableDictionary *providers;
@property (copy, nonatomic) NSArray *protectedKeys;
@property (retain, nonatomic) NSMutableDictionary *nonContextMonitorCache;

+ (void)startMonitorForLogType:(id)arg0 data:(id)arg1;
+ (id)searchNetworkType;
+ (void)startMonitorWithContext:(id)arg0 logType:(id)arg1 data:(id)arg2;
+ (void)bindContext:(id)arg0 logType:(id)arg1 data:(id)arg2;
+ (id)searchNetworkMonitorInfoWithError:(id)arg0 itemCount:(long long)arg1;
+ (void)finishMonitorWithContext:(id)arg0 logType:(id)arg1 data:(id)arg2;
+ (id)valueForKey:(id)arg0 withLogType:(id)arg1 context:(id)arg2;
+ (void)searchNetworkTriggerWithSearchType:(id)arg0 pullType:(unsigned long long)arg1 extraDict:(id)arg2;
+ (void)searchNetworkFinishWithSearchType:(id)arg0 pullType:(unsigned long long)arg1 imprID:(id)arg2 extraDict:(id)arg3;
+ (void)removeValueForKey:(id)arg0 withLogType:(id)arg1 context:(id)arg2;
+ (void)registerEventProvider:(id)arg0;
+ (id)p_createANonContextMonitorValueForLogType:(id)arg0;
+ (void)mergeMonitorValue:(id)arg0 withAppendValue:(id)arg1;
+ (id)p_createAMonitorValueFromContext:(id)arg0 forLogType:(id)arg1;
+ (id)p_getMonitorValueFromContext:(id)arg0 forLogType:(id)arg1;
+ (void)p_removeAMonitorValueFromContext:(id)arg0 forLogType:(id)arg1;
+ (void)eliminateMonitorValue:(id)arg0 forKeysNotReport:(id)arg1;
+ (id)protectMonitorValue:(id)arg0;
+ (id)p_getNonContextMonitorValueForLogType:(id)arg0;
+ (void)p_removeANonContextMonitorValueForLogType:(id)arg0;
+ (void)searchMonitorWithEvent:(id)arg0 params:(id)arg1;
+ (id)sharedHelper;

- (void)registerEventProvider:(id)arg0;
- (id)protectedKeys;
- (id)nonContextMonitorCache;
- (void)setProtectedKeys:(id)arg0;
- (void)setNonContextMonitorCache:(id)arg0;
- (void)setProviders:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)providers;

@end