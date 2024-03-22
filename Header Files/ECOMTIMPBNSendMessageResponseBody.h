//
//     Generated by private class-dump
//

@class NSString, ECOMTIMPBNConversationInfoV2;

@interface ECOMTIMPBNSendMessageResponseBody : GPBMessage

@property (nonatomic) long long serverMessageId;
@property (nonatomic) BOOL hasServerMessageId;
@property (copy, nonatomic) NSString *extraInfo;
@property (nonatomic) BOOL hasExtraInfo;
@property (nonatomic) int status;
@property (nonatomic) BOOL hasStatus;
@property (copy, nonatomic) NSString *clientMessageId;
@property (nonatomic) BOOL hasClientMessageId;
@property (nonatomic) long long checkCode;
@property (nonatomic) BOOL hasCheckCode;
@property (copy, nonatomic) NSString *checkMessage;
@property (nonatomic) BOOL hasCheckMessage;
@property (copy, nonatomic) NSString *filteredContent;
@property (nonatomic) BOOL hasFilteredContent;
@property (nonatomic) BOOL isAsyncSend;
@property (nonatomic) BOOL hasIsAsyncSend;
@property (copy, nonatomic) NSString *newTicket;
@property (nonatomic) BOOL hasNewTicket;
@property (retain, nonatomic) ECOMTIMPBNConversationInfoV2 *conversation;
@property (nonatomic) BOOL hasConversation;

+ (id)descriptor;

@end