//
//     Generated by private class-dump
//

@class NSMutableArray;

@interface TIMXPBNConversationsListResponseBody : GPBMessage

@property (retain, nonatomic) NSMutableArray *conversationsArray;
@property (readonly, nonatomic) unsigned long long conversationsArray_Count;
@property (nonatomic) long long nextCursor;
@property (nonatomic) BOOL hasNextCursor;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) BOOL hasHasMore;
@property (retain, nonatomic) NSMutableArray *conversationV2ListArray;
@property (readonly, nonatomic) unsigned long long conversationV2ListArray_Count;

+ (id)descriptor;

@end
