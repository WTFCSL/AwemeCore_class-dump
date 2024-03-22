//
//     Generated by private class-dump
//

@class NSString, NSTimer, NSMutableArray, NSNumber;
@protocol RTVMonitor, RTVMultipleDelegateInterface, RxInjector, RTVUtilizationMonitorDelegate;

@interface __RTVUtilizationMonitor : NSObject <RTVUtilizationMonitor, RTVSubMonitorDelegate> {
    BOOL _running;
    id<RTVUtilizationMonitorDelegate> delegate;
    id<RxInjector> _injector;
    NSMutableArray *_subMonitors;
    id<RTVMonitor> _rtvMonitor;
    NSTimer *_timer;
    NSNumber *_timeInterval;
    id<RTVMultipleDelegateInterface, RTVUtilizationMonitorDelegate> _multipleDelegate;
}

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) NSMutableArray *subMonitors;
@property (readonly, nonatomic) id<RTVMonitor> rtvMonitor;
@property (readonly, nonatomic) NSTimer *timer;
@property (readonly, nonatomic) NSNumber *timeInterval;
@property (nonatomic, getter=isRunning) BOOL running;
@property (readonly, nonatomic) id<RTVMultipleDelegateInterface, RTVUtilizationMonitorDelegate> multipleDelegate;
@property (weak, nonatomic) id<RTVUtilizationMonitorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rxAwakeFromPropertyInjection;
- (id)multipleDelegate;
- (id)rtvMonitor;
- (void)triggerMonitorWithReason:(id)arg0;
- (void)pauseMonitor;
- (void)resumeMonitor;
- (id)initWithSubMonitors:(id)arg0 context:(id)arg1;
- (id)subMonitors;
- (void)__enumerateSubMonitors:(id /* block */)arg0;
- (void)__markRunning:(BOOL)arg0;
- (id)__aggMonitorDictWithReason:(unsigned long long)arg0;
- (void)__trackWithDict:(id)arg0 suffix:(id)arg1;
- (void)__startMonitor;
- (void)__stopMonitor;
- (void)__pauseMonitor;
- (void)__resumeMonitor;
- (void)setRunning:(BOOL)arg0;
- (id)timer;
- (BOOL)isRunning;
- (id)timeInterval;
- (void)addDelegate:(id)arg0;
- (void).cxx_destruct;
- (void)removeDelegate:(id)arg0;
- (id)injector;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (void)startMonitor;
- (void)stopMonitor;

@end
