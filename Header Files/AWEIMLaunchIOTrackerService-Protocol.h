//
//     Generated by private class-dump
//

@protocol AWEIMLaunchIOTrackerService <HTSService>

- (void)dbMark:(id)arg0 launchTime:(float)arg1;
- (void)fileMark:(id)arg0 launchTime:(float)arg1;
- (void)beginTrace;
- (void)dbMark:(id)arg0 beginTime:(unsigned long long)arg1;
- (void)fileMark:(id)arg0 beginTime:(unsigned long long)arg1;
- (void)markEnterMessageTab;
- (BOOL)shouldTrackLaunchIO;
- (unsigned long long)beginTime;

@end
