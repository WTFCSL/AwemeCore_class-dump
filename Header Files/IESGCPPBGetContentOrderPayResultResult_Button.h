//
//     Generated by private class-dump
//

@class NSString, IESGCPPBInviteFriendInfo;

@interface IESGCPPBGetContentOrderPayResultResult_Button : GPBMessage

@property (nonatomic) int buttonStyleType;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) int jumpType;
@property (copy, nonatomic) NSString *linkURL;
@property (nonatomic) long long roomId;
@property (retain, nonatomic) IESGCPPBInviteFriendInfo *inviteFriendInfo;
@property (nonatomic) BOOL hasInviteFriendInfo;

+ (id)descriptor;

@end
