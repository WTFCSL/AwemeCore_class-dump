//
//     Generated by private class-dump
//

@class HTSLiveLinkmicProfitInteractiveScreenCastOpenContent, HTSLiveLinkmicProfitNormalPaidLinkmicCloseContent, HTSLiveLinkmicProfitAudioSubtitleCloseContent, HTSLiveLinkmicProfitBidPaidLinkmicStartContent, HTSLiveLinkmicProfitBidPaidLinkmicTurnOffContent, HTSLiveLinkmicProfitInteractiveScreenCastCloseContent, HTSLiveLinkmicProfitBidPaidLinkmicBidContent, HTSLiveLinkmicProfitBidPaidLinkmicTurnOnContent, HTSLiveLinkmicProfitBidPaidLinkmicAbortContent, HTSLiveLinkmicProfitNormalPaidLinkmicOpenContent, HTSLiveLinkmicRoomBattleMatchSuccessContent, HTSLiveLinkmicRoomBattleReplyContent, HTSLiveLinkmicProfitBidPaidLinkmicTerminateContent, HTSLiveLinkmicGameBarrageRtcRoomCreateContent, HTSLiveLinkmicRoomBattleInviteContent, HTSLiveLinkmicProfitNormalPaidLinkmicAddPriceContent, HTSLiveLinkmicGiftRecipientContent, HTSLiveLinkmicProfitAudioSubtitleCheckInContent, HTSLiveLinkmicProfitAudioSubtitleStartContent, HTSLiveLinkmicProfitBidPaidLinkmicDealContent, HTSLiveLinkmicGameBarrageStartContent, HTSLiveCommon, HTSLiveLinkmicGameBarrageStopContent, HTSLiveLinkmicProfitNormalPaidLinkmicConfigUpdateContent;

@interface HTSLiveLinkmicProfitMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) int msgType;
@property (readonly, nonatomic) int contentOneOfCase;
@property (retain, nonatomic) HTSLiveLinkmicProfitBidPaidLinkmicBidContent *bidPaidLinkmicBidContent;
@property (retain, nonatomic) HTSLiveLinkmicProfitBidPaidLinkmicDealContent *bidPaidLinkmicDealContent;
@property (retain, nonatomic) HTSLiveLinkmicProfitBidPaidLinkmicAbortContent *bidPaidLinkmicAbortContent;
@property (retain, nonatomic) HTSLiveLinkmicProfitBidPaidLinkmicStartContent *bidPaidLinkmicStartContent;
@property (retain, nonatomic) HTSLiveLinkmicProfitBidPaidLinkmicTerminateContent *bidPaidLinkmicTerminateContent;
@property (retain, nonatomic) HTSLiveLinkmicProfitNormalPaidLinkmicOpenContent *normalPaidLinkmicOpenContent;
@property (retain, nonatomic) HTSLiveLinkmicProfitNormalPaidLinkmicCloseContent *normalPaidLinkmicCloseContent;
@property (retain, nonatomic) HTSLiveLinkmicProfitNormalPaidLinkmicConfigUpdateContent *normalPaidLinkmicConfigUpdateContent;
@property (retain, nonatomic) HTSLiveLinkmicProfitBidPaidLinkmicTurnOnContent *bidPaidLinkmicTurnOnContent;
@property (retain, nonatomic) HTSLiveLinkmicProfitBidPaidLinkmicTurnOffContent *bidPaidLinkmicTurnOffContent;
@property (retain, nonatomic) HTSLiveLinkmicRoomBattleInviteContent *roomBattleInviteContent;
@property (retain, nonatomic) HTSLiveLinkmicRoomBattleReplyContent *roomBattleReplyContent;
@property (retain, nonatomic) HTSLiveLinkmicProfitNormalPaidLinkmicAddPriceContent *normalPaidLinkmicAddPriceContent;
@property (retain, nonatomic) HTSLiveLinkmicProfitInteractiveScreenCastOpenContent *interactiveScreenCastOpenContent;
@property (retain, nonatomic) HTSLiveLinkmicProfitInteractiveScreenCastCloseContent *interactiveScreenCastCloseContent;
@property (retain, nonatomic) HTSLiveLinkmicRoomBattleMatchSuccessContent *roomBattleMatchSuccessContent;
@property (retain, nonatomic) HTSLiveLinkmicGiftRecipientContent *giftRecipientContent;
@property (retain, nonatomic) HTSLiveLinkmicProfitAudioSubtitleCheckInContent *audioSubtitleCheckInContent;
@property (retain, nonatomic) HTSLiveLinkmicProfitAudioSubtitleStartContent *audioSubtitleStartContent;
@property (retain, nonatomic) HTSLiveLinkmicProfitAudioSubtitleCloseContent *audioSubtitleCloseContent;
@property (retain, nonatomic) HTSLiveLinkmicGameBarrageStartContent *gameBarrageStartConetent;
@property (retain, nonatomic) HTSLiveLinkmicGameBarrageStopContent *gameBarrageStopConetent;
@property (retain, nonatomic) HTSLiveLinkmicGameBarrageRtcRoomCreateContent *gameBarrageRtcRoomCreateConetent;

+ (id)descriptor;

@end
