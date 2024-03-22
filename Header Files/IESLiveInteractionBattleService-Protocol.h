//
//     Generated by private class-dump
//

@class NSString, IESLiveInteractionBattleAPI;

@protocol IESLiveInteractionBattleService <IESLiveInteractionModuleBattleInterface>

@property (readonly, nonatomic) IESLiveInteractionBattleAPI *battleApi;
@property (readonly, nonatomic) int redTeamProfitEggStatus;
@property (readonly, copy, nonatomic) NSString *starWishRequestPage;

- (double)enterRoomTimestamp;
- (void)monitorWithAnimationFailure:(id)arg0 error:(id)arg1 module:(unsigned long long)arg2 animType:(long long)arg3;
- (long long)teamFightSignWithUserPosition:(int)arg0 teamFightType:(long long)arg1;
- (int)userPositionWithUserId:(id)arg0;
- (void)recordTimeStampWithKeyIfNeed:(id)arg0;
- (void)checkShouldMonitorEnterRoom;
- (void)openStarwishPanelWithRequestPage:(id)arg0;
- (void)cleanStarwishRequestPage;
- (id)battleApi;
- (int)redTeamProfitEggStatus;
- (id)starWishRequestPage;

@end