//
//     Generated by private class-dump
//

@class NSMutableArray;

@interface ECOMTIMPBNFriendInitResponseBody : GPBMessage

@property (retain, nonatomic) NSMutableArray *friendListArray;
@property (readonly, nonatomic) unsigned long long friendListArray_Count;
@property (nonatomic) long long friendTotalCount;
@property (nonatomic) BOOL hasFriendTotalCount;
@property (nonatomic) long long friendNextCursor;
@property (nonatomic) BOOL hasFriendNextCursor;
@property (nonatomic) BOOL friendHasMore;
@property (nonatomic) BOOL hasFriendHasMore;
@property (retain, nonatomic) NSMutableArray *applyListArray;
@property (readonly, nonatomic) unsigned long long applyListArray_Count;
@property (nonatomic) long long applyTotalCount;
@property (nonatomic) BOOL hasApplyTotalCount;
@property (nonatomic) long long applyNextCursor;
@property (nonatomic) BOOL hasApplyNextCursor;
@property (nonatomic) long long applyUnreadCount;
@property (nonatomic) BOOL hasApplyUnreadCount;
@property (nonatomic) BOOL applyHasMore;
@property (nonatomic) BOOL hasApplyHasMore;
@property (nonatomic) long long commandCursor;
@property (nonatomic) BOOL hasCommandCursor;

+ (id)descriptor;

@end
