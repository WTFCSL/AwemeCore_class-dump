//
//     Generated by private class-dump
//

@protocol AWEUGPendantClickLimitService <HTSService>

+ (void)recordPendantHasShowWithPendantID:(id)arg0;
+ (void)recordPendantHasClick:(unsigned long long)arg0 pendantID:(id)arg1;
+ (double)getCanShowTimeWithPendantID:(id)arg0;
+ (void)clearClickRecordsWithPendantID:(id)arg0;
+ (void)clearClickRecordsAndTimeWithPendantID:(id)arg0;
+ (long long)getExposedDaysWithoutClickForPendantID:(id)arg0;
+ (void)caculateIfNeedHideWithDays:(long long)arg0 willNotShow:(long long)arg1 pendantID:(id)arg2;

@end
