//
//     Generated by private class-dump
//

@class NSString, NSDictionary, CachalotMonitor, CachalotMonitorContext;

@interface CachalotErrorMonitor : NSObject {
    NSString *_type;
    NSString *_module;
    long long _statusCode;
    long long _errorCode;
    NSDictionary *_category;
    NSDictionary *_metric;
    NSDictionary *_extra;
    CachalotMonitorContext *_context;
    CachalotMonitor *_monitor;
}

@property (retain, nonatomic) CachalotMonitor *monitor;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *module;
@property (nonatomic) long long statusCode;
@property (nonatomic) long long errorCode;
@property (copy, nonatomic) NSDictionary *category;
@property (copy, nonatomic) NSDictionary *metric;
@property (copy, nonatomic) NSDictionary *extra;
@property (retain, nonatomic) CachalotMonitorContext *context;

- (void)setExtra:(id)arg0;
- (void)sendEventName:(id)arg0;
- (id)metric;
- (long long)statusCode;
- (void)send;
- (void)setStatusCode:(long long)arg0;
- (id)category;
- (void).cxx_destruct;
- (id)monitor;
- (void)setContext:(id)arg0;
- (void)setMonitor:(id)arg0;
- (id)type;
- (void)setCategory:(id)arg0;
- (void)setErrorCode:(long long)arg0;
- (id)extra;
- (long long)errorCode;
- (void)setType:(id)arg0;
- (id)context;
- (void)setMetric:(id)arg0;
- (id)module;
- (void)setModule:(id)arg0;

@end
