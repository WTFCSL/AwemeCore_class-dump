//
//     Generated by private class-dump
//

@class NSObject;
@protocol OS_dispatch_queue;

@interface TTMonitor : NSObject {
    NSObject<OS_dispatch_queue> *_serialQueue;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;

+ (id)shareManager;
+ (void)trackData:(id)arg0 logTypeStr:(id)arg1;
+ (void)trackService:(id)arg0 status:(long long)arg1 extra:(id)arg2;
+ (double)timeIntervalForKey:(id)arg0;
+ (void)cancelTimingForKey:(id)arg0;
+ (void)trackService:(id)arg0 value:(float)arg1 extra:(id)arg2;
+ (BOOL)endTimingForKey:(id)arg0 service:(id)arg1 label:(id)arg2;
+ (BOOL)endTimingForKey:(id)arg0 service:(id)arg1 label:(id)arg2 duration:(double *)arg3;
+ (void)startWithAppkey:(id)arg0;
+ (void)setMonitorProtocol:(id)arg0;
+ (void)excuteStoredEventActions;
+ (void)dealEventAction:(id /* block */)arg0;
+ (id)timingSemaphore;
+ (BOOL)isStart;
+ (void)startTimingForKey:(id)arg0;
+ (void)setIsStart:(BOOL)arg0;
+ (id)cachedEvents;
+ (id)timingDict;

- (void)hmdTrackData:(id)arg0 logTypeStr:(id)arg1;
- (void)hmdTrackService:(id)arg0 attributes:(id)arg1;
- (void)hmdTrackService:(id)arg0 value:(id)arg1 extra:(id)arg2;
- (void)hmdTrackService:(id)arg0 status:(long long)arg1 extra:(id)arg2;
- (void)trackData:(id)arg0 logTypeStr:(id)arg1;
- (void)trackService:(id)arg0 status:(long long)arg1 extra:(id)arg2;
- (void)trackService:(id)arg0 attributes:(id)arg1;
- (void)trackService:(id)arg0 value:(id)arg1 extra:(id)arg2;
- (id)init;
- (void).cxx_destruct;
- (void)setSerialQueue:(id)arg0;
- (id)serialQueue;

@end
