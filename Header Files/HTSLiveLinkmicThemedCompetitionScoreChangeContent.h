//
//     Generated by private class-dump
//

@class HTSLiveLinkmicThemedCompetitionScoreChangeContent_WinContent, IESLiveThemedCompetitionInfo, HTSLiveLinkmicQuickInteract;

@interface HTSLiveLinkmicThemedCompetitionScoreChangeContent : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveThemedCompetitionInfo *info;
@property (nonatomic) BOOL hasInfo;
@property (nonatomic) long long scoreChangeUserId;
@property (retain, nonatomic) HTSLiveLinkmicQuickInteract *quickInteract;
@property (nonatomic) BOOL hasQuickInteract;
@property (retain, nonatomic) HTSLiveLinkmicThemedCompetitionScoreChangeContent_WinContent *newAdvanceUser;
@property (nonatomic) BOOL hasNewAdvanceUser;

+ (id)descriptor;

@end
