//
//     Generated by private class-dump
//

@class NSString, NSMutableArray;

@interface HTSLiveInteractOpenFollowingMessage_FollowItem : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *appUserInfoArray;
@property (readonly, nonatomic) unsigned long long appUserInfoArray_Count;
@property (copy, nonatomic) NSString *secNickName;
@property (copy, nonatomic) NSString *secAvatarURL;
@property (nonatomic) int action;
@property (nonatomic) int timestamp;

+ (id)descriptor;

@end
