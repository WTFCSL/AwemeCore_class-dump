//
//     Generated by private class-dump
//

@class IESLiveDanmakuNodeFactory, IESLiveDanmakuEngine, IESLiveDanmakuSpeedManager, IESLiveDanmakuContentView, NSObject, IESLiveEmojiTextParser, IESLiveDanmakuMonitor, NSMutableArray, NSString, IESLiveDanmakuSettingFragment, NSTimer, IESLiveMessageHeatObserver, IESLiveDanmakuStore;
@protocol IESLiveMIFullLinkIndexMonitor, IESLiveRealStreamingProviderAdapter, IESLivePerfSampler, OS_dispatch_queue;

@interface IESLiveDanmakuFragment : IESLiveRoomComponent <IESLiveDanmakuRouter, IESLiveAutoRotateAction, IESLiveRevenueInteractAction, HTSLiveHideComponentAction, HTSLiveStreamPlayerAction, IESLiveMessageInteractionModuleCommentAction, IESLiveMessageInteractionModuleCarnivalAction, IESLiveFIFAPlayerScaleAction, IESLivePublicScreenLayoutSubscriber, IESLiveDanmakuEngineDelegate, IESLiveDanmakuEngineDataSource, IESLiveMessageHeatDelegate, IESLiveDanmakuSpeedChangedDelegate, IESLiveDanmakuSettingDelegate, IESLiveDanmakuNodeFactoryDelegate> {
    BOOL _cameraReset;
    BOOL _cameraResetCarnival;
    BOOL _thermalStateDidBecomeBad;
    BOOL _mattingModelPrepared;
    BOOL _contourDetecting;
    BOOL _hideCarnivalDanmakuArea;
    BOOL _orientationDidChange;
    BOOL _publicScreenLayoutDidChange;
    BOOL _abSettingEnable;
    IESLiveDanmakuStore *_store;
    IESLiveDanmakuEngine *_danmukuEngine;
    id<IESLivePerfSampler> _perfSampler;
    IESLiveDanmakuSettingFragment *_danmukuSettingFragment;
    IESLiveDanmakuContentView *_danmakuContentView;
    IESLiveEmojiTextParser *_emoticonParser;
    long long _orientation;
    NSMutableArray *_msgMutuallyExclusiveMsgWithCarnival;
    NSObject<OS_dispatch_queue> *_danmuProcessQueue;
    IESLiveDanmakuNodeFactory *_nodeFactory;
    id<IESLiveRealStreamingProviderAdapter> _streamProvider;
    long long _auditDanmakuCount;
    long long _auditServerSumDuration;
    double _auditClientSumDuration;
    long long _unAuditDanmakuCount;
    long long _unAuditServerSumDuration;
    long long _unAuditClientSumDuration;
    NSTimer *_trackTimer;
    long long _mockNum;
    IESLiveMessageHeatObserver *_heatObserver;
    IESLiveDanmakuSpeedManager *_speedManager;
    NSTimer *_danmakuHeatCleanTimer;
    id<IESLiveMIFullLinkIndexMonitor> _indexMonitor;
    IESLiveDanmakuMonitor *_danmakuMonitor;
}

@property (retain, nonatomic) IESLiveDanmakuStore *store;
@property (retain, nonatomic) IESLiveDanmakuEngine *danmukuEngine;
@property (weak, nonatomic) id<IESLivePerfSampler> perfSampler;
@property (retain, nonatomic) IESLiveDanmakuSettingFragment *danmukuSettingFragment;
@property (retain, nonatomic) IESLiveDanmakuContentView *danmakuContentView;
@property (retain, nonatomic) IESLiveEmojiTextParser *emoticonParser;
@property (nonatomic) long long orientation;
@property (retain, nonatomic) NSMutableArray *msgMutuallyExclusiveMsgWithCarnival;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *danmuProcessQueue;
@property (retain, nonatomic) IESLiveDanmakuNodeFactory *nodeFactory;
@property (nonatomic) BOOL cameraReset;
@property (nonatomic) BOOL cameraResetCarnival;
@property (nonatomic) BOOL thermalStateDidBecomeBad;
@property (nonatomic) BOOL mattingModelPrepared;
@property (nonatomic) BOOL contourDetecting;
@property (nonatomic) BOOL hideCarnivalDanmakuArea;
@property (retain, nonatomic) id<IESLiveRealStreamingProviderAdapter> streamProvider;
@property (nonatomic) long long auditDanmakuCount;
@property (nonatomic) long long auditServerSumDuration;
@property (nonatomic) double auditClientSumDuration;
@property (nonatomic) long long unAuditDanmakuCount;
@property (nonatomic) long long unAuditServerSumDuration;
@property (nonatomic) long long unAuditClientSumDuration;
@property (retain, nonatomic) NSTimer *trackTimer;
@property (nonatomic) BOOL orientationDidChange;
@property (nonatomic) long long mockNum;
@property (nonatomic) BOOL publicScreenLayoutDidChange;
@property (nonatomic) BOOL abSettingEnable;
@property (retain, nonatomic) IESLiveMessageHeatObserver *heatObserver;
@property (retain, nonatomic) IESLiveDanmakuSpeedManager *speedManager;
@property (retain, nonatomic) NSTimer *danmakuHeatCleanTimer;
@property (retain, nonatomic) id<IESLiveMIFullLinkIndexMonitor> indexMonitor;
@property (retain, nonatomic) IESLiveDanmakuMonitor *danmakuMonitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)speedManager;
- (void)setSpeedManager:(id)arg0;
- (void)bindViewModel;
- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (void)componentOrientationChanged:(long long)arg0;
- (id)perfSampler;
- (void)setPerfSampler:(id)arg0;
- (void)startRevenueInteractWithScene:(unsigned long long)arg0;
- (void)endRevenueInteractWithScene:(unsigned long long)arg0;
- (void)playerDidResume;
- (void)onCameraWillChangeTo:(id)arg0 source:(long long)arg1;
- (void)onCameraDidChangeTo:(id)arg0 source:(long long)arg1;
- (void)publicScreenLayoutChanged:(id)arg0 forType:(unsigned long long)arg1;
- (void)setNodeFactory:(id)arg0;
- (id)nodeFactory;
- (void)componentOrientationTransitionBegin:(long long)arg0;
- (void)hideAllComponent;
- (void)showAllComponent;
- (void)animationForAutoRotateToOrientation:(long long)arg0 duration:(double)arg1 size:(struct CGSize { double x0; double x1; })arg2;
- (void)setAbSettingEnable:(BOOL)arg0;
- (BOOL)abSettingEnable;
- (id)trackTimer;
- (void)setTrackTimer:(id)arg0;
- (void)setHideCarnivalDanmakuArea:(BOOL)arg0;
- (BOOL)hideCarnivalDanmakuArea;
- (id)carnivalDanmakuNodeFromMessage:(id)arg0 settings:(id)arg1 emoticonParser:(id)arg2;
- (void)carnivalDanmakuNodeFromMessage:(id)arg0 settings:(id)arg1 emoticonParser:(id)arg2 completion:(id /* block */)arg3;
- (void)resetCarnivalDanmakuNodes:(id)arg0 settings:(id)arg1 emoticonParser:(id)arg2;
- (void)addDanmakuNodeWithMessage:(id)arg0;
- (void)showDanmakuSettingPanel;
- (void)setDanmakuContentViewAlpha:(double)arg0 withAnimation:(BOOL)arg1;
- (void)cleanDanmakuQueue;
- (void)showDanmakuSettingPanelFromComment;
- (void)addDanmakuNodeWithBusinessConfigure:(id)arg0;
- (id)currentDanmakuSettings;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getCurrentBaseDanmakuAreaWithOrientation:(long long)arg0;
- (void)danmakuShowInScreenWithNode:(id)arg0;
- (BOOL)isMultiStreamWithCurrentScene:(unsigned long long)arg0;
- (BOOL)isHorizontalStream;
- (void)fontSizeTypeDidChanged:(long long)arg0;
- (void)alphaPercentValueDidChanged:(long long)arg0;
- (void)areaTypeDidChanged:(long long)arg0;
- (void)carnivalDanmuSwitchDidChanged:(BOOL)arg0;
- (void)setMattingModelPrepared:(BOOL)arg0;
- (void)currentCarnivalTypeDidChange;
- (BOOL)contourDetecting;
- (id)emoticonParser;
- (BOOL)mattingModelPrepared;
- (void)setContourDetecting:(BOOL)arg0;
- (BOOL)streamStyleWillBeChanged:(id)arg0;
- (void)setCameraReset:(BOOL)arg0;
- (BOOL)cameraReset;
- (BOOL)cameraResetCarnival;
- (void)setThermalStateDidBecomeBad:(BOOL)arg0;
- (BOOL)thermalStateDidBecomeBad;
- (void)setCameraResetCarnival:(BOOL)arg0;
- (void)setEmoticonParser:(id)arg0;
- (void)setOrientationDidChange:(BOOL)arg0;
- (id)danmukuEngine;
- (id)danmukuSettingFragment;
- (void)resetDanmakuContainerWithOrientation:(long long)arg0;
- (id)danmakuContentView;
- (void)danmakuDisplayInWeak:(BOOL)arg0;
- (id)indexMonitor;
- (void)trackDanmakuSummary;
- (void)cleanStatisticProperties;
- (id)danmakuMonitor;
- (void)invalidateTimerForCleanNodes;
- (void)setupEmoticonTextParser;
- (void)setDanmuProcessQueue:(id)arg0;
- (void)setDanmakuContentView:(id)arg0;
- (BOOL)enableDanmakuDisplay;
- (void)setHeatObserver:(id)arg0;
- (id)heatObserver;
- (void)p_updateDanmakuStrategyWithInteractiveScene:(unsigned long long)arg0;
- (void)runMsgMutuallyExclusiveMsgWithCarnival;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getNormalDanmakuframeWithOrientation:(long long)arg0;
- (void)p_addDanmakuNodeWithMessage:(id)arg0;
- (void)handleNodeMessage:(id)arg0 shouldMutualExclusion:(id /* block */)arg1 addDanmakuNode:(id /* block */)arg2;
- (void)addDanmukuGiftNodeWith:(id)arg0;
- (void)p_addDanmukuEmojiNodeWith:(id)arg0;
- (BOOL)p_isLandscapeNotifyEffectMessage:(id)arg0;
- (long long)auditDanmakuCount;
- (void)setAuditDanmakuCount:(long long)arg0;
- (long long)auditServerSumDuration;
- (void)setAuditServerSumDuration:(long long)arg0;
- (double)auditClientSumDuration;
- (void)setAuditClientSumDuration:(double)arg0;
- (long long)unAuditDanmakuCount;
- (void)setUnAuditDanmakuCount:(long long)arg0;
- (long long)unAuditServerSumDuration;
- (void)setUnAuditServerSumDuration:(long long)arg0;
- (long long)unAuditClientSumDuration;
- (void)setUnAuditClientSumDuration:(long long)arg0;
- (void)startTimerToCleanNodes;
- (void)discardDanmakuNodesWithStep:(long long)arg0;
- (void)setDanmakuHeatCleanTimer:(id)arg0;
- (BOOL)needDiscardDanmakuNode:(id)arg0 WithStep:(long long)arg1 currentTime:(double)arg2;
- (id)danmakuHeatCleanTimer;
- (void)countDanmakuNodeCreateDataWithNode:(id)arg0;
- (void)runNormalDanmakuIfNeededWithNode:(id)arg0;
- (void)setPublicScreenLayoutDidChange:(BOOL)arg0;
- (BOOL)publicScreenLayoutDidChange;
- (id)msgMutuallyExclusiveMsgWithCarnival;
- (void)safeDispatchToDanmakuQueueWithBlock:(id /* block */)arg0;
- (BOOL)shouldRunNormalDanmakuWithMessage:(id)arg0;
- (id)danmuProcessQueue;
- (BOOL)danmakuEngine:(id)arg0 shouldRunNormalDanmakuWithNode:(id)arg1;
- (void)danmakuEngine:(id)arg0 danmakuQueueTotalCountDidChangeTo:(unsigned long long)arg1;
- (void)danmakuEngine:(id)arg0 danmakuQueueDidLoad:(id)arg1;
- (double)danmakuEngine:(id)arg0 danmakuHeightForNode:(id)arg1;
- (void)messageHeatUpLevelChangedFrom:(unsigned long long)arg0 to:(unsigned long long)arg1;
- (void)sumCountReachedAlarmLevel;
- (void)danmakuSpeedDidChanged:(double)arg0 currentStage:(long long)arg1;
- (long long)currentChannelCountForDanmakuSpeed;
- (id)danmakuQueueToApplySpeedStrategy;
- (void)danmakuNodeFactory:(id)arg0 didCreatedNode:(id)arg1;
- (void)danmakuNodeFactory:(id)arg0 createdFailed:(id)arg1;
- (void)danmakuNodeFactory:(id)arg0 filtered:(id)arg1;
- (void)setDanmukuEngine:(id)arg0;
- (void)setDanmukuSettingFragment:(id)arg0;
- (void)setMsgMutuallyExclusiveMsgWithCarnival:(id)arg0;
- (long long)mockNum;
- (void)setMockNum:(long long)arg0;
- (void)setIndexMonitor:(id)arg0;
- (void)setDanmakuMonitor:(id)arg0;
- (void)setStreamProvider:(id)arg0;
- (void).cxx_destruct;
- (id)store;
- (long long)orientation;
- (void)setup;
- (void)setStore:(id)arg0;
- (void)setOrientation:(long long)arg0;
- (BOOL)isSmallScreen;
- (id)streamProvider;
- (void)dealloc;
- (BOOL)orientationDidChange;

@end