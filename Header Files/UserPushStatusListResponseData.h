//
//     Generated by private class-dump
//

@class NSMutableArray;

@interface UserPushStatusListResponseData : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *usersArray;
@property (readonly, nonatomic) unsigned long long usersArray_Count;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) int total;

+ (id)descriptor;

@end
