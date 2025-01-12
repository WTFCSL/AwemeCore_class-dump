//
//     Generated by private class-dump
//

@class IESLiveVSMessageBoardApi, HTSEventContext, NSString, HTSLiveImage, InteractDressInfoResponse_DressInfo, NSMutableDictionary, UIView, HTSLiveCommentsSyncData, IESLiveVSMessageBoardInputPanelView, NSMutableArray, IESLiveVSMessageBoardStore;

@interface IESVSMessageBoardCommonAbility : NSObject <IESLiveVSMessageBoardInputPanelDelegate, IESLiveDataSyncDelegate, HTSLiveStreamPlayerAction, IESLiveVSMessageBoardRouter> {
    BOOL _firstFetchVSMessageBoard;
    IESLiveVSMessageBoardApi *_api;
    NSMutableDictionary *_thumbup_list;
    IESLiveVSMessageBoardInputPanelView *_inputPanelView;
    IESLiveVSMessageBoardStore *_store;
    id /* block */ _openInputPanelJSB;
    id _model;
    HTSEventContext *_trackContext;
    NSString *_roomID;
    NSString *_episodeID;
    NSString *_OwnerID;
    NSString *_originEpisodeID;
    HTSLiveCommentsSyncData *_commentDataCache;
    NSString *_thumbupListDataStr;
    NSString *_uiConfig;
    HTSLiveImage *_iconImage;
    NSString *_toolbarDataJsonStr;
    NSString *_toolbarDataSchemaURL;
    NSString *_dressInfoForWeb;
    InteractDressInfoResponse_DressInfo *_dressUpModel;
    NSMutableArray *_entityIdArray;
    NSString *_paySchema;
    UIView *_messageBoardView;
    long long _messagePuzzleViewCount;
    id _panelWebViewObserve;
}

@property (retain, nonatomic) IESLiveVSMessageBoardApi *api;
@property (retain, nonatomic) NSMutableDictionary *thumbup_list;
@property (retain, nonatomic) IESLiveVSMessageBoardInputPanelView *inputPanelView;
@property (retain, nonatomic) IESLiveVSMessageBoardStore *store;
@property (copy, nonatomic) id /* block */ openInputPanelJSB;
@property (retain, nonatomic) id model;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (copy, nonatomic) NSString *roomID;
@property (copy, nonatomic) NSString *episodeID;
@property (copy, nonatomic) NSString *OwnerID;
@property (copy, nonatomic) NSString *originEpisodeID;
@property (retain, nonatomic) HTSLiveCommentsSyncData *commentDataCache;
@property (copy, nonatomic) NSString *thumbupListDataStr;
@property (copy, nonatomic) NSString *uiConfig;
@property (nonatomic) BOOL firstFetchVSMessageBoard;
@property (retain, nonatomic) HTSLiveImage *iconImage;
@property (copy, nonatomic) NSString *toolbarDataJsonStr;
@property (copy, nonatomic) NSString *toolbarDataSchemaURL;
@property (copy, nonatomic) NSString *dressInfoForWeb;
@property (retain, nonatomic) InteractDressInfoResponse_DressInfo *dressUpModel;
@property (retain, nonatomic) NSMutableArray *entityIdArray;
@property (copy, nonatomic) NSString *paySchema;
@property (retain, nonatomic) UIView *messageBoardView;
@property (nonatomic) long long messagePuzzleViewCount;
@property (retain, nonatomic) id panelWebViewObserve;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)trackContext;
- (void)setTrackContext:(id)arg0;
- (void)didSetAttachingDIContext;
- (id)uiConfig;
- (void)setUIConfig:(id)arg0;
- (void)setUiConfig:(id)arg0;
- (void)setEpisodeID:(id)arg0;
- (void)subscribedSyncDataWithValue:(id)arg0 version:(long long)arg1;
- (void)subscribedSyncDataUpdatedWithValue:(id)arg0 oldVersion:(long long)arg1 newVersion:(long long)arg2;
- (id)initWithModel:(id)arg0 context:(id)arg1;
- (void)updateConfigWithParams:(id)arg0;
- (void)openVSMessageBoardInputPanelWithParameters:(id)arg0 completion:(id /* block */)arg1;
- (void)setVSMessageBoardCommentCacheDataWithKey:(id)arg0 value:(id)arg1;
- (void)getVSMessageBoardCommentCacheDataWithKeys:(id)arg0 requestFrom:(id)arg1 completion:(id /* block */)arg2;
- (void)setupBoard;
- (void)openVSMessageBoardViewWithSchema:(id)arg0 source:(id)arg1;
- (void)showMessageBoardEntraceWithSource:(id)arg0;
- (id)getPanelWebViewObserve;
- (void)handlePuzzleNotifation:(id)arg0;
- (id)dressUpModel;
- (void)setDressUpModel:(id)arg0;
- (id)inputPanelView;
- (void)setEntityIdArray:(id)arg0;
- (void)setToolbarDataJsonStr:(id)arg0;
- (void)setToolbarDataSchemaURL:(id)arg0;
- (void)fetchVSMessageBoardDressUpList;
- (id)toolbarDataJsonStr;
- (void)initFetchVSMessageBoard;
- (id)entityIdArray;
- (BOOL)firstFetchVSMessageBoard;
- (void)setFirstFetchVSMessageBoard:(BOOL)arg0;
- (void)setThumbupListDataStr:(id)arg0;
- (id)toolbarDataSchemaURL;
- (BOOL)shouldShowRedDotRecord:(id)arg0;
- (long long)dressUpThemeSkinRecord:(id)arg0;
- (long long)dressUpExclusiveMedalRecord:(id)arg0;
- (void)setInputPanelView:(id)arg0;
- (void)setCommentDataCache:(id)arg0;
- (id /* block */)openInputPanelJSB;
- (void)clearInputPanelWithClearDraft:(BOOL)arg0;
- (void)setPaySchema:(id)arg0;
- (void)setOpenInputPanelJSB:(id /* block */)arg0;
- (void)openInputView;
- (id)commentDataCache;
- (id)thumbupListDataStr;
- (id)dressInfoForWeb;
- (void)getEntityIdArray;
- (void)setDressInfoForWeb:(id)arg0;
- (void)inputPanel:(id)arg0 commentDidChange:(id)arg1;
- (void)inputPanelDidClickSend:(id)arg0;
- (void)inputPanelDismiss:(id)arg0 isSendClicked:(BOOL)arg1;
- (id)thumbup_list;
- (void)setThumbup_list:(id)arg0;
- (id)paySchema;
- (void)setupAbility;
- (id)originEpisodeID;
- (id)OwnerID;
- (void)openScalePanel;
- (void)setMessagePuzzleViewCount:(long long)arg0;
- (id)messageBoardView;
- (long long)messagePuzzleViewCount;
- (void)setPanelWebViewObserve:(id)arg0;
- (void)updatePayStatus;
- (void)paidForVSPrivilege;
- (id)panelWebViewObserve;
- (void)setOriginEpisodeID:(id)arg0;
- (void)setMessageBoardView:(id)arg0;
- (BOOL)isVertical;
- (void)setModel:(id)arg0;
- (id)iconImage;
- (void).cxx_destruct;
- (id)model;
- (id)store;
- (void)setStore:(id)arg0;
- (void)setIconImage:(id)arg0;
- (id)room;
- (id)episode;
- (id)roomID;
- (void)setRoomID:(id)arg0;
- (id)api;
- (void)setOwnerID:(id)arg0;
- (id)episodeID;
- (void)setApi:(id)arg0;

@end
