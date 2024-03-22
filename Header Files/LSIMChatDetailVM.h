//
//     Generated by private class-dump
//

@class LSIMMemberManager, NSString, LSIMChatDetailMessageInsertState, LSIMCurrentUser, NSDictionary, LSIMBizConversation, NSObject, NSMutableArray, LSIMServiceBizCClient, LSIMChatDetailTracker, LSIMCardDataRequestManager;
@protocol OS_dispatch_group;

@interface LSIMChatDetailVM : LSListVM <LSIMBizConversationDataSourceObserver, LSIMServiceClientObserver, LSListCellVMDelegate> {
    BOOL _groupDissolved;
    BOOL _showPlatformService;
    BOOL _isSettingUpChatGroup;
    BOOL _isFirstFetch;
    BOOL _isFecthingMessages;
    BOOL _memberRequestSuccess;
    BOOL _setupDataSourceSucess;
    BOOL _sendUserEnterSuccess;
    BOOL _sendAppletWebhookSuccess;
    BOOL _hasSentMessage;
    LSIMChatDetailTracker *_tracker;
    LSIMChatDetailMessageInsertState *_insertState;
    NSString *_enterFrom;
    NSString *_enterActionString;
    LSIMBizConversation *_conversation;
    LSIMMemberManager *_memberManager;
    long long _imType;
    long long _chatType;
    NSString *_chatID;
    NSString *_shopID;
    NSString *_conGroupID;
    NSString *_groupLifeAccountID;
    NSString *_naviTitle;
    NSString *_naviSubTitle;
    NSString *_naviIcon;
    NSString *_poiID;
    long long _appletType;
    NSString *_imAccountID;
    NSString *_appletID;
    long long _enterBottomCardType;
    NSDictionary *_bottomCardDict;
    NSMutableArray *_dataSource;
    NSDictionary *_routerParams;
    LSIMCardDataRequestManager *_cardRequestManager;
    long long _inbox;
    NSString *_title;
    NSString *_lifeAccountId;
    NSString *_entranceId;
    NSString *_lifeLiveRoomId;
    NSString *_groupID;
    NSString *_liveAnchorID;
    NSString *_enterpriseTabExtra;
    NSString *_previousEnterPages;
    NSString *_enterPOIId;
    NSString *_webhookExt;
    long long _fromType;
    unsigned long long _enterActionType;
    NSString *_enterBottomCardString;
    NSString *_bottomCardItemID;
    double _enterTime;
    NSObject<OS_dispatch_group> *_setupChatDetailGroup;
    long long _fetchMessagesPageState;
    LSIMServiceBizCClient *_serviceClient;
    long long _currentReadIndex;
    long long _currentSendReadIndex;
}

@property (retain, nonatomic) LSIMChatDetailMessageInsertState *insertState;
@property (retain, nonatomic) NSMutableArray *dataSource;
@property (copy, nonatomic) NSDictionary *routerParams;
@property (retain, nonatomic) LSIMMemberManager *memberManager;
@property (retain, nonatomic) LSIMCardDataRequestManager *cardRequestManager;
@property (nonatomic) long long imType;
@property (nonatomic) long long chatType;
@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) long long inbox;
@property (copy, nonatomic) NSString *chatID;
@property (copy, nonatomic) NSString *shopID;
@property (copy, nonatomic) NSString *conGroupID;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *lifeAccountId;
@property (copy, nonatomic) NSString *entranceId;
@property (copy, nonatomic) NSString *lifeLiveRoomId;
@property (copy, nonatomic) NSString *groupID;
@property (copy, nonatomic) NSString *liveAnchorID;
@property (copy, nonatomic) NSString *enterpriseTabExtra;
@property (copy, nonatomic) NSString *previousEnterPages;
@property (copy, nonatomic) NSString *enterPOIId;
@property (nonatomic) long long appletType;
@property (copy, nonatomic) NSString *imAccountID;
@property (copy, nonatomic) NSString *appletID;
@property (copy, nonatomic) NSString *webhookExt;
@property (nonatomic) BOOL showPlatformService;
@property (nonatomic) long long fromType;
@property (nonatomic) unsigned long long enterActionType;
@property (copy, nonatomic) NSString *enterBottomCardString;
@property (nonatomic) long long enterBottomCardType;
@property (copy, nonatomic) NSDictionary *bottomCardDict;
@property (copy, nonatomic) NSString *bottomCardItemID;
@property (copy, nonatomic) NSString *enterActionString;
@property (nonatomic) double enterTime;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *setupChatDetailGroup;
@property (nonatomic) BOOL isSettingUpChatGroup;
@property (retain, nonatomic) LSIMBizConversation *conversation;
@property (copy, nonatomic) NSString *groupLifeAccountID;
@property (nonatomic) BOOL groupDissolved;
@property (copy, nonatomic) NSString *naviTitle;
@property (copy, nonatomic) NSString *naviSubTitle;
@property (copy, nonatomic) NSString *naviIcon;
@property (copy, nonatomic) NSString *poiID;
@property (nonatomic) BOOL isFirstFetch;
@property (nonatomic) BOOL isFecthingMessages;
@property (nonatomic) BOOL memberRequestSuccess;
@property (nonatomic) BOOL setupDataSourceSucess;
@property (nonatomic) BOOL sendUserEnterSuccess;
@property (nonatomic) BOOL sendAppletWebhookSuccess;
@property (nonatomic) BOOL hasSentMessage;
@property (nonatomic) long long fetchMessagesPageState;
@property (weak, nonatomic) LSIMServiceBizCClient *serviceClient;
@property (nonatomic) long long currentReadIndex;
@property (nonatomic) long long currentSendReadIndex;
@property (readonly, nonatomic) LSIMChatDetailTracker *tracker;
@property (readonly, nonatomic) NSString *bizType;
@property (readonly, nonatomic) LSIMCurrentUser *currentUser;
@property (readonly, nonatomic) BOOL isApplet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setEnterFrom:(id)arg0;
- (void)configWithRouterParamDict:(id)arg0;
- (id)enterFrom;
- (id)bizType;
- (id)poiID;
- (id)routerParams;
- (void)setRouterParams:(id)arg0;
- (void)setPoiID:(id)arg0;
- (double)enterTime;
- (void)setEnterTime:(double)arg0;
- (long long)chatType;
- (void)setNaviTitle:(id)arg0;
- (id)naviTitle;
- (void)setShopID:(id)arg0;
- (id)shopID;
- (void)setChatType:(long long)arg0;
- (id)entranceId;
- (void)setEntranceId:(id)arg0;
- (long long)imType;
- (id)groupLifeAccountID;
- (void)sendSwitchToHumanMessage;
- (void)setImType:(long long)arg0;
- (id)imAccountID;
- (void)setImAccountID:(id)arg0;
- (long long)appletType;
- (void)setAppletType:(long long)arg0;
- (id)appletID;
- (void)setAppletID:(id)arg0;
- (void)setGroupLifeAccountID:(id)arg0;
- (BOOL)isApplet;
- (BOOL)showPlatformService;
- (void)openGoodsList;
- (void)openOrderList;
- (void)canEvaluateConversationWithCompletion:(id /* block */)arg0;
- (void)setLifeAccountId:(id)arg0;
- (void)setEnterActionString:(id)arg0;
- (void)setWebhookExt:(id)arg0;
- (id)webhookExt;
- (void)checkIsCurrentUserAParticipant;
- (id)lifeAccountId;
- (void)setLifeLiveRoomId:(id)arg0;
- (void)setLiveAnchorID:(id)arg0;
- (void)setEnterpriseTabExtra:(id)arg0;
- (void)setPreviousEnterPages:(id)arg0;
- (void)setEnterPOIId:(id)arg0;
- (id)enterPOIId;
- (BOOL)isInvisibleMessage:(id)arg0;
- (void)registerConversationSendNotification;
- (void)setCurrentSendReadIndex:(long long)arg0;
- (id)createCardTypeOriginDictWithCardType:(id)arg0 cardBody:(id)arg1;
- (void)deregisterConversationSendNotification;
- (id)enterActionString;
- (void)setHasSentMessage:(BOOL)arg0;
- (id)lifeLiveRoomId;
- (id)liveAnchorID;
- (id)enterpriseTabExtra;
- (id)previousEnterPages;
- (void)sendConversationCard:(id)arg0;
- (long long)currentSendReadIndex;
- (void)conversationsDidDeleted:(id)arg0;
- (BOOL)openWebURL:(id)arg0;
- (id)conGroupID;
- (void)conversationDidUpdate:(id)arg0;
- (void)setConGroupID:(id)arg0;
- (void)setIsFirstFetch:(BOOL)arg0;
- (void)messagesDidInsert:(id)arg0 reason:(long long)arg1 inConversation:(id)arg2;
- (void)oneOneMessageReadDidUpdateWithIndex:(long long)arg0 inConversation:(id)arg1;
- (void)groupMessageReadDidUpdateInConversation:(id)arg0;
- (void)messageDidUpdated:(id)arg0 inConversation:(id)arg1;
- (id)cardRequestManager;
- (void)setCardRequestManager:(id)arg0;
- (id)chatID;
- (id)memberManager;
- (id)initWithRouterParamDict:(id)arg0 type:(long long)arg1;
- (void)handleListFetch;
- (long long)enterBottomCardType;
- (id)bottomCardDict;
- (id)naviSubTitle;
- (id)naviIcon;
- (id)insertState;
- (void)insertMessageWithImage:(id)arg0;
- (id)cellVMs;
- (void)insertMessageWithText:(id)arg0;
- (void)insertMessageWithCardDict:(id)arg0 cardType:(id)arg1 sendParams:(id)arg2 bizExt:(id)arg3;
- (void)requestPlatformServiceOpenURLWithCompletion:(id /* block */)arg0;
- (void)setEnterActionType:(unsigned long long)arg0;
- (void)setEnterBottomCardString:(id)arg0;
- (void)setChatID:(id)arg0;
- (BOOL)hasEnterAction:(unsigned long long)arg0;
- (id)enterBottomCardString;
- (void)setEnterBottomCardType:(long long)arg0;
- (id)cardGoodsDictFromRouterParams:(id)arg0;
- (id)bottomCardItemID;
- (void)setBottomCardDict:(id)arg0;
- (id)cardOrderDictFromRouterParams:(id)arg0;
- (unsigned long long)enterActionType;
- (void)setupChatDetail;
- (void)fetchHistoryMessage:(BOOL)arg0;
- (id)setupChatDetailGroup;
- (void)setSetupChatDetailGroup:(id)arg0;
- (void)setupConversation;
- (void)setIsSettingUpChatGroup:(BOOL)arg0;
- (BOOL)memberRequestSuccess;
- (long long)fetchMessagesPageState;
- (void)markAllMessagesRead;
- (void)trackMessageRead:(id)arg0;
- (void)setFetchMessagesPageState:(long long)arg0;
- (void)setInsertState:(id)arg0;
- (void)setupMember;
- (void)setupMessageSoure;
- (void)sendUserEnterMessage;
- (void)sendAppletWebhook;
- (BOOL)isSettingUpChatGroup;
- (void)configConversation;
- (id)getEnterBizExt;
- (void)setMemberRequestSuccess:(BOOL)arg0;
- (void)setShowPlatformService:(BOOL)arg0;
- (void)setNaviSubTitle:(id)arg0;
- (void)setNaviIcon:(id)arg0;
- (BOOL)setupDataSourceSucess;
- (void)setSetupDataSourceSucess:(BOOL)arg0;
- (void)setGroupDissolved:(BOOL)arg0;
- (BOOL)isFecthingMessages;
- (void)setIsFecthingMessages:(BOOL)arg0;
- (id)createCellVMWithMessage:(id)arg0;
- (long long)currentReadIndex;
- (id)otherSidePigeonUID;
- (void)setCurrentReadIndex:(long long)arg0;
- (void)makeCellVMCombineWithSource:(id)arg0 isFetchedHistory:(BOOL)arg1;
- (BOOL)sendUserEnterSuccess;
- (void)setSendUserEnterSuccess:(BOOL)arg0;
- (BOOL)sendAppletWebhookSuccess;
- (void)setSendAppletWebhookSuccess:(BOOL)arg0;
- (Class)listFactory;
- (void)setBottomCardItemID:(id)arg0;
- (id)handleListURLReplacementWithURLString:(id)arg0;
- (void)checkSharkContentWithUpdateMessage:(id)arg0;
- (void)handleNeedUpdatedWithMessage:(id)arg0;
- (void)updateCurrentMessageReadWithIndex:(long long)arg0;
- (void)insertMessageWithCardUserChooseCardID:(id)arg0 cardType:(id)arg1 itemID:(id)arg2 itemContent:(id)arg3;
- (void)trackerFirstSendMessageSuccessWithType:(id)arg0;
- (id)createBizSendMessageWithOriginExt:(id)arg0;
- (void)insertMessageWithSendMessage:(id)arg0;
- (void)afterInsertMessageHandle;
- (void)handleListLifeCycleChanged:(long long)arg0;
- (void)handleListLoadMore;
- (void)cellVMWillDisplay:(id)arg0;
- (void)handleCellVM:(id)arg0 action:(id)arg1;
- (void)setMemberManager:(id)arg0;
- (BOOL)groupDissolved;
- (void)setGroupID:(id)arg0;
- (id)tracker;
- (void)setDataSource:(id)arg0;
- (id)groupID;
- (id)dataSource;
- (void).cxx_destruct;
- (id)serviceClient;
- (void)setServiceClient:(id)arg0;
- (id)title;
- (id)currentUser;
- (void)dealloc;
- (id)conversation;
- (void)setTitle:(id)arg0;
- (void)setConversation:(id)arg0;
- (BOOL)hasSentMessage;
- (long long)inbox;
- (long long)fromType;
- (void)setFromType:(long long)arg0;
- (void)setInbox:(long long)arg0;
- (void)initData;
- (BOOL)isFirstFetch;

@end