//
//     Generated by private class-dump
//

@protocol IESLiveGuestBattleScoreView <IESLiveGuestBattleLifeCycle>

- (void)updateFanTicketText:(id)arg0 animation:(id)arg1;
- (void)updateBattleRoleIconAlpha:(double)arg0;
- (void)updateBattleRoleIconAlphaAnimated:(double)arg0 duraton:(double)arg1 delay:(double)arg2 completion:(id /* block */)arg3;
- (void)stopAllBattleAnimationIfNeeded;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })iconViewFrame;
- (void)updateFanTicketStyleType:(int)arg0;

@end
