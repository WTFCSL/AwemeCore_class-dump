//
//     Generated by private class-dump
//

@interface BDASplashTracker : NSObject

+ (void)trackNoAdEvent:(id)arg0 params:(id)arg1;
+ (void)trackEventWithLabel:(id)arg0 extra:(id)arg1 adExtraData:(id)arg2;
+ (void)trackEventWithTag:(id)arg0 Label:(id)arg1 adId:(id)arg2 logExtra:(id)arg3 extra:(id)arg4 adExtraData:(id)arg5;
+ (void)trackMonitorService:(id)arg0 metric:(id)arg1 category:(id)arg2 extra:(id)arg3;
+ (void)trackALogWithLevel:(int)arg0 log:(id)arg1;
+ (void)trackEventWithLabel:(id)arg0 model:(id)arg1 extra:(id)arg2 adExtraData:(id)arg3;
+ (void)trackALogWithInfoLevel:(id)arg0;
+ (void)trackALogWithWarnLevel:(id)arg0;
+ (void)trackALogWithErrorLevel:(id)arg0;
+ (id)monitor;

@end
