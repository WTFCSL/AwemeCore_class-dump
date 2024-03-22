//
//     Generated by private class-dump
//

@protocol AWEAntiAddictCounterProtocol <NSObject, NSCoding, AWEAntiAddictSaveableProtocol>

@property BOOL disableSave;

- (id)natureUseDurationInTwoWeeksAtDate:(id)arg0;
- (long long)fatigueUseDurationAtDate:(id)arg0;
- (id)sessionStartTimeAtDate:(id)arg0;
- (double)sessionUseDurationAtDate:(id)arg0;
- (double)fatigueAtDate:(id)arg0;
- (long long)maxMinuteUsedInLast7DaysAtDate:(id)arg0;
- (BOOL)disableSave;
- (void)setDisableSave:(BOOL)arg0;
- (void)fatigueAndDurationAtDate:(id)arg0 timeRange:(long long)arg1 fatigueUseDuration:(long long *)arg2 fatigue:(double *)arg3;
- (long long)natureUseDurationAtDate:(id)arg0;
- (void)sessionWillResignActiveWithDate:(id)arg0;
- (void)sessionDidBecomeActiveWithDate:(id)arg0;
- (void)updateSessionDurationWithInterval:(id)arg0;

@end
