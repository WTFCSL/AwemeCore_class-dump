//
//     Generated by private class-dump
//

@class NSMutableArray;

@interface ECOMTIMPBNGetFriendReceiveApplyListResponseBody : GPBMessage

@property (nonatomic) long long nextCursor;
@property (nonatomic) BOOL hasNextCursor;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) BOOL hasHasMore;
@property (retain, nonatomic) NSMutableArray *userListArray;
@property (readonly, nonatomic) unsigned long long userListArray_Count;
@property (nonatomic) long long totalCount;
@property (nonatomic) BOOL hasTotalCount;
@property (nonatomic) long long readIndex;
@property (nonatomic) BOOL hasReadIndex;
@property (nonatomic) long long unreadCount;
@property (nonatomic) BOOL hasUnreadCount;

+ (id)descriptor;

@end
