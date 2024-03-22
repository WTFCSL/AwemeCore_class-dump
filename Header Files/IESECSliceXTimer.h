//
//     Generated by private class-dump
//

@class NSHashTable, NSObject;
@protocol OS_dispatch_source;

@interface IESECSliceXTimer : NSObject {
    NSObject<OS_dispatch_source> *_timer;
    NSHashTable *_timerListeners;
    double _timeInterval;
}

@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (retain, nonatomic) NSHashTable *timerListeners;
@property (nonatomic) double timeInterval;

- (void)addTimerListener:(id)arg0;
- (void)removeTimerListener:(id)arg0;
- (id)timerListeners;
- (void)notifyTimerListeners;
- (void)setTimerListeners:(id)arg0;
- (id)timer;
- (void)invalidateTimer;
- (id)initWithTimeInterval:(double)arg0;
- (double)timeInterval;
- (void)applicationWillEnterForeground:(id)arg0;
- (void).cxx_destruct;
- (void)setTimeInterval:(double)arg0;
- (void)applicationDidEnterBackground:(id)arg0;
- (void)setTimer:(id)arg0;
- (void)dealloc;
- (void)restartTimer;

@end
