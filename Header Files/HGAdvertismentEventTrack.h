//
//     Generated by private class-dump
//

@interface HGAdvertismentEventTrack : NSObject

+ (void)bannerAdCreateEventWithParams:(id)arg0;
+ (void)bannerAdCreateResultEventWithParams:(id)arg0 success:(BOOL)arg1 errCode:(long long)arg2 errMsg:(id)arg3;
+ (void)bannerAdOperateEventWithParams:(id)arg0 operationType:(id)arg1;
+ (void)bannerAdRequestResultEventWithParams:(id)arg0 success:(BOOL)arg1 errCode:(long long)arg2 errMsg:(id)arg3;
+ (void)interstitialAdOperateEventWithParams:(id)arg0 operationType:(id)arg1;
+ (void)interstitialAdCreateResultEventWithParams:(id)arg0 success:(BOOL)arg1 errorCode:(long long)arg2 errorMessage:(id)arg3;
+ (void)interstitialAdShowResultEventWithParams:(id)arg0 success:(BOOL)arg1 erroCode:(long long)arg2 errorMessage:(id)arg3;
+ (void)interstitialAdRequestResultEventWithParams:(id)arg0 success:(BOOL)arg1 errorCode:(long long)arg2 errorMessage:(id)arg3;
+ (void)interstitialAdShowOverEventWithParams:(id)arg0;
+ (void)videoAdCreateEventWithParams:(id)arg0;
+ (void)videoAdCreateResultEventWithParams:(id)arg0 success:(BOOL)arg1 errCode:(long long)arg2 errMsg:(id)arg3;
+ (void)rewardAdRequestEventWithAdUnitId:(id)arg0 UniqueId:(id)arg1;
+ (void)videoAdOperateEventWithParams:(id)arg0 operationType:(id)arg1;
+ (void)videoAdRequestResultEventWithParams:(id)arg0 success:(BOOL)arg1 errCode:(long long)arg2 errMsg:(id)arg3;
+ (void)rewardAdRequestFailEventWithAdUnitId:(id)arg0 UniqueId:(id)arg1 IsScreenRecord:(id)arg2 Error:(id)arg3;
+ (void)videoAdExitEventWithParams:(id)arg0 playTime:(long long)arg1 effectTime:(long long)arg2 duration:(long long)arg3;
+ (void)rewardAdShowToastEventWithAdUnitId:(id)arg0 UniqueId:(id)arg1 ToastType:(id)arg2;
+ (void)rewardAdDialogClickEventWithAdUnitId:(id)arg0 UniqueId:(id)arg1 ClickResult:(id)arg2;
+ (void)rewardAdShowDialogEventWithAdUnitId:(id)arg0 UniqueId:(id)arg1;
+ (id)commonParamWithType:(id)arg0 unitId:(id)arg1;
+ (void)bannerAdShowEventWithParams:(id)arg0;
+ (void)bannerAdShowOverEventWithParams:(id)arg0;

@end
