//
//     Generated by private class-dump
//

@class NSString, NSMutableArray, ECOMTIMPBNConvUnreadUnion;

@interface ECOMTIMPBNDeleteConversationRequestBody : GPBMessage

@property (copy, nonatomic) NSString *conversationId;
@property (nonatomic) BOOL hasConversationId;
@property (nonatomic) long long conversationShortId;
@property (nonatomic) BOOL hasConversationShortId;
@property (nonatomic) int conversationType;
@property (nonatomic) BOOL hasConversationType;
@property (nonatomic) long long lastMessageIndex;
@property (nonatomic) BOOL hasLastMessageIndex;
@property (nonatomic) long long lastMessageIndexV2;
@property (nonatomic) BOOL hasLastMessageIndexV2;
@property (nonatomic) int badgeCount;
@property (nonatomic) BOOL hasBadgeCount;
@property (retain, nonatomic) NSMutableArray *muteBadgeCountInfosArray;
@property (readonly, nonatomic) unsigned long long muteBadgeCountInfosArray_Count;
@property (nonatomic) int deleteAction;
@property (nonatomic) BOOL hasDeleteAction;
@property (retain, nonatomic) ECOMTIMPBNConvUnreadUnion *convUnreadUnion;
@property (nonatomic) BOOL hasConvUnreadUnion;

+ (id)descriptor;

@end
