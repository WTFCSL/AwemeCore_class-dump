//
//     Generated by private class-dump
//

@class NSString;

@interface AFDCampaignAddFriendsTask : AFDCampaignBaseTask <AWEUserMessage>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)topic;

- (void)didFinishBlockUser:(id)arg0 status:(long long)arg1;
- (void)didReceiveFollowUserResponse:(id)arg0 context:(id)arg1 error:(id)arg2;
- (void)willSendUnfollowUserRequestWithContext:(id)arg0;
- (void)dealFCoinSchema:(id)arg0;
- (id)initWithContext:(id)arg0;
- (void)dealloc;

@end
