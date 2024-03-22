//
//     Generated by private class-dump
//

@class AWEPayRPDetailRewardView, AWEIMDouyinRedPacketReceiveUserModel, AWEIMDouyinRedPacketDataManager, AWEPayRPDetailUserInfoView, UITableView, AWEPayRPExchangeTopCoverView, UILabel, NSDictionary, AWEPayRPExchangeRedPacketDetailResponseModel, UIButton, UIScrollView, UIView, NSString, BDImageView, NSMutableDictionary, AWEIMDouyinRedPacketUserInfo, YYLabel, AWEIMDouyinRedPacketModel, UIImageView;
@protocol IESIMConversationProtocol, IESIMParticipantsDataManagerProtocol, AWEPayRPDetailViewControllerDelegate;

@interface AWEPayRPExchangeResultViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, UINavigationControllerDelegate, AWEPayDouyinRedPacketOpenTransitionInnerContextProvider, UIScrollViewDelegate, UIGestureRecognizerDelegate> {
    BOOL _animatedShow;
    BOOL _sendFromMe;
    BOOL _isShowingAmount;
    BOOL _hasTrackExit;
    BOOL _enableCover;
    BOOL _showOpenAnimation;
    BOOL _isViewAppeared;
    BOOL _isFollowUpdated;
    BOOL _isFollow;
    BOOL _useSpringFestivalCoverHeader;
    id<AWEPayRPDetailViewControllerDelegate> _delegate;
    unsigned long long _productType;
    NSDictionary *_exchangeTrackParams;
    NSMutableDictionary *_performanceTrackParams;
    UIScrollView *_scrollView;
    UIView *_scrollContentView;
    AWEIMDouyinRedPacketDataManager *_dataManager;
    AWEIMDouyinRedPacketModel *_info;
    AWEIMDouyinRedPacketUserInfo *_userInfo;
    NSString *_recordUrl;
    id<IESIMParticipantsDataManagerProtocol> _participantsDataController;
    UIButton *_historyButton;
    AWEPayRPDetailUserInfoView *_userInfoView;
    UILabel *_wishesLabel;
    UILabel *_amountLabel;
    UILabel *_amountUnitLabel;
    long long _amount;
    UIButton *_changeLink;
    YYLabel *_topTipsLabel;
    NSString *_topTipsContent;
    UITableView *_recvTableView;
    YYLabel *_bottomTipsLabel;
    NSString *_bottomTipsContent;
    UIImageView *_topRedView;
    UIView *_separator;
    double _tableHeaderHeight;
    UIView *_tableViewHeaderContainer;
    UIView *_animationAmountContentView;
    double _showCloneTopCoverOffsetY;
    UIView *_amountAnimateView;
    AWEPayRPExchangeTopCoverView *_exTopCoverView;
    AWEPayRPDetailRewardView *_showOffAmountButton;
    id<IESIMConversationProtocol> _conversation;
    BDImageView *_wishesEmojiView;
    AWEIMDouyinRedPacketReceiveUserModel *_exMyModel;
    AWEIMDouyinRedPacketReceiveUserModel *_exRecvModel;
    AWEPayRPExchangeRedPacketDetailResponseModel *_exDetailModel;
    NSString *_conversationId;
    NSString *_effctId;
    NSString *_pageType;
    NSString *_recvStatus;
}

