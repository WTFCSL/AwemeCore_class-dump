//
//     Generated by private class-dump
//

@class NSString;
@protocol IESLiveXPlayAudioStreamService, IESLiveOpenPlatformShareScreenService, IESLiveVideoEffectProcessing;

@interface IESLiveXPlayCommonBusinessSingleLiveStrategy : IESLiveXPlayCommonBusinessBaseStrategy <IESLiveGameXPlayContainerBusinessDelegate> {
    BOOL _isInShareScreen;
    BOOL _useCameraLayer;
    id<IESLiveXPlayAudioStreamService> _audioStreamService;
    id<IESLiveOpenPlatformShareScreenService> _shareScreenService;
    id<IESLiveVideoEffectProcessing> _effectProcessingService;
    long long _lastAnchorScreenStatus;
    struct CGSize { double width; double height; } _originalOutputSize;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _ndcAnchorPreViewFrame;
}

@property (retain, nonatomic) id<IESLiveXPlayAudioStreamService> audioStreamService;
@property (retain, nonatomic) id<IESLiveOpenPlatformShareScreenService> shareScreenService;
@property (retain, nonatomic) id<IESLiveVideoEffectProcessing> effectProcessingService;
@property (nonatomic) BOOL isInShareScreen;
@property (nonatomic) BOOL useCameraLayer;
@property (nonatomic) struct CGSize { double width; double height; } originalOutputSize;
@property (nonatomic) long long lastAnchorScreenStatus;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } ndcAnchorPreViewFrame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sendFrameBufferToAppId:(id)arg0 pixelBuffer:(struct __CVBuffer { } *)arg1 withCMTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg2;
- (void)sendAudioFrameToAppId:(id)arg0 frame:(id)arg1 timestamp:(long long)arg2;
- (void)setupCastContext;
- (void)resetCastContext;
- (void)updateAnchorScreenStatus:(long long)arg0;
- (void)setOriginalOutputSize:(struct CGSize { double x0; double x1; })arg0;
- (struct CGSize { double x0; double x1; })originalOutputSize;
- (id)effectProcessingService;
- (void)setLastAnchorScreenStatus:(long long)arg0;
- (void)setCameraOutputSize;
- (long long)lastAnchorScreenStatus;
- (void)setEffectProcessingService:(id)arg0;
- (BOOL)isInShareScreen;
- (void)setShareScreenService:(id)arg0;
- (id)shareScreenService;
- (void)loadXPlayGameWithCompletion:(id /* block */)arg0;
- (void)handleCloseXPlayGame;
- (void)handleXPlayStatusDidUpdate:(long long)arg0;
- (void)restartXplayGame;
- (id)audioStreamService;
- (void)setAudioStreamService:(id)arg0;
- (void)stopShareScreen;
- (void)startShareScreen;
- (void)setNdcAnchorPreViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setIsInShareScreen:(BOOL)arg0;
- (BOOL)useCameraLayer;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })ndcAnchorPreViewFrame;
- (void)playContainer:(id)arg0 didUpdateClearScreenState:(BOOL)arg1;
- (void)playContainer:(id)arg0 didUpdateAnchorPreViewPosition:(long long)arg1 ndcFrameToInstanceView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg2;
- (void)playContainer:(id)arg0 didUpdateAnchorPreViewStatus:(long long)arg1;
- (void)setUseCameraLayer:(BOOL)arg0;
- (void).cxx_destruct;
- (void)startVideoCapture;
- (void)stopVideoCapture;

@end
