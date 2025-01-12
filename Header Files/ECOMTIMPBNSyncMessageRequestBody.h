//
//     Generated by private class-dump
//

@class NSString, ECOMTIMPBNSyncContent;

@interface ECOMTIMPBNSyncMessageRequestBody : GPBMessage

@property (copy, nonatomic) NSString *conversationId;
@property (nonatomic) BOOL hasConversationId;
@property (nonatomic) int conversationType;
@property (nonatomic) BOOL hasConversationType;
@property (nonatomic) long long conversationShortId;
@property (nonatomic) BOOL hasConversationShortId;
@property (retain, nonatomic) ECOMTIMPBNSyncContent *syncContent;
@property (nonatomic) BOOL hasSyncContent;
@property (nonatomic) int messageType;
@property (nonatomic) BOOL hasMessageType;
@property (copy, nonatomic) NSString *ticket;
@property (nonatomic) BOOL hasTicket;
@property (copy, nonatomic) NSString *clientMessageId;
@property (nonatomic) BOOL hasClientMessageId;
@property (nonatomic) long long targetMessageSender;
@property (nonatomic) BOOL hasTargetMessageSender;

+ (id)descriptor;

@end
