//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary, NSMutableArray, TIMXPBNMessageBody;

@interface TIMXPBNStrangerConversation : GPBMessage

@property (nonatomic) long long conversationShortId;
@property (nonatomic) BOOL hasConversationShortId;
@property (nonatomic) int unread;
@property (nonatomic) BOOL hasUnread;
@property (retain, nonatomic) TIMXPBNMessageBody *lastMessage;
@property (nonatomic) BOOL hasLastMessage;
@property (copy, nonatomic) NSString *conversationId;
@property (nonatomic) BOOL hasConversationId;
@property (retain, nonatomic) NSMutableArray *participantsArray;
@property (readonly, nonatomic) unsigned long long participantsArray_Count;
@property (nonatomic) int badgeCount;
@property (nonatomic) BOOL hasBadgeCount;
@property (retain, nonatomic) NSMutableDictionary *ext;
@property (readonly, nonatomic) unsigned long long ext_Count;

+ (id)descriptor;

@end