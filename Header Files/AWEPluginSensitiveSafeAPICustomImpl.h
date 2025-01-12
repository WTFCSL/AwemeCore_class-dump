//
//     Generated by private class-dump
//

@class NSString;

@interface AWEPluginSensitiveSafeAPICustomImpl : NSObject <BDPSensitiveSafeAPIPluginDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;

- (unsigned long long)p_aweJumpTypeFromBdpJumpType:(unsigned long long)arg0;
- (unsigned long long)typeWithApiName:(id)arg0;
- (void)requestAccessMicrophoneWithCompletionHandler:(id /* block */)arg0;
- (void)requestAccessVideoWithAppId:(id)arg0 apiName:(id)arg1 completionHandler:(id /* block */)arg2;
- (BOOL)startRunningWithCaptureSession:(id)arg0 appId:(id)arg1 apiName:(id)arg2 error:(id *)arg3;
- (BOOL)stopRunningWithCaptureSession:(id)arg0 appId:(id)arg1 apiName:(id)arg2 error:(id *)arg3;
- (BOOL)setPasteboardString:(id)arg0 error:(id *)arg1 appId:(id)arg2 apiName:(id)arg3;
- (void)getPasteboardStringWithCompletionHandler:(id /* block */)arg0 appId:(id)arg1 apiName:(id)arg2;
- (void)openURL:(id)arg0 options:(id)arg1 completionHandler:(id /* block */)arg2 type:(unsigned long long)arg3 appId:(id)arg4 apiName:(id)arg5;
- (id)getSKStoreWithError:(id *)arg0 appId:(id)arg1 apiName:(id)arg2;
- (id)getPredicateWithStartDate:(id)arg0 endDate:(id)arg1 calendars:(id)arg2 eventStore:(id)arg3 error:(id *)arg4 appId:(id)arg5 apiName:(id)arg6;
- (id)getEventsMatchingPredicate:(id)arg0 eventStore:(id)arg1 error:(id *)arg2 appId:(id)arg3 apiName:(id)arg4;
- (long long)getCalendarAuthorizationStatusWithError:(id *)arg0 appId:(id)arg1 apiName:(id)arg2;
- (void)requestAccessCalendarWithEventStore:(id)arg0 completion:(id /* block */)arg1;
- (BOOL)saveCalendarEvent:(id)arg0 eventStore:(id)arg1 error:(id *)arg2 appId:(id)arg3 apiName:(id)arg4;
- (BOOL)removeCalendarEvent:(id)arg0 eventStore:(id)arg1 error:(id *)arg2 appId:(id)arg3 apiName:(id)arg4;
- (id)getCalendarsForEventStore:(id)arg0 error:(id *)arg1 appId:(id)arg2 apiName:(id)arg3;

@end
