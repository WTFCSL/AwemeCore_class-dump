//
//     Generated by private class-dump
//

@interface IESHybridMonitor : NSObject

+ (void)hmdTrackService:(id)arg0 metric:(id)arg1 category:(id)arg2 extra:(id)arg3 logType:(id)arg4 biz:(id)arg5 platform:(long long)arg6 aid:(id)arg7;
+ (void)hmdTrackData:(id)arg0 logType:(id)arg1 biz:(id)arg2 platform:(long long)arg3 aid:(id)arg4;
+ (void)hmdTrackService:(id)arg0 metric:(id)arg1 category:(id)arg2 extra:(id)arg3 logType:(id)arg4 biz:(id)arg5 platform:(long long)arg6 aid:(id)arg7 maySample:(BOOL)arg8;
+ (void)hmdTrackData:(id)arg0 logType:(id)arg1 biz:(id)arg2 platform:(long long)arg3 aid:(id)arg4 maySample:(BOOL)arg5;
+ (void)hmdTrackService:(id)arg0 metric:(id)arg1 category:(id)arg2 extra:(id)arg3 logType:(id)arg4 biz:(id)arg5 platform:(long long)arg6;
+ (void)hmdTrackData:(id)arg0 logType:(id)arg1 biz:(id)arg2 platform:(long long)arg3;

@end
