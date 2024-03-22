//
//     Generated by private class-dump
//

@protocol IESLiveRevenueInteractPlayBuilderService

- (void)openPlayWithConfig:(id)arg0 members:(id)arg1 extraParams:(id)arg2 callback:(id /* block */)arg3;
- (void)invitePlayWithConfig:(id)arg0 callback:(id /* block */)arg1;
- (void)invitePlayWithInviteType:(int)arg0 callback:(id /* block */)arg1;
- (void)finishPlayWithReason:(long long)arg0 isManually:(BOOL)arg1;
- (void)requestPlayStateTransition:(long long)arg0 stage:(long long)arg1;
- (void)requestBattleOnceMoreReplyWithInviterId:(id)arg0 inviteType:(int)arg1 toMultiPKMode:(int)arg2 isAccept:(BOOL)arg3;
- (void)checkCacheBattleMessageIfNeed;
- (void)changeToMultiPKModeWithBattleConfig:(id)arg0 callback:(id /* block */)arg1;
- (void)changeMultiPKTeamWithBattleConfig:(id)arg0 callback:(id /* block */)arg1;
- (void)askPropInfoNotifyWithNotifyType:(unsigned long long)arg0 callback:(id /* block */)arg1;

@end
