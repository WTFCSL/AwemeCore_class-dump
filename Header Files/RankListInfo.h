//
//     Generated by private class-dump
//

@class HTSLiveUser;

@interface RankListInfo : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveUser *userInfo;
@property (nonatomic) BOOL hasUserInfo;
@property (nonatomic) long long score;
@property (nonatomic) int onlineStatus;

+ (id)descriptor;

@end