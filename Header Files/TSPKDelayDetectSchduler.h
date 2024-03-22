//
//     Generated by private class-dump
//

@class TSPKDelayDetectModel, NSObject;
@protocol OS_dispatch_source, TSPKDelayDetectDelegate, TSPKLock;

@interface TSPKDelayDetectSchduler : NSObject {
    NSObject<OS_dispatch_source> *_timer;
    double _lastCheckTime;
    double _scheduleDetectTime;
    TSPKDelayDetectModel *_delayDetectModel;
    id<TSPKDelayDetectDelegate> _delegate;
    id<TSPKLock> _lock;
}

@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (nonatomic) double lastCheckTime;
@property (nonatomic) double scheduleDetectTime;
@property (retain, nonatomic) TSPKDelayDetectModel *delayDetectModel;
@property (weak, nonatomic) id<TSPKDelayDetectDelegate> delegate;
@property (retain, nonatomic) id<TSPKLock> lock;

- (void)addNotifications;
- (double)timeDelay;
- (void)applicationBecomeInactive;
- (void)executeDetectAction;
- (id)initWithDelayDetectModel:(id)arg0 delegate:(id)arg1;
- (void)startDelayDetect;
- (void)stopDelayDetect;
- (void)cancelDetectAction;
- (void)scheduleDetectAction;
- (void)setDelayDetectModel:(id)arg0;
- (id)delayDetectModel;
- (void)setScheduleDetectTime:(double)arg0;
- (double)scheduleDetectTime;
- (BOOL)isDelaying;
- (id)timer;
- (void).cxx_destruct;
- (id)delegate;
- (void)setTimer:(id)arg0;
- (id)lock;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (void)removeNotifications;
- (void)setLock:(id)arg0;
- (double)lastCheckTime;
- (void)setLastCheckTime:(double)arg0;

@end
