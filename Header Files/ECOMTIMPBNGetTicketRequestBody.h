//
//     Generated by private class-dump
//

@class NSMutableDictionary;

@interface ECOMTIMPBNGetTicketRequestBody : GPBMessage

@property (nonatomic) int ticketType;
@property (nonatomic) BOOL hasTicketType;
@property (nonatomic) int conversationType;
@property (nonatomic) BOOL hasConversationType;
@property (nonatomic) long long toId;
@property (nonatomic) BOOL hasToId;
@property (nonatomic) long long conversationShortId;
@property (nonatomic) BOOL hasConversationShortId;
@property (retain, nonatomic) NSMutableDictionary *ext;
@property (readonly, nonatomic) unsigned long long ext_Count;
@property (nonatomic) int customedConversationType;
@property (nonatomic) BOOL hasCustomedConversationType;

+ (id)descriptor;

@end