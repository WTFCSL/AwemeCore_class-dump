//
//     Generated by private class-dump
//

@class GPBInt64Array, NSMutableArray;

@interface TIMXPBNMessagesPerUserResponseBody : GPBMessage

@property (retain, nonatomic) NSMutableArray *messagesArray;
@property (readonly, nonatomic) unsigned long long messagesArray_Count;
@property (nonatomic) long long nextCursor;
@property (nonatomic) BOOL hasNextCursor;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) BOOL hasHasMore;
@property (nonatomic) long long nextInterval;
@property (nonatomic) BOOL hasNextInterval;
@property (nonatomic) long long nextConversationVersion;
@property (nonatomic) BOOL hasNextConversationVersion;
@property (retain, nonatomic) NSMutableArray *conversationBadgeCountArray;
@property (readonly, nonatomic) unsigned long long conversationBadgeCountArray_Count;
@property (nonatomic) long long nextCmdIndex;
@property (nonatomic) BOOL hasNextCmdIndex;
@property (retain, nonatomic) GPBInt64Array *hasmoreMessageConvListArray;
@property (readonly, nonatomic) unsigned long long hasmoreMessageConvListArray_Count;

+ (id)descriptor;

@end
