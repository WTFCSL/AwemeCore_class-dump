//
//     Generated by private class-dump
//

@interface AppMonitorAlarm : AppMonitorBase

+ (void)flushAllLog;
+ (void)setWriteLogInterval:(long long)arg0;
+ (long long)writeLogInterval;
+ (void)commitSuccessWithPage:(id)arg0 monitorPoint:(id)arg1 arg:(id)arg2;
+ (void)commitFailWithPage:(id)arg0 monitorPoint:(id)arg1 errorCode:(id)arg2 errorMsg:(id)arg3 arg:(id)arg4;
+ (void)commitSuccessWithPage:(id)arg0 monitorPoint:(id)arg1;
+ (void)commitFailWithPage:(id)arg0 monitorPoint:(id)arg1 errorCode:(id)arg2 errorMsg:(id)arg3;

@end
