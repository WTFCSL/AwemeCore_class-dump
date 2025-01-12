//
//     Generated by private class-dump
//

@class NSNumber, NSString, NSDictionary;

@interface IESLiveScreencastLinkerModel : IESLiveDynamicModel {
    NSNumber *_receiveUID;
    long long _endReason;
}

@property (retain, nonatomic) NSNumber *channelID;
@property (retain, nonatomic) NSNumber *inviteUID;
@property (copy, nonatomic) NSString *inviteSecUID;
@property (retain, nonatomic) NSNumber *receiveUID;
@property (copy, nonatomic) NSString *linkmicID;
@property (nonatomic) BOOL initiativeEnd;
@property (copy, nonatomic) NSString *requestID;
@property (nonatomic) BOOL didLeaveChannel;
@property (nonatomic) unsigned long long inviteeListType;
@property (nonatomic) long long endReason;
@property (nonatomic) unsigned long long vendor;
@property (copy, nonatomic) NSDictionary *rtcExtraInfo;

- (id)receiveUID;
- (void)resolveWithInviteRespnse:(id)arg0;
- (void)resolveFromReplyResponse:(id)arg0;
- (void)setReceiveUID:(id)arg0;
- (void)resolveWithInviteMessage:(id)arg0 extra:(id)arg1;
- (void)resolveFromReplyMessage:(id)arg0;
- (id)transformInviteeListToString;
- (void).cxx_destruct;
- (long long)endReason;
- (void)setEndReason:(long long)arg0;

@end
