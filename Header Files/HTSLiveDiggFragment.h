//
//     Generated by private class-dump
//

@class NSMutableDictionary, HTSLiveToolbarItem, HTSLiveDiggAPI, NSObject, IESLiveDiggSpiltAnimationView, GPBInt64ObjectDictionary, IESLiveLikeAnimationDegradeAbility, NSString, NSTimer, HTSLiveDiggStore, NSMutableSet, NSArray, IESLiveDiggAccessibilityButton;
@protocol IESLiveUserService, IESLiveDegradeService, OS_dispatch_queue, IESLiveMultiTabService, HTSLiveViewHierarchyProvider, IESLiveDiggViewFactory, IESLivePerfSampler, IESLiveLanguageService, IESLiveScreenXModule, IESLiveDFAnimationService, HTSLiveDiggAction, IESLiveScreenModule, IESLiveStrategyService;

@interface HTSLiveDiggFragment : IESLiveRoomComponent <IESLiveDiggRouter, IESLiveStrategyEventDispatcherObserver, IESLiveMessageInteractionAssetUpdateAction, HTSLiveDiggReaction> {
    BOOL isContinueDigging;
    BOOL _isHideComponent;
    BOOL _diggShakeSetting;
    BOOL _hideOtherDiggAnimation;
    BOOL _diggUseCoreAnimation;
    BOOL _abSettingEnable;
    NSTimer *_diggTimer;
    unsigned long long _diggCount;
    NSTimer *_selfDiggTimer;
    unsigned long long _selfDiggCount;
    long long _doubleDiggCount;
    double _diggTimeStamp;
    NSMutableDictionary *_imageCache;
    id<IESLiveDiggViewFactory> _diggViewFactory;
    long long _orientation;
    HTSLiveDiggAPI *_diggAPI;
    NSArray *_iconImageLists;
    NSArray *_defaultIconImageLists;
    GPBInt64ObjectDictionary *_componentRelatedIconLists;
    NSMutableSet *_diggedUserIds;
    NSObject<OS_dispatch_queue> *_workQueue;
    HTSLiveDiggStore *_store;
    id<IESLiveLanguageService> _languageService;
    double _abandonRate;
    double _selfDiggAbandonRate;
    IESLiveDiggAccessibilityButton *_diggButton;
    id<HTSLiveDiggAction> _diggActionCreator;
    id<IESLivePerfSampler> _perfSampler;
    NSTimer *_diggAvatorTimer;
    IESLiveDiggSpiltAnimationView *_spiltAnimationView;
    NSTimer *_upLeftTimer;
    id<IESLiveStrategyService> _strategyService;
    HTSLiveToolbarItem *_diggItem;
    id<IESLiveDegradeService> _degradeService;
    IESLiveLikeAnimationDegradeAbility *_degrade;
    unsigned long long _currentAnchorHeatingLevel;
    id<IESLiveDFAnimationService> _dfAnimationService;
    id<IESLiveUserService> _userService;
    id<IESLiveScreenModule> _screenModule;
    id<IESLiveScreenXModule> _screenXModule;
    id<IESLiveMultiTabService> _multiTabService;
    id<HTSLiveViewHierarchyProvider> _viewHierarchyProvider;
    struct CGPoint { double x; double y; } _diggStartPoint;
}

@property (retain, nonatomic) NSTimer *diggTimer;
@property (nonatomic) unsigned long long diggCount;
@property (retain, nonatomic) NSTimer *selfDiggTimer;
@property (nonatomic) unsigned long long selfDiggCount;
@property (nonatomic) long long doubleDiggCount;
@property (nonatomic) double diggTimeStamp;
@property (retain, nonatomic) NSMutableDictionary *imageCache;
@property (retain, nonatomic) id<IESLiveDiggViewFactory> diggViewFactory;
@property (nonatomic) long long orientation;
@property (retain, nonatomic) HTSLiveDiggAPI *diggAPI;
@property (retain, nonatomic) NSArray *iconImageLists;
@property (retain, nonatomic) NSArray *defaultIconImageLists;
@property (retain, nonatomic) GPBInt64ObjectDictionary *componentRelatedIconLists;
@property (retain, nonatomic) NSMutableSet *diggedUserIds;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) HTSLiveDiggStore *store;
@property (retain, nonatomic) id<IESLiveLanguageService> languageService;
@property (nonatomic) BOOL isHideComponent;
@property (nonatomic) double abandonRate;
@property (nonatomic) double selfDiggAbandonRate;
@property (retain, nonatomic) IESLiveDiggAccessibilityButton *diggButton;
@property (retain, nonatomic) id<HTSLiveDiggAction> diggActionCreator;
@property (weak, nonatomic) id<IESLivePerfSampler> perfSampler;
@property (nonatomic) BOOL diggShakeSetting;
@property (retain, nonatomic) NSTimer *diggAvatorTimer;
@property (nonatomic) struct CGPoint { double x; double y; } diggStartPoint;
@property (retain, nonatomic) IESLiveDiggSpiltAnimationView *spiltAnimationView;
@property (retain, nonatomic) NSTimer *upLeftTimer;
@property (retain, nonatomic) id<IESLiveStrategyService> strategyService;
@property (retain, nonatomic) HTSLiveToolbarItem *diggItem;
@property (retain, nonatomic) id<IESLiveDegradeService> degradeService;
@property (retain, nonatomic) IESLiveLikeAnimationDegradeAbility *degrade;
@property (nonatomic) BOOL hideOtherDiggAnimation;
@property (nonatomic) unsigned long long currentAnchorHeatingLevel;
@property (nonatomic) BOOL diggUseCoreAnimation;
@property (retain, nonatomic) id<IESLiveDFAnimationService> dfAnimationService;
@property (retain, nonatomic) id<IESLiveUserService> userService;
@property (retain, nonatomic) id<IESLiveScreenModule> screenModule;
@property (retain, nonatomic) id<IESLiveScreenXModule> screenXModule;
@property (retain, nonatomic) id<IESLiveMultiTabService> multiTabService;
@property (retain, nonatomic) id<HTSLiveViewHierarchyProvider> viewHierarchyProvider;
@property (nonatomic) BOOL abSettingEnable;
@property (nonatomic) BOOL isContinueDigging;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)diggCount;
- (void)setDiggCount:(unsigned long long)arg0;
- (id)diggButton;
- (void)setDiggButton:(id)arg0;
- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (id)degradeService;
- (void)remoteRoomDataReady:(id)arg0;
- (void)componentOrientationChanged:(long long)arg0;
- (void)toolbarItemsChange;
- (id)perfSampler;
- (void)setPerfSampler:(id)arg0;
- (id)userService;
- (void)setUserService:(id)arg0;
- (id)diggViewFactory;
- (void)checkIfDigg;
- (void)setDiggTimer:(id)arg0;
- (void)showDigg;
- (id)getProperDiggView:(id)arg0 ownDigg:(BOOL)arg1 animationDuration:(double)arg2;
- (void)loadImageWithComplete:(id /* block */)arg0;
- (id)getimageFromLocalBundleWithIndex:(long long)arg0;
- (void)setDiggViewFactory:(id)arg0;
- (id)diggTimer;
- (id)strategyService;
- (void)setStrategyService:(id)arg0;
- (id)languageService;
- (void)setLanguageService:(id)arg0;
- (void)eventDispatcherWillDispatchValue:(id)arg0 withFactorKey:(id)arg1;
- (void)hideComponent;
- (void)showComponent;
- (void)likeIconsUpdate:(id)arg0;
- (void)updateDiggPosition;
- (void)diggShakeSettingDidChange:(BOOL)arg0;
- (BOOL)isDoubleDigging;
- (BOOL)shouldShakeWhenDigg;
- (BOOL)checkHasDigged:(id)arg0;
- (double)diggLatestTimeStamp;
- (void)showDiggTouchViewFromStartPoint:(struct CGPoint { double x0; double x1; })arg0 comboDigg:(BOOL)arg1;
- (BOOL)isContinueDigging;
- (void)setIsContinueDigging:(BOOL)arg0;
- (void)setHideOtherDiggAnimation:(BOOL)arg0;
- (unsigned long long)currentAnchorHeatingLevel;
- (void)setCurrentAnchorHeatingLevel:(unsigned long long)arg0;
- (void)setDiggUseCoreAnimation:(BOOL)arg0;
- (void)setAbSettingEnable:(BOOL)arg0;
- (void)stopUpLeftDoubleDigging;
- (void)stopRightBottomSpiltAnimation;
- (void)removeStrategyObserver;
- (void)scheduleDigg;
- (void)setupDiggButton;
- (void)updateDiggShakeSetting;
- (void)liveThermalStateSeriousNotification:(id)arg0;
- (void)onVoiceOverChanged:(id)arg0;
- (void)registerStrategyObserver;
- (BOOL)hideOtherDiggAnimation;
- (id)spiltAnimationView;
- (void)updateSpiltAnimationPosition;
- (BOOL)needOwnDiggAfterEnterRoom;
- (id)componentRelatedIconLists;
- (void)resetIconImageListsWith:(id)arg0;
- (id)defaultIconImageLists;
- (void)setIconImageLists:(id)arg0;
- (unsigned long long)selfDiggCount;
- (id)diggedUserIds;
- (BOOL)abSettingEnable;
- (id)multiTabService;
- (void)setMultiTabService:(id)arg0;
- (id)screenModule;
- (void)setScreenModule:(id)arg0;
- (id)screenXModule;
- (void)setScreenXModule:(id)arg0;
- (id)viewHierarchyProvider;
- (void)setViewHierarchyProvider:(id)arg0;
- (id)diggActionCreator;
- (void)setIsHideComponent:(BOOL)arg0;
- (void)setDiggTimeStamp:(double)arg0;
- (void)addLiveOwnLikeCount;
- (id)degrade;
- (void)showRightBottomDiggAnimationWithImage:(id)arg0 animationDuration:(double)arg1 toFront:(BOOL)arg2;
- (void)addLiveLikeMessage:(id)arg0;
- (void)showRightBottomDigg;
- (void)setSelfDiggCount:(unsigned long long)arg0;
- (id)iconImageLists;
- (void)setDiggShakeSetting:(BOOL)arg0;
- (void)showUserAvatorAnimationWithDelay:(double)arg0;
- (void)setDoubleDiggCount:(long long)arg0;
- (void)startUpLeftDoubleDiggingWithTimes:(long long)arg0;
- (void)showRightBottomSpiltAnimation;
- (void)reScheduleDiggWithRate:(double)arg0 selfRate:(double)arg1;
- (BOOL)triggerUpLeftDoubleDiggingWithTimes:(long long)arg0;
- (id)topLeftPatternWithText:(id)arg0;
- (struct CGPoint { double x0; double x1; })diggStartPoint;
- (void)showAvatorAnimationWithUserDetail:(id)arg0;
- (void)showAvatorAnimationWithImage:(id)arg0 userDetail:(id)arg1;
- (long long)doubleDiggCount;
- (void)resetComponentRelatedLikeIconList;
- (id)diggSettingItem;
- (BOOL)enableDirectShowDiggShake;
- (BOOL)enableShowPipSettingView;
- (void)showSettingView;
- (void)clickDiggShakeStateItem;
- (void)setDiggItem:(id)arg0;
- (id)diggItem;
- (BOOL)diggShakeSetting;
- (double)diggTimeStamp;
- (void)checkOwnIfDigg;
- (id)selfDiggTimer;
- (void)setSelfDiggTimer:(id)arg0;
- (double)liveWidth;
- (void)setDiggStartPoint:(struct CGPoint { double x0; double x1; })arg0;
- (void)addMoreToolsSettingItem;
- (void)addDiggMoreToolItem;
- (id)dfAnimationService;
- (void)setDfAnimationService:(id)arg0;
- (BOOL)diggUseCoreAnimation;
- (void)degradeScheduleDigg;
- (void)dispatchLikeMessage:(id)arg0;
- (void)dispatchOwnDiggMessageWithTouchPoint:(struct CGPoint { double x0; double x1; })arg0;
- (void)changeDiggStatus:(BOOL)arg0;
- (void)doubleDiggDidStartWithTimes:(long long)arg0;
- (void)doubleDiggDidEnd;
- (void)clearDiggCount;
- (double)abandonRate;
- (double)selfDiggAbandonRate;
- (void)showSelfAvatorAnimation;
- (id)diggAPI;
- (void)setDiggAPI:(id)arg0;
- (void)setDefaultIconImageLists:(id)arg0;
- (void)setComponentRelatedIconLists:(id)arg0;
- (void)setDiggedUserIds:(id)arg0;
- (BOOL)isHideComponent;
- (void)setAbandonRate:(double)arg0;
- (void)setSelfDiggAbandonRate:(double)arg0;
- (void)setDiggActionCreator:(id)arg0;
- (id)diggAvatorTimer;
- (void)setDiggAvatorTimer:(id)arg0;
- (void)setSpiltAnimationView:(id)arg0;
- (id)upLeftTimer;
- (void)setUpLeftTimer:(id)arg0;
- (void)setDegradeService:(id)arg0;
- (void)setDegrade:(id)arg0;
- (void)setWorkQueue:(id)arg0;
- (id)workQueue;
- (void).cxx_destruct;
- (long long)currentOrientation;
- (id)store;
- (long long)orientation;
- (void)setImageCache:(id)arg0;
- (void)setStore:(id)arg0;
- (id)imageCache;
- (void)setOrientation:(long long)arg0;
- (void)dealloc;

@end