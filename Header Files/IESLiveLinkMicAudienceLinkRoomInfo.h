//
//     Generated by private class-dump
//

@class NSString, HTSLiveInviteRoomInfo, HTSLiveUser;

@interface IESLiveLinkMicAudienceLinkRoomInfo : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveUser *user;
@property (nonatomic) BOOL hasUser;
@property (retain, nonatomic) HTSLiveInviteRoomInfo *roomInfo;
@property (nonatomic) BOOL hasRoomInfo;
@property (nonatomic) int inviteStatus;
@property (copy, nonatomic) NSString *introductionContent;

+ (id)descriptor;

@end