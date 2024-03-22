//
//     Generated by private class-dump
//

@protocol RxInjector;

@interface RTVXRInteractionTracker : NSObject {
    id<RxInjector> _injector;
}

@property (readonly, weak, nonatomic) id<RxInjector> injector;

- (void)__trackeEvent:(id)arg0 params:(id)arg1;
- (id)__commonParamsWithRoomID:(id)arg0 interactionType:(unsigned long long)arg1;
- (void)tracker_invitationTipsShowWithRoomID:(id)arg0 interactionType:(unsigned long long)arg1;
- (void)tracker_clickInvitationTipsAvatarWithRoomID:(id)arg0 interactionType:(unsigned long long)arg1;
- (void)tracker_sendInvitationWithRoomID:(id)arg0 interactionType:(unsigned long long)arg1 invitedUserCount:(unsigned long long)arg2 inviteType:(id)arg3;
- (void)tracker_invitationTipsEndWithRoomID:(id)arg0 interactionType:(unsigned long long)arg1 shownCount:(unsigned long long)arg2;
- (void).cxx_destruct;
- (id)injector;

@end