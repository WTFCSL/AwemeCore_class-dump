//
//     Generated by private class-dump
//

@protocol AWEMonitorService <HTSUniqService>

- (void)trackData:(id)arg0 logTypeStr:(id)arg1;
- (void)trackService:(id)arg0 status:(long long)arg1 extra:(id)arg2;
- (double)timeIntervalForKey:(id)arg0;
- (void)cancelTimingForKey:(id)arg0;
- (void)trackService:(id)arg0 value:(float)arg1 extra:(id)arg2;
- (BOOL)endTimingForKey:(id)arg0 service:(id)arg1 label:(id)arg2;
- (BOOL)endTimingForKey:(id)arg0 service:(id)arg1 label:(id)arg2 duration:(double *)arg3;
- (void)startTimingForKey:(id)arg0;

@end
