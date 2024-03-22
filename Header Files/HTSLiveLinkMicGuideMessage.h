//
//     Generated by private class-dump
//

@class HTSLiveNormalPaidLinkmicMigrateToPlayContent, HTSLiveLinkMicGuideMessage_AnchorInfo, HTSLivePlayModeGuideBubbleContent, HTSLivePKLinkBubbleContent, HTSLiveGuestBattleBubbleGuideContent, HTSLiveCommon, HTSLiveJoinGroupChatGuideContent, HTSLiveCreateTeamfightGuideContent, HTSLiveCreateGroupChatGuideContent, HTSLiveCallToLinkmicContent, HTSLiveKtvAddSongGuideContent, HTSLiveLinkMicGuideMessage_FastMatchGuideline, HTSLiveNormalPaidLinkmicExplainCardContent, HTSLiveLinkmicFollowEffectContent;

@interface HTSLiveLinkMicGuideMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (retain, nonatomic) HTSLiveLinkMicGuideMessage_AnchorInfo *anchorInfo;
@property (nonatomic) BOOL hasAnchorInfo;
@property (nonatomic) long long cueThreshold;
@property (nonatomic) long long guidelineType;
@property (retain, nonatomic) HTSLiveLinkMicGuideMessage_FastMatchGuideline *fastMatchGuideline;
@property (nonatomic) BOOL hasFastMatchGuideline;
@property (readonly, nonatomic) int contentOneOfCase;
@property (retain, nonatomic) HTSLiveCallToLinkmicContent *callToLinkmicContent;
@property (retain, nonatomic) HTSLiveKtvAddSongGuideContent *ktvAddSongGuideContent;
@property (retain, nonatomic) HTSLiveCreateGroupChatGuideContent *createGroupChatGuideContent;
@property (retain, nonatomic) HTSLiveJoinGroupChatGuideContent *joinGroupChatGuideContent;
@property (retain, nonatomic) HTSLiveGuestBattleBubbleGuideContent *guestBattleBubbleGuideContent;
@property (retain, nonatomic) HTSLiveCreateTeamfightGuideContent *createTeamfightGuideContent;
@property (retain, nonatomic) HTSLiveNormalPaidLinkmicExplainCardContent *normalPaidLinkmicExplainCardContent;
@property (retain, nonatomic) HTSLiveNormalPaidLinkmicMigrateToPlayContent *normalPaidLinkmicMigrateToPlayContent;
@property (retain, nonatomic) HTSLiveLinkmicFollowEffectContent *linkmicFollowEffectContent;
@property (retain, nonatomic) HTSLivePKLinkBubbleContent *pkLinkBubbleContent;
@property (retain, nonatomic) HTSLivePlayModeGuideBubbleContent *playModeGuideBubbleContent;

+ (id)descriptor;

@end
