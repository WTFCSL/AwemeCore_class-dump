//
//     Generated by private class-dump
//

@interface BDUGFlowStatisticsTracker : NSObject

+ (void)event:(id)arg0 params:(id)arg1;
+ (void)trackService:(id)arg0 metric:(id)arg1 category:(id)arg2 extra:(id)arg3;
+ (id)commonClickParams;
+ (id)commonMonitorParams;
+ (void)registerTrackerClass:(Class)arg0;
+ (void)trackerSDKLanch;
+ (void)trackerQueryIdWithReason:(unsigned long long)arg0;
+ (void)trackerQueryIdResultWithReason:(unsigned long long)arg0 isSuccess:(BOOL)arg1 carrierId:(id)arg2;
+ (void)trackerQueryPopupsResultWithIsSuccess:(BOOL)arg0 isFree:(BOOL)arg1 isUseout:(BOOL)arg2 isPopup:(BOOL)arg3;
+ (void)trackerPopupsWithType:(id)arg0;
+ (void)trackerClickFreeFlowWithType:(id)arg0;
+ (void)trackerClickContinueWithType:(id)arg0;
+ (void)trackerClickFreeFlowReturnWithType:(id)arg0;
+ (void)trackerRequestFailureWithAction:(unsigned long long)arg0 carrier:(id)arg1 errorCode:(id)arg2 errMsg:(id)arg3;
+ (void)trackerFreeFlowShowWithType:(unsigned long long)arg0 isFree:(BOOL)arg1 isUseout:(BOOL)arg2;
+ (void)trackerIos12Carrier;
+ (void)getCommonTrackerParams:(id /* block */)arg0;
+ (void)getFlowInfoCommonParams:(id /* block */)arg0;
+ (void)registerMonitorClass:(Class)arg0;
+ (void)monitorFlowGetSignWithReason:(unsigned long long)arg0;
+ (void)monitorFlowGetSignResponseWithReason:(unsigned long long)arg0 success:(BOOL)arg1 errorCode:(id)arg2 errorMsg:(id)arg3;
+ (void)monitorFlowCarrierIdWithReason:(unsigned long long)arg0;
+ (void)monitorFlowCarrierIdResponseWithReason:(unsigned long long)arg0 success:(BOOL)arg1 errorCode:(id)arg2 errorMsg:(id)arg3;
+ (void)monitorFlowQueryInfoWithReason:(unsigned long long)arg0;
+ (void)monitorFlowQueryInfoResponseWithReason:(unsigned long long)arg0 success:(BOOL)arg1 errorCode:(id)arg2 errorMsg:(id)arg3;
+ (void)getCommonMonitorParams:(id /* block */)arg0;

@end