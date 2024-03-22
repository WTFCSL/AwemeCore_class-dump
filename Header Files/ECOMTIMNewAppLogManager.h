//
//     Generated by private class-dump
//

@class NSArray, NSDictionary, NSString;

@interface ECOMTIMNewAppLogManager : NSObject <ECOMTIMNewAppLogManagerProtocol> {
    NSArray *_eventLoggerWhiteList;
    NSDictionary *_appLogRateDict;
}

@property (copy, nonatomic) NSArray *eventLoggerWhiteList;
@property (copy, nonatomic) NSDictionary *appLogRateDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)onEvent:(id)arg0 params:(id)arg1;
- (void)onEvent:(id)arg0 paramsBlock:(id /* block */)arg1;
- (void)handleEventLogService:(id)arg0 name:(id)arg1 data:(id)arg2;
- (id)eventLoggerWhiteList;
- (id)convertToJsonDict:(id)arg0;
- (BOOL)shouldLogForEvent:(id)arg0;
- (BOOL)shouldLogEventToAlog;
- (id)appLogRateDict;
- (void)setAppLogRateDict:(id)arg0;
- (void)setEventLoggerWhiteList:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end