//
//     Generated by private class-dump
//

@class ECOMTIMPBNStrangerInfo, NSString, ECOMTIMPBNConvUnreadUnion, NSMutableArray;

@interface ECOMTIMPBNConversationRecentMessage : GPBMessage

@property (nonatomic) long long conversationShortId;
@property (nonatomic) BOOL hasConversationShortId;
@property (retain, nonatomic) NSMutableArray *messagesArray;
@property (readonly, nonatomic) unsigned long long messagesArray_Count;
@property (nonatomic) long long version;
@property (nonatomic) BOOL hasVersion;
@property (nonatomic) int badgeCount;
@property (nonatomic) BOOL hasBadgeCount;
@property (copy, nonatomic) NSString *conversationId;
@property (nonatomic) BOOL hasConversationId;
@property (retain, nonatomic) NSMutableArray *extMessagesArray;
@property (readonly, nonatomic) unsigned long long extMessagesArray_Count;
@property (retain, nonatomic) ECOMTIMPBNStrangerInfo *strangerInfo;
@property (nonatomic) BOOL hasStrangerInfo;
@property (retain, nonatomic) NSMutableArray *muteBadgeCountInfosArray;
@property (readonly, nonatomic) unsigned long long muteBadgeCountInfosArray_Count;
@property (retain, nonatomic) NSMutableArray *hintInfosArray;
@property (readonly, nonatomic) unsigned long long hintInfosArray_Count;
@property (retain, nonatomic) ECOMTIMPBNConvUnreadUnion *convUnreadUnion;
@property (nonatomic) BOOL hasConvUnreadUnion;

+ (id)descriptor;

@end
