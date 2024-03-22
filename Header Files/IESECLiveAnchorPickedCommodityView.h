//
//     Generated by private class-dump
//

@class IESECLiveGoodsListTab, IESECLiveReplayFlow, IESECLiveAnchorFlashSaleSwitchBannerView, IESECLiveStateView, UILabel, NSMutableArray, IESECLiveRoomContext, NSString, IESECLiveAnchorTransInfoModel, IESECLiveAnchorSettingHintModel, IESECGCDTimer, IESECLiveAnchorAuthorStatsModel, NSMutableSet, IESECLiveGoodsListAskExplainPopInfoModel, UIButton, UICollectionView, UIView, IESECLiveApi, IESECLiveAnchorAirView, IESECLiveAnchorPickedCommoditySettingsView, IESECLiveGoodsListModel;
@protocol IESECLiveAnchorPickedCommodityViewDelegate;

@interface IESECLiveAnchorPickedCommodityView : UIView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, IESECLiveAnchorPickedCommodityCellDelegate, IESECLiveAnchorPickedCommodityHeaderDelegate, IESECLiveAnchorFlashSaleSwitchBannerViewDelegate, IESECLiveGoodsListTabDelegate> {
    BOOL _flashSaleSwitchIsOn;
    BOOL _isAuthFlashSale;
    BOOL _commentaryVideoAuth;
    BOOL _askExplainAuth;
    BOOL _isPushingCouponListView;
    BOOL _isNoCommodityFilterDefaultOpen;
    BOOL _isUseNewTransData;
    id<IESECLiveAnchorPickedCommodityViewDelegate> _delegate;
    NSString *_currentPromotionId;
    UIView *_wrapper;
    UIView *_navigationBar;
    UILabel *_title;
    IESECLiveAnchorPickedCommoditySettingsView *_settingHintView;
    IESECLiveGoodsListTab *_tabView;
    UICollectionView *_collectionView;
    UIView *_listSortWraper;
    UILabel *_currentListSort;
    unsigned long long _currentListSortType;
    UIView *_moreOptionsViewContainer;
    UIButton *_functionalButton;
    NSString *_previousBindedPids;
    IESECLiveStateView *_stateView;
    IESECLiveAnchorAirView *_airView;
    IESECLiveAnchorFlashSaleSwitchBannerView *_flashSaleSwitchView;
    IESECLiveRoomContext *_roomContext;
    NSString *_roomId;
    NSString *_anchorId;
    IESECLiveApi *_api;
    unsigned long long _selectedTabIndex;
    NSMutableArray *_replayButtonShowOnceTrackIds;
    NSMutableArray *_productShowOnceTrackIds;
    IESECLiveGoodsListAskExplainPopInfoModel *_askExplainPopInfo;
    IESECLiveGoodsListModel *_listViewModel;
    NSMutableArray *_displayedGoods;
    IESECLiveReplayFlow *_replayFlowInfo;
    IESECLiveAnchorAuthorStatsModel *_statsModel;
    IESECLiveAnchorTransInfoModel *_transDataModel;
    IESECLiveAnchorSettingHintModel *_settingHintModel;
    IESECGCDTimer *_timer;
    NSMutableSet *_tabViewShowOnceTrackIds;
    long long _anchorListStartTime;
}

@property (retain, nonatomic) UIView *wrapper;
@property (retain, nonatomic) UIView *navigationBar;
@property (retain, nonatomic) UILabel *title;
@property (retain, nonatomic) IESECLiveAnchorPickedCommoditySettingsView *settingHintView;
@property (retain, nonatomic) IESECLiveGoodsListTab *tabView;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UIView *listSortWraper;
@property (retain, nonatomic) UILabel *currentListSort;
@property (nonatomic) unsigned long long currentListSortType;
@property (retain, nonatomic) UIView *moreOptionsViewContainer;
@property (retain, nonatomic) UIButton *functionalButton;
@property (retain, nonatomic) NSString *previousBindedPids;
@property (retain, nonatomic) IESECLiveStateView *stateView;
@property (retain, nonatomic) IESECLiveAnchorAirView *airView;
@property (retain, nonatomic) IESECLiveAnchorFlashSaleSwitchBannerView *flashSaleSwitchView;
@property (retain, nonatomic) IESECLiveRoomContext *roomContext;
@property (copy, nonatomic) NSString *roomId;
@property (copy, nonatomic) NSString *anchorId;
@property (copy, nonatomic) IESECLiveApi *api;
@property (nonatomic) unsigned long long selectedTabIndex;
@property (nonatomic) BOOL commentaryVideoAuth;
@property (retain, nonatomic) NSMutableArray *replayButtonShowOnceTrackIds;
@property (nonatomic) BOOL askExplainAuth;
@property (retain, nonatomic) NSMutableArray *productShowOnceTrackIds;
@property (retain, nonatomic) IESECLiveGoodsListAskExplainPopInfoModel *askExplainPopInfo;
@property (retain, nonatomic) IESECLiveGoodsListModel *listViewModel;
@property (retain, nonatomic) NSMutableArray *displayedGoods;
@property (retain, nonatomic) IESECLiveReplayFlow *replayFlowInfo;
@property (retain, nonatomic) IESECLiveAnchorAuthorStatsModel *statsModel;
@property (retain, nonatomic) IESECLiveAnchorTransInfoModel *transDataModel;
@property (retain, nonatomic) IESECLiveAnchorSettingHintModel *settingHintModel;
@property (retain, nonatomic) IESECGCDTimer *timer;
@property (nonatomic) BOOL isPushingCouponListView;
@property (nonatomic) BOOL isNoCommodityFilterDefaultOpen;
@property (retain, nonatomic) NSMutableSet *tabViewShowOnceTrackIds;
@property (nonatomic) BOOL isUseNewTransData;
@property (nonatomic) long long anchorListStartTime;
@property (weak, nonatomic) id<IESECLiveAnchorPickedCommodityViewDelegate> delegate;
@property (copy, nonatomic) NSString *currentPromotionId;
@property (nonatomic) BOOL flashSaleSwitchIsOn;
@property (nonatomic) BOOL isAuthFlashSale;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)roomId;
- (void)setRoomId:(id)arg0;
- (id)anchorId;
- (void)setAnchorId:(id)arg0;
- (void)p_setupUI;
- (void)setTabView:(id)arg0;
- (id)stateView;
- (void)setStateView:(id)arg0;
- (id)listViewModel;
- (void)setListViewModel:(id)arg0;
- (void)p_refreshUI;
- (void)p_setupTimer;
- (void)p_cancelTimer;
- (void)setRoomContext:(id)arg0;
- (void)p_setupStateView;
- (void)setAirView:(id)arg0;
- (id)airView;
- (void)flashSaleSwitchBannerDidTapSwitchButton:(BOOL)arg0;
- (void)setFlashSaleSwitchIsOn:(BOOL)arg0;
- (void)upTriangleButtonFired:(id)arg0;
- (void)downTriangleButtonFired:(id)arg0;
- (void)tapExplainDeleteButton:(id)arg0;
- (void)cellFunctionalButtonFired:(id)arg0;
- (BOOL)canShowExplainDeleteButton:(BOOL)arg0;
- (id)statsModel;
- (void)commodityHeaderClick:(id)arg0;
- (void)setStatsModel:(id)arg0;
- (id)settingHintModel;
- (void)p_setShownSettingSubHint;
- (long long)anchorListStartTime;
- (id)previousBindedPids;
- (id)updatedGoodsIndexPathsForMessage:(id)arg0;
- (void)reloadItemsWithoutAnimationAtIndexPaths:(id)arg0;
- (void)fetchGoodsInfoWithMessage:(id)arg0 inIndexPaths:(id)arg1;
- (BOOL)isUseNewTransData;
- (id)settingHintView;
- (void)functionalButtonDidTap:(id)arg0;
- (void)setListSortWraper:(id)arg0;
- (id)listSortWraper;
- (void)setCurrentListSort:(id)arg0;
- (void)setCurrentListSortType:(unsigned long long)arg0;
- (id)currentListSort;
- (void)sortSwitchButtonDidTap:(id)arg0;
- (id)flashSaleSwitchView;
- (void)p_updateFlashSaleSwitchViewVisibility;
- (void)closeTabView;
- (id)goodsModelsFromWholeGoodsModels:(id)arg0 withPromotionIDs:(id)arg1;
- (void)setDisplayedGoods:(id)arg0;
- (void)p_scrollToCurrentPromotionProduct;
- (id)tabViewShowOnceTrackIds;
- (void)p_trackTabItem:(id)arg0 event:(id)arg1 index:(long long)arg2;
- (unsigned long long)currentListSortType;
- (void)reloadPickerListWhenClickListTab;
- (void)reloadAnchorNotiOrTransData;
- (void)setTransDataModel:(id)arg0;
- (void)p_showSettingHintOrTransDataViewIfNeeded;
- (void)p_updateStateView;
- (BOOL)isNoCommodityFilterOpen;
- (BOOL)isNoCommodityFilterDefaultOpen;
- (void)setSettingHintModel:(id)arg0;
- (void)setIsUseNewTransData:(BOOL)arg0;
- (void)fetchPickerList:(BOOL)arg0;
- (void)updateTabModels:(id)arg0;
- (void)setReplayFlowInfo:(id)arg0;
- (void)p_showAnchorSettingManageBubble;
- (id)currentPromotionId;
- (void)setCurrentPromotionId:(id)arg0;
- (BOOL)commentaryVideoAuth;
- (void)setCommentaryVideoAuth:(BOOL)arg0;
- (BOOL)askExplainAuth;
- (void)setAskExplainAuth:(BOOL)arg0;
- (id)askExplainPopInfo;
- (void)setAskExplainPopInfo:(id)arg0;
- (void)fetchCampaignWithPromotionIDs:(id)arg0 GoodsList:(id)arg1 callback:(id /* block */)arg2;
- (id)p_currentSelectedGoods;
- (void)openWebAddPromotionsPage;
- (id)displayedGoods;
- (void)fetchGoodsCampaign:(id)arg0 callback:(id /* block */)arg1;
- (void)setPreviousBindedPids:(id)arg0;
- (void)bindPickedGoods:(id)arg0 succeedBlock:(id /* block */)arg1;
- (void)p_finishFlashSaleWithModel:(id)arg0;
- (id)replayFlowInfo;
- (void)showFirstGuideForExplainProductReplayIfNeedWithGoods:(id)arg0 replayFlowInfo:(id)arg1;
- (void)showFirstTimeGuideForAskExplainWithCompletion:(id /* block */)arg0;
- (void)p_trackForExplainGoodsWithEventName:(id)arg0 goods:(id)arg1 clickFor:(id)arg2;
- (void)showRebindAlert:(id)arg0 succeedBlock:(id /* block */)arg1;
- (id)replayButtonShowOnceTrackIds;
- (id)productShowOnceTrackIds;
- (id)transDataModel;
- (BOOL)p_canShowSettingsHintView;
- (void)p_showSettingGuideBubbleWithText:(id)arg0;
- (id)functionalButton;
- (BOOL)isAuthFlashSale;
- (void)p_handleTimer;
- (void)showSortSwitchBubbleWithView:(id)arg0;
- (id)getMoreOptionsView;
- (void)setMoreOptionsViewContainer:(id)arg0;
- (id)moreOptionsViewContainer;
- (void)dismissOptionsView;
- (void)changeLocalGoodsSort;
- (void)openAnchorSettingPage;
- (BOOL)isPushingCouponListView;
- (void)setIsPushingCouponListView:(BOOL)arg0;
- (void)listTabDidShowMoreView:(id)arg0;
- (void)listTabDidClickMoreView:(id)arg0;
- (void)listTab:(id)arg0 didShowAtIndex:(long long)arg1 tabModel:(id)arg2;
- (void)listTab:(id)arg0 didClickAtIndex:(long long)arg1 tabModel:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 roomContext:(id)arg1 delegate:(id)arg2 roomId:(id)arg3 anchorId:(id)arg4;
- (void)updateGoodsForMessage:(id)arg0;
- (void)updateCommonMessage:(id)arg0;
- (void)reloadAnchorNoti;
- (void)updateSelectedGoods:(id)arg0 needBindPickedGoods:(BOOL)arg1 succeedBlock:(id /* block */)arg2;
- (void)setIsAuthFlashSale:(BOOL)arg0;
- (void)openCouponPannel;
- (BOOL)flashSaleSwitchIsOn;
- (void)setSettingHintView:(id)arg0;
- (void)setFunctionalButton:(id)arg0;
- (void)setFlashSaleSwitchView:(id)arg0;
- (void)setReplayButtonShowOnceTrackIds:(id)arg0;
- (void)setProductShowOnceTrackIds:(id)arg0;
- (void)setIsNoCommodityFilterDefaultOpen:(BOOL)arg0;
- (void)setTabViewShowOnceTrackIds:(id)arg0;
- (void)setAnchorListStartTime:(long long)arg0;
- (void)reload;
- (id)timer;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;
- (void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2;
- (struct CGSize { double x0; double x1; })collectionView:(id)arg0 layout:(id)arg1 referenceSizeForHeaderInSection:(long long)arg2;
- (void).cxx_destruct;
- (id)collectionView;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (id)collectionView:(id)arg0 viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (void)close;
- (void)setCollectionView:(id)arg0;
- (id)title;
- (id)delegate;
- (void)setTimer:(id)arg0;
- (void)showTabView;
- (id)navigationBar;
- (void)setNavigationBar:(id)arg0;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (void)setTitle:(id)arg0;
- (id)wrapper;
- (id)api;
- (void)loadData:(BOOL)arg0;
- (id)roomContext;
- (void)setWrapper:(id)arg0;
- (id)tabView;
- (unsigned long long)selectedTabIndex;
- (void)setSelectedTabIndex:(unsigned long long)arg0;
- (void)setApi:(id)arg0;

@end