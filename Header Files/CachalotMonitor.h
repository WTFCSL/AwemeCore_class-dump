//
//     Generated by private class-dump
//

@class CachalotMonitorConfig, NSDictionary, CachalotMonitorContext, NSArray;

@interface CachalotMonitor : NSObject {
    CachalotMonitorContext *_context;
    NSDictionary *_category;
    NSDictionary *_metric;
    NSDictionary *_extra;
    NSArray *_eventSenders;
    CachalotMonitorConfig *_config;
}

@property (retain, nonatomic) CachalotMonitorConfig *config;
@property (copy, nonatomic) CachalotMonitorContext *context;
@property (copy, nonatomic) NSDictionary *category;
@property (copy, nonatomic) NSDictionary *metric;
@property (copy, nonatomic) NSDictionary *extra;
@property (copy, nonatomic) NSArray *eventSenders;

+ (id)monitorWithConfig:(id)arg0;

- (void)setExtra:(id)arg0;
- (void)sendEvent:(id)arg0 category:(id)arg1 metric:(id)arg2 extra:(id)arg3;
- (void)setEventSenders:(id)arg0;
- (id)eventSenders;
- (id)metric;
- (id)category;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)config;
- (void)setCategory:(id)arg0;
- (id)extra;
- (id)initWithConfig:(id)arg0;
- (id)context;
- (void)setMetric:(id)arg0;

@end
