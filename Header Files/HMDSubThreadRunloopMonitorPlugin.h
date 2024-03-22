//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface HMDSubThreadRunloopMonitorPlugin : NSObject <HMDThreadMonitorPluginProtocol> {
    BOOL _isRunning;
    NSArray *_observerThreadList;
    long long _subThreadRunloopTimeoutDuration;
}

@property (nonatomic) BOOL isRunning;
@property (copy, nonatomic) NSArray *observerThreadList;
@property (nonatomic) long long subThreadRunloopTimeoutDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)pluginInstance;

- (void)addRunloop:(struct __CFRunLoop { } *)arg0 thread:(unsigned long long)arg1;
- (long long)subThreadRunloopTimeoutDuration;
- (BOOL)isThreadNeedObserver:(id)arg0;
- (id)observerThreadList;
- (void)setObserverThreadList:(id)arg0;
- (void)setSubThreadRunloopTimeoutDuration:(long long)arg0;
- (void)setupThreadConfig:(id)arg0;
- (void)setIsRunning:(BOOL)arg0;
- (BOOL)isRunning;
- (void).cxx_destruct;
- (void)stop;
- (void)start;

@end
