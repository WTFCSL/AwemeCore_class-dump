//
//     Generated by private class-dump
//

@class NSString, NSMutableArray, HTSLiveUser;

@interface BattleArimesRanklistResult_UserInfo : IESLivePBBaseMessage

@property (nonatomic) long long score;
@property (retain, nonatomic) HTSLiveUser *user;
@property (nonatomic) BOOL hasUser;
@property (retain, nonatomic) NSMutableArray *tagsArray;
@property (readonly, nonatomic) unsigned long long tagsArray_Count;
@property (copy, nonatomic) NSString *scoreBlurText;
@property (nonatomic) int rankStatus;
@property (copy, nonatomic) NSString *subDes;
@property (copy, nonatomic) NSString *appName;

+ (id)descriptor;

@end