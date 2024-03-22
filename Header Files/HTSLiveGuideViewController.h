//
//     Generated by private class-dump
//

@class IESLiveGuideControllerConfig, NSString, IESLiveGuideModel, HTSLiveRoom, IESLiveEnterRoomSequenceQueue, CreateInfoResponse_CreateInfo, IESLiveGuideLayoutProvider, IESLiveGuideViewModel, IESLiveGuideViewHierarchyContainer, IESLiveDI, IESLiveRecoderContainer, HTSEventContext, HTSLiveAnchorViewController, UITextField, NSArray, IESLiveRoomExtraConfigModel, NSNumber, IESLiveAnchorPerfTrackImpl, IESLiveComponentContext;
@protocol IESLiveGeneralService, IESLiveFullLinkMonitor, IESLiveInternalRouter, IESLiveAudienceRoomAwareness, IESLiveAnchorRankListPreferenceService, IESLiveRecoder, IESLiveAnchorGiftPreferenceService, IESLiveMonitor, IESLiveEffectProcessLifyCycle, IESLiveLanguageService, IESLiveCreateRoomPreCheckService, IESLiveVideoEffectProcessing, IESLivePerfSampler, IESLiveComponentBootLoaderProtocol, IESLiveGuideDetailRouter, IESLiveGuideActions;

@interface HTSLiveGuideViewController : UIViewController <HTSLiveCameraEffectProvider, IESLiveGuideProvider, IESLiveControllerLifeCycleProtocol, IESLiveVRSwitchRouter, UITextFieldDelegate, IESLiveComponentLifeCycleNotifier, IESLiveOpenLiveProtocol> {
    BOOL openGesture;
    BOOL _enableBack;
    BOOL _isInLiveTab;
    BOOL _willGotoVideoLive;
    BOOL _willCloseGuideVC;
    BOOL _willChangeToGuideVC;
    BOOL _isVideoEffectProcessModuleLoaded;
    BOOL _isInviteFriendsCarryTicket;
    BOOL _hadReceiveOpenLiveModel;
    BOOL _isVCWillClose;
    BOOL _isVRLiveMode;
    BOOL _ieslivePreCreateAnchorVC;
    BOOL _hasBindCamera;
    IESLiveGuideModel *_guideModel;
    HTSLiveRoom *_room;
    IESLiveRecoderContainer *_cameraContainer;
    id /* block */ _backHandler;
    id /* block */ _dismissHandler;
    id /* block */ _buildCameraAfterPassAuthBlock;
    IESLiveComponentContext *_componentContext;
    IESLiveDI *_guideDI;
    CreateInfoResponse_CreateInfo *_openLiveModel;
    id<IESLiveComponentBootLoaderProtocol> _componentLoader;
    IESLiveGuideControllerConfig *_config;
    IESLiveGuideViewHierarchyContainer *_viewHierarchyContainer;
    IESLiveGuideViewModel *_guideViewModel;
    IESLiveRoomExtraConfigModel *_configModel;
    id<IESLiveInternalRouter> _internalRouter;
    id<IESLiveAudienceRoomAwareness> _awareness;
    id<IESLiveMonitor> _monitor;
    id<IESLiveGuideDetailRouter> _router;
    id<IESLiveRecoder> _recorder;
    NSNumber *_recorderOriginFrameRate;
    id<IESLiveLanguageService> _languageService;
    id<IESLiveEffectProcessLifyCycle> _videoEffectLifyCycle;
    id<IESLiveVideoEffectProcessing> _videoEffectProcessProvider;
    id<IESLiveCreateRoomPreCheckService> _preCheckService;
    id<IESLiveAnchorRankListPreferenceService> _rankListPreference;
    IESLiveGuideLayoutProvider *_layoutProvider;
    double _startTime;
    double _startLoadTime;
    id<IESLivePerfSampler> _perfSampler;
    id<IESLiveFullLinkMonitor> _fullLinkMonitor;
    id<IESLiveAnchorGiftPreferenceService> _giftPreference;
    id<IESLiveGuideActions> _guideActionDispatcher;
    NSArray *_applicationStateObservers;
    HTSEventContext *_trackContent;
    IESLiveEnterRoomSequenceQueue *_sequenceQueue;
    id<IESLiveGeneralService> _guideGeneralServiceManager;
    long long _CDNSpeedTestResult;
    HTSLiveAnchorViewController *_anchorViewController;
    UITextField *_textField;
    IESLiveAnchorPerfTrackImpl *_anchorPerfTrack;
}

@property (retain, nonatomic) IESLiveDI *guideDI;
@property (retain, nonatomic) IESLiveGuideModel *guideModel;
@property (retain, nonatomic) CreateInfoResponse_CreateInfo *openLiveModel;
@property (retain, nonatomic) id<IESLiveComponentBootLoaderProtocol> componentLoader;
@property (retain, nonatomic) IESLiveGuideControllerConfig *config;
@property (retain, nonatomic) IESLiveGuideViewHierarchyContainer *viewHierarchyContainer;
@property (retain, nonatomic) IESLiveRecoderContainer *cameraContainer;
@property (retain, nonatomic) IESLiveGuideViewModel *guideViewModel;
@property (retain, nonatomic) IESLiveRoomExtraConfigModel *configModel;
@property (retain, nonatomic) id<IESLiveInternalRouter> internalRouter;
@property (retain, nonatomic) id<IESLiveAudienceRoomAwareness> awareness;
@property (retain, nonatomic) id<IESLiveMonitor> monitor;
@property (retain, nonatomic) id<IESLiveGuideDetailRouter> router;
@property (retain, nonatomic) id<IESLiveRecoder> recorder;
@property (retain, nonatomic) NSNumber *recorderOriginFrameRate;
@property (retain, nonatomic) id<IESLiveLanguageService> languageService;
@property (retain, nonatomic) id<IESLiveEffectProcessLifyCycle> videoEffectLifyCycle;
@property (retain, nonatomic) id<IESLiveVideoEffectProcessing> videoEffectProcessProvider;
@property (retain, nonatomic) id<IESLiveCreateRoomPreCheckService> preCheckService;
@property (retain, nonatomic) id<IESLiveAnchorRankListPreferenceService> rankListPreference;
@property (retain, nonatomic) IESLiveGuideLayoutProvider *layoutProvider;
@property (nonatomic) BOOL isInLiveTab;
@property (nonatomic) BOOL willGotoVideoLive;
@property (nonatomic) BOOL willCloseGuideVC;
@property (nonatomic) BOOL willChangeToGuideVC;
@property (nonatomic) BOOL isVideoEffectProcessModuleLoaded;
@property (nonatomic) BOOL isInviteFriendsCarryTicket;
@property (nonatomic) double startTime;
@property (nonatomic) double startLoadTime;
@property (retain, nonatomic) id<IESLivePerfSampler> perfSampler;
@property (retain, nonatomic) id<IESLiveFullLinkMonitor> fullLinkMonitor;
@property (retain, nonatomic) id<IESLiveAnchorGiftPreferenceService> giftPreference;
@property (retain, nonatomic) id<IESLiveGuideActions> guideActionDispatcher;
@property (copy, nonatomic) NSArray *applicationStateObservers;
@property (nonatomic) BOOL hadReceiveOpenLiveModel;
@property (retain, nonatomic) HTSEventContext *trackContent;
@property (nonatomic) BOOL isVCWillClose;
@property (retain, nonatomic) IESLiveEnterRoomSequenceQueue *sequenceQueue;
@property (retain, nonatomic) id<IESLiveGeneralService> guideGeneralServiceManager;
@property (nonatomic) long long CDNSpeedTestResult;
@property (nonatomic) BOOL isVRLiveMode;
@property (retain, nonatomic) HTSLiveAnchorViewController *anchorViewController;
@property (nonatomic) BOOL ieslivePreCreateAnchorVC;
@property (retain, nonatomic) UITextField *textField;
@property (retain, nonatomic) IESLiveAnchorPerfTrackImpl *anchorPerfTrack;
@property (nonatomic) BOOL hasBindCamera;
@property (nonatomic) BOOL enableBack;
@property (copy, nonatomic) id /* block */ backHandler;
@property (copy, nonatomic) id /* block */ dismissHandler;
@property (copy, nonatomic) id /* block */ buildCameraAfterPassAuthBlock;
@property (retain, nonatomic) IESLiveComponentContext *componentContext;
@property (nonatomic) BOOL openGesture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) HTSLiveRoom *room;

- (id)guideModel;
- (id)componentContext;
- (void)setGuideModel:(id)arg0;
- (void)setComponentContext:(id)arg0;
- (id)internalRouter;
- (void)setInternalRouter:(id)arg0;
- (void)setShootWay:(id)arg0;
- (id)cameraPreview;
- (void)setConfigModel:(id)arg0;
- (id)configModel;
- (double)startLoadTime;
- (void)setStartLoadTime:(double)arg0;
- (id)fullLinkMonitor;
- (void)setFullLinkMonitor:(id)arg0;
- (void)trackStayTime;
- (id)sequenceQueue;
- (void)setSequenceQueue:(id)arg0;
- (id)componentLoader;
- (id)awareness;
- (void)setComponentLoader:(id)arg0;
- (void)setAwareness:(id)arg0;
- (id)perfSampler;
- (void)setPerfSampler:(id)arg0;
- (void)changeLiveType:(unsigned long long)arg0;
- (void)closeGuideViewController;
- (void)buildCameraAfterPassCameraAuth;
- (void)updateOpenLiveModel:(id)arg0;
- (void)trackEnterpriseTakePageShowIfNeeded;
- (void)openLiveWithRoomModel:(id)arg0 isResumed:(BOOL)arg1;
- (id)beforeLiveTrackContent;
- (BOOL)isVCInLiveTab;
- (void)preCreateAnchorViewController;
- (id)openLiveModel;
- (void)setEnableBack:(BOOL)arg0;
- (void)setBackHandler:(id /* block */)arg0;
- (void)setBuildCameraAfterPassAuthBlock:(id /* block */)arg0;
- (void)willSwitchToOtherTab;
- (void)willSwitchToLiveTab;
- (void)didEnterLiveTabWithStartTime:(double)arg0;
- (void)setEntryFaceSticker:(id)arg0;
- (void)setTopicID:(id)arg0 topicName:(id)arg1 isCommerce:(BOOL)arg2;
- (BOOL)enableBack;
- (id /* block */)backHandler;
- (id /* block */)buildCameraAfterPassAuthBlock;
- (void)setOpenLiveModel:(id)arg0;
- (id)languageService;
- (void)setLanguageService:(id)arg0;
- (id)supportScenes;
- (BOOL)isInLiveTab;
- (id)guideViewModel;
- (void)setGuideViewModel:(id)arg0;
- (BOOL)ieslivePreCreateAnchorVC;
- (id)preCheckService;
- (void)setPreCheckService:(id)arg0;
- (BOOL)isMediaLive;
- (void)componentFirstFrameDidStartLoad;
- (void)componentFirstFrameDidFinishWithCost:(double)arg0;
- (void)switchVRLiveMode:(BOOL)arg0;
- (BOOL)isVRLiveMode;
- (id)rankListPreference;
- (void)setRankListPreference:(id)arg0;
- (BOOL)openGesture;
- (void)setOpenGesture:(BOOL)arg0;
- (void)setAnchorPerfTrack:(id)arg0;
- (void)setVideoEffectLifyCycle:(id)arg0;
- (id)videoEffectLifyCycle;
- (id)giftPreference;
- (void)setGiftPreference:(id)arg0;
- (void)setIsVRLiveMode:(BOOL)arg0;
- (id)videoEffectProcessProvider;
- (void)setVideoEffectProcessProvider:(id)arg0;
- (id)anchorPerfTrack;
- (void)setUpEffectEnvironment;
- (void)resetOutputSize;
- (id)createAnchorViewControllerWithRoom:(id)arg0;
- (id)guideDI;
- (void)setGuideDI:(id)arg0;
- (id)recorderOriginFrameRate;
- (void)setRecorderOriginFrameRate:(id)arg0;
- (void)setIsInLiveTab:(BOOL)arg0;
- (BOOL)enableUploadBandwidthProber;
- (void)setCDNSpeedTestResult:(long long)arg0;
- (long long)CDNSpeedTestResult;
- (void)loadEnhanceAlgorithmIfNeeded:(BOOL)arg0;
- (void)setIsVCWillClose:(BOOL)arg0;
- (BOOL)isVCWillClose;
- (void)_unRegisterApplicationStateNotification;
- (void)setWillChangeToGuideVC:(BOOL)arg0;
- (void)setIeslivePreCreateAnchorVC:(BOOL)arg0;
- (id)cameraContainer;
- (void)trackGuideFirstUILoadPerf:(id)arg0;
- (void)buildContentView;
- (void)setTrackContent:(id)arg0;
- (void)setGuideGeneralServiceManager:(id)arg0;
- (id)guideGeneralServiceManager;
- (id)trackContent;
- (id)guideActionDispatcher;
- (void)updateMediaInfo;
- (void)changeLiveType:(unsigned long long)arg0 first:(BOOL)arg1;
- (void)trackPush;
- (void)liveCoreInit;
- (BOOL)isVideoEffectProcessModuleLoaded;
- (void)loadVideoEffectProcessModule;
- (void)showVisibleTryLiveErrorAlert;
- (void)_registerApplicationStateNotification;
- (BOOL)willChangeToGuideVC;
- (BOOL)willGotoVideoLive;
- (BOOL)hasBindCamera;
- (void)setHasBindCamera:(BOOL)arg0;
- (void)trackTakePageShow;
- (id)viewHierarchyContainer;
- (BOOL)willCloseGuideVC;
- (void)setApplicationStateObservers:(id)arg0;
- (id)applicationStateObservers;
- (void)setIsVideoEffectProcessModuleLoaded:(BOOL)arg0;
- (void)setViewHierarchyContainer:(id)arg0;
- (void)setWillCloseGuideVC:(BOOL)arg0;
- (void)_keyboardHide;
- (BOOL)hadReceiveOpenLiveModel;
- (void)setIsInviteFriendsCarryTicket:(BOOL)arg0;
- (void)setHadReceiveOpenLiveModel:(BOOL)arg0;
- (void)setAnchorViewController:(id)arg0;
- (void)gotoAnchorLivePageWithRoomModel:(id)arg0;
- (struct CGSize { double x0; double x1; })currentOuptputSize;
- (BOOL)canRestOutputSizeWithOriginSize:(struct CGSize { double x0; double x1; })arg0;
- (void)trackLiveTakeWithRoom:(id)arg0;
- (void)closeForwardAudienceRoom;
- (void)setWillGotoVideoLive:(BOOL)arg0;
- (id)trackParamWithRoom:(id)arg0;
- (BOOL)isInviteFriendsCarryTicket;
- (void)markTopicUseForRoom:(id)arg0 withSource:(long long)arg1;
- (void)trackVideoRecommendResolution:(id)arg0;
- (id)trackPSSetting;
- (id)anchorViewController;
- (void)unregiestContext;
- (BOOL)isVideoRoom:(id)arg0;
- (void)setCameraContainer:(id)arg0;
- (void)setGuideActionDispatcher:(id)arg0;
- (id)layoutProvider;
- (void)setLayoutProvider:(id)arg0;
- (BOOL)shouldAutorotate;
- (void)setTextField:(id)arg0;
- (id)textField;
- (void)setConfig:(id)arg0;
- (void)setStartTime:(double)arg0;
- (void)setCamera:(id)arg0;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (id)monitor;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)preferredInterfaceOrientationForPresentation;
- (id)config;
- (id)recorder;
- (void)setDismissHandler:(id /* block */)arg0;
- (void)setMonitor:(id)arg0;
- (void)viewWillDisappear:(BOOL)arg0;
- (long long)preferredStatusBarStyle;
- (void)viewDidDisappear:(BOOL)arg0;
- (BOOL)textFieldShouldBeginEditing:(id)arg0;
- (id)initWithConfig:(id)arg0;
- (double)startTime;
- (void)setActive:(BOOL)arg0;
- (void)setRecorder:(id)arg0;
- (BOOL)prefersStatusBarHidden;
- (void)viewWillAppear:(BOOL)arg0;
- (void)dealloc;
- (void)viewDidLoad;
- (id /* block */)dismissHandler;
- (id)room;
- (void)setRoom:(id)arg0;
- (long long)qualityType;
- (id)router;
- (void)setRouter:(id)arg0;
- (BOOL)prefersNavigationBarHidden;

@end
