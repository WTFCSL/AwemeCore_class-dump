//
//     Generated by private class-dump
//

@class IESLiveAudienceListEnterView, NSString, IESLiveOnlineWatchUserView, HTSLiveAudienceListStore;
@protocol IESLiveURLSchemaHandler, IESLiveGiftModule, IESHYControllerProtocol, IESLivePerfSampler, HTSLiveAudienceListActions, IESLiveInternalRouter;

@interface IESLiveAudienceRankListFragment : IESLiveRoomComponent <HTSLiveAudienceRankListRouter, IESHYControllerDelegate, HTSLiveAudienceListReactions> {
    BOOL _isShowingAudiencelist;
    BOOL _shouldShowAudienceList;
    BOOL _isShowedEnterView;
    HTSLiveAudienceListStore *_store;
    id<IESLiveGiftModule> _giftModule;
    IESLiveAudienceListEnterView *_audienceEnterView;
    id<IESLiveInternalRouter> _internalRouter;
    id<HTSLiveAudienceListActions> _actionCreator;
    IESLiveOnlineWatchUserView *_onlineWatchUser;
    long long _orientation;
    id<IESLiveURLSchemaHandler> _schemaURLHandler;
    id<IESHYControllerProtocol> _hybridContainer;
    id<IESLivePerfSampler> _perfSampler;
    double _appearTime;
}

@property (retain, nonatomic) HTSLiveAudienceListStore *store;
@property (nonatomic) BOOL isShowingAudiencelist;
@property (retain, nonatomic) id<IESLiveGiftModule> giftModule;
@property (retain, nonatomic) IESLiveAudienceListEnterView *audienceEnterView;
@property (retain, nonatomic) id<IESLiveInternalRouter> internalRouter;
@property (retain, nonatomic) id<HTSLiveAudienceListActions> actionCreator;
@property (nonatomic) BOOL shouldShowAudienceList;
@property (retain, nonatomic) IESLiveOnlineWatchUserView *onlineWatchUser;
@property (nonatomic) long long orientation;
@property (retain, nonatomic) id<IESLiveURLSchemaHandler> schemaURLHandler;
@property (weak, nonatomic) id<IESHYControllerProtocol> hybridContainer;
@property (retain, nonatomic) id<IESLivePerfSampler> perfSampler;
@property (nonatomic) double appearTime;
@property (nonatomic) BOOL isShowedEnterView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_aweLazyRegisterLoad;

- (void)showToast:(id)arg0;
- (id)internalRouter;
- (void)setInternalRouter:(id)arg0;
- (id)hybridContainer;
- (void)updateVipInfo;
- (void)setHybridContainer:(id)arg0;
- (double)appearTime;
- (void)setAppearTime:(double)arg0;
- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (void)remoteRoomDataReady:(id)arg0;
- (id)perfSampler;
- (void)setPerfSampler:(id)arg0;
- (id)getComponentsWithURLString:(id)arg0;
- (id)openHybridURL:(id)arg0 fromInside:(BOOL)arg1;
- (id)schemaURLHandler;
- (void)setSchemaURLHandler:(id)arg0;
- (void)hideComponent;
- (void)showComponent;
- (void)componentOrientationTransitioning:(long long)arg0;
- (id)actionCreator;
- (void)setActionCreator:(id)arg0;
- (id)giftModule;
- (void)setGiftModule:(id)arg0;
- (void)fetchLinkmicGuestRankListDataWithUser:(id)arg0 completion:(id /* block */)arg1;
- (void)showAudienceRankList;
- (void)showLynxAudienceListWithRankType:(long long)arg0;
- (void)refreshUserCount:(id)arg0;
- (void)refreshFlowStimulateViewWithStyle:(long long)arg0 userCount:(id)arg1 icon:(id)arg2 isKeep:(BOOL)arg3;
- (void)endShowFlowStimulateViewWithStyle:(long long)arg0 userCount:(id)arg1;
- (void)refreshDouPlusUserCount:(id)arg0;
- (void)makeAudienceEnterVisible:(BOOL)arg0;
- (void)refreshVerticalUserCount:(id)arg0 horizontalUserCount:(id)arg1;
- (void)updateAudienceEnterState:(BOOL)arg0;
- (void)startShowDouPlusView;
- (void)setDouPlusHint:(id)arg0;
- (void)showNewDouPlusOrder:(id)arg0;
- (void)endShowDouPlusView;
- (void)endShowFreshmanSupportView:(id)arg0;
- (id)onlineWatchUser;
- (void)setOnlineWatchUser:(id)arg0;
- (BOOL)shouldShowAudienceList;
- (id)audienceEnterView;
- (void)tryAddOnlineWatchUser;
- (BOOL)isShowedEnterView;
- (void)setIsShowedEnterView:(BOOL)arg0;
- (void)enterDouplusPageView;
- (void)setAudienceEnterView:(id)arg0;
- (void)handleRoomUserStats;
- (void)tryAddEnterView;
- (void)showLynxLinkMicGuestRankListWithUser:(id)arg0 extraParams:(id)arg1;
- (void)refreshFreshmanSupportUserCount:(id)arg0 icon:(id)arg1;
- (void)showGiftViewWithExtraParams:(id)arg0;
- (void)showLoginPanel:(id /* block */)arg0;
- (void)refreshRoomContributor:(BOOL)arg0;
- (void)updateBrandRoom;
- (void)showLinkMicGuestRankListWithUser:(id)arg0;
- (void)setShouldShowAudienceList:(BOOL)arg0;
- (void)updateEnterView:(BOOL)arg0;
- (void)createEnterView;
- (BOOL)shouldBanAudienceContributorView;
- (id)changeIncludOfflineInPVType:(id)arg0 params:(id)arg1;
- (id)buildTrackParamsForMoreDetail;
- (BOOL)isShowingAudiencelist;
- (void)setIsShowingAudiencelist:(BOOL)arg0;
- (void).cxx_destruct;
- (id)store;
- (long long)orientation;
- (void)setStore:(id)arg0;
- (void)setOrientation:(long long)arg0;
- (void)_orientationChanged:(long long)arg0;
- (void)setUpViews;

@end
