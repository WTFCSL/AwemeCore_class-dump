//
//     Generated by private class-dump
//

@class NSString;

@interface AWEPluginInviteFriendsCustomImpl : NSObject <BDPInvitePluginDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;

- (id)schemaWithInviteModel:(id)arg0;
- (BOOL)parseCallingServerResponse:(id)arg0;
- (void)bdp_inviteFriendsPanelWithModel:(id)arg0 createCallback:(id /* block */)arg1 dismissCallback:(id /* block */)arg2 actionCallback:(id /* block */)arg3;

@end
