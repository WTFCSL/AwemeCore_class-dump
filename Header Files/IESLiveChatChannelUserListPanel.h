//
//     Generated by private class-dump
//

@class NSString, IESLiveChatChannelUserListPanelView, IESLiveMessageChannelApi, IESLiveChatChannelUserListPanelViewModel, RoomChannelInfo, NSMutableArray, NSNumber;
@protocol IESLiveChatChannelUserListPanelDelegate;

@interface IESLiveChatChannelUserListPanel : NSObject <IESLiveChatChannelUserListController, IESLiveChatChannelLinkmicActions, IESLiveChatChannelAction> {
    id<IESLiveChatChannelUserListPanelDelegate> _delegate;
    RoomChannelInfo *_cachedChannelInfo;
    IESLiveChatChannelUserListPanelViewModel *_panelViewModel;
    IESLiveChatChannelUserListPanelView *_panelView;
    IESLiveMessageChannelApi *_api;
    NSMutableArray *_cachedAllUsers;
}

@property (retain, nonatomic) IESLiveChatChannelUserListPanelViewModel *panelViewModel;
@property (retain, nonatomic) IESLiveChatChannelUserListPanelView *panelView;
@property (retain, nonatomic) IESLiveMessageChannelApi *api;
@property (retain, nonatomic) NSMutableArray *cachedAllUsers;
@property (retain, nonatomic) RoomChannelInfo *cachedChannelInfo;
@property (readonly, nonatomic) NSNumber *channelID;
@property (weak, nonatomic) id<IESLiveChatChannelUserListPanelDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (id)panelView;
- (void)setPanelView:(id)arg0;
- (id)panelViewModel;
- (void)setPanelViewModel:(id)arg0;
- (void)chatChannelAllowInviteSettingChanged:(BOOL)arg0 channelID:(id)arg1;
- (void)chatChannel:(id)arg0 linkmicStateDidChangeFrom:(long long)arg1 to:(long long)arg2;
- (void)chatChannel:(id)arg0 onUserMuted:(id)arg1 mute:(BOOL)arg2;
- (void)chatChannel:(id)arg0 onUserVolumeChanged:(id)arg1 volume:(long long)arg2;
- (id)linkedUserList;
- (void)enableUserListPanelAccess:(BOOL)arg0;
- (id)cachedChannelInfo;
- (id)cachedAllUsers;
- (void)trackChatChannelUserListPanelShow;
- (void)setCachedChannelInfo:(id)arg0;
- (void)setCachedAllUsers:(id)arg0;
- (void)reloadData:(id)arg0 completion:(id /* block */)arg1;
- (BOOL)enableInvite;
- (BOOL)isAudioChatEnable;
- (id)linkWaitingUserList;
- (void)onSelectUser:(id)arg0;
- (void)onClickedSetting;
- (void)onClickedInvite;
- (void)onLoadMore:(id /* block */)arg0;
- (void)reloadLinkedUser:(id)arg0;
- (id)channelID;
- (void).cxx_destruct;
- (BOOL)isShowing;
- (id)delegate;
- (void)setAccessibilityElementsHidden:(BOOL)arg0;
- (void)setDelegate:(id)arg0;
- (void)show:(id /* block */)arg0;
- (void)dismiss:(id /* block */)arg0;
- (id)roomID;
- (id)api;
- (void)setApi:(id)arg0;

@end
