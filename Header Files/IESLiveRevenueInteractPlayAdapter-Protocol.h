//
//     Generated by private class-dump
//

@protocol IESLiveRevenueInteractPlayAdapter

- (void)setActionFromSource:(long long)arg0;
- (void)resetActionFromSource;
- (void)trackPKEndWithReason:(int)arg0 isCutOff:(BOOL)arg1 isInitiator:(BOOL)arg2;
- (void)trackPKStartFromInteracting:(BOOL)arg0;
- (void)trackPKEndOnPlayDestory;
- (void)trackBattleInviteePanelShowIsOnceMore:(BOOL)arg0 inviteMode:(id)arg1 extra:(id)arg2;
- (void)trackPlayConnectionInvited:(BOOL)arg0 isOnceMore:(BOOL)arg1 inviteMode:(id)arg2 extra:(id)arg3;
- (void)addPlayTimes;

@end
