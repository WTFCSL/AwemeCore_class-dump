//
//     Generated by private class-dump
//

@class AWEUILoadingView, AWEECOMIMUserConfig, NSMutableDictionary, NSDictionary, UITableView, AWEECOMIMInputSuggestView, AWEECOMIMInputView, AWEECOMIMAnnounceMentModel, UIButton, AWEECOMIMChatDetailVCBiz, AWEECOMIMNoticeItemView, NSString, AWEECOMIMChatDetailFloatNavigationBar, AWEECOMIMEntryChatInfoModel, NSTimer, NSMutableSet, AWEECOMIMSuggestSettingController, AWEECOMIMChatDetailNavigationView, AWEECOMIMBannerView, AWEECOMIMExtraOrderView;

@interface AWEECOMIMChatDetailViewController : AWEECOMIMBaseViewController <UITableViewDataSource, UITableViewDelegate, AWEECOMIMMsgCellDelegate, UIGestureRecognizerDelegate, AWEECOMIMChatDetailNavigationViewDelegate, AWEECOMIMExtraOrderViewDelegate, AWEECOMIMBannerViewDelegate, AWEECOMIMTopChatInfoBannerCellDelegate, AWERouterViewControllerProtocol> {
    BOOL _isFirstMsgRendering;
    BOOL _isFloatMode;
    BOOL _isExpand;
    BOOL _hasFinishFetchFirstPageMessage;
    BOOL _fetchConversationFinished;
    BOOL _fetchShopIdFinished;
    BOOL _isEnterPage;
    BOOL _isRatingCardEditing;
    BOOL _isEnterStoreMasked;
    BOOL _instantRetailShop;
    BOOL _isRatingServiceDealing;
    BOOL _onScreenHasHostLogin;
    BOOL _onScreenIsViewDidDisappear;
    BOOL _onScreenDidTrackByCellDisplay;
    BOOL _onScreenDidTrackByViewDidDisappear;
    AWEECOMIMEntryChatInfoModel *_entryModel;
    AWEECOMIMChatDetailVCBiz *_messageListBiz;
    AWEECOMIMInputView *_inputboxView;
    AWEECOMIMNoticeItemView *_noticeView;
    UITableView *_messageListTableView;
    AWEECOMIMBannerView *_topBannerView;
    AWEECOMIMExtraOrderView *_entryExtraCardView;
    AWEECOMIMChatDetailNavigationView *_customNaviTitleView;
    id /* block */ _shopInfoUpdateBlock;
    AWEECOMIMChatDetailFloatNavigationBar *_floatNavigationBar;
    NSDictionary *_routerParamDict;
    AWEUILoadingView *_loadingView;
    AWEECOMIMInputSuggestView *_inputSuggestView;
    UIButton *_scrollToBottomButton;
    NSString *_shopSubTitle;
    NSString *_shopSchema;
    AWEECOMIMUserConfig *_userConfig;
    AWEECOMIMAnnounceMentModel *_announceModel;
    NSTimer *_timer;
    double _viewAppearTime;
    AWEECOMIMSuggestSettingController *_suggestSettingSheetVC;
    NSMutableSet *_displayedMsgSet;
    NSTimer *_recalledMessageEditTimer;
    double _onScreenInitTime;
    long long _onScreenFirstFrameHasData;
    long long _onScreenReportCount;
    double _onScreenHandleMsgBeginTime;
    double _onScreenCellDisplayTime;
    NSMutableDictionary *_onScreenStageParams;
}

@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) AWEECOMIMInputSuggestView *inputSuggestView;
@property (retain, nonatomic) UIButton *scrollToBottomButton;
@property (retain, nonatomic) AWEECOMIMChatDetailVCBiz *messageListBiz;
@property (retain, nonatomic) AWEECOMIMEntryChatInfoModel *entryModel;
@property (copy, nonatomic) NSString *shopSubTitle;
@property (copy, nonatomic) NSString *shopSchema;
@property (retain, nonatomic) AWEECOMIMUserConfig *userConfig;
@property (retain, nonatomic) AWEECOMIMAnnounceMentModel *announceModel;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) double viewAppearTime;
@property (weak, nonatomic) AWEECOMIMSuggestSettingController *suggestSettingSheetVC;
@property (retain, nonatomic) NSMutableSet *displayedMsgSet;
@property (retain, nonatomic) NSTimer *recalledMessageEditTimer;
@property (nonatomic) BOOL hasFinishFetchFirstPageMessage;
@property (nonatomic) BOOL fetchConversationFinished;
@property (nonatomic) BOOL fetchShopIdFinished;
@property (nonatomic) BOOL isEnterPage;
@property (nonatomic) BOOL isRatingCardEditing;
@property (nonatomic) BOOL isEnterStoreMasked;
@property (nonatomic) BOOL instantRetailShop;
@property (nonatomic) BOOL isRatingServiceDealing;
@property (nonatomic) double onScreenInitTime;
@property (nonatomic) long long onScreenFirstFrameHasData;
@property (nonatomic) BOOL onScreenHasHostLogin;
@property (nonatomic) long long onScreenReportCount;
@property (nonatomic) BOOL onScreenIsViewDidDisappear;
@property (nonatomic) double onScreenHandleMsgBeginTime;
@property (nonatomic) double onScreenCellDisplayTime;
@property (retain, nonatomic) NSMutableDictionary *onScreenStageParams;
@property (nonatomic) BOOL onScreenDidTrackByCellDisplay;
@property (nonatomic) BOOL onScreenDidTrackByViewDidDisappear;
@property (copy, nonatomic) NSDictionary *routerParamDict;
@property (readonly, nonatomic) BOOL isFirstMsgRendering;
@property (retain, nonatomic) AWEECOMIMInputView *inputboxView;
@property (retain, nonatomic) AWEECOMIMNoticeItemView *noticeView;
@property (retain, nonatomic) UITableView *messageListTableView;
@property (retain, nonatomic) AWEECOMIMBannerView *topBannerView;
@property (retain, nonatomic) AWEECOMIMExtraOrderView *entryExtraCardView;
@property (retain, nonatomic) AWEECOMIMChatDetailNavigationView *customNaviTitleView;
@property (nonatomic) BOOL isFloatMode;
@property (copy, nonatomic) id /* block */ shopInfoUpdateBlock;
@property (retain, nonatomic) AWEECOMIMChatDetailFloatNavigationBar *floatNavigationBar;
@property (nonatomic) BOOL isExpand;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)configWithRouterParamDict:(id)arg0;
- (BOOL)isExpand;
- (void)setIsExpand:(BOOL)arg0;
- (void)appWillEnterForegroundNotification;
- (void)onWSMessageDidReceive:(id)arg0;
- (id)shopSchema;
- (void)setShopSchema:(id)arg0;
- (void)setRouterParamDict:(id)arg0;
- (id)routerParamDict;
- (id)requestCommonParams;
- (void)setViewAppearTime:(double)arg0;
- (void)setOnScreenIsViewDidDisappear:(BOOL)arg0;
- (double)viewAppearTime;
- (BOOL)onScreenDidTrackByCellDisplay;
- (BOOL)onScreenDidTrackByViewDidDisappear;
- (void)setOnScreenDidTrackByViewDidDisappear:(BOOL)arg0;
- (void)trackContentOnScreenTime;
- (void)setOnScreenHasHostLogin:(BOOL)arg0;
- (void)startToLoadPage;
- (void)setupBiz;
- (void)reachabilityDidChange;
- (id)noticeView;
- (BOOL)checkNetworkNotReachable;
- (void)setOnScreenDidTrackByCellDisplay:(BOOL)arg0;
- (long long)onScreenFirstFrameHasData;
- (void)setOnScreenFirstFrameHasData:(long long)arg0;
- (void)tryToShowNaviNoticeView;
- (void)endSceneMonitor;
- (double)onScreenInitTime;
- (long long)onScreenReportCount;
- (void)setOnScreenReportCount:(long long)arg0;
- (BOOL)onScreenIsViewDidDisappear;
- (BOOL)onScreenHasHostLogin;
- (void)p_backBtnClicked;
- (id)btmPageID;
- (void)setNoticeView:(id)arg0;
- (void)setOnScreenInitTime:(double)arg0;
- (id)entryModel;
- (void)setIsFloatMode:(BOOL)arg0;
- (void)showOrHideChatTopInfoBannerView;
- (void)setMessageListViewHeight:(double)arg0;
- (void)setIsEnterStoreMasked:(BOOL)arg0;
- (id)inputboxView;
- (BOOL)needHiddenPhone;
- (void)setInputboxView:(id)arg0;
- (void)setMessageListBiz:(id)arg0;
- (void)configBizParams;
- (void)configBizCallback;
- (id)messageListTableView;
- (id)messageListBiz;
- (void)refreshUIAfterFetchSubTitleInfoWithSubTitle:(id)arg0 isSuccess:(BOOL)arg1;
- (void)refreshUIAfterFetchTitleInfoWithShopDetailModel:(id)arg0 isSuccess:(BOOL)arg1;
- (void)refreshUIAfterFetchConversationQueuedCount;
- (void)bindNavigationBarRightButtonWithItems:(id)arg0;
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
- (long long)ecomIndentBannerNumberOfItem;
- (id)ecomIndentBannerCell:(id)arg0 cellForItemAtIndex:(long long)arg1;
- (void)ecomIndentBannerCell:(id)arg0 willDisplayCellAtIndex:(long long)arg1 draggingChangedIndex:(BOOL)arg2;
- (void)msgCellDidClickImage:(id)arg0 imageItemModel:(id)arg1;
- (void)msgCellDidSendQuestionAnswer:(id)arg0 cellModel:(id)arg1;
- (void)msgCellDidSendSelectableMsgCardMessage:(id)arg0 cellModel:(id)arg1;
- (void)msgCellDidChangeHeight:(id)arg0 tableCell:(id)arg1;
- (id)userConfig;
- (void)msgCellDidModifyUserConfig:(id)arg0 bizType:(int)arg1 openStatus:(int)arg2;
- (void)msgCellDidUserSwitchToHuman:(id)arg0 reqId:(id)arg1;
- (void)msgCellDidResendMessage:(id)arg0 lastSendMsgModel:(id)arg1;
- (void)msgCellDidClickAvatar:(id)arg0;
- (void)setShopInfoUpdateBlock:(id /* block */)arg0;
- (id)floatNavigationBar;
- (id)entryExtraCardView;
- (void)updateNoticeViewTop;
- (void)updateScrollToBottomButtonTop;
- (void)trackPageViewEventName:(id)arg0 eventParams:(id)arg1;
- (BOOL)isEnterStoreMasked;
- (BOOL)instantRetailShop;
- (void)setInstantRetailShop:(BOOL)arg0;
- (void)chatDetailNaviViewDidClickLogoIcon;
- (void)chatDetailNaviViewDidClickTitle;
- (void)setUserConfig:(id)arg0;
- (BOOL)isFloatMode;
- (void)setEntryModel:(id)arg0;
- (void)trackViewClickEventName:(id)arg0 eventParams:(id)arg1;
- (void)destoryTimer;
- (id)recalledMessageEditTimer;
- (void)setRecalledMessageEditTimer:(id)arg0;
- (void)trackOnScreenStage:(id)arg0 beginTime:(double)arg1 endTime:(double)arg2;
- (void)customInitUI;
- (void)tryLoginAndFetchMessages;
- (void)fetchChatTopInfoData;
- (void)onPageBackSwiped:(id)arg0;
- (void)setIsEnterPage:(BOOL)arg0;
- (void)messageListTouchInside;
- (void)customInitNavigationBar;
- (void)setupInputView;
- (void)customInitMessageListView;
- (void)customInitNotiveView;
- (id)scrollToBottomButton;
- (id)customNaviTitleView;
- (void)refreshMessageList;
- (void)scrollToBottomAnimated:(BOOL)arg0 completion:(id /* block */)arg1;
- (BOOL)displayOverScreen;
- (void)refreshAllSubviewsAndScrollToBottomAnimated:(BOOL)arg0 shouldDelay:(BOOL)arg1;
- (void)setBcmPageParams;
- (void)tryToShowScollToBottomButton;
- (double)onScreenHandleMsgBeginTime;
- (id)inputSuggestView;
- (void)fetchShopTelephoneAndCall;
- (void)adjustInputViewFrameWithTop:(double)arg0 animated:(BOOL)arg1;
- (void)adjustMessageListViewFrameWithHeight:(double)arg0;
- (void)adjustInputSuggestViewFrame;
- (void)tryToHideEntryExtraCardView;
- (BOOL)inputSuggestEnable;
- (void)fetchInputSuggestDataWithText;
- (BOOL)inputBoxViewIsInputing;
- (double)getInputSuggestViewTopWithSuggestViewHeight:(double)arg0;
- (BOOL)isRatingServiceDealing;
- (void)setIsRatingServiceDealing:(BOOL)arg0;
- (id)showSuggestSettingsSheet;
- (void)setSuggestSettingSheetVC:(id)arg0;
- (void)fetchUserConfig;
- (void)hideInputSuggestView;
- (BOOL)fetchConversationFinished;
- (BOOL)fetchShopIdFinished;
- (void)showNoticeViewWithNoticeModel:(id)arg0 Animated:(BOOL)arg1;
- (id)leaveMessageContent;
- (BOOL)shouldShowOpenNotificationTip;
- (void)saveCloseOpenPushTipTime;
- (void)gotoApplicationSetting;
- (id)announceModel;
- (BOOL)shouldShowAnnouceContent:(id)arg0;
- (void)saveCloseAnnounceTipTimeWithContent:(id)arg0;
- (void)checkQueuedCountChanged;
- (void)startCheckQeuedCountTimer;
- (void)onReceiveMessageSendResponse:(id)arg0;
- (void)loadShopIdFromKVStore;
- (void)checkUserLoginAndInitPigeonClientWithChatGroup:(id)arg0;
- (void)preHandleConversation;
- (BOOL)isEnterWrongPage;
- (void)trackEnterWrongPage;
- (void)dealEnterWrongPage;
- (void)conversationDidChange:(id)arg0;
- (void)fetchGoodOrOrderCardData;
- (void)excuteOtherRequiredInitalizationMethodsAfeterGetDecodeShopIdAndConversation;
- (void)trackPageLoadStatusWithIsSuccess:(BOOL)arg0 isLoginFail:(BOOL)arg1;
- (void)bindConversationAndLoadHistoryMessages:(id)arg0;
- (void)setFetchConversationFinished:(BOOL)arg0;
- (void)getOrCreateConversationBlock:(id /* block */)arg0;
- (void)fetchCurrentUserInfo;
- (id)shopIdKeyWithEncodedShopId:(id)arg0;
- (void)setAnnounceModel:(id)arg0;
- (void)sendUserEnterChat;
- (void)checkUserLoginAndInitPigeonClient:(id /* block */)arg0;
- (void)setFetchShopIdFinished:(BOOL)arg0;
- (id)shopSubTitle;
- (id /* block */)shopInfoUpdateBlock;
- (BOOL)hasFinishFetchFirstPageMessage;
- (void)scrollToBottomAnimated:(BOOL)arg0 shouldDelay:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)setShopSubTitle:(id)arg0;
- (void)sendUserSwitchToHumanWithScene:(id)arg0;
- (void)tryCreateConversationId;
- (void)setOnScreenHandleMsgBeginTime:(double)arg0;
- (void)startRecalledMessageEditStateScheduleCheck;
- (void)setUpInputViewOptions;
- (void)setHasFinishFetchFirstPageMessage:(BOOL)arg0;
- (void)sendUserEnterFromGoodsOrOrder;
- (void)refreshMessageListTableViewNotScroll;
- (id)suggestSettingSheetVC;
- (BOOL)shouldShowFromSourceGoodOrOrderWithFromSource:(id)arg0;
- (BOOL)shouldShowTipGoodCardWithGoodId:(id)arg0;
- (BOOL)shouldShowOrderCardWithOrderId:(id)arg0 skuOrderId:(id)arg1;
- (void)showExtraCardViewWithModel:(id)arg0;
- (void)saveFromSourceGoodOrderShowTimeWithFromSource:(id)arg0;
- (void)saveGoodCardShowTimeWithGoodId:(id)arg0;
- (void)saveOrderCardShowTimeWithOrderId:(id)arg0 skuOrderId:(id)arg1;
- (void)setEntryExtraCardView:(id)arg0;
- (void)updateNaviButton:(id)arg0 item:(id)arg1;
- (void)hideEntryExtraCardView;
- (void)hideIMPopMenuView;
- (void)setInputViewTop:(double)arg0;
- (BOOL)isRatingCardEditing;
- (BOOL)displayOverTwoScreen;
- (id)announceTipKeyWithContent:(id)arg0;
- (id)goodKeyWithGoodId:(id)arg0;
- (double)extraCardShowTimeInterval;
- (id)orderKeyWithOrderId:(id)arg0 skuOrderId:(id)arg1;
- (id)fromSourceKeyWithFromSource:(id)arg0;
- (void)stopCheckQueuedCount;
- (id)getDefaultCell:(id)arg0 atIndexPath:(id)arg1;
- (BOOL)isEnterPage;
- (id)displayedMsgSet;
- (void)setOnScreenCellDisplayTime:(double)arg0;
- (void)sendUserSwithToHumanWithMsgModel:(id)arg0 reqId:(id)arg1;
- (id)appendSoure:(id)arg0 toShopSchema:(id)arg1;
- (void)setIsRatingCardEditing:(BOOL)arg0;
- (id)suggestEventParamsWithModels:(id)arg0;
- (void)onClickScrollToBottomButton;
- (id)onScreenStageParams;
- (double)onScreenCellDisplayTime;
- (void)msgCellDidSendSelectableMessage:(id)arg0 cellModel:(id)arg1;
- (void)msgCellDidClickReEdit:(id)arg0;
- (void)msgCellDidUpdate:(id)arg0;
- (void)msgCellDidRatingCardChangeTextViewFirstResponder:(BOOL)arg0 msgModel:(id)arg1;
- (void)extraOrderViewDidClickSendButton:(id)arg0;
- (void)extraOrderViewDidClickCloseButton;
- (void)topChatInfoBannerCellDidClickActionBtn:(id)arg0 itemIndex:(long long)arg1;
- (BOOL)isFirstMsgRendering;
- (void)setMessageListTableView:(id)arg0;
- (void)setTopBannerView:(id)arg0;
- (void)setCustomNaviTitleView:(id)arg0;
- (void)setFloatNavigationBar:(id)arg0;
- (void)setInputSuggestView:(id)arg0;
- (void)setScrollToBottomButton:(id)arg0;
- (void)setDisplayedMsgSet:(id)arg0;
- (void)setOnScreenStageParams:(id)arg0;
- (id)timer;
- (id)init;
- (void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (void)viewDidAppear:(BOOL)arg0;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)arg0;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (void)keyboardWillShow:(id)arg0;
- (void)viewWillDisappear:(BOOL)arg0;
- (void)scrollViewDidEndScrollingAnimation:(id)arg0;
- (long long)preferredStatusBarStyle;
- (void)viewDidDisappear:(BOOL)arg0;
- (void)keyboardWillHide:(id)arg0;
- (id)serviceType;
- (void)scrollViewDidScroll:(id)arg0;
- (BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1;
- (void)setTimer:(id)arg0;
- (void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1;
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
- (id)topBannerView;
- (void)registerNotifications;
- (void)viewWillAppear:(BOOL)arg0;
- (void)scrollViewWillBeginDragging:(id)arg0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)loadMoreMessages;
- (void)showLoadingView;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (void)hideLoadingView;
- (id)findFirstResponderInView:(id)arg0;
- (id)pageName;

@end
