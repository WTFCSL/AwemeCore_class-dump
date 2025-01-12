//
//     Generated by private class-dump
//

@class IESLivePKEventTransparentView, NSString, IESLivePKModel, IESLivePKChatGuestListView, IESLivePKGuestOperatePanelView;
@protocol IESLivePKProvider;

@interface IESLivePKGuestAnchorInstance : NSObject <IESLivePKChatGuestListViewDelegate, IESLivePKGuestOperatePanelViewModelDelegate, IESLiveInteractiveMediaServiceDelegate> {
    id<IESLivePKProvider> _pkProvider;
    IESLivePKModel *_pkmodel;
    IESLivePKChatGuestListView *_guestListView;
    IESLivePKEventTransparentView *_anchorEmojiContainer;
    IESLivePKGuestOperatePanelView *_panelView;
}

@property (retain, nonatomic) id<IESLivePKProvider> pkProvider;
@property (retain, nonatomic) IESLivePKModel *pkmodel;
@property (retain, nonatomic) IESLivePKChatGuestListView *guestListView;
@property (retain, nonatomic) IESLivePKEventTransparentView *anchorEmojiContainer;
@property (weak, nonatomic) IESLivePKGuestOperatePanelView *panelView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (id)panelView;
- (void)setPanelView:(id)arg0;
- (void)setPkmodel:(id)arg0;
- (id)pkmodel;
- (id)emojiContainerForUserID:(id)arg0 isInteractiveEmoji:(BOOL)arg1;
- (id)initWithDiContext:(id)arg0;
- (id)guestListView;
- (void)setGuestListView:(id)arg0;
- (void)interactiveMediaService:(id)arg0 didUpdatedSessionsLocalLayout:(id)arg1;
- (void)setPkProvider:(id)arg0;
- (id)pkProvider;
- (void)clearGuestView;
- (void)didClickEmptyView:(long long)arg0;
- (void)didClickItemView:(id)arg0;
- (void)didUpdateOppositeRoomSilence;
- (void)removeGuestListView;
- (id)p_createGuestListView;
- (void)showPanelWithConfig:(id)arg0 requestPage:(id)arg1;
- (id)anchorEmojiContainer;
- (BOOL)muteStateForUser:(id)arg0;
- (BOOL)isUserConnected:(id)arg0;
- (void)muteOthers:(id)arg0 mute:(BOOL)arg1;
- (void)stopConnectedWithUserID:(id)arg0;
- (void)setAnchorEmojiContainer:(id)arg0;
- (void).cxx_destruct;

@end
