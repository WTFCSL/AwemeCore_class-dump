//
//     Generated by private class-dump
//

@class HTSLiveRoomBattleProcessInfo;

@interface HTSLiveLinkmicRoomBattleMatchSuccessContent : IESLivePBBaseMessage

@property (nonatomic) int matchType;
@property (retain, nonatomic) HTSLiveRoomBattleProcessInfo *processInfo;
@property (nonatomic) BOOL hasProcessInfo;
@property (nonatomic) long long rivalAnchorId;
@property (nonatomic) long long rivalUserCount;
@property (nonatomic) long long rivalChatRoomRank;
@property (nonatomic) long long rivalFollowStatus;
@property (nonatomic) long long inviteSource;
@property (nonatomic) long long operatorUserId;

+ (id)descriptor;

@end
