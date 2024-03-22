//
//     Generated by private class-dump
//

@class HTSLiveLinkMicAdventurePairFinishContent, HTSLiveLinkMicAdventureCallCancelContent, HTSLiveLinkMicAdventurePairInfoChangeContent, HTSLiveLinkMicAdventureReplyContent, HTSLiveLinkMicAdventureFinishContent, HTSLiveLinkMicAdventureInviteContent, HTSLiveCommon, HTSLiveLinkMicAdventureStartContent, HTSLiveLinkMicAdventureCardContent, HTSLiveLinkMicAdventureCallReplyContent, HTSLiveLinkMicAdventureCallInviteContent, HTSLiveLinkMicAdventurePlayModeInfoChangeContent;

@interface HTSLiveLinkMicAdventureMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) int msgType;
@property (readonly, nonatomic) int contentOneOfCase;
@property (retain, nonatomic) HTSLiveLinkMicAdventureStartContent *startContent;
@property (retain, nonatomic) HTSLiveLinkMicAdventureFinishContent *finishContent;
@property (retain, nonatomic) HTSLiveLinkMicAdventureInviteContent *inviteContent;
@property (retain, nonatomic) HTSLiveLinkMicAdventureReplyContent *replyContent;
@property (retain, nonatomic) HTSLiveLinkMicAdventureCardContent *cardContent;
@property (retain, nonatomic) HTSLiveLinkMicAdventureCallInviteContent *callInviteContent;
@property (retain, nonatomic) HTSLiveLinkMicAdventureCallReplyContent *callReplyContent;
@property (retain, nonatomic) HTSLiveLinkMicAdventurePlayModeInfoChangeContent *playModeInfoChange;
@property (retain, nonatomic) HTSLiveLinkMicAdventurePairInfoChangeContent *pairInfoChange;
@property (retain, nonatomic) HTSLiveLinkMicAdventurePairFinishContent *pairFinishContent;
@property (retain, nonatomic) HTSLiveLinkMicAdventureCallCancelContent *callCancelContent;

+ (id)descriptor;

@end