@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UIView *scrollContentView;
@property (retain, nonatomic) AWEIMDouyinRedPacketDataManager *dataManager;
@property (retain, nonatomic) AWEIMDouyinRedPacketModel *info;
@property (retain, nonatomic) AWEIMDouyinRedPacketUserInfo *userInfo;
@property (copy, nonatomic) NSString *recordUrl;
@property (nonatomic) BOOL sendFromMe;
@property (retain, nonatomic) id<IESIMParticipantsDataManagerProtocol> participantsDataController;
@property (retain, nonatomic) UIButton *historyButton;
@property (retain, nonatomic) AWEPayRPDetailUserInfoView *userInfoView;
@property (retain, nonatomic) UILabel *wishesLabel;
@property (retain, nonatomic) UILabel *amountLabel;
@property (retain, nonatomic) UILabel *amountUnitLabel;
@property (nonatomic) long long amount;
@property (retain, nonatomic) UIButton *changeLink;
@property (retain, nonatomic) YYLabel *topTipsLabel;
@property (copy, nonatomic) NSString *topTipsContent;
@property (retain, nonatomic) UITableView *recvTableView;
@property (retain, nonatomic) YYLabel *bottomTipsLabel;
@property (copy, nonatomic) NSString *bottomTipsContent;
@property (retain, nonatomic) UIImageView *topRedView;
@property (retain, nonatomic) UIView *separator;
@property (nonatomic) double tableHeaderHeight;
@property (nonatomic) BOOL isShowingAmount;
@property (retain, nonatomic) UIView *tableViewHeaderContainer;
@property (nonatomic) BOOL hasTrackExit;
@property (retain, nonatomic) UIView *animationAmountContentView;
@property (nonatomic) BOOL enableCover;
@property (nonatomic) double showCloneTopCoverOffsetY;
@property (retain, nonatomic) UIView *amountAnimateView;
@property (retain, nonatomic) AWEPayRPExchangeTopCoverView *exTopCoverView;
@property (retain, nonatomic) AWEPayRPDetailRewardView *showOffAmountButton;
@property (nonatomic) BOOL showOpenAnimation;
@property (retain, nonatomic) id<IESIMConversationProtocol> conversation;
@property (retain, nonatomic) BDImageView *wishesEmojiView;
@property (retain, nonatomic) AWEIMDouyinRedPacketReceiveUserModel *exMyModel;
@property (retain, nonatomic) AWEIMDouyinRedPacketReceiveUserModel *exRecvModel;
@property (retain, nonatomic) AWEPayRPExchangeRedPacketDetailResponseModel *exDetailModel;
@property (copy, nonatomic) NSString *conversationId;
@property (copy, nonatomic) NSString *effctId;
@property (nonatomic) BOOL isViewAppeared;
@property (nonatomic) BOOL isFollowUpdated;
@property (nonatomic) BOOL isFollow;
@property (readonly, copy, nonatomic) NSString *overDueMin;
@property (copy, nonatomic) NSString *pageType;
@property (copy, nonatomic) NSString *recvStatus;
@property (nonatomic) BOOL useSpringFestivalCoverHeader;
@property (weak, nonatomic) id<AWEPayRPDetailViewControllerDelegate> delegate;
@property (nonatomic) BOOL animatedShow;
@property (nonatomic) unsigned long long productType;
@property (copy, nonatomic) NSDictionary *exchangeTrackParams;
@property (retain, nonatomic) NSMutableDictionary *performanceTrackParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)backButtonClicked;
- (BOOL)enableCover;
- (void)p_setupUI;
- (void)setRecordUrl:(id)arg0;
- (id)recordUrl;
- (BOOL)isViewAppeared;
- (void)setIsViewAppeared:(BOOL)arg0;
- (void)setUserInfoView:(id)arg0;
- (BOOL)needAnimation;
- (void)playFollowAnimation;
- (id)recvStatus;
- (void)setRecvStatus:(id)arg0;
- (void)p_setupNaviBar;
- (id)topTipsLabel;
- (void)setTopTipsLabel:(id)arg0;
- (BOOL)animatedShow;
- (double)coverOffset;
- (BOOL)isFollow;
- (id)bottomTipsLabel;
- (void)setBottomTipsLabel:(id)arg0;
- (void)setExchangeTrackParams:(id)arg0;
- (id)performanceTrackParams;
- (id)initWithExDetailResponse:(id)arg0 conversationId:(id)arg1;
- (BOOL)p_isMultiRandom;
- (double)topCoverHeight;
- (id)amountAnimationView;
- (void)p_trackEvent:(id)arg0 param:(id)arg1;
- (id)exchangeTrackParams;
- (void)setAnimatedShow:(BOOL)arg0;
- (void)setPerformanceTrackParams:(id)arg0;
- (BOOL)sendFromMe;
- (void)p_ownerAvatarTapped:(id)arg0;
- (void)setSendFromMe:(BOOL)arg0;
- (void)setShowOpenAnimation:(BOOL)arg0;
- (void)setEnableCover:(BOOL)arg0;
- (void)p_config;
- (id)wishesLabel;
- (void)p_configTopTipsContent;
- (void)setTopTipsContent:(id)arg0;
- (id)p_refundTipsAttributedString;
- (BOOL)isShowingAmount;
- (id)tableViewHeaderContainer;
- (id)animationAmountContentView;
- (void)userIDWithSecUserID:(id)arg0 completion:(id /* block */)arg1;
- (void)p_endRefresh;
- (double)topCoverHeightShowCover:(BOOL)arg0;
- (double)topCoverTureHeight;
- (id)topRedView;
- (double)showCloneTopCoverOffsetY;
- (void)p_setupCoverUI;
- (double)coverShowHeight;
- (id)recvTableView;
- (id)historyButton;
- (void)setAnimationAmountContentView:(id)arg0;
- (id)changeLink;
- (id)amountAnimateView;
- (BOOL)showOpenAnimation;
- (id)bottomTipsContent;
- (void)p_calculateOffset;
- (void)setShowCloneTopCoverOffsetY:(double)arg0;
- (void)p_trackExit;
- (void)setIsFollowUpdated:(BOOL)arg0;
- (void)setIsFollow:(BOOL)arg0;
- (BOOL)hasTrackExit;
- (void)setHasTrackExit:(BOOL)arg0;
- (id)participantsDataController;
- (BOOL)useSpringFestivalCoverHeader;
- (void)p_openHistory;
- (void)p_redirectToChange:(id)arg0;
- (id)topTipsContent;
- (void)setupTopRedView:(id)arg0;
- (void)setUseSpringFestivalCoverHeader:(BOOL)arg0;
- (BOOL)isFollowUpdated;
- (void)p_followUser;
- (double)topCoverVisibleHeight;
- (void)setParticipantsDataController:(id)arg0;
- (void)setHistoryButton:(id)arg0;
- (void)setWishesLabel:(id)arg0;
- (id)amountUnitLabel;
- (void)setAmountUnitLabel:(id)arg0;
- (void)setChangeLink:(id)arg0;
- (void)setRecvTableView:(id)arg0;
- (void)setBottomTipsContent:(id)arg0;
- (void)setTopRedView:(id)arg0;
- (double)tableHeaderHeight;
- (void)setTableHeaderHeight:(double)arg0;
- (void)setIsShowingAmount:(BOOL)arg0;
- (void)setTableViewHeaderContainer:(id)arg0;
- (void)setAmountAnimateView:(id)arg0;
- (void)p_exDetailToInfoModel;
- (id)exDetailModel;
- (id)overDueMin;
- (id)exMyModel;
- (id)p_financeNumberWith:(long long)arg0;
- (void)p_sendNotification;
- (id)exTopCoverView;
- (id)exRecvModel;
- (id)wishesEmojiView;
- (id)showOffAmountButton;
- (id)p_titleShowOffAmountButtom;
- (void)transferToUserProfileWithUserID:(id)arg0;
- (void)setExMyModel:(id)arg0;
- (void)setExRecvModel:(id)arg0;
- (id)p_getRelation;
- (void)setEffctId:(id)arg0;
- (void)p_prefetchRPEffectModel;
- (id)effctId;
- (void)p_goShowOffCreation;
- (void)p_getAvatarUrlList;
- (void)setExTopCoverView:(id)arg0;
- (void)setShowOffAmountButton:(id)arg0;
- (void)setWishesEmojiView:(id)arg0;
- (void)setExDetailModel:(id)arg0;
- (id)pageType;
- (id)dataManager;
- (BOOL)conformsToProtocol:(id)arg0;
- (unsigned long long)productType;
- (void)setScrollView:(id)arg0;
- (id)tableView:(id)arg0 viewForHeaderInSection:(long long)arg1;
- (id)info;
- (void)viewDidLayoutSubviews;
- (double)tableView:(id)arg0 heightForHeaderInSection:(long long)arg1;
- (void)setProductType:(unsigned long long)arg0;
- (void)didMoveToParentViewController:(id)arg0;
- (void)viewDidAppear:(BOOL)arg0;
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)separator;
- (void)setSeparator:(id)arg0;
- (id)scrollContentView;
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
- (void)setUserInfo:(id)arg0;
- (void)setInfo:(id)arg0;
- (long long)preferredStatusBarStyle;
- (void)viewDidDisappear:(BOOL)arg0;
- (void)scrollViewDidScroll:(id)arg0;
- (void)setDataManager:(id)arg0;
- (id)delegate;
- (id)userInfo;
- (double)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1;
- (void)setPageType:(id)arg0;
- (void)viewWillAppear:(BOOL)arg0;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (void)viewDidLoad;
- (id)scrollView;
- (id)conversation;
- (id)conversationId;
- (void)setConversationId:(id)arg0;
- (long long)amount;
- (void)setAmount:(long long)arg0;
- (void)setConversation:(id)arg0;
- (void)setScrollContentView:(id)arg0;
- (id)amountLabel;
- (void)setAmountLabel:(id)arg0;
- (id)userInfoView;

@end