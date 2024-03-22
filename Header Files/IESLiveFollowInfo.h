//
//     Generated by private class-dump
//

@class NSString, NSMutableArray;

@interface IESLiveFollowInfo : IESLivePBBaseMessage

@property (nonatomic) long long followingCount;
@property (nonatomic) BOOL followingCountEnable;
@property (nonatomic) long long followerCount;
@property (nonatomic) BOOL followerCountEnable;
@property (nonatomic) BOOL followerListEnable;
@property (nonatomic) long long followStatus;
@property (retain, nonatomic) NSMutableArray *accountsArray;
@property (readonly, nonatomic) unsigned long long accountsArray_Count;
@property (nonatomic) long long mutualFollowCount;
@property (copy, nonatomic) NSString *remarkName;
@property (copy, nonatomic) NSString *followerCountStr;
@property (copy, nonatomic) NSString *followingCountStr;
@property (nonatomic) BOOL invalidFollowStatus;

+ (id)descriptor;

- (BOOL)isFollowed;
- (BOOL)isFollow;

@end