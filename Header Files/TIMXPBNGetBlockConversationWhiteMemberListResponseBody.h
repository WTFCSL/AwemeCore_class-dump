//
//     Generated by private class-dump
//

@class NSMutableArray;

@interface TIMXPBNGetBlockConversationWhiteMemberListResponseBody : GPBMessage

@property (nonatomic) long long nextCursor;
@property (nonatomic) BOOL hasNextCursor;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) BOOL hasHasMore;
@property (retain, nonatomic) NSMutableArray *whiteMemberListArray;
@property (readonly, nonatomic) unsigned long long whiteMemberListArray_Count;

+ (id)descriptor;

@end
