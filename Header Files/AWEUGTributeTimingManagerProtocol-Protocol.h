//
//     Generated by private class-dump
//

@protocol AWEUGTributeTimingManagerProtocol <NSObject>

- (void)startTributeTaskOnColdLaunch;
- (void)startTributeTaskIfNeeded;
- (void)tributeTaskReport;
- (void)tributeTaskCreated:(id)arg0 withToken:(id)arg1;
- (void)tributeTaskRemoveWithToken:(id)arg0;
- (void)tributeTaskProgressUpdated:(double)arg0 withToken:(id)arg1;
- (void)startTributeTask;

@end