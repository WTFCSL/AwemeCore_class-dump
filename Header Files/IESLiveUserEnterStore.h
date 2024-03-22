//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary, IESLiveUserEnterEffectPlayer, IESLiveUserEnterQueue, IESLiveComponentContext, HTSEventContext, HTSLiveUserEnterConfiguration;
@protocol HTSLiveViewHierarchyProvider, IESLiveActivityVideoPlayerRouter, IESLiveCustomConfig, IESLiveUserEnterReaction, IESLiveRoomServiceAdapter, IESLiveScreenModuleAdapter;

@interface IESLiveUserEnterStore : NSObject <HTSLiveMessageSubscriber, HTSLiveUserEnterAction, IESLiveMessageInteractionModuleCommentAction, IESLiveUserEnterEffectPlayerDelegate, IESLiveAlphaVideoPlayerCallbackDelegate, IESLivePublicScreenCollectionViewActions, HTSLiveAppLifeCycleActions> {
    BOOL _disableUserEnter;
    BOOL _isAnimating;
    BOOL _isKeyboardShowing;
    BOOL _shouldDiscard;
    BOOL _enableDIOptimize;
    BOOL _enableAlogWriteNeedless;
    BOOL _enterRoomOptEnable;
    BOOL _isWaiting;
    BOOL _inXSecondsAfterMount;
    BOOL _degradeForEnter;
    BOOL _degradeForEcom;
    id<IESLiveUserEnterReaction> _reaction;
    id<IESLiveRoomServiceAdapter> _roomModel;
    IESLiveComponentContext *_componentContext;
    HTSEventContext *_trackContext;
    HTSLiveUserEnterConfiguration *_configuration;
    IESLiveUserEnterQueue *_userEnterNodeQueue;
    NSMutableDictionary *_nodeProcessorMap;
    IESLiveUserEnterEffectPlayer *_effectPlayer;
    id<IESLiveActivityVideoPlayerRouter> _activityAnimationRouter;
    double _enterBackgroundTimestamp;
    double _backgroundConsumeTime;
    id<IESLiveScreenModuleAdapter> _screenModule;
    id<HTSLiveViewHierarchyProvider> _viewHierarchyProvider;
    id<IESLiveCustomConfig> _customConfig;
    double _mountTimestamp;
    double _xSecondsForDegrade;
    double _gapTimeBetweenTwoNode;
}

@property (nonatomic) BOOL isKeyboardShowing;
@property (retain, nonatomic) IESLiveUserEnterQueue *userEnterNodeQueue;
@property (retain, nonatomic) NSMutableDictionary *nodeProcessorMap;
@property (retain, nonatomic) IESLiveUserEnterEffectPlayer *effectPlayer;
@property (retain, nonatomic) id<IESLiveActivityVideoPlayerRouter> activityAnimationRouter;
@property (nonatomic) BOOL shouldDiscard;
@property (nonatomic) double enterBackgroundTimestamp;
@property (nonatomic) double backgroundConsumeTime;
@property (nonatomic) BOOL enableDIOptimize;
@property (retain, nonatomic) id<IESLiveScreenModuleAdapter> screenModule;
@property (retain, nonatomic) id<HTSLiveViewHierarchyProvider> viewHierarchyProvider;
@property (retain, nonatomic) id<IESLiveCustomConfig> customConfig;
@property (nonatomic) BOOL enableAlogWriteNeedless;
@property (nonatomic) BOOL enterRoomOptEnable;
@property (nonatomic) BOOL isWaiting;
@property (nonatomic) double mountTimestamp;
@property (nonatomic) double xSecondsForDegrade;
@property (nonatomic) double gapTimeBetweenTwoNode;
@property (nonatomic) BOOL inXSecondsAfterMount;
@property (nonatomic) BOOL degradeForEnter;
@property (nonatomic) BOOL degradeForEcom;
@property (weak, nonatomic) id<IESLiveUserEnterReaction> reaction;
@property (retain, nonatomic) id<IESLiveRoomServiceAdapter> roomModel;
@property (retain, nonatomic) IESLiveComponentContext *componentContext;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) HTSLiveUserEnterConfiguration *configuration;
@property (nonatomic) BOOL disableUserEnter;
@property (nonatomic) BOOL isAnimating;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)trackContext;
- (void)setTrackContext:(id)arg0;
- (id)customConfig;
- (void)setCustomConfig:(id)arg0;
- (id)componentContext;
- (id)roomModel;
- (void)setComponentContext:(id)arg0;
- (void)didSetAttachingDIContext;
- (void)setRoomModel:(id)arg0;
- (void)setIsKeyboardShowing:(BOOL)arg0;
- (BOOL)isKeyboardShowing;
- (void)didUpdateRoom:(id)arg0;
- (BOOL)enterRoomOptEnable;
- (void)setEnterRoomOptEnable:(BOOL)arg0;
- (void)selectedToPublicScreenWithInfoModel:(id)arg0;
- (id)screenModule;
- (void)setScreenModule:(id)arg0;
- (id)viewHierarchyProvider;
- (void)setViewHierarchyProvider:(id)arg0;
- (void)playEffectUseUserEnterQueueWithMessage:(id)arg0;
- (BOOL)degradeFilterWith:(id)arg0;
- (void)registerUserEnterNodeProcessorWithNodeType:(id)arg0;
- (void)playEffectOnUserEnter:(id)arg0;
- (void)receiveMemberMessage:(id)arg0;
- (void)player:(id)arg0 preprocessEffectNode:(id)arg1;
- (void)player:(id)arg0 effectNode:(id)arg1 playFinishedWithError:(id)arg2;
- (void)removeAllUserEnterEffect;
- (void)setDisableUserEnter:(BOOL)arg0;
- (void)setUserEnterOriginY:(double)arg0;
- (void)resetUserEnterFrame;
- (id)userEnterNodeQueue;
- (void)setUserEnterNodeQueue:(id)arg0;
- (void)setEffectPlayer:(id)arg0;
- (id)effectPlayer;
- (BOOL)enableDIOptimize;
- (void)setDegradeForEnter:(BOOL)arg0;
- (BOOL)degradeForEnter;
- (void)setDegradeForEcom:(BOOL)arg0;
- (BOOL)degradeForEcom;
- (unsigned long long)stateFilterOptions;
- (BOOL)aspectFilter;
- (long long)userEnterEffectPopCount;
- (void)checkUserEnterNodeQueue;
- (id)getNodeTypeFromMessage:(id)arg0;
- (id)createNodeProcessorWithNodeType:(id)arg0;
- (void)setEnterBackgroundTimestamp:(double)arg0;
- (double)enterBackgroundTimestamp;
- (double)backgroundConsumeTime;
- (void)setBackgroundConsumeTime:(double)arg0;
- (BOOL)enableAlogWriteNeedless;
- (BOOL)disableUserEnter;
- (BOOL)shouldDiscard;
- (BOOL)isEcomMessage:(id)arg0;
- (id)nodeProcessorMap;
- (void)checkUserEnterNodeQueueImmediately;
- (BOOL)inXSecondsAfterMount;
- (double)mountTimestamp;
- (double)xSecondsForDegrade;
- (void)setInXSecondsAfterMount:(BOOL)arg0;
- (void)setGapTimeBetweenTwoNode:(double)arg0;
- (double)gapTimeBetweenTwoNode;
- (void)trackUserEnterNodeDidShow:(id)arg0;
- (void)playPrizeNoticeEffectWithNode:(id)arg0;
- (void)playUserEnterEffectWithNode:(id)arg0;
- (void)monitorUserEnterNode:(id)arg0;
- (id)activityAnimationRouter;
- (id)configurationWithPrizeNoticeNode:(id)arg0;
- (void)setShouldDiscard:(BOOL)arg0;
- (long long)openAssetProfileSchemaDelay;
- (void)monitorUserEnterNodeBlock:(id)arg0;
- (void)monitorUserEnterNodeCommonAnimTimeError:(id)arg0;
- (void)playerDidFinishedWithConfiguration:(id)arg0 error:(id)arg1;
- (void)setNodeProcessorMap:(id)arg0;
- (void)setActivityAnimationRouter:(id)arg0;
- (void)setEnableDIOptimize:(BOOL)arg0;
- (void)setEnableAlogWriteNeedless:(BOOL)arg0;
- (void)setMountTimestamp:(double)arg0;
- (void)setXSecondsForDegrade:(double)arg0;
- (BOOL)isAnimating;
- (id)init;
- (void)processMessage:(id)arg0;
- (void).cxx_destruct;
- (BOOL)isWaiting;
- (void)keyboardWillHide;
- (id)configuration;
- (void)keyboardWillShow;
- (void)dealloc;
- (void)setIsAnimating:(BOOL)arg0;
- (void)setConfiguration:(id)arg0;
- (void)messageReceived:(id)arg0;
- (id)reaction;
- (void)appWillEnterForeground;
- (void)appDidEnterBackground;
- (void)setReaction:(id)arg0;
- (BOOL)stateFilter;
- (void)setIsWaiting:(BOOL)arg0;

@end