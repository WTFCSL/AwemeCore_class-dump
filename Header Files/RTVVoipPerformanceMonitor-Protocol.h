//
//     Generated by private class-dump
//

@protocol RTVVoipPerformanceMonitor <NSObject>

- (void)startJoinRoomTrackWithVoip:(id)arg0;
- (void)pinJoinRoomKeyPoint:(id)arg0 voip:(id)arg1;
- (void)endJoinRoomTrackWithVoip:(id)arg0 dictionary:(id)arg1 success:(BOOL)arg2 error:(id)arg3;
- (void)startBlankScreenTrackWithVoip:(id)arg0;
- (void)pinBlankScreenKeyPoint:(id)arg0 voip:(id)arg1;
- (void)endBlankScreenTrackWithVoip:(id)arg0 dictionary:(id)arg1 success:(BOOL)arg2 error:(id)arg3;

@end