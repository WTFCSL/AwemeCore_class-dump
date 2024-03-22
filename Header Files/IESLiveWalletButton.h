//
//     Generated by private class-dump
//

@class NSString, IESLiveWalletInviteFriendInfo;

@interface IESLiveWalletButton : IESLivePBBaseMessage

@property (nonatomic) int buttonStyleType;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) int jumpType;
@property (copy, nonatomic) NSString *linkURL;
@property (nonatomic) long long roomId;
@property (copy, nonatomic) NSString *alertText;
@property (retain, nonatomic) IESLiveWalletInviteFriendInfo *inviteFriendInfo;
@property (nonatomic) BOOL hasInviteFriendInfo;

+ (id)descriptor;

@end