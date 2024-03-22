//
//     Generated by private class-dump
//

@class NSMutableDictionary, IESLiveChatReplyRespInfo, HTSLiveImage, HTSLiveSuffixText;

@interface HTSLivePublicAreaCommon : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveImage *userLabel;
@property (nonatomic) BOOL hasUserLabel;
@property (nonatomic) long long userConsumeInRoom;
@property (nonatomic) long long userSendGiftCntInRoom;
@property (nonatomic) long long individualPriority;
@property (retain, nonatomic) NSMutableDictionary *individualStrategyResult;
@property (readonly, nonatomic) unsigned long long individualStrategyResult_Count;
@property (nonatomic) long long supportPin;
@property (retain, nonatomic) HTSLiveSuffixText *suffixText;
@property (nonatomic) BOOL hasSuffixText;
@property (nonatomic) int imAction;
@property (nonatomic) BOOL forbiddenProfile;
@property (retain, nonatomic) IESLiveChatReplyRespInfo *replyResp;
@property (nonatomic) BOOL hasReplyResp;
@property (retain, nonatomic) NSMutableDictionary *trackingParams;
@property (readonly, nonatomic) unsigned long long trackingParams_Count;
@property (nonatomic) long long isFeatured;
@property (nonatomic) BOOL needFilterDisplay;

+ (id)descriptor;

@end