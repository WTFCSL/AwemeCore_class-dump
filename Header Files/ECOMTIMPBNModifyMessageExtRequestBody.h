//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary;

@interface ECOMTIMPBNModifyMessageExtRequestBody : GPBMessage

@property (nonatomic) long long conversationShortId;
@property (nonatomic) BOOL hasConversationShortId;
@property (nonatomic) long long messageId;
@property (nonatomic) BOOL hasMessageId;
@property (copy, nonatomic) NSString *ticket;
@property (nonatomic) BOOL hasTicket;
@property (retain, nonatomic) NSMutableDictionary *ext;
@property (readonly, nonatomic) unsigned long long ext_Count;
@property (nonatomic) BOOL isEdited;
@property (nonatomic) BOOL hasIsEdited;
@property (copy, nonatomic) NSString *content;
@property (nonatomic) BOOL hasContent;
@property (nonatomic) int conversationType;
@property (nonatomic) BOOL hasConversationType;
@property (nonatomic) int messageType;
@property (nonatomic) BOOL hasMessageType;
@property (copy, nonatomic) NSString *conversationId;
@property (nonatomic) BOOL hasConversationId;

+ (id)descriptor;

@end