//
//     Generated by private class-dump
//

@class NSString, NSMutableArray, TIMXPBNConvUnreadUnion;

@interface TIMXPBNMarkConversationReadRequestBody : GPBMessage

@property (copy, nonatomic) NSString *conversationId;
@property (nonatomic) BOOL hasConversationId;
@property (nonatomic) long long conversationShortId;
@property (nonatomic) BOOL hasConversationShortId;
@property (nonatomic) int conversationType;
@property (nonatomic) BOOL hasConversationType;
@property (nonatomic) long long readMessageIndex;
@property (nonatomic) BOOL hasReadMessageIndex;
@property (nonatomic) long long convUnreadCount;
@property (nonatomic) BOOL hasConvUnreadCount;
@property (nonatomic) long long totalUnreadCount;
@property (nonatomic) BOOL hasTotalUnreadCount;
@property (nonatomic) long long readMessageIndexV2;
@property (nonatomic) BOOL hasReadMessageIndexV2;
@property (nonatomic) int readBadgeCount;
@property (nonatomic) BOOL hasReadBadgeCount;
@property (copy, nonatomic) NSString *ticket;
@property (nonatomic) BOOL hasTicket;
@property (nonatomic) long long serverMessageId;
@property (nonatomic) BOOL hasServerMessageId;
@property (retain, nonatomic) NSMutableArray *muteReadBadgeCountInfosArray;
@property (readonly, nonatomic) unsigned long long muteReadBadgeCountInfosArray_Count;
@property (nonatomic) long long subConversationShortId;
@property (nonatomic) BOOL hasSubConversationShortId;
@property (retain, nonatomic) TIMXPBNConvUnreadUnion *convUnreadUnion;
@property (nonatomic) BOOL hasConvUnreadUnion;

+ (id)descriptor;

@end
