//
//     Generated by private class-dump
//

@class NSString, ACCCameraSubscription, RACSubject, AWEStickerPickerControllerPluginStore, NSDictionary, AWEStickerPickerModel, NSMutableSet, IESEffectModel, AWEStickerPicckerDataSource, RACSignal;
@protocol ACCRecordPropService, ACCStickerPickerService, ACCCameraService;

@interface ACCPropPickerViewModel : ACCRecorderViewModel <ACCPropPickerService> {
    BOOL isLastEffectCancelByExitSlidPanel;
    BOOL _isExposePanelShowFavor;
    BOOL _hasShootSameReport;
    AWEStickerPickerModel *_stickerPickerModel;
    AWEStickerPicckerDataSource *_stickerDataSource;
    id /* block */ _createStickerDataSourceAction;
    NSString *_customPanelName;
    id<ACCRecordPropService> _propService;
    id<ACCCameraService> _cameraService;
    RACSubject *_showPanelSubject;
    RACSubject *_didFinishLoadEffectListSubject;
    NSMutableSet *_showenPropIdentifiers;
    NSDictionary *_trackingInfoDictionary;
    IESEffectModel *_waitingSticker;
    ACCCameraSubscription *_subscription;
    AWEStickerPickerControllerPluginStore *_pluginStore;
    RACSubject *_preloadPropPanelSubject;
    NSString *_enterMethod;
}

@property (retain, nonatomic) id<ACCRecordPropService> propService;
@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) RACSubject *showPanelSubject;
@property (retain, nonatomic) RACSubject *didFinishLoadEffectListSubject;
@property (retain, nonatomic) NSMutableSet *showenPropIdentifiers;
@property (copy, nonatomic) NSDictionary *trackingInfoDictionary;
@property (retain, nonatomic) IESEffectModel *waitingSticker;
@property (retain, nonatomic) ACCCameraSubscription *subscription;
@property (retain, nonatomic) AWEStickerPickerControllerPluginStore *pluginStore;
@property (retain, nonatomic) RACSubject *preloadPropPanelSubject;
@property (retain, nonatomic) NSString *enterMethod;
@property (nonatomic) BOOL hasShootSameReport;
@property (retain, nonatomic) AWEStickerPickerModel *stickerPickerModel;
@property (retain, nonatomic) AWEStickerPicckerDataSource *stickerDataSource;
@property (copy, nonatomic) id /* block */ createStickerDataSourceAction;
@property (nonatomic) BOOL isExposePanelShowFavor;
@property (readonly, nonatomic) RACSignal *preloadPropPanelSignal;
@property (copy, nonatomic) NSString *customPanelName;
@property (readonly, nonatomic) RACSignal *didFinishLoadEffectListSignal;
@property (readonly, nonatomic) RACSignal *showPanelSignal;
@property (readonly, nonatomic) id<ACCStickerPickerService> stickerPickerService;
@property (nonatomic) BOOL isLastEffectCancelByExitSlidPanel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setEnterMethod:(id)arg0;
- (id)enterMethod;
- (id)cameraService;
- (void)setCameraService:(id)arg0;
- (void)setCustomPanelName:(id)arg0;
- (id)customPanelName;
- (id)propService;
- (void)setPropService:(id)arg0;
- (void)showPanelFromTab:(id)arg0 enterMethod:(id)arg1;
- (BOOL)shouldAutoShowPanelWithApplyProp:(id)arg0;
- (id)trackingInfoDictionary;
- (id)commonTrackParamsForDIYProp:(id)arg0;
- (id)didFinishLoadEffectListSignal;
- (id)showPanelSignal;
- (id)stickerPickerService;
- (id)pluginStore;
- (BOOL)isLastEffectCancelByExitSlidPanel;
- (void)setIsLastEffectCancelByExitSlidPanel:(BOOL)arg0;
- (id)preloadPropPanelSignal;
- (id)stickerPickerModel;
- (BOOL)hasShootSameReport;
- (void)setHasShootSameReport:(BOOL)arg0;
- (id)waitingSticker;
- (void)setWaitingSticker:(id)arg0;
- (void)sendPreloadPropPanelSignal;
- (void)setStickerPickerModel:(id)arg0;
- (id)stickerDataSource;
- (void)trackPropSkipWithLastIndexPath:(id)arg0 currentIndexPath:(id)arg1;
- (void)trackPanelShowWithEnterMethod:(id)arg0;
- (void)monitorStartStickerPanelLoadingDuration;
- (void)trackStickerPanelLoadPerformanceWithStatus:(long long)arg0 dismissTrackStr:(id)arg1;
- (void)trackComfirmPropSettingEvent;
- (void)trackUserCancelUseSticker;
- (void)monitorCancelStickerPanelLoadingDuration;
- (void)prefetchFirstScreenPropIconWithHotCategoryModel:(id)arg0;
- (void)prefetchFirstPropWithHotCategoryModel:(id)arg0;
- (void)sendSignal_didFinishLoadEffectListWithFirstHotSticker:(id)arg0;
- (void)trackPropRankScoreWithCategoryModel:(id)arg0;
- (void)monitorTrackServiceLoadCategorysError:(id)arg0 panelName:(id)arg1 panelType:(id)arg2 duration:(id)arg3 needUpdate:(BOOL)arg4;
- (void)trackToolPerformanceAPIWithType:(id)arg0 duration:(double)arg1 hitCache:(BOOL)arg2 extraInfo:(id)arg3 error:(id)arg4;
- (void)trackBeginDownloadContextInfoWithEffectModel:(id)arg0;
- (void)trackDownloadPerformanceWithStickerID:(id)arg0 propModel:(id)arg1 duration:(double)arg2 success:(BOOL)arg3 isAutoDownload:(BOOL)arg4 error:(id)arg5;
- (void)trackApplyPropFailedTotalTimeWithStickerID:(id)arg0 duration:(double)arg1 isAutoDownload:(BOOL)arg2;
- (void)trackDidFailedDownloadSticker:(id)arg0 withError:(id)arg1;
- (void)monitorTrackServiceCategoryContentError:(id)arg0 panelName:(id)arg1 duration:(id)arg2 needUpdate:(BOOL)arg3;
- (void)trackClickPropTabEventWithCategoryName:(id)arg0 value:(id)arg1 isPhotoMode:(BOOL)arg2 isThemeMode:(BOOL)arg3;
- (void)trackUserDidTapSticker:(id)arg0;
- (void)trackPropClickEventWithSticker:(id)arg0 categoryName:(id)arg1 atIndexPath:(id)arg2 isPhotoMode:(BOOL)arg3 isThemeMode:(BOOL)arg4 additionalParams:(id)arg5;
- (void)trackPropShowEventWithSticker:(id)arg0 categoryName:(id)arg1 sectionName:(id)arg2 atIndexPath:(id)arg3 isPhotoMode:(BOOL)arg4 additionalParams:(id)arg5;
- (void)trackMVTemplateStickerDisplay:(id)arg0;
- (void)trackSearchWithEventName:(id)arg0 params:(id)arg1;
- (void)trackPropFirstScreenShowDuration:(long long)arg0 averageDuration:(long long)arg1 isFirstScreen:(BOOL)arg2;
- (void)setCreateStickerDataSourceAction:(id /* block */)arg0;
- (BOOL)isExposePanelShowFavor;
- (void)trackWillApplySticker:(id)arg0;
- (id)assemblyStickerPickerDataContainerRequestParamter;
- (id)showPanelSubject;
- (id)didFinishLoadEffectListSubject;
- (id)preloadPropPanelSubject;
- (id)p_getEffectCamPanelName;
- (id /* block */)createStickerDataSourceAction;
- (void)setStickerDataSource:(id)arg0;
- (void)p_trackDownloadUserViewPerformanceWithSticker:(id)arg0 duration:(long long)arg1 status:(id)arg2 hitCache:(BOOL)arg3 error:(id)arg4;
- (id)showenPropIdentifiers;
- (void)setIsExposePanelShowFavor:(BOOL)arg0;
- (void)setShowPanelSubject:(id)arg0;
- (void)setDidFinishLoadEffectListSubject:(id)arg0;
- (void)setShowenPropIdentifiers:(id)arg0;
- (void)setTrackingInfoDictionary:(id)arg0;
- (void)setPluginStore:(id)arg0;
- (void)setPreloadPropPanelSubject:(id)arg0;
- (void).cxx_destruct;
- (void)setSubscription:(id)arg0;
- (void)dealloc;
- (void)addSubscriber:(id)arg0;
- (id)subscription;
- (void)removeSubscriber:(id)arg0;

@end
