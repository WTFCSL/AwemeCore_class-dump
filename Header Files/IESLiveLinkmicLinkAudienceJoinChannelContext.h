//
//     Generated by private class-dump
//

@class NSString, NSArray, IESLiveLinkMicAudienceJoinChannelResponse_ResponseData, NSNumber, NSObject;

@interface IESLiveLinkmicLinkAudienceJoinChannelContext : IESLiveLinkmicLinkContext <IESLiveLinkmicJoinChannelContext> {
    BOOL _shouldMuteAudioAfterJoined;
    int _applyType;
    NSObject *_rawData;
    NSString *_promptWithEarphone;
    NSString *_prompt;
    NSArray *_linkedUsersArray;
    unsigned long long _version;
    NSString *_token;
    NSString *_liveCoreSettings;
    IESLiveLinkMicAudienceJoinChannelResponse_ResponseData *_joinChannelResponse;
    NSString *_joinedUserID;
}

@property (retain, nonatomic) IESLiveLinkMicAudienceJoinChannelResponse_ResponseData *joinChannelResponse;
@property (copy, nonatomic) NSString *joinedUserID;
@property (nonatomic) BOOL shouldMuteAudioAfterJoined;
@property (nonatomic) int applyType;
@property (copy, nonatomic) NSString *promptWithEarphone;
@property (copy, nonatomic) NSString *prompt;
@property (retain, nonatomic) NSArray *linkedUsersArray;
@property (nonatomic) unsigned long long version;
@property (copy, nonatomic) NSString *token;
@property (copy, nonatomic) NSString *liveCoreSettings;
@property (readonly, nonatomic) unsigned long long vendor;
@property (copy, nonatomic) NSNumber *channelID;
@property (readonly, copy, nonatomic) NSString *linkmicID;
@property (readonly, copy, nonatomic) NSString *promptString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)joinedUserID;
- (BOOL)shouldMuteAudioAfterJoined;
- (id)linkedUsersArray;
- (void)setLinkedUsersArray:(id)arg0;
- (id)promptWithEarphone;
- (id)liveCoreSettings;
- (id)joinChannelResponse;
- (id)initWithJoinChannelResponse:(id)arg0;
- (id)initWithEarlyJoinChannelData:(id)arg0;
- (void)setPromptWithEarphone:(id)arg0;
- (void)setLiveCoreSettings:(id)arg0;
- (void)setJoinChannelResponse:(id)arg0;
- (void)setJoinedUserID:(id)arg0;
- (void)setShouldMuteAudioAfterJoined:(BOOL)arg0;
- (id)prompt;
- (void)setVersion:(unsigned long long)arg0;
- (void)setPrompt:(id)arg0;
- (void).cxx_destruct;
- (void)setToken:(id)arg0;
- (id)token;
- (unsigned long long)version;
- (id)rawData;
- (int)applyType;
- (void)setApplyType:(int)arg0;

@end