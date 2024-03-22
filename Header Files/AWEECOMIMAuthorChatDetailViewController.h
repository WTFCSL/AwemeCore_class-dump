//
//     Generated by private class-dump
//

@class AWEECOMIMAuthorChatDetailVCBiz, AWEECOMIMAuthorInputView;

@interface AWEECOMIMAuthorChatDetailViewController : AWEECOMIMChatDetailViewController {
    AWEECOMIMAuthorChatDetailVCBiz *messageListBiz;
    AWEECOMIMAuthorInputView *inputboxView;
}

@property (retain, nonatomic) AWEECOMIMAuthorChatDetailVCBiz *messageListBiz;
@property (retain, nonatomic) AWEECOMIMAuthorInputView *inputboxView;

- (void)setupBiz;
- (id)btmPageID;
- (id)inputboxView;
- (BOOL)needHiddenPhone;
- (void)setInputboxView:(id)arg0;
- (void)setMessageListBiz:(id)arg0;
- (id)messageListBiz;
- (void)generateInputView;
- (void)registerMsgCells;
- (void)msgCellDidSkipToReport:(id)arg0;
- (BOOL)fetchUserConfigEnable;
- (BOOL)fetchChatTopInfoDataEnable;
- (void)fetchSubTitleInfoAndRefreshUI;
- (void)fetchTitleInfoAndRefreshUIWithChatGroup:(id)arg0;
- (void)fetchConversationQueuedCountAndRefreshUI;
- (void)autoSendUserSwitchToHuman;
- (void)createConversationBlock:(id /* block */)arg0;
- (void)fetchShopSchemaWithCompletion:(id /* block */)arg0;
- (void)fetchChatIconsAndRefreshChatNavigationView;
- (void)fetchProductOrOrderWithCompletion:(id /* block */)arg0;
- (BOOL)checkIsCurrentChatQueueCountUpdateWithBodyDict:(id)arg0;
- (void)sendGoodsCardWithItemModel:(id)arg0;
- (void)sendOrderCardWithItemModel:(id)arg0;
- (id)pagePigeonShopID;
- (id)pagePigeonBizType;
- (BOOL)canSendUserEnterFromGoodsOrOrder;
- (id)pageNameForPerformanceTracker;
- (long long)pageInbox;
- (void).cxx_destruct;
- (id)serviceType;
- (id)pageName;

@end
