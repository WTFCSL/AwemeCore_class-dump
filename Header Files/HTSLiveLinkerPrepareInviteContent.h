//
//     Generated by private class-dump
//

@class HTSLiveText, NSString, HTSLiveUser;

@interface HTSLiveLinkerPrepareInviteContent : IESLivePBBaseMessage

@property (nonatomic) long long fromUserId;
@property (nonatomic) long long fromRoomId;
@property (nonatomic) long long toUserId;
@property (retain, nonatomic) HTSLiveUser *invitorUser;
@property (nonatomic) BOOL hasInvitorUser;
@property (retain, nonatomic) HTSLiveText *content;
@property (nonatomic) BOOL hasContent;
@property (copy, nonatomic) NSString *source;

+ (id)descriptor;

@end
