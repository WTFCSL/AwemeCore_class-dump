//
//     Generated by private class-dump
//

@class HTSLiveRoomBattleProcessWaitingBattleContent, HTSLiveRoomBattleProcessSelectGuestsContent;

@interface HTSLiveRoomBattleProcessInfo : IESLivePBBaseMessage

@property (nonatomic) int status;
@property (readonly, nonatomic) int contentOneOfCase;
@property (retain, nonatomic) HTSLiveRoomBattleProcessSelectGuestsContent *selectGuestsContent;
@property (retain, nonatomic) HTSLiveRoomBattleProcessWaitingBattleContent *waitingBattleContent;

+ (id)descriptor;

@end
