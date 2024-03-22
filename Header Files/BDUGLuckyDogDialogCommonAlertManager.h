//
//     Generated by private class-dump
//

@class NSArray, NSMutableDictionary, NSString, NSMutableArray, UIViewController;

@interface BDUGLuckyDogDialogCommonAlertManager : NSObject <BDUGLuckyDogCommonAlertManagerProtocol, BDUGLuckyCatContainerPopupEventListenerProtocol, BDUGLuckyCleanCacheDelegateProtocol, BDXContainerLifecycleProtocol> {
    BOOL _isInBackGround;
    NSArray *_globalBlockList;
    NSArray *_cancelPopupIds;
    NSMutableArray *_hasShownCommonAlertIDs;
    NSMutableArray *_hasReceivePopupIDs;
    NSMutableArray *_hasReportedBKPopupIDs;
    NSMutableArray *_hasReportedFeHasShowPopupIDs;
    NSMutableArray *_hasReportedHasShownPopupIDs;
    NSMutableArray *_hasReportedRemovePollingSettingsPopupIDs;
    NSMutableArray *_hasShownLynxContainerPopupIDs;
    NSMutableArray *_needShowAlerts;
    NSMutableArray *_lynxAlerts;
    NSMutableArray *_blockHandler;
    NSMutableDictionary *_reasonOfPopupErrorDic;
}

@property (copy, nonatomic) NSArray *globalBlockList;
@property (copy, nonatomic) NSArray *cancelPopupIds;
@property (retain, nonatomic) NSMutableArray *hasShownCommonAlertIDs;
@property (retain, nonatomic) NSMutableArray *hasReceivePopupIDs;
@property (retain, nonatomic) NSMutableArray *hasReportedBKPopupIDs;
@property (retain, nonatomic) NSMutableArray *hasReportedFeHasShowPopupIDs;
@property (retain, nonatomic) NSMutableArray *hasReportedHasShownPopupIDs;
@property (retain, nonatomic) NSMutableArray *hasReportedRemovePollingSettingsPopupIDs;
@property (retain, nonatomic) NSMutableArray *hasShownLynxContainerPopupIDs;
@property (retain, nonatomic) NSMutableArray *needShowAlerts;
@property (retain, nonatomic) NSMutableArray *lynxAlerts;
@property (retain, nonatomic) NSMutableArray *blockHandler;
@property (nonatomic) BOOL isInBackGround;
@property (retain, nonatomic) NSMutableDictionary *reasonOfPopupErrorDic;
@property (readonly, nonatomic) UIViewController *topVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setDialogQueuePaused:(BOOL)arg0;
+ (void)onCleanCache;
+ (void)preStartupDialogModule;
+ (void)LoadLynxAlerts;
+ (void)startupDialogModule;
+ (id)sharedInstance;
+ (id)moduleName;
+ (id)serviceProtocol;

- (void)containerWillDestory:(id)arg0;
- (void)containerOnShow:(id)arg0 sourceParam:(id)arg1;
- (id)topVC;
- (void)showCommonAlertWithParams:(id)arg0;
- (void)removePopupWithID:(long long)arg0;
- (void)finishPopupWithID:(long long)arg0;
- (void)luckyCatContainerPopupDidFailLoadWithParams:(id)arg0;
- (void)showAlertWithParamsDic:(id)arg0;
- (void)_updateTrackerDictionary:(id)arg0 withAlertModel:(id)arg1;
- (void)showIfNeed;
- (void)cleanupExpiredPopups;
- (void)sendTrackForDequeuedError;
- (void)setIsInBackGround:(BOOL)arg0;
- (id)reasonOfPopupErrorDic;
- (void)setGlobalBlockList:(id)arg0;
- (BOOL)hasShownPopupId:(long long)arg0;
- (void)requestImageWithModel:(id)arg0 completion:(id /* block */)arg1;
- (id)globalBlockList;
- (BOOL)isInAllowedPositionOfModel:(id)arg0;
- (BOOL)isInBackGround;
- (void)cleanupCacheAndPopups;
- (BOOL)hasSamePopUpInShowArrayWithID:(long long)arg0;
- (void)setReasonOfPopupErrorDic:(id)arg0;
- (id)popupObjWithAlertModel:(id)arg0;
- (void)finishLynxPopupWithContainerId:(id)arg0;
- (void)enqueuePopupWithContext:(id)arg0 dialogObj:(id)arg1 containerId:(id)arg2 showBlock:(id /* block */)arg3;
- (void)__updateCancelPopupIds;
- (void)__updateGlobalBlockList;
- (void)__activateSideChainTracker;
- (BOOL)tryToRemoveAlertFromQueueWithPopupId:(long long)arg0;
- (void)showLynxAlertIfNeed;
- (id)needShowAlerts;
- (id)hasShownCommonAlertIDs;
- (id)hasReceivePopupIDs;
- (void)personalSettingPopUpDate;
- (void)pollingSettingsUpdated:(id)arg0;
- (void)__cleanupCancelPopupIds;
- (id)cancelPopupIds;
- (void)setCancelPopupIds:(id)arg0;
- (void)retrieveColdStartPopupDataFrom:(id)arg0;
- (void)trackPopUpReceiveWithPopupModel:(id)arg0 enterFrom:(id)arg1;
- (void)configPollingSettingsAlert;
- (BOOL)__isCancelledPopup:(long long)arg0;
- (BOOL)tryToRemoveAlertWithPopUpId:(long long)arg0;
- (void)showAlertWithAlertModel:(id)arg0 params:(id)arg1 dialogObj:(id)arg2;
- (id)hasReportedBKPopupIDs;
- (id)statusTableFECacheKeyWithActivityID:(id)arg0 cycleID:(long long)arg1;
- (id)hasReportedFeHasShowPopupIDs;
- (id)hasReportedHasShownPopupIDs;
- (id)popupNameWithPopupId:(long long)arg0;
- (id)dialogManagerOfAlertModel:(id)arg0;
- (void)openLynxPopupWithParamsDict:(id)arg0 alertModel:(id)arg1 dialogObj:(id)arg2;
- (void)enqueueCommonAlertWithParamsDict:(id)arg0 alertModel:(id)arg1 dialogObj:(id)arg2;
- (BOOL)enqueueAlertWithParamsDict:(id)arg0 alertModel:(id)arg1 dialogObj:(id)arg2 showBlock:(id /* block */)arg3;
- (id)lynxAlerts;
- (BOOL)_isNewContainerWithSchema:(id)arg0;
- (id)hasShownLynxContainerPopupIDs;
- (BOOL)shouldShowWithPopUpObj:(id)arg0 alertModel:(id)arg1 params:(id)arg2;
- (void)showBlockPopUpObj:(id)arg0 alertModel:(id)arg1 showBlock:(id /* block */)arg2;
- (id)__popupContextWithContainer:(id)arg0;
- (long long)shouldBlockPopupWithAlertModel:(id)arg0 currentTimeInMS:(double)arg1;
- (void)sendTrackForDequeuedPopup:(id)arg0 status:(long long)arg1;
- (id)hasReportedRemovePollingSettingsPopupIDs;
- (BOOL)tryToRemoveAlertWithPopUpId:(long long)arg0 isShowOnce:(BOOL)arg1;
- (long long)popupPriorityWithAlertModel:(id)arg0;
- (BOOL)__hasActivityWithAlertModel:(id)arg0;
- (BOOL)__waitPollingSettingsWithAlertModel:(id)arg0;
- (BOOL)__isPlayedActivityWithAlertModel:(id)arg0;
- (void)luckyCatContainerPopupDidDeallocWithParams:(id)arg0;
- (void)registerBlockHandler:(id /* block */)arg0;
- (void)setHasShownCommonAlertIDs:(id)arg0;
- (void)setHasReceivePopupIDs:(id)arg0;
- (void)setHasReportedBKPopupIDs:(id)arg0;
- (void)setHasReportedFeHasShowPopupIDs:(id)arg0;
- (void)setHasReportedHasShownPopupIDs:(id)arg0;
- (void)setHasReportedRemovePollingSettingsPopupIDs:(id)arg0;
- (void)setHasShownLynxContainerPopupIDs:(id)arg0;
- (void)setNeedShowAlerts:(id)arg0;
- (void)setLynxAlerts:(id)arg0;
- (void)staticSettingPopUpDate;
- (id)init;
- (void).cxx_destruct;
- (void)log:(id)arg0;
- (void)didBecomeActive:(id)arg0;
- (BOOL)isLandscape;
- (void)willResignActive:(id)arg0;
- (void)dealloc;
- (id)blockHandler;
- (void)setBlockHandler:(id)arg0;

@end
