//
//     Generated by private class-dump
//

@class TIMXPBNNotifyGetConversationListResponseBody, TIMXPBNGetRecentMessageRespBody, TIMXPBNGetCmdMessageRespBody, TIMXPBNConversationReadInfoRespBody, TIMXPBNConsultGetConversationListResponseBody;

@interface TIMXPBNGetUserMessageResponseBody : GPBMessage

@property (retain, nonatomic) TIMXPBNGetRecentMessageRespBody *messages;
@property (nonatomic) BOOL hasMessages;
@property (retain, nonatomic) TIMXPBNGetCmdMessageRespBody *cmdMessages;
@property (nonatomic) BOOL hasCmdMessages;
@property (nonatomic) BOOL hasStrangerMessage;
@property (nonatomic) BOOL hasHasStrangerMessage;
@property (retain, nonatomic) TIMXPBNConversationReadInfoRespBody *readInfo;
@property (nonatomic) BOOL hasReadInfo;
@property (retain, nonatomic) TIMXPBNConsultGetConversationListResponseBody *consultMessages;
@property (nonatomic) BOOL hasConsultMessages;
@property (retain, nonatomic) TIMXPBNNotifyGetConversationListResponseBody *notifyMessages;
@property (nonatomic) BOOL hasNotifyMessages;

+ (id)descriptor;

@end