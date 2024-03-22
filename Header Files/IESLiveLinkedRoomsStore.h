//
//     Generated by private class-dump
//

@class HTSEventContext, HTSLiveEpisodeExtraInfo, IESLiveLinkedRoomListView, NSString, IESLiveRelatedLivePanelTabModel, GPBInt64ObjectDictionary, HTSLiveVSLinkInfo, IESLiveRelatedLiveEntryItem;

@interface IESLiveLinkedRoomsStore : NSObject <HTSLiveMessageSubscriber> {
    BOOL _hasShowPortraitEntryView;
    BOOL _hasShowLandscapeEntryBtn;
    id /* block */ _updateVisibleCallBack;
    id /* block */ _openTabPanelCallBack;
    HTSEventContext *_trackContext;
    IESLiveRelatedLiveEntryItem *_linkedRoomEntryItem;
    IESLiveRelatedLivePanelTabModel *_linkedRoomTabModel;
    IESLiveLinkedRoomListView *_linkedRoomListView;
    GPBInt64ObjectDictionary *_roomEpisodeMap;
    HTSLiveEpisodeExtraInfo *_extraInfo;
    HTSLiveVSLinkInfo *_linkInfo;
}

@property (retain, nonatomic) IESLiveRelatedLiveEntryItem *linkedRoomEntryItem;
@property (retain, nonatomic) IESLiveRelatedLivePanelTabModel *linkedRoomTabModel;
@property (retain, nonatomic) IESLiveLinkedRoomListView *linkedRoomListView;
@property (retain, nonatomic) GPBInt64ObjectDictionary *roomEpisodeMap;
@property (retain, nonatomic) HTSLiveEpisodeExtraInfo *extraInfo;
@property (retain, nonatomic) HTSLiveVSLinkInfo *linkInfo;
@property (nonatomic) BOOL hasShowPortraitEntryView;
@property (nonatomic) BOOL hasShowLandscapeEntryBtn;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (copy, nonatomic) id /* block */ updateVisibleCallBack;
@property (copy, nonatomic) id /* block */ openTabPanelCallBack;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setExtraInfo:(id)arg0;
- (id)trackContext;
- (void)setTrackContext:(id)arg0;
- (id)linkInfo;
- (void)setLinkInfo:(id)arg0;
- (id)roomEpisodeMap;
- (void)updateEntryVisible;
- (id /* block */)updateVisibleCallBack;
- (id)linkedRoomEntryItem;
- (id)linkedRoomTabModel;
- (void)setRoomEpisodeMap:(id)arg0;
- (id)linkedRoomListView;
- (id)paramsForShowTrack:(id)arg0;
- (id)addPrivateTrack:(id)arg0;
- (void)jumpToLinkRoom:(id)arg0;
- (void)setLinkedRoomListView:(id)arg0;
- (void)bindBlocks;
- (void)requestLinkInfoIfNeeded;
- (id)creatPanelTabModel;
- (void)tr_PanelShow;
- (id)linkedRoomListViewWithEntryType:(long long)arg0;
- (BOOL)shoudShowGameLinkedRoomsView;
- (void)tr_EntryShow:(BOOL)arg0 extraDic:(id)arg1;
- (BOOL)hasShowLandscapeEntryBtn;
- (void)setHasShowLandscapeEntryBtn:(BOOL)arg0;
- (void)tr_EntryShow:(BOOL)arg0;
- (BOOL)hasShowPortraitEntryView;
- (void)setHasShowPortraitEntryView:(BOOL)arg0;
- (id /* block */)openTabPanelCallBack;
- (void)tr_EntryClick:(BOOL)arg0;
- (id)creatToolbarItem;
- (id)tr_params;
- (void)setUpdateVisibleCallBack:(id /* block */)arg0;
- (void)setOpenTabPanelCallBack:(id /* block */)arg0;
- (void)setLinkedRoomEntryItem:(id)arg0;
- (void)setLinkedRoomTabModel:(id)arg0;
- (void).cxx_destruct;
- (void)messageReceived:(id)arg0;
- (id)extraInfo;
- (id)initWithRoom:(id)arg0;
- (void)mount;

@end