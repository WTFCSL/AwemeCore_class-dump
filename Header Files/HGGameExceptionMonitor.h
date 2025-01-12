//
//     Generated by private class-dump
//

@class HGUniqueID, NSObject;
@protocol OS_dispatch_queue, HGMonitorableObjectProtocol;

@interface HGGameExceptionMonitor : NSObject {
    BOOL _disableZeroDrawWatch;
    BOOL _isStop;
    BOOL _isEnterBackgroundOnOneWatch;
    BOOL _isInBackground;
    id<HGMonitorableObjectProtocol> _monitorableObject;
    HGUniqueID *_uniqueID;
    long long _unCaughtJSErrorCount;
    long long _zeroDrawCallCount;
    NSObject<OS_dispatch_queue> *_monitorQueue;
}

@property (weak, nonatomic) HGUniqueID *uniqueID;
@property (nonatomic) long long unCaughtJSErrorCount;
@property (nonatomic) long long zeroDrawCallCount;
@property (nonatomic) BOOL disableZeroDrawWatch;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *monitorQueue;
@property (nonatomic) BOOL isStop;
@property (nonatomic) BOOL isEnterBackgroundOnOneWatch;
@property (nonatomic) BOOL isInBackground;

- (void)setIsInBackground:(BOOL)arg0;
- (BOOL)isStop;
- (void)setIsStop:(BOOL)arg0;
- (void)uncaughtException:(id)arg0 inJSContext:(id)arg1 withUniqueID:(id)arg2;
- (id)initWithMonitorableObject:(id)arg0 uniqueID:(id)arg1;
- (void)appWillEnterForground:(id)arg0;
- (void)setIsEnterBackgroundOnOneWatch:(BOOL)arg0;
- (long long)unCaughtJSErrorCount;
- (void)setUnCaughtJSErrorCount:(long long)arg0;
- (BOOL)isEnterBackgroundOnOneWatch;
- (long long)zeroDrawCallCount;
- (void)setZeroDrawCallCount:(long long)arg0;
- (BOOL)disableZeroDrawWatch;
- (void)setDisableZeroDrawWatch:(BOOL)arg0;
- (void)appDidEnterBackground:(id)arg0;
- (void).cxx_destruct;
- (id)uniqueID;
- (void)setUniqueID:(id)arg0;
- (void)stop;
- (BOOL)isInBackground;
- (void)start;
- (id)monitorQueue;
- (void)setMonitorQueue:(id)arg0;

@end
