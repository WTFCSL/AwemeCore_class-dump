//
//     Generated by private class-dump
//

@interface HGStarkEventTracker : NSObject

+ (void)endEvent:(id)arg0 primaryKey:(id)arg1 attributes:(id)arg2 uniqueId:(id)arg3;
+ (void)monitorService:(id)arg0 extra:(id)arg1 uniqueId:(id)arg2;
+ (void)event:(id)arg0 attributes:(id)arg1 uniqueId:(id)arg2;
+ (void)beginEvent:(id)arg0 primaryKey:(id)arg1 attributes:(id)arg2 uniqueId:(id)arg3;
+ (id)getCommonParamsWithUniqueID:(id)arg0;

@end
