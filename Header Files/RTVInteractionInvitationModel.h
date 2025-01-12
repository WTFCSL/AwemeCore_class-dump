//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface RTVInteractionInvitationModel : NSObject {
    BOOL _inviteDirectly;
    BOOL _autoSelectOnlineUsers;
    NSString *_eventPage;
    NSArray *_preferInvitedUsers;
}

@property (readonly, nonatomic) BOOL inviteDirectly;
@property (readonly, nonatomic) BOOL autoSelectOnlineUsers;
@property (readonly, copy, nonatomic) NSString *eventPage;
@property (readonly, copy, nonatomic) NSArray *preferInvitedUsers;

- (id)eventPage;
- (id)initWithDirectInvite:(BOOL)arg0 preferInvitedUsers:(id)arg1;
- (id)initWithAutoSelectOnlineUsers:(BOOL)arg0;
- (void)updateEventPage:(id)arg0;
- (id)initWithPreferInvitedUsers:(id)arg0 autoSelectOnlineUsers:(BOOL)arg1;
- (BOOL)inviteDirectly;
- (BOOL)autoSelectOnlineUsers;
- (id)preferInvitedUsers;
- (void).cxx_destruct;

@end
