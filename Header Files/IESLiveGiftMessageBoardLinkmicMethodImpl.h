//
//     Generated by private class-dump
//

@protocol IESLiveInteractiveInviteService;

@interface IESLiveGiftMessageBoardLinkmicMethodImpl : IESLiveGiftMessageBoardLinkmicMethod {
    id<IESLiveInteractiveInviteService> _inviteFriendsService;
}

@property (retain, nonatomic) id<IESLiveInteractiveInviteService> inviteFriendsService;

- (void)callWithParamModel:(id)arg0 completionHandler:(id /* block */)arg1;
- (id)inviteFriendsService;
- (BOOL)isInTeamFight;
- (void)popAlertWithTitle:(id)arg0 comfirmBloc:(id /* block */)arg1;
- (void)setInviteFriendsService:(id)arg0;
- (void).cxx_destruct;
- (BOOL)isAnchor;

@end