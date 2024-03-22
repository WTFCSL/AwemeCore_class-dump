//
//     Generated by private class-dump
//

@class NSRecursiveLock, NSString, NSMutableDictionary, NSMutableArray;

@interface BDPFavoritesManager : NSObject <BDPBootLifeCycleMessage, BDPUserLoginMessage, BDPBubbleTipDelegate, BDPContainerLifeCycleMessage, BDPWarmBootMessage> {
    BOOL _succeedRequestList;
    BOOL _requestingFavoritesList;
    NSString *_currentSession;
    NSRecursiveLock *_listLock;
    NSMutableArray *_favoritesList;
    NSMutableDictionary *_tipViewData;
    NSString *_guideTipCountKey;
    NSMutableDictionary *_guideBubbleDic;
    NSMutableDictionary *_isCPBubbleDic;
}

@property (retain, nonatomic) NSString *guideTipCountKey;
@property (retain, nonatomic) NSMutableDictionary *guideBubbleDic;
@property (retain, nonatomic) NSMutableDictionary *isCPBubbleDic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;
+ (BOOL)shouldShowFavoritesForType:(long long)arg0;
+ (BOOL)shouldShowTipViewForScene:(id)arg0;
+ (void)guideShowTrackInfoWithUniqueId:(id)arg0 type:(long long)arg1 tipString:(id)arg2;
+ (void)guideClickResultTrackInfoWithUniqueId:(id)arg0 isSuccess:(BOOL)arg1;
+ (void)showToastWithTipType:(long long)arg0 type:(long long)arg1;
+ (void)guideCloseTrackInfoWithUniqueId:(id)arg0 type:(long long)arg1 tipString:(id)arg2 closeBy:(id)arg3 duration:(double)arg4;
+ (void)guideClickTrackInfoWithUniqueId:(id)arg0 duration:(double)arg1;
+ (BOOL)isHostSupportFavorites;
+ (id)errorWithErrorCode:(long long)arg0 errorMsg:(id)arg1;
+ (id)tipStringForTipType:(long long)arg0 type:(long long)arg1;
+ (id)tipTypeTrackStringForType:(long long)arg0;
+ (id)createBubbleTipWithDelegate:(id)arg0 tipModel:(id)arg1;
+ (long long)getGuideTipMaxTime;
+ (id)getGuideTipWhiteList;
+ (id)normalizeCPTipString:(id)arg0;
+ (id)sharedManager;

- (void)applicationExitWithUniqueID:(id)arg0;
- (void)viewDidAppear:(id)arg0 uniqueID:(id)arg1;
- (BOOL)isAppIdIncludeInList:(id)arg0;
- (void)addToFavoritesListWithAppID:(id)arg0 extraParams:(id)arg1 completionBlock:(id /* block */)arg2;
- (BOOL)checkTipViewCountForAppID:(id)arg0 viewType:(long long)arg1;
- (BOOL)checkTipViewIntervalForAppID:(id)arg0 viewType:(long long)arg1;
- (void)updateTipViewDataForAppID:(id)arg0 viewType:(long long)arg1;
- (void)loginWithAppId:(id)arg0 containerVC:(id)arg1 completionBlock:(id /* block */)arg2;
- (BOOL)notifyHostAppAddToFavoritesForType:(long long)arg0 uniqueId:(id)arg1 extraInfo:(id)arg2;
- (void)registerMessage;
- (id)getHostId;
- (void)removeFromFavoritesListWithAppID:(id)arg0 extraParams:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)sortFavoritesListWithAppID:(id)arg0 pivotAppID:(id)arg1 isBefore:(BOOL)arg2 extraParams:(id)arg3 completionBlock:(id /* block */)arg4;
- (void)basicAddToFavoritesListWithAppID:(id)arg0 extraParams:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)basicRemoveFromFavoritesListWithAppID:(id)arg0 extraParams:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)basicSortFavoritesListWithAppID:(id)arg0 pivotAppID:(id)arg1 isBefore:(BOOL)arg2 extraParams:(id)arg3 completionBlock:(id /* block */)arg4;
- (BOOL)notifyHostAppRemoveFromFavoritesForType:(long long)arg0 uniqueId:(id)arg1 extraInfo:(id)arg2;
- (void)applicationFirstFrameDidShow:(id)arg0;
- (void)applicationTaskAndCommonReadyWithUniqueID:(id)arg0 bootManager:(id)arg1 isColdBoot:(BOOL)arg2;
- (BOOL)getIsCPBubbleWithUniqueID:(id)arg0;
- (id)getGuideCountKey;
- (void)setGuideBubbleDic:(id)arg0;
- (void)setIsCPBubbleDic:(id)arg0;
- (void)userLoginWithUniqueID:(id)arg0;
- (void)asyncRefreshFavoritesListWithUniqueID:(id)arg0;
- (void)updateFavoritesListByForceWithUniqueID:(id)arg0;
- (BOOL)getIsLoginWithAppID:(id)arg0;
- (void)checkAndShowGuideBubbleWithUniqueID:(id)arg0;
- (id)guideBubbleDic;
- (id)isCPBubbleDic;
- (void)checkAndShowGuideBubbleWithUniqueID:(id)arg0 inContainerVC:(id)arg1;
- (id)guideTipCountKey;
- (void)setGuideTipCountKey:(id)arg0;
- (BOOL)checkLayoutBubbleTipViewWithUniqueID:(id)arg0;
- (void)updateFavoritesListIfNeedWithUniqueID:(id)arg0;
- (void)refreshFavoritesListWithUniqueID:(id)arg0;
- (void)getFavoritesListWithExtraParams:(id)arg0 appID:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)setIsCPBubbleWithUniqueID:(id)arg0 isShow:(BOOL)arg1;
- (void)hideBubbleTip:(id)arg0;
- (void)bdp_getFavoritesListWithExtraParams:(id)arg0 appID:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)bdp_addToFavoritesListWithAppID:(id)arg0 extraParams:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)bdp_removeFromFavoritesListWithAppID:(id)arg0 extraParams:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)bdp_sortFavoritesListWithAppID:(id)arg0 pivotAppID:(id)arg1 isBefore:(BOOL)arg2 extraParams:(id)arg3 completionBlock:(id /* block */)arg4;
- (id)init;
- (void).cxx_destruct;

@end