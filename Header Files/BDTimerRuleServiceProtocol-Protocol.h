//
//     Generated by private class-dump
//

@protocol BDTimerRuleServiceProtocol <NSObject>

- (void)startCountingForRule:(id)arg0 productID:(id)arg1 timeLimit:(double)arg2;
- (void)pauseCountingTimeForRule:(id)arg0 productID:(id)arg1;
- (void)stopCountingTimeForRule:(id)arg0 productID:(id)arg1 isReachProductLimit:(BOOL)arg2;
- (void)resetRuleCurrentCount:(id)arg0;
- (void)startCountingForRule:(id)arg0;
- (void)startCountingForRule:(id)arg0 productID:(id)arg1;
- (void)pauseCountingTimeForRule:(id)arg0;
- (void)stopCountingTimeForRule:(id)arg0;
- (void)stopCountingTimeForRule:(id)arg0 productID:(id)arg1;

@end
