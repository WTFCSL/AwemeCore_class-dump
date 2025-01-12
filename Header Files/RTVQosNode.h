//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary, RxScheduler, NSError, NSMutableArray;
@protocol RxInjector;

@interface RTVQosNode : NSObject {
    NSString *_key;
    long long _state;
    NSMutableDictionary *_data;
    NSMutableArray *_finishObservers;
    double _startTimeInterval;
    NSString *_service;
    NSError *_finishError;
    id<RxInjector> _injector;
    RxScheduler *_scheduler;
}

@property (readonly, nonatomic) NSMutableDictionary *data;
@property (readonly, nonatomic) NSMutableArray *finishObservers;
@property (nonatomic) long long state;
@property (nonatomic) double startTimeInterval;
@property (copy, nonatomic) NSString *service;
@property (readonly, nonatomic) NSError *finishError;
@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) RxScheduler *scheduler;
@property (readonly, copy, nonatomic) NSString *key;

- (void)rxAwakeFromPropertyInjection;
- (id)durationKey;
- (void)finishWithError:(id)arg0 extraMonitorInfo:(id)arg1;
- (id)monitorData;
- (void)updateReportService:(id)arg0;
- (void)appendMonitorData:(id)arg0;
- (id)initWithKey:(id)arg0 initialData:(id)arg1;
- (void)addStateFinishObserver:(id /* block */)arg0;
- (void)doFinishWithError:(id)arg0 extraMonitorInfo:(id)arg1 async:(BOOL)arg2;
- (id)finishObservers;
- (id)finishError;
- (void)__notifyFinishWithError:(id)arg0;
- (void)__reportDataIfNeeded:(id)arg0;
- (id)__metricFromData:(id)arg0;
- (id)key;
- (id)data;
- (void).cxx_destruct;
- (void)setService:(id)arg0;
- (long long)state;
- (void)setState:(long long)arg0;
- (id)scheduler;
- (id)statusKey;
- (id)injector;
- (void)start;
- (void)dealloc;
- (id)service;
- (double)startTimeInterval;
- (void)setStartTimeInterval:(double)arg0;

@end
