//
//     Generated by private class-dump
//

@class NSString, NSMutableArray, HTSLiveTeamfightRoomBattleContent;

@interface HTSLiveLinkmicTeamfightInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *dataSource;
@property (nonatomic) long long teamfightId;
@property (copy, nonatomic) NSString *teamfightIdStr;
@property (nonatomic) int type;
@property (nonatomic) int status;
@property (nonatomic) long long startTime;
@property (nonatomic) long long duration;
@property (nonatomic) long long punishStartTime;
@property (nonatomic) long long punishDuration;
@property (retain, nonatomic) NSMutableArray *teamInfosArray;
@property (readonly, nonatomic) unsigned long long teamInfosArray_Count;
@property (nonatomic) long long winTeamId;
@property (nonatomic) long long currentTimeMs;
@property (nonatomic) int pkBarStyle;
@property (nonatomic) long long showStartTime;
@property (nonatomic) long long initiatorUserId;
@property (nonatomic) int scoreType;
@property (nonatomic) long long showDuration;
@property (nonatomic) long long initiatorAnchorId;
@property (copy, nonatomic) NSString *winTeamIdStr;
@property (copy, nonatomic) NSString *dressId;
@property (nonatomic) int teamBattleTeamType;
@property (readonly, nonatomic) int contentOneOfCase;
@property (retain, nonatomic) HTSLiveTeamfightRoomBattleContent *roomBattleContent;

+ (id)descriptor;

- (void)setDataSource:(id)arg0;
- (id)dataSource;

@end