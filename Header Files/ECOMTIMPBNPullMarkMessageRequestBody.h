//
//     Generated by private class-dump
//

@class NSString;

@interface ECOMTIMPBNPullMarkMessageRequestBody : GPBMessage

@property (copy, nonatomic) NSString *conversationId;
@property (nonatomic) BOOL hasConversationId;
@property (nonatomic) int conversationType;
@property (nonatomic) BOOL hasConversationType;
@property (nonatomic) long long conversationShortId;
@property (nonatomic) BOOL hasConversationShortId;
@property (nonatomic) long long cursor;
@property (nonatomic) BOOL hasCursor;
@property (nonatomic) long long limit;
@property (nonatomic) BOOL hasLimit;
@property (nonatomic) BOOL asc;
@property (nonatomic) BOOL hasAsc;
@property (nonatomic) int actionType;
@property (nonatomic) BOOL hasActionType;
@property (nonatomic) long long tag;
@property (nonatomic) BOOL hasTag;
@property (nonatomic) BOOL clearUnreadCount;
@property (nonatomic) BOOL hasClearUnreadCount;

+ (id)descriptor;

@end
