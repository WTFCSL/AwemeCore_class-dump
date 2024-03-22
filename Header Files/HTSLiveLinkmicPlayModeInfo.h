//
//     Generated by private class-dump
//

@class IESLiveThemedCompetitionInfo, IESLiveNormalPaidLinkmicInfo, IESLiveAdventurePlayModeInfo, HTSLiveLinkmicStarWishInfo, HTSLiveInteractiveScreenCastInfo, IESLiveChorusInfo, HTSLiveLinkmicGameInfo, HTSLiveGuestBattleInfo, IESLiveSingingChallengeInfo, NSString, HTSLiveLinkmicTeamfightInfo, HTSLiveEnlargeGuestInfo, HTSLiveSelfDisciplineInfo, HTSLiveOrderSingInfoV2;

@interface HTSLiveLinkmicPlayModeInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *toast;
@property (retain, nonatomic) HTSLiveGuestBattleInfo *guestBattleInfo;
@property (nonatomic) BOOL hasGuestBattleInfo;
@property (retain, nonatomic) HTSLiveLinkmicTeamfightInfo *teamfightInfo;
@property (nonatomic) BOOL hasTeamfightInfo;
@property (retain, nonatomic) IESLiveNormalPaidLinkmicInfo *normalPaidLinkmicInfo;
@property (nonatomic) BOOL hasNormalPaidLinkmicInfo;
@property (retain, nonatomic) HTSLiveSelfDisciplineInfo *selfDisciplineInfo;
@property (nonatomic) BOOL hasSelfDisciplineInfo;
@property (retain, nonatomic) HTSLiveInteractiveScreenCastInfo *screenCastInfo;
@property (nonatomic) BOOL hasScreenCastInfo;
@property (retain, nonatomic) IESLiveThemedCompetitionInfo *themedCompetitionInfo;
@property (nonatomic) BOOL hasThemedCompetitionInfo;
@property (retain, nonatomic) IESLiveChorusInfo *chorusInfo;
@property (nonatomic) BOOL hasChorusInfo;
@property (retain, nonatomic) IESLiveAdventurePlayModeInfo *adventurePlayModeInfo;
@property (nonatomic) BOOL hasAdventurePlayModeInfo;
@property (retain, nonatomic) HTSLiveOrderSingInfoV2 *orderSingInfo;
@property (nonatomic) BOOL hasOrderSingInfo;
@property (retain, nonatomic) IESLiveSingingChallengeInfo *singingChallengeInfo;
@property (nonatomic) BOOL hasSingingChallengeInfo;
@property (retain, nonatomic) HTSLiveLinkmicGameInfo *linkmicGameInfo;
@property (nonatomic) BOOL hasLinkmicGameInfo;
@property (retain, nonatomic) HTSLiveLinkmicStarWishInfo *starWishInfo;
@property (nonatomic) BOOL hasStarWishInfo;
@property (retain, nonatomic) HTSLiveEnlargeGuestInfo *enlargeGuestInfo;
@property (nonatomic) BOOL hasEnlargeGuestInfo;

+ (id)descriptor;

@end
