//
//     Generated by private class-dump
//

@protocol IESLiveMultiLinkerAnchorBuilderAction <NSObject>

- (void)updateContentViewIfNeeded;
- (id)setupContentViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)contentViewDidSelected:(BOOL)arg0 isManual:(BOOL)arg1;
- (void)showActiveInviteViewController:(id)arg0 modType:(int)arg1 lynxHeight:(double)arg2;
- (void)leaveChannelWithSource:(unsigned long long)arg0 completion:(id /* block */)arg1;
- (void)inviteToRoomID:(id)arg0 user:(id)arg1 inviteType:(unsigned long long)arg2 extraParams:(id)arg3 completion:(id /* block */)arg4;
- (void)inviteToRoomID:(id)arg0 user:(id)arg1 inviteType:(unsigned long long)arg2 inviteModeType:(int)arg3 extraParams:(id)arg4 completion:(id /* block */)arg5;
- (void)applyToRoomID:(id)arg0 user:(id)arg1 channelID:(id)arg2 completion:(id /* block */)arg3;
- (void)cancelWithRoomID:(id)arg0 userID:(id)arg1 secUserID:(id)arg2 cancelApply:(BOOL)arg3 source:(unsigned long long)arg4 completion:(id /* block */)arg5;
- (void)inviteSwitchChannelToRoomID:(id)arg0 inviteeAnchorArray:(id)arg1 extraParams:(id)arg2 completion:(id /* block */)arg3;
- (void)switchToScene:(unsigned long long)arg0 battleConfig:(id)arg1 completion:(id /* block */)arg2;
- (id)setupExpandNavBar:(id)arg0;
- (void)contentViewDidAppear:(BOOL)arg0;
- (void)dismissNavigationController;

@end