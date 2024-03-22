//
//     Generated by private class-dump
//

@class FPWritableStateFlow, AWERecordPropEntranceLayoutAction, NSString;
@protocol ACCRecordSwitchModeService, ACCRecordPropService, ACCRecordGestureService, ACCRecordSelectPropService, ACCRecordAuthService, ACCRecordScanModelFlowService, ACCSideslipPropService, ACCRecordUIHiddenStrategyService, ACCRecorderViewContainer, ACCCameraService, IESServiceProvider;

@interface AWERecordPropEntranceComponent : NSObject <ACCRecordSwitchModeServiceSubscriber, ACCRecorderViewContainerItemsHideShowObserver, ACCRecordScanModelFlowSubscriber, ACCSideslipPropServiceSubscriber, ACCRecordGestureServiceSubscriber, FPInitialUIComponent> {
    BOOL _hasCameraAndMicAuthorized;
    BOOL _hasContainerVCAppeared;
    BOOL _canDisplayPropBtn;
    BOOL _canDisplayPropBtnTitle;
    id<IESServiceProvider> _serviceProvider;
    FPWritableStateFlow *_typeErasedStateFlow;
    FPWritableStateFlow *_stateFlow;
    id<ACCRecordPropService> _propService;
    id<ACCCameraService> _cameraService;
    id<ACCRecordSelectPropService> _selectPropService;
    id<ACCRecordAuthService> _authService;
    id<ACCRecordSwitchModeService> _switchModeService;
    id<ACCSideslipPropService> _sideslipPropService;
    id<ACCRecordScanModelFlowService> _scanService;
    id<ACCRecordUIHiddenStrategyService> _hiddenStrategyService;
    id<ACCRecordGestureService> _gestureService;
    id<ACCRecorderViewContainer> _viewContainer;
    AWERecordPropEntranceLayoutAction *_layoutAction;
}

@property (class, readonly, nonatomic) Class stateType;

@property (retain, nonatomic) FPWritableStateFlow *stateFlow;
@property (retain, nonatomic) id<IESServiceProvider> serviceProvider;
@property (retain, nonatomic) id<ACCRecordPropService> propService;
@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) id<ACCRecordSelectPropService> selectPropService;
@property (retain, nonatomic) id<ACCRecordAuthService> authService;
@property (retain, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (retain, nonatomic) id<ACCSideslipPropService> sideslipPropService;
@property (retain, nonatomic) id<ACCRecordScanModelFlowService> scanService;
@property (retain, nonatomic) id<ACCRecordUIHiddenStrategyService> hiddenStrategyService;
@property (retain, nonatomic) id<ACCRecordGestureService> gestureService;
@property (retain, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (retain, nonatomic) AWERecordPropEntranceLayoutAction *layoutAction;
@property (nonatomic) BOOL hasCameraAndMicAuthorized;
@property (nonatomic) BOOL hasContainerVCAppeared;
@property (nonatomic) BOOL canDisplayPropBtn;
@property (nonatomic) BOOL canDisplayPropBtnTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) FPWritableStateFlow *typeErasedStateFlow;

+ (id)initialUIStateWith:(id)arg0;
+ (BOOL)isLiveDuetPhotoSession:(id)arg0;
+ (id)calculateStickerLabelTextWithPublishModel:(id)arg0 propName:(id)arg1;
+ (Class)stateType;

- (void)didMount;
- (id)publishViewModel;
- (BOOL)canDisplayPropBtn;
- (BOOL)canDisplayPropBtnTitle;
- (void)updateItemsHiddenWithAnimation:(BOOL)arg0;
- (id)typeErasedStateFlow;
- (id)initWith:(id)arg0 serviceProvider:(id)arg1;
- (void)loadViewState;
- (id)cameraService;
- (void)setCameraService:(id)arg0;
- (void)longPressGestureDidRecognized:(id)arg0;
- (id)switchModeService;
- (void)shouldItemsShow:(BOOL)arg0 animated:(BOOL)arg1;
- (void)switchModeServiceWillChangeToMode:(id)arg0 oldMode:(id)arg1;
- (void)setSwitchModeService:(id)arg0;
- (void)onCameraDidStartRender:(id)arg0;
- (id)authService;
- (void)setAuthService:(id)arg0;
- (id)hiddenStrategyService;
- (void)setHiddenStrategyService:(id)arg0;
- (id)gestureService;
- (void)setGestureService:(id)arg0;
- (id)sideslipPropService;
- (id)propService;
- (void)setPropService:(id)arg0;
- (void)setSideslipPropService:(id)arg0;
- (void)sideslipPropService:(id)arg0 willChangeShowState:(unsigned long long)arg1;
- (id)creationModel;
- (id)stateFlow;
- (id)scanService;
- (void)flowServiceWillEnterScanMode;
- (void)flowServiceWillExitScanMode;
- (void)setScanService:(id)arg0;
- (void)preloadFirstHotSticker;
- (BOOL)hasContainerVCAppeared;
- (void)setHasContainerVCAppeared:(BOOL)arg0;
- (void)showSuperEntranceBubbleIfNeeded;
- (void)setLongPressOpenSticker;
- (void)p_updatePropInfo:(id)arg0;
- (void)p_applyEffectWithPack:(id)arg0;
- (void)p_updatePropIconShowState;
- (void)p_updateIconForProp:(id)arg0;
- (void)setHasCameraAndMicAuthorized:(BOOL)arg0;
- (BOOL)hasCameraAndMicAuthorized;
- (void)setCanDisplayPropBtn:(BOOL)arg0;
- (id)selectPropService;
- (void)setCanDisplayPropBtnTitle:(BOOL)arg0;
- (void)setSelectPropService:(id)arg0;
- (void)setStateFlow:(id)arg0;
- (void)p_addPageLifeCycleObservers;
- (void)p_addLogicServiceObserver;
- (void)p_addNotificationsObservers;
- (void)p_addExternalServiceObserver;
- (void)p_showPropPanel;
- (id)inputDataExtra;
- (void)updateSelectPropDisplayTypeWithSideslipPropShowState:(unsigned long long)arg0;
- (void)p_handlePageAppeared;
- (void)showPropPanelWithView:(id)arg0;
- (BOOL)shouldUpdatePropInfo:(id)arg0;
- (BOOL)shouldShowSuperEntranceBubbleWithStickerID:(id)arg0;
- (BOOL)shouldUpdatePropIconShowState;
- (void).cxx_destruct;
- (void)setServiceProvider:(id)arg0;
- (id)serviceProvider;
- (void)dealloc;
- (id)viewContainer;
- (void)setViewContainer:(id)arg0;
- (id)layoutAction;
- (void)setLayoutAction:(id)arg0;

@end