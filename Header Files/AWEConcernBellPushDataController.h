//
//     Generated by private class-dump
//

@interface AWEConcernBellPushDataController : NSObject

+ (void)uploadBellPushStrategyWithToUserID:(id)arg0 secUid:(id)arg1 liveStrategy:(unsigned long long)arg2 completion:(id /* block */)arg3;
+ (void)fetchBellPushStrategyWithToUserID:(id)arg0 completion:(id /* block */)arg1;
+ (void)updateBellPushSettingsWithCompletion:(id /* block */)arg0;
+ (void)uploadBellPushSettingWithType:(unsigned long long)arg0 toValue:(id)arg1 completion:(id /* block */)arg2;
+ (void)uploadBellPushStrategyWithToUserID:(id)arg0 videoStrategy:(unsigned long long)arg1 completion:(id /* block */)arg2;
+ (void)fetchBellPushVideoStrategyListWithCursor:(id)arg0 count:(id)arg1 type:(unsigned long long)arg2 strategy:(unsigned long long)arg3 completion:(id /* block */)arg4;

@end