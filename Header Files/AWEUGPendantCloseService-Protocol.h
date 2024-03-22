//
//     Generated by private class-dump
//

@protocol AWEUGPendantCloseService <HTSService>

+ (double)getCanShowTimeWithPendantID:(id)arg0;
+ (long long)checkPendantCloseTotalCountWithPendantID:(id)arg0;
+ (long long)checkPendantCloseInDays:(long long)arg0 pendantID:(id)arg1;
+ (long long)checkPendantCloseInDate:(id)arg0 pendantID:(id)arg1;
+ (void)recordCloseWithPendantID:(id)arg0;
+ (void)clearCloseRecordsWithPendantID:(id)arg0;
+ (void)clearCloseRecordsAndTimeWithPendantID:(id)arg0;
+ (void)caculateIfNeedHideWithDays:(long long)arg0 maxCloseTimes:(long long)arg1 willNotShow:(long long)arg2 pendantID:(id)arg3;
+ (void)recordCloseTypeColdLaunchShowTimesWithPendantID:(id)arg0;
+ (long long)checkRecordCloseTypeColdLaunchShowTimesWithPendantID:(id)arg0;
+ (double)getCanShowTimeWithGlobalFrequent;
+ (void)caculateIfNeedHideWithGlobalFrequentMaxCloseTimes:(long long)arg0 willNotShow:(long long)arg1;
+ (void)recordGlobalFrequentClose;
+ (void)clearGlobalFrequentCloseRecords;
+ (void)clearGlobalFrequentCloseRecordsAndTime;
+ (double)getCanShowTimeFrequentOnceWithPendantID:(id)arg0;
+ (void)caculateIfNeedHideWithFrequentOnceDays:(long long)arg0 maxCloseTimes:(long long)arg1 willNotShow:(long long)arg2 pendantID:(id)arg3;

@end
