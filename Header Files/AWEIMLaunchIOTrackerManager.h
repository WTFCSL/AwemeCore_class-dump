//
//     Generated by private class-dump
//

@class NSMutableDictionary, NSTimer, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface AWEIMLaunchIOTrackerManager : HTSService <AWEIMLaunchIOTrackerService> {
    BOOL _isTracking;
    BOOL _isLowPowerMode;
    BOOL _hasEnterMessageTab;
    NSMutableDictionary *_targets;
    NSTimer *_timer;
    unsigned long long _firstInterval;
    unsigned long long _loopInterval;
    long long _count;
    NSObject<OS_dispatch_queue> *_trackerQueue;
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _rwlock;
}

@property BOOL isTracking;
@property (retain, nonatomic) NSMutableDictionary *targets;
@property (nonatomic) struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } rwlock;
@property (nonatomic) BOOL isLowPowerMode;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) unsigned long long firstInterval;
@property (nonatomic) unsigned long long loopInterval;
@property BOOL hasEnterMessageTab;
@property long long count;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *trackerQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)setTrackerQueue:(id)arg0;
- (id)trackerQueue;
- (void)setIsLowPowerMode:(BOOL)arg0;
- (void)p_clearTimer;
- (void)onPowerStateDidChange:(id)arg0;
- (void)p_beginTrace;
- (unsigned long long)firstInterval;
- (unsigned long long)loopInterval;
- (void)p_trackAllTargets;
- (id)p_targetWithID:(id)arg0;
- (float)p_durationFromBeginTime:(unsigned long long *)arg0;
- (void)dbMark:(id)arg0 launchTime:(float)arg1;
- (void)fileMark:(id)arg0 launchTime:(float)arg1;
- (void)setHasEnterMessageTab:(BOOL)arg0;
- (BOOL)hasEnterMessageTab;
- (void)p_trackWithParams:(id)arg0;
- (void)beginTrace;
- (void)dbMark:(id)arg0 beginTime:(unsigned long long)arg1;
- (void)fileMark:(id)arg0 beginTime:(unsigned long long)arg1;
- (void)markEnterMessageTab;
- (BOOL)shouldTrackLaunchIO;
- (void)setFirstInterval:(unsigned long long)arg0;
- (void)setLoopInterval:(unsigned long long)arg0;
- (id)timer;
- (void)setCount:(long long)arg0;
- (id)targets;
- (void).cxx_destruct;
- (void)setTargets:(id)arg0;
- (void)setTimer:(id)arg0;
- (long long)count;
- (BOOL)isTracking;
- (unsigned long long)beginTime;
- (void)setIsTracking:(BOOL)arg0;
- (BOOL)isLowPowerMode;
- (struct _opaque_pthread_rwlock_t { long long x0; char x1[192]; })rwlock;
- (void)setRwlock:(struct _opaque_pthread_rwlock_t { long long x0; char x1[192]; })arg0;

@end
