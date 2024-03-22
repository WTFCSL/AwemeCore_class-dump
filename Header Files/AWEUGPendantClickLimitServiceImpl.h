//
//     Generated by private class-dump
//

@class NSString;

@interface AWEUGPendantClickLimitServiceImpl : HTSService <AWEUGPendantClickLimitService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)trackLogWithKey:(id)arg0 message:(id)arg1;
+ (void)recordPendantHasShowWithPendantID:(id)arg0;
+ (void)recordPendantHasClick:(unsigned long long)arg0 pendantID:(id)arg1;
+ (double)getCanShowTimeWithPendantID:(id)arg0;
+ (void)clearClickRecordsWithPendantID:(id)arg0;
+ (void)clearClickRecordsAndTimeWithPendantID:(id)arg0;
+ (long long)getExposedDaysWithoutClickForPendantID:(id)arg0;
+ (void)caculateIfNeedHideWithDays:(long long)arg0 willNotShow:(long long)arg1 pendantID:(id)arg2;
+ (id)getStartTimeOfToday:(id)arg0;
+ (BOOL)checkPendantNotClickDaysInDays:(long long)arg0 pendantID:(id)arg1;
+ (id)getEndTimeOfToday:(id)arg0;
+ (id)dateFromString:(id)arg0;

@end
