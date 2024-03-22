//
//     Generated by private class-dump
//

@class IESLiveVideoGiftMetalConfiguration, NSMutableDictionary, IESLiveVideoGiftMetalPlayer, IESLiveVideoGiftResourceModel, NSString, NSObject, CHHapticEngine;
@protocol OS_dispatch_source, OS_dispatch_queue, IESLiveMultiVideoGiftControllerDelegate;

@interface IESLiveMultiVideoGiftController : NSObject <IESLiveVideoGiftMetalPlayerDelegate> {
    IESLiveVideoGiftMetalPlayer *_foregroundPlayer;
    IESLiveVideoGiftMetalPlayer *_backgroundPlayer;
    id<IESLiveMultiVideoGiftControllerDelegate> _delegate;
    IESLiveVideoGiftResourceModel *_model;
    unsigned long long _state;
    IESLiveVideoGiftMetalConfiguration *_configuration;
    NSMutableDictionary *_callbackMap;
    NSObject<OS_dispatch_source> *_drawTimer;
    CHHapticEngine *_hapticEngine;
    NSObject<OS_dispatch_queue> *_asyncRenderQueue;
    NSObject<OS_dispatch_queue> *_mtkRenderQueue;
}

@property (retain, nonatomic) IESLiveVideoGiftMetalConfiguration *configuration;
@property (retain, nonatomic) NSMutableDictionary *callbackMap;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *drawTimer;
@property (retain, nonatomic) CHHapticEngine *hapticEngine;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *asyncRenderQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *mtkRenderQueue;
@property (retain, nonatomic) IESLiveVideoGiftMetalPlayer *foregroundPlayer;
@property (retain, nonatomic) IESLiveVideoGiftMetalPlayer *backgroundPlayer;
@property (weak, nonatomic) id<IESLiveMultiVideoGiftControllerDelegate> delegate;
@property (retain, nonatomic) IESLiveVideoGiftResourceModel *model;
@property unsigned long long state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (float)audioPlayVolume;
- (void)playWithConfiguration:(id)arg0;
- (void)pr_addNotification;
- (void)configMTKRenderQueue;
- (void)destroyAllPlayers;
- (void)pr_didFinishPlayingWithForegroundError:(id)arg0 backgroundError:(id)arg1;
- (void)reportVibrateSceneError:(id)arg0;
- (void)setForegroundPlayer:(id)arg0;
- (void)setBackgroundPlayer:(id)arg0;
- (id)foregroundPlayer;
- (id)backgroundPlayer;
- (void)destroyHapticEngine;
- (id)callbackMap;
- (void)renderCompletionWithForegroundError:(id)arg0 backgroundError:(id)arg1;
- (void)pauseAllPlayers;
- (void)resumeAllPlayers;
- (void)startPlayAudioResources;
- (BOOL)enableCallbackForEvent:(id)arg0 withPlayer:(id)arg1;
- (void)startPlayHaptic;
- (void)startDrawTimer;
- (void)didApplicationDidEnterBackground:(id)arg0;
- (void)clearDrawTimer;
- (void)reportAtPlayer:(id)arg0 scene:(unsigned long long)arg1 sceneError:(id)arg2;
- (id)mtkRenderQueue;
- (void)setDrawTimer:(id)arg0;
- (id)drawTimer;
- (id)asyncRenderQueue;
- (void)setAsyncRenderQueue:(id)arg0;
- (void)player:(id)arg0 frameCallBack:(double)arg1;
- (void)player:(id)arg0 playingWithNonFatalError:(id)arg1;
- (void)player:(id)arg0 didFinishPlayingWithError:(id)arg1;
- (void)player:(id)arg0 willPlayFrame:(id)arg1;
- (void)player:(id)arg0 didEndPlayingFrame:(id)arg1;
- (void)player:(id)arg0 didFrameCommandBufferCommitted:(id)arg1 error:(id)arg2;
- (void)player:(id)arg0 sceneError:(id)arg1 scene:(unsigned long long)arg2;
- (BOOL)player:(id)arg0 videoControllerShouldDelayPlayIfAudioResouces:(id)arg1;
- (void)viewDidLoadOnPlayer:(id)arg0;
- (void)didStartPlayingAudioPlayer:(id)arg0;
- (void)player:(id)arg0 prepareAudioWithSampleRate:(double)arg1 channels:(unsigned int)arg2;
- (void)player:(id)arg0 processAudioFrameWithRawData:(float **)arg1 samples:(int)arg2 timestamp:(long long)arg3;
- (id)player:(id)arg0 externalAudioPlayer:(id)arg1 resource:(id)arg2 error:(id *)arg3;
- (void)stopWithFinishPlayingCallback;
- (void)setCallbackMap:(id)arg0;
- (void)didApplicationDidBecomeActive:(id)arg0;
- (void)setMtkRenderQueue:(id)arg0;
- (void)setModel:(id)arg0;
- (id)init;
- (BOOL)resume;
- (void).cxx_destruct;
- (unsigned long long)state;
- (id)model;
- (void)setState:(unsigned long long)arg0;
- (id)initWithDelegate:(id)arg0;
- (void)stop;
- (id)delegate;
- (id)configuration;
- (void)willResignActive:(id)arg0;
- (BOOL)isPlaying;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (BOOL)pause;
- (void)seekToTime:(double)arg0;
- (void)setConfiguration:(id)arg0;
- (id)hapticEngine;
- (void)setHapticEngine:(id)arg0;

@end