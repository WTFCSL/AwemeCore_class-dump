//
//     Generated by private class-dump
//

@class AppMonitorSdkAdapter, NSMutableDictionary, NSLock;

@interface AppMonitorEventService : NSObject {
    NSLock *_lock;
    AppMonitorSdkAdapter *_sdkAdapter;
    struct dispatch_queue_s { } *_ioQueue;
    NSMutableDictionary *_string_x_durationEvent_Dict;
}

@property (retain, nonatomic) NSMutableDictionary *string_x_durationEvent_Dict;
@property (retain, nonatomic) AppMonitorSdkAdapter *sdkAdapter;
@property (nonatomic) struct dispatch_queue_s { } *ioQueue;

+ (id)sharedInstance;

- (void)uploadRealTimeEventForRawEvent:(id)arg0;
- (id)getTransactionIdByModule:(id)arg0 monitorPoint:(id)arg1;
- (id)string_x_durationEvent_Dict;
- (void)resetTransactionIdByModule:(id)arg0 monitorPoint:(id)arg1;
- (id)getRealTimeEventForUTDimensionValueSet:(id)arg0 rawEvent:(id)arg1;
- (void)countEventCommitWithEventId:(id)arg0 module:(id)arg1 monitorPoint:(id)arg2 value:(double)arg3 extraInfo:(id)arg4 realTimeDebug:(BOOL)arg5;
- (void)mergeEventWithConfig:(id)arg0 utDimensionValueSet:(id)arg1 event:(id)arg2;
- (void)cleanExpiredEvent;
- (void)setString_x_durationEvent_Dict:(id)arg0;
- (void)setSdkAdapter:(id)arg0;
- (void)uploadAllEvent;
- (id)sdkAdapter;
- (void)beginStatEventWithTransactionId:(id)arg0 eventId:(id)arg1 module:(id)arg2 monitorPoint:(id)arg3 measureName:(id)arg4;
- (void)endStatEventWithTransactionId:(id)arg0 measureName:(id)arg1 resetTransactionId:(BOOL)arg2 realTimeDebug:(BOOL)arg3;
- (void)commitStatEventWithEventId:(id)arg0 module:(id)arg1 monitorPoint:(id)arg2 DimensionValueSet:(id)arg3 measureValueSet:(id)arg4 realTimeDebug:(BOOL)arg5;
- (void)beginStatEventWithEventId:(id)arg0 module:(id)arg1 monitorPoint:(id)arg2 measureName:(id)arg3;
- (void)endStatEventWithModule:(id)arg0 monitorPoint:(id)arg1 measureName:(id)arg2;
- (void)alarmEventSuccessIncrWithEventId:(id)arg0 module:(id)arg1 monitorPoint:(id)arg2 extraInfo:(id)arg3 realTimeDebug:(BOOL)arg4;
- (void)alarmEventFailIncrWithEventId:(id)arg0 module:(id)arg1 monitorPoint:(id)arg2 errorCode:(id)arg3 errorMsg:(id)arg4 extraInfo:(id)arg5 realTimeDebug:(BOOL)arg6;
- (id)init;
- (void).cxx_destruct;
- (struct dispatch_queue_s { } *)ioQueue;
- (void)setIoQueue:(struct dispatch_queue_s { } *)arg0;

@end