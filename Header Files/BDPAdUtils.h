//
//     Generated by private class-dump
//

@interface BDPAdUtils : NSObject

+ (long long)localErrorCodeFromAdError:(id)arg0;
+ (id)extraTrackerInfoForUniqueId:(id)arg0 adUId:(id)arg1;
+ (id)getLocalCacheWithKey:(id)arg0 type:(Class)arg1 sandbox:(id)arg2;
+ (void)updateLocalCacheWithObject:(id)arg0 key:(id)arg1 sandbox:(id)arg2;
+ (id)_dictionaryWithKey:(id)arg0 value:(id)arg1;
+ (id)serverErrorArray;
+ (id)extraPangleTrackerWithUniqueID:(id)arg0 adUid:(id)arg1 adSlotType:(id)arg2;
+ (id)extraVideoAdTrackerWithUniqueID:(id)arg0;
+ (id)localErrorCodeFromPangleAdError:(id)arg0;
+ (long long)localErrorCodeFromLocalErrorCode:(long long)arg0;
+ (id)preCheckForOperateAd;

@end
