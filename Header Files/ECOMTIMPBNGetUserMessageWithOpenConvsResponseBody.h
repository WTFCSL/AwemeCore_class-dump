//
//     Generated by private class-dump
//

@class ECOMTIMPBNGetOpenConvsResponseBody, ECOMTIMPBNConversationReadInfoRespBody, ECOMTIMPBNGetRecentMessageRespBody, ECOMTIMPBNGetCmdMessageRespBody, ECOMTIMPBNConsultGetConversationListResponseBody, ECOMTIMPBNNotifyGetConversationListResponseBody;

@interface ECOMTIMPBNGetUserMessageWithOpenConvsResponseBody : GPBMessage

@property (retain, nonatomic) ECOMTIMPBNGetRecentMessageRespBody *messages;
@property (nonatomic) BOOL hasMessages;
@property (retain, nonatomic) ECOMTIMPBNGetCmdMessageRespBody *cmdMessages;
@property (nonatomic) BOOL hasCmdMessages;
@property (nonatomic) BOOL hasStrangerMessage;
@property (nonatomic) BOOL hasHasStrangerMessage;
@property (retain, nonatomic) ECOMTIMPBNConversationReadInfoRespBody *readInfo;
@property (nonatomic) BOOL hasReadInfo;
@property (retain, nonatomic) ECOMTIMPBNConsultGetConversationListResponseBody *consultMessages;
@property (nonatomic) BOOL hasConsultMessages;
@property (retain, nonatomic) ECOMTIMPBNNotifyGetConversationListResponseBody *notifyMessages;
@property (nonatomic) BOOL hasNotifyMessages;
@property (retain, nonatomic) ECOMTIMPBNGetOpenConvsResponseBody *openConvsBody;
@property (nonatomic) BOOL hasOpenConvsBody;

+ (id)descriptor;

@end
