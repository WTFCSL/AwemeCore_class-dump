//
//     Generated by private class-dump
//

@class TeamTask, HTSLiveCommon, NSString;

@interface HTSLiveBattleTeamTaskMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (retain, nonatomic) TeamTask *teamTask;
@property (nonatomic) BOOL hasTeamTask;
@property (copy, nonatomic) NSString *teamTaskJson;

+ (id)descriptor;

@end