//
//     Generated by private class-dump
//

@class IESLiveCarnivalDanmakuEngine, IESLiveCarnivalDanmakuNodeFactory, IESLiveContourDetectConfig, NSString, IESLiveCarnivalStore, NSObject, IESLiveEmojiTextParser, LiveCore;
@protocol OS_dispatch_queue, IESLiveRealStreamingProviderAdapter;

@interface IESLiveCarnivalFragment : IESLiveRoomComponent <IESLiveCarnivalRouter, HTSLiveAnchorActions, IESLiveAnchorRoomStatusChangeEvents, IESLiveSEIListener, IESLiveAutoRotateAction, IESLiveFIFAPlayerScaleAction, IESLiveMessageInteractionModuleDanmakuAction, HTSLiveStreamPlayerAction, IESLiveRevenueInteractAction> {
    BOOL _mattingModelPrepared;
    BOOL _contourDetecting;
    BOOL _hideCarnivalDanmakuArea;
    BOOL _thermalStateDidBecomeBad;
    BOOL _cameraResetCarnival;
    BOOL _cameraReset;
    IESLiveCarnivalStore *_store;
    long long _orientation;
    IESLiveContourDetectConfig *_contourDetectConfig;
    id<IESLiveRealStreamingProviderAdapter> _streamProvider;
    LiveCore *_livecore;
    NSObject<OS_dispatch_queue> *_danmakuProcessQueue;
    IESLiveCarnivalDanmakuEngine *_carnivalEngine;
    IESLiveCarnivalDanmakuNodeFactory *_nodeFactory;
    IESLiveEmojiTextParser *_emoticonParser;
}

@property (retain, nonatomic) IESLiveCarnivalStore *store;
@property (nonatomic) long long orientation;
@property (nonatomic) BOOL mattingModelPrepared;
@property (nonatomic) BOOL contourDetecting;
@property (nonatomic) BOOL hideCarnivalDanmakuArea;
@property (retain, nonatomic) IESLiveContourDetectConfig *contourDetectConfig;
@property (nonatomic) BOOL thermalStateDidBecomeBad;
@property (nonatomic) BOOL cameraResetCarnival;
@property (nonatomic) BOOL cameraReset;
@property (retain, nonatomic) id<IESLiveRealStreamingProviderAdapter> streamProvider;
@property (retain, nonatomic) LiveCore *livecore;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *danmakuProcessQueue;
@property (retain, nonatomic) IESLiveCarnivalDanmakuEngine *carnivalEngine;
@property (retain, nonatomic) IESLiveCarnivalDanmakuNodeFactory *nodeFactory;
@property (retain, nonatomic) IESLiveEmojiTextParser *emoticonParser;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)arg0;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (void)startLive;
- (void)componentOrientationChanged:(long long)arg0;
- (void)startAnchorLiveWithRoom:(id)arg0;
- (void)startRevenueInteractWithScene:(unsigned long long)arg0;
- (void)endRevenueInteractWithScene:(unsigned long long)arg0;
- (void)playerDidResume;
- (void)onCameraWillChangeTo:(id)arg0 source:(long long)arg1;
- (void)onCameraDidChangeTo:(id)arg0 source:(long long)arg1;
- (void)setNodeFactory:(id)arg0;
- (id)nodeFactory;
- (void)onFIFAPannelSatusChange:(long long)arg0;
- (void)componentOrientationTransitionBegin:(long long)arg0;
- (void)animationForAutoRotateToOrientation:(long long)arg0 duration:(double)arg1 size:(struct CGSize { double x0; double x1; })arg2;
- (unsigned long long)supportSeiTypes;
- (void)onParseredWithSEIResult:(id)arg0;
- (void)setHideCarnivalDanmakuArea:(BOOL)arg0;
- (BOOL)hideCarnivalDanmakuArea;
- (void)hideCarnivalDanmaku;
- (void)showCarnivalDanmaku;
- (unsigned long long)currentCarnivalType;
- (BOOL)carnivalDanmakuIsRunning;
- (void)prepareForStartCarnivalMomentWith:(id)arg0;
- (void)startCarnivalMoment;
- (void)stopCarnivalMoment;
- (void)cleanAllCarnivalDanmaku;
- (void)anchorContourDetectConfigChange:(id)arg0;
- (void)generalCarnivalWillAppear:(BOOL)arg0 withMsg:(id)arg1;
- (void)generalCarnivalSpecialContentShow:(BOOL)arg0;
- (void)addCarnivalDanmakuNodeWithMessage:(id)arg0;
- (void)liveDanmakuShouldDisplayInWeak:(BOOL)arg0;
- (void)fontSizeTypeDidChanged:(long long)arg0;
- (void)alphaPercentValueDidChanged:(long long)arg0;
- (void)areaTypeDidChanged:(long long)arg0;
- (void)carnivalDanmuSwitchDidChanged:(BOOL)arg0;
- (void)baseDanmakuSwitchDidChanged:(BOOL)arg0;
- (void)setMattingModelPrepared:(BOOL)arg0;
- (void)setContourDetectConfig:(id)arg0;
- (void)setDanmakuProcessQueue:(id)arg0;
- (void)liveThermalStateBadNotification:(id)arg0;
- (id)carnivalEngine;
- (void)setCarnivalEngine:(id)arg0;
- (void)resetCarnivalSetting;
- (BOOL)canAddCarnivalDanmakuMessage:(long long)arg0;
- (void)startCarnivalDanmakuMommentWithMessage:(id)arg0;
- (BOOL)canOpenContour:(id)arg0;
- (void)p_effectBachAlgorithmStart:(BOOL)arg0;
- (BOOL)contourDetecting;
- (void)p_addCarnivalDanmakuWithMessage:(id)arg0;
- (id)contourDetectConfig;
- (void)resetCarnivalDanmakuMomment;
- (id)getCarnivalDanmakuSettingsWithMessage:(id)arg0;
- (id)emoticonParser;
- (BOOL)canAddGeneralCarnivalMessage:(id)arg0;
- (void)safeAyncOnDanmakuQueue:(id /* block */)arg0;
- (BOOL)mattingModelPrepared;
- (void)setContourDetecting:(BOOL)arg0;
- (BOOL)streamStyleWillBeChanged:(id)arg0;
- (void)setCameraReset:(BOOL)arg0;
- (BOOL)cameraReset;
- (BOOL)cameraResetCarnival;
- (void)resetCarnivalDanmaku;
- (id)livecore;
- (void)setThermalStateDidBecomeBad:(BOOL)arg0;
- (id)danmakuProcessQueue;
- (BOOL)thermalStateDidBecomeBad;
- (void)setCameraResetCarnival:(BOOL)arg0;
- (void)setLivecore:(id)arg0;
- (void)setEmoticonParser:(id)arg0;
- (void)setStreamProvider:(id)arg0;
- (void).cxx_destruct;
- (id)store;
- (long long)orientation;
- (void)setStore:(id)arg0;
- (void)keyboardWillHide;
- (void)setOrientation:(long long)arg0;
- (void)keyboardWillShow;
- (id)streamProvider;

@end
