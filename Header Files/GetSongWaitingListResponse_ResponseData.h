//
//     Generated by private class-dump
//

@class NSString, NSMutableArray, IESLiveSongWaitingUser;

@interface GetSongWaitingListResponse_ResponseData : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *usersArray;
@property (readonly, nonatomic) unsigned long long usersArray_Count;
@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSString *nextCursor;
@property (nonatomic) long long totalCount;
@property (retain, nonatomic) IESLiveSongWaitingUser *ownUser;
@property (nonatomic) BOOL hasOwnUser;

+ (id)descriptor;

@end
