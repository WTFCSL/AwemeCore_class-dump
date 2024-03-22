//
//     Generated by private class-dump
//

@class NSString;

@interface AFDCampaignF2FActivityFollowTask : AFDCampaignBaseTask <AWEUserMessage> {
    NSString *_radarUserID;
}

@property (copy, nonatomic) NSString *radarUserID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)topic;

- (void)didFinishBlockUser:(id)arg0 status:(long long)arg1;
- (void)didReceiveFollowUserResponse:(id)arg0 context:(id)arg1 error:(id)arg2;
- (void)willSendUnfollowUserRequestWithContext:(id)arg0;
- (id)radarUserID;
- (void)setRadarUserID:(id)arg0;
- (id)initWithContext:(id)arg0;
- (void).cxx_destruct;
- (void)dealloc;

@end
