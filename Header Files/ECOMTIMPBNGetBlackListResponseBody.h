//
//     Generated by private class-dump
//

@class NSMutableArray;

@interface ECOMTIMPBNGetBlackListResponseBody : GPBMessage

@property (nonatomic) long long nextCursor;
@property (nonatomic) BOOL hasNextCursor;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) BOOL hasHasMore;
@property (retain, nonatomic) NSMutableArray *blackUserListArray;
@property (readonly, nonatomic) unsigned long long blackUserListArray_Count;
@property (nonatomic) long long totalCount;
@property (nonatomic) BOOL hasTotalCount;

+ (id)descriptor;

@end
