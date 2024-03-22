//
//     Generated by private class-dump
//

@class HTSLiveUser, NSArray, IESLiveChatChannelUserListPanelCellModel, RoomChannelInfo, NSString;
@protocol IESLiveChatChannelUserListPanelView, IESLiveChatChannelUserListController;

@interface IESLiveChatChannelUserListPanelViewModel : NSObject <IESLiveChatChannelUserListPanelCellDataProvider> {
    BOOL _shouldShowLoadMore;
    id<IESLiveChatChannelUserListPanelView> _view;
    id<IESLiveChatChannelUserListController> _controller;
    NSArray *_listSections;
    NSArray *_users;
    IESLiveChatChannelUserListPanelCellModel *_infoCell;
    IESLiveChatChannelUserListPanelCellModel *_settingCell;
    HTSLiveUser *_ownerUser;
    RoomChannelInfo *_channelInfo;
}

@property (copy, nonatomic) NSArray *users;
@property (copy, nonatomic) NSArray *listSections;
@property (retain, nonatomic) IESLiveChatChannelUserListPanelCellModel *infoCell;
@property (retain, nonatomic) IESLiveChatChannelUserListPanelCellModel *settingCell;
@property (retain, nonatomic) HTSLiveUser *ownerUser;
@property (retain, nonatomic) RoomChannelInfo *channelInfo;
@property (nonatomic) BOOL shouldShowLoadMore;
@property (weak, nonatomic) id<IESLiveChatChannelUserListPanelView> view;
@property (weak, nonatomic) id<IESLiveChatChannelUserListController> controller;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadMore:(id /* block */)arg0;
- (void)setChannelInfo:(id)arg0;
- (id)linkedUserList;
- (void)updateUserVolume:(id)arg0 volume:(long long)arg1;
- (id)currentChannelInfo;
- (void)updateUserMuteState:(id)arg0 mute:(BOOL)arg1;
- (void)reloadWithChannelInfo:(id)arg0;
- (void)reloadWithChannelUserList:(id)arg0 hasMore:(BOOL)arg1;
- (id)linkWaitingUserList;
- (BOOL)isCurrentChannelEnableAudioChat;
- (BOOL)isUserWaitingLinked:(id)arg0;
- (BOOL)isUserMuted:(id)arg0;
- (BOOL)shouldShowLoadMore;
- (id)listSections;
- (id)infoCell;
- (void)setInfoCell:(id)arg0;
- (id)settingCell;
- (void)setSettingCell:(id)arg0;
- (void)setListSections:(id)arg0;
- (void)setShouldShowLoadMore:(BOOL)arg0;
- (void)handleCellSelectAtIndexPath:(id)arg0;
- (void)handleSettingButtonClicked;
- (void)setController:(id)arg0;
- (id)users;
- (void).cxx_destruct;
- (id)controller;
- (void)setView:(id)arg0;
- (id)view;
- (void)setUsers:(id)arg0;
- (void)setOwnerUser:(id)arg0;
- (id)ownerUser;
- (id)channelInfo;

@end
