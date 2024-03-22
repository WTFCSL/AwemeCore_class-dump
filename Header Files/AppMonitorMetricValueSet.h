//
//     Generated by private class-dump
//

@class NSLock, NSMutableDictionary;

@interface AppMonitorMetricValueSet : NSObject {
    NSMutableDictionary *_eventsDict;
    NSLock *_lock;
}

@property (retain, nonatomic) NSMutableDictionary *eventsDict;
@property (retain, nonatomic) NSLock *lock;

- (id)eventForId:(id)arg0 module:(id)arg1 monitorPoint:(id)arg2 extraInfo:(id)arg3 realTimeDebug:(BOOL)arg4;
- (id)eventForId:(id)arg0 module:(id)arg1 monitorPoint:(id)arg2 extraInfo:(id)arg3;
- (id)eventsDict;
- (void)setEventsDict:(id)arg0;
- (id)events;
- (id)init;
- (void).cxx_destruct;
- (id)lock;
- (long long)metricsCount;
- (void)setLock:(id)arg0;

@end
