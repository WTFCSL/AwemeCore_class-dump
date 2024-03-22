//
//     Generated by private class-dump
//

@class NSNumber, NSString;

@interface IESLiveChatChannelLinkmicResponseWrapper : NSObject <IESLiveLinkmicLinkCreateContext, IESLiveLinkmicLinkCloseContext, IESLiveLinkmicLinkInviteContext, IESLiveLinkmicLinkPermitContext, IESLiveLinkmicJoinChannelContext, IESLiveLinkmicLeaveChannelContext, IESLiveLinkmicLinkApplyContext, IESLiveLinkmicKickoutContext, IESLiveLinkmicSilenceStatusContext, IESLiveLinkmicLinkReplyContext> {
    BOOL hasGeustLinkmicInfo;
    BOOL isInWaiting;
    BOOL hasMediaInfo;
    int replyType;
    unsigned long long vendor;
    NSNumber *channelID;
    NSString *linkmicID;
    NSString *promptString;
    NSString *rtcExtInfo;
    long long banAnchorUserId;
    id _responseObj;
}

@property (retain, nonatomic) id responseObj;
@property (readonly, nonatomic) unsigned long long vendor;
@property (copy, nonatomic) NSNumber *channelID;
@property (readonly, copy, nonatomic) NSString *linkmicID;
@property (readonly, copy, nonatomic) NSString *promptString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) long long banAnchorUserId;
@property (nonatomic) BOOL hasGeustLinkmicInfo;
@property (readonly, copy, nonatomic) NSString *rtcExtInfo;
@property (readonly, nonatomic) BOOL isInWaiting;
@property (readonly, nonatomic) BOOL hasMediaInfo;
@property (readonly, nonatomic) int replyType;

- (id)rtcExtInfo;
- (long long)silenceStatus;
- (id)inviterUID;
- (id)linkedUserList;
- (id)waitingUserList;
- (id)inviteeUID;
- (BOOL)isAgree;
- (id)applyUID;
- (id)approverUID;
- (id)kickoutFromUserID;
- (long long)dataSyncVersion;
- (id)silenceFromUserID;
- (id)silenceUserID;
- (long long)silenceSource;
- (id)linkmicID;
- (id)applyUser;
- (long long)banAnchorUserId;
- (id)inviterSecUID;
- (id)inviteeSecUID;
- (BOOL)hasGeustLinkmicInfo;
- (void)setHasGeustLinkmicInfo:(BOOL)arg0;
- (id)joinedUserID;
- (BOOL)shouldMuteAudioAfterJoined;
- (id)leaveUserID;
- (BOOL)isInWaiting;
- (BOOL)hasMediaInfo;
- (id)responseObj;
- (id)rtcExtraInfo;
- (void)setResponseObj:(id)arg0;
- (id)channelID;
- (void).cxx_destruct;
- (unsigned long long)vendor;
- (id)initWithResponse:(id)arg0;
- (id)rawData;
- (void)setChannelID:(id)arg0;
- (id)extraData;
- (id)promptString;
- (int)replyType;
- (BOOL)isSilence;

@end
