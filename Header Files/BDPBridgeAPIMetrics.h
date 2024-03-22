//
//     Generated by private class-dump
//

@class NSString, NSError, NSNumber;

@interface BDPBridgeAPIMetrics : NSObject <NSCopying> {
    BOOL _isSynchronous;
    BOOL _isOnMainThread;
    NSString *_APIName;
    unsigned long long _invokeType;
    double _preCheckBeginTime;
    double _preCheckEndTime;
    double _scheduleBeginTime;
    double _executeBeginTime;
    double _callbackBeginTime;
    NSError *_APIError;
    NSNumber *_callbackId;
    long long _invocationCount;
}

@property (copy, nonatomic) NSString *APIName;
@property (nonatomic) unsigned long long invokeType;
@property (nonatomic) BOOL isSynchronous;
@property (nonatomic) BOOL isOnMainThread;
@property (nonatomic) double preCheckBeginTime;
@property (nonatomic) double preCheckEndTime;
@property (nonatomic) double scheduleBeginTime;
@property (nonatomic) double executeBeginTime;
@property (nonatomic) double callbackBeginTime;
@property (copy, nonatomic) NSError *APIError;
@property (copy, nonatomic) NSNumber *callbackId;
@property (readonly, nonatomic) double checkTotalTime;
@property (readonly, nonatomic) double excuteTotalTime;
@property (readonly, nonatomic) double totalTime;
@property (nonatomic) long long invocationCount;

+ (id)APIMetricsWithAPIInfo:(id)arg0;
+ (double)currentTimestamp;

- (void)setCallbackId:(id)arg0;
- (id)callbackId;
- (id)APIName;
- (void)setIsOnMainThread:(BOOL)arg0;
- (void)setAPIName:(id)arg0;
- (BOOL)isOnMainThread;
- (void)setInvocationCount:(long long)arg0;
- (unsigned long long)invokeType;
- (void)setInvokeType:(unsigned long long)arg0;
- (double)callbackBeginTime;
- (double)preCheckBeginTime;
- (double)preCheckEndTime;
- (double)scheduleBeginTime;
- (double)executeBeginTime;
- (id)APIError;
- (void)setPreCheckBeginTime:(double)arg0;
- (void)setPreCheckEndTime:(double)arg0;
- (void)setScheduleBeginTime:(double)arg0;
- (void)setExecuteBeginTime:(double)arg0;
- (void)setCallbackBeginTime:(double)arg0;
- (void)setAPIError:(id)arg0;
- (id)initWithAPIInfo:(id)arg0;
- (double)checkTotalTime;
- (double)excuteTotalTime;
- (double)totalTime;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (BOOL)isSynchronous;
- (void)invoke;
- (void)setIsSynchronous:(BOOL)arg0;
- (long long)invocationCount;

@end