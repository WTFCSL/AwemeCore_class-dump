//
//     Generated by private class-dump
//

@class HTSLiveLinkmicChatMatchStartCountDownContent, HTSLiveLinkmicChatMatchUserJoinContent, HTSLiveCommon, HTSLiveLinkmicChatMatchFinishGroupContent, HTSLiveLinkmicChatMatchUserLeaveContent, HTSLiveLinkmicChatMatchResultContent;

@interface HTSLiveLinkmicChatMatchMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) int msgType;
@property (readonly, nonatomic) int contentOneOfCase;
@property (retain, nonatomic) HTSLiveLinkmicChatMatchUserJoinContent *chatMatchUserJoinContent;
@property (retain, nonatomic) HTSLiveLinkmicChatMatchUserLeaveContent *chatMatchUserLeaveContent;
@property (retain, nonatomic) HTSLiveLinkmicChatMatchFinishGroupContent *chatMatchFinishGroupContent;
@property (retain, nonatomic) HTSLiveLinkmicChatMatchResultContent *chatMatchResultContent;
@property (retain, nonatomic) HTSLiveLinkmicChatMatchStartCountDownContent *chatMatchStartCountDownContent;

+ (id)descriptor;

@end
