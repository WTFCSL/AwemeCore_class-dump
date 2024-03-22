//
//     Generated by private class-dump
//

@class NSString;

@interface AWEACCTrackerImpl : NSObject <ACCTrackProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackEvent:(id)arg0 params:(id)arg1;
- (void)trackLogData:(id)arg0;
- (void)trackEvent:(id)arg0 label:(id)arg1 value:(id)arg2 extra:(id)arg3 attributes:(id)arg4;
- (void)trackEvent:(id)arg0 params:(id)arg1 needStagingFlag:(BOOL)arg2;
- (void)track:(id)arg0 params:(id)arg1;
- (void)trackEvent:(id)arg0 paramsGenerate:(id /* block */)arg1;
- (void)trackEvent:(id)arg0 params:(id)arg1 context:(id)arg2;
- (BOOL)p_disableDeprecatedTrackMethods;
- (void)logTrackerEvent:(id)arg0 params:(id)arg1;
- (void)p_doTrack:(id)arg0 params:(id)arg1;
- (void)p_doTrackEvent:(id)arg0 params:(id)arg1;
- (void)p_doTrackEvent:(id)arg0 params:(id)arg1 customInfo:(id)arg2;
- (void)trackEvent:(id)arg0 params:(id)arg1 customInfo:(id)arg2;
- (void)trackEvent:(id)arg0 attributes:(id)arg1;
- (id)deviceID;

@end