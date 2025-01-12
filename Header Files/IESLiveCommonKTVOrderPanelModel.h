//
//     Generated by private class-dump
//

@class HTSEventContext, NSString, NSArray, IESLiveKTVMusicManager, IESLiveCombineSubject, NSMutableDictionary, IESLiveKTVCommonStore, HTSLiveUser, NSMutableArray, IESLiveKtvSongStruct;
@protocol IESLiveTracker, IESLiveMixKTVRouter, IESLiveRoomService, IESLiveKTVFullLinkMonitor, IESLiveKTVMultiChorusRouter, IESLiveKTVDecorateService, IESLiveKTVOptimizeCellDelegate, IESLiveKTVSongListActions, IESLiveKTVApplySingListActions;

@interface IESLiveCommonKTVOrderPanelModel : NSObject <IESLiveKTVDecorateReaction, IESLiveKTVMultiChorusActions, IESLiveKTVOrderPanelProtocol, IESLiveMixKTVApplySingCellDelegate, IESLiveKTVWillSingCellDelegate> {
    BOOL _isOrderPanlShow;
    BOOL _isSearching;
    BOOL _isMixKTV;
    BOOL _isMultiKTV;
    BOOL _isAnchor;
    BOOL _needToOrderTab;
    BOOL _isAuto;
    BOOL _isMusicPlaying;
    BOOL _needDecorateUnRead;
    BOOL _isCPUOptimize;
    id<IESLiveRoomService> _room;
    long long _fastStartFirstLevelIndex;
    NSString *_fastStartTabName;
    id<IESLiveKTVFullLinkMonitor> _ktvMonitor;
    id /* block */ _showFeedBackBlock;
    HTSEventContext *_trackContext;
    id<IESLiveTracker> _tracker;
    NSMutableDictionary *_singListCallBackBlkDict;
    IESLiveCombineSubject *_orderPanelActionSignal;
    unsigned long long _waitingOffset;
    NSString *_waitingPrompts;
    id /* block */ _scrollOrderBlk;
    IESLiveKTVCommonStore *_store;
    long long _multiChorusApplyCount;
    id<IESLiveKTVApplySingListActions> _applyActionsCreator;
    id<IESLiveKTVMultiChorusRouter> _multiChoursCreator;
    id<IESLiveKTVDecorateService> _decorateServiceImpl;
    id<IESLiveMixKTVRouter> _mixKTVRouter;
    long long _audienceApplyCount;
    NSString *_highScoreCountStr;
    id<IESLiveKTVOptimizeCellDelegate> _optimizeCellDelegate;
    NSMutableArray *_segTitles;
    NSArray *_segTypeArr;
    IESLiveKTVMusicManager *_ktvMusicManager;
    long long _requestMode;
    id<IESLiveKTVSongListActions> _songActionsCreator;
    IESLiveKtvSongStruct *_unitTestMusicModel;
    HTSLiveUser *_currentLoginUser;
}

@property (retain, nonatomic) IESLiveKTVMusicManager *ktvMusicManager;
@property (nonatomic) long long requestMode;
@property (weak, nonatomic) id<IESLiveKTVSongListActions> songActionsCreator;
@property (retain, nonatomic) IESLiveKtvSongStruct *unitTestMusicModel;
@property (nonatomic) BOOL isCPUOptimize;
@property (weak, nonatomic) HTSLiveUser *currentLoginUser;
@property (nonatomic) BOOL isMixKTV;
@property (nonatomic) BOOL isMultiKTV;
@property (nonatomic) BOOL isAnchor;
@property (nonatomic) unsigned long long waitingOffset;
@property (copy, nonatomic) NSString *waitingPrompts;
@property (copy, nonatomic) id /* block */ scrollOrderBlk;
@property (nonatomic) BOOL needToOrderTab;
@property (nonatomic) BOOL isAuto;
@property (weak, nonatomic) IESLiveKTVCommonStore *store;
@property (nonatomic) BOOL isMusicPlaying;
@property (nonatomic) long long multiChorusApplyCount;
@property (weak, nonatomic) id<IESLiveKTVApplySingListActions> applyActionsCreator;
@property (weak, nonatomic) id<IESLiveKTVMultiChorusRouter> multiChoursCreator;
@property (weak, nonatomic) id<IESLiveKTVDecorateService> decorateServiceImpl;
@property (weak, nonatomic) id<IESLiveMixKTVRouter> mixKTVRouter;
@property (nonatomic) long long audienceApplyCount;
@property (copy, nonatomic) NSString *highScoreCountStr;
@property (nonatomic) BOOL needDecorateUnRead;
@property (weak, nonatomic) id<IESLiveKTVOptimizeCellDelegate> optimizeCellDelegate;
@property (retain, nonatomic) NSMutableArray *segTitles;
@property (retain, nonatomic) NSArray *segTypeArr;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *fastStartTabName;
@property (nonatomic) long long fastStartFirstLevelIndex;
@property (nonatomic) BOOL isSearching;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (nonatomic) BOOL isOrderPanlShow;
@property (retain, nonatomic) id<IESLiveTracker> tracker;
@property (retain, nonatomic) id<IESLiveKTVFullLinkMonitor> ktvMonitor;
@property (retain, nonatomic) NSMutableDictionary *singListCallBackBlkDict;
@property (copy, nonatomic) id /* block */ showFeedBackBlock;
@property (retain, nonatomic) IESLiveCombineSubject *orderPanelActionSignal;

- (id)trackContext;
- (void)setTrackContext:(id)arg0;
- (BOOL)isMusicPlaying;
- (void)setIsAnchor:(BOOL)arg0;
- (void)didSetAttachingDIContext;
- (id)currentLoginUser;
- (void)setCurrentLoginUser:(id)arg0;
- (void)trackSoloKTVEntranceShow;
- (long long)getDefaultIndex;
- (id)currentUserType;
- (void)trackSoloKTVEntranceClick;
- (BOOL)isKTVController;
- (BOOL)isOpenApply;
- (void)refreshAudienceAlready:(id)arg0;
- (id)canApplySingSignal;
- (id)canMultiChorusSingSignal;
- (void)setRequestMode:(long long)arg0;
- (id)topSongId;
- (void)setIsCPUOptimize:(BOOL)arg0;
- (BOOL)isCPUOptimize;
- (id)waitingPrompts;
- (void)setWaitingPrompts:(id)arg0;
- (BOOL)useOldIMOrderList;
- (long long)getTotalOrderCount;
- (BOOL)hasJoinChannel;
- (void)clearYellowDotIfNeed;
- (BOOL)canApplySing;
- (BOOL)isMixKTV;
- (BOOL)isMultiKTV;
- (void)didReceiveYellowDotFromRemote;
- (void)didClearYellowDot;
- (void)didJoinMultiChorusForMusicModel:(id)arg0;
- (void)didLeaveMultiChorusForMusicModel:(id)arg0;
- (void)setIsMusicPlaying:(BOOL)arg0;
- (BOOL)canMultiChorus;
- (id)ktvMusicManager;
- (void)fetchKTVCategoryWithRequestMode:(long long)arg0 firstLevelTab:(int)arg1 completion:(id /* block */)arg2;
- (long long)p_getIndexWithFirstLevelTab:(int)arg0;
- (void)fetchKTVMusicListWithRequestMode:(long long)arg0 firstLevelTab:(int)arg1 category:(id)arg2 isLoadMore:(BOOL)arg3 topSongId:(id)arg4 collectionId:(id)arg5 completion:(id /* block */)arg6;
- (BOOL)shouldAddAudienceSingTab;
- (id)highScoreCountStr;
- (void)setHighScoreCountStr:(id)arg0;
- (void)trackSongShowWithMusicModel:(id)arg0 source:(id)arg1 forIndexPath:(id)arg2 category:(id)arg3 mainTab:(id)arg4;
- (id)unitTestMusicModel;
- (void)setUnitTestMusicModel:(id)arg0;
- (id)songActionsCreator;
- (id)optimizeCellDelegate;
- (id)singListCallBackBlkDict;
- (void)trackCollectSongEventWithMusic:(id)arg0 source:(id)arg1;
- (void)trackClickedKSongButtonEventWithSource:(id)arg0 musicModel:(id)arg1 isPlayAll:(BOOL)arg2 index:(long long)arg3;
- (void)cell:(id)arg0 songDidAddSuccessFor:(id)arg1;
- (void)trackClickedKSongSuccessEventWithSource:(id)arg0 musicModel:(id)arg1 index:(long long)arg2;
- (void)cell:(id)arg0 refreshDownloadButtonUIWithMusicModel:(id)arg1;
- (void)requestHighScoreSongsCountIfNeed;
- (void)postNotificationToWebcastForPersonalCardShow;
- (void)trackKsongChorusButtonClickWithMusicModel:(id)arg0 hasJoined:(BOOL)arg1 category:(id)arg2;
- (void)showConfirmToRemoveAlertWithModel:(id)arg0 isCutSong:(BOOL)arg1 completion:(id /* block */)arg2;
- (id)ktvMonitor;
- (void)trackClickedEventWithType:(id)arg0 model:(id)arg1;
- (void)insertContentWithParams:(id)arg0 musicModel:(id)arg1;
- (id)segTypeArr;
- (id)tabTitleForCellType:(long long)arg0;
- (BOOL)isOrderPanlShow;
- (long long)multiChorusApplyCount;
- (long long)multiChorusUnReadCount;
- (id /* block */)showFeedBackBlock;
- (BOOL)needToOrderTab;
- (void)setNeedToOrderTab:(BOOL)arg0;
- (long long)applyUnReadCount;
- (long long)listenUnReadCount;
- (BOOL)needDecorateUnRead;
- (id)orderPanelActionSignal;
- (void)setNeedDecorateUnRead:(BOOL)arg0;
- (id)soloKTVEntranceSource;
- (BOOL)enableSoloKTVEntranceShowInCurrentScene;
- (id)mixKTVRouter;
- (long long)audienceUnReadCount;
- (BOOL)liveKtvEnableOpenMultiChorus;
- (void)listView:(id)arg0 configurationForCell:(id)arg1;
- (void)listView:(id)arg0 configurationFooter:(id)arg1 forSection:(long long)arg2;
- (void)listView:(id)arg0 willDisplayCell:(id)arg1 forIndexPath:(id)arg2;
- (void)cell:(id)arg0 didFavoriteItem:(id)arg1;
- (void)cell:(id)arg0 didClickMultiChorus:(BOOL)arg1 forItem:(id)arg2;
- (void)cell:(id)arg0 clickedAddSongFor:(id)arg1;
- (void)cell:(id)arg0 clickedWantListenFor:(id)arg1;
- (void)showMusicListFeedbackInHomePanelViewWithSongName:(id)arg0 singerName:(id)arg1;
- (id)combineMusicListArray:(id)arg0 firstLevelTab:(int)arg1 category:(id)arg2;
- (BOOL)needRefreshWithName:(id)arg0;
- (BOOL)needAddAllHeaderWithName:(id)arg0;
- (BOOL)needShowCountWithName:(id)arg0;
- (BOOL)needReloadDataWithName:(id)arg0;
- (void)addSingListCallBackWithViewModel:(id)arg0;
- (void)refreshTabSortStatusWithTabArray:(id)arg0;
- (void)needLoadBannerData;
- (void)fetchKTVMusicListWithRequestMode:(long long)arg0 firstLevelTab:(int)arg1 category:(id)arg2 completion:(id /* block */)arg3;
- (void)trackContainerCellShow;
- (void)trackShowPageWithViewModel:(id)arg0;
- (void)trackClickSearchEventWithSearchType:(long long)arg0 requestPage:(id)arg1;
- (void)trackSearchRequestEventWithContent:(id)arg0 contentType:(id)arg1 searchType:(long long)arg2;
- (void)trackSearchResultEventWithContent:(id)arg0 requestPage:(id)arg1 contentType:(id)arg2 searchType:(long long)arg3;
- (void)trackCellShowWithList:(id)arg0;
- (id)fastStartTabName;
- (void)setFastStartTabName:(id)arg0;
- (long long)fastStartFirstLevelIndex;
- (void)setFastStartFirstLevelIndex:(long long)arg0;
- (void)setIsOrderPanlShow:(BOOL)arg0;
- (void)setKtvMonitor:(id)arg0;
- (void)setSingListCallBackBlkDict:(id)arg0;
- (void)setShowFeedBackBlock:(id /* block */)arg0;
- (void)setOrderPanelActionSignal:(id)arg0;
- (void)cell:(id)arg0 agreeFor:(id)arg1;
- (void)cell:(id)arg0 goTopFor:(id)arg1;
- (void)cell:(id)arg0 pauseFor:(id)arg1;
- (void)cell:(id)arg0 removeFor:(id)arg1;
- (void)cell:(id)arg0 linkFor:(id)arg1;
- (void)cell:(id)arg0 changeRoomFor:(id)arg1;
- (id)decorateServiceImpl;
- (id)applyActionsCreator;
- (id)multiChoursCreator;
- (void)fetchTabSelectedIndexWithRequestMode:(long long)arg0 firstLevelTab:(int)arg1 completion:(id /* block */)arg2;
- (id)getPersonalCardURL;
- (void)addAllMusicModel:(id)arg0 source:(id)arg1;
- (void)loadSoloKTV;
- (BOOL)enableSoloKTVEntranceShow;
- (void)exitKTVWithCompletion:(id /* block */)arg0;
- (id)listenUnReadCountSignal;
- (id)audienceUnReadCountSignal;
- (id)applyUnReadCountSignal;
- (id)multiChorusUnReadCountSignal;
- (id)canMultiChorusSignal;
- (long long)tabIndexWithCellType:(long long)arg0;
- (void)setIsMixKTV:(BOOL)arg0;
- (void)setIsMultiKTV:(BOOL)arg0;
- (unsigned long long)waitingOffset;
- (void)setWaitingOffset:(unsigned long long)arg0;
- (id /* block */)scrollOrderBlk;
- (void)setScrollOrderBlk:(id /* block */)arg0;
- (void)setMultiChorusApplyCount:(long long)arg0;
- (void)setApplyActionsCreator:(id)arg0;
- (void)setMultiChoursCreator:(id)arg0;
- (void)setDecorateServiceImpl:(id)arg0;
- (void)setMixKTVRouter:(id)arg0;
- (long long)audienceApplyCount;
- (void)setAudienceApplyCount:(long long)arg0;
- (void)setOptimizeCellDelegate:(id)arg0;
- (id)segTitles;
- (void)setSegTitles:(id)arg0;
- (void)setSegTypeArr:(id)arg0;
- (void)setKtvMusicManager:(id)arg0;
- (void)setSongActionsCreator:(id)arg0;
- (long long)requestMode;
- (id)tracker;
- (void)setTracker:(id)arg0;
- (BOOL)isSearching;
- (id)initWithStore:(id)arg0;
- (void).cxx_destruct;
- (id)store;
- (BOOL)isAnchor;
- (void)setStore:(id)arg0;
- (id)currentUser;
- (void)addObserver;
- (void)setIsSearching:(BOOL)arg0;
- (id)collectionId;
- (id)room;
- (void)setRoom:(id)arg0;
- (BOOL)isAuto;
- (void)setIsAuto:(BOOL)arg0;

@end
