//
//     Generated by private class-dump
//

@protocol AFDLessRecommendManagerProtocol <NSObject>

+ (void)deleteRecommendAwemeIfNeededWithDatasource:(id)arg0 currentIndex:(long long)arg1 completedBlock:(id /* block */)arg2;
+ (id)filteredRecommendWithDatasource:(id)arg0 scene:(unsigned long long)arg1;
+ (BOOL)shouldLessRecommend;
+ (void)updateClickFollowTime;
+ (void)postUserOption:(BOOL)arg0 fromPrivacy:(BOOL)arg1;
+ (void)updatePopupShowRecord;
+ (void)updateClickDislikeRecordWithAweme:(id)arg0;
+ (void)updateUserOptionWithType:(long long)arg0;
+ (void)updateClickFollowTimeWithAweme:(id)arg0;
+ (BOOL)shouldShowLessRecommendPopupTriggeredByDislikeWithAweme:(id)arg0 enterFrom:(id)arg1;
+ (void)trackLessRecommendWithEventType:(id)arg0 enterFrom:(id)arg1;
+ (void)trackFromSettingsWithEventType:(id)arg0 enterFrom:(id)arg1;
+ (void)showPopupTriggeredBy:(long long)arg0 enterFrom:(id)arg1 dismissBlock:(id /* block */)arg2;

@end
