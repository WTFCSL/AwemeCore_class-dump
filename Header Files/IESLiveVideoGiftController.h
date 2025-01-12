//
//     Generated by private class-dump
//

@class UIView, NSError, CHHapticEngine, IESLiveVideoGiftResourceModel, NSString, IESLiveVideoGiftMetalView, IESLiveAssetReaderOutput, IESLiveVideoGiftMetalConfiguration, NSObject;
@protocol OS_dispatch_queue, IESLiveVideoGiftControllerDelegate, IESLiveVideoGiftAudioPlayerProtocol;

@interface IESLiveVideoGiftController : NSObject <IESLiveVideoGiftAudioPlayerDelegate> {
    id<IESLiveVideoGiftControllerDelegate> _delegate;
    IESLiveVideoGiftResourceModel *_model;
    unsigned long long _state;
    NSObject<OS_dispatch_queue> *_processQueue;
    IESLiveVideoGiftMetalView *_videoGiftMetalView;
    NSError *_renderError;
    IESLiveAssetReaderOutput *_readerOutput;
    IESLiveVideoGiftMetalConfiguration *_configuration;
    id<IESLiveVideoGiftAudioPlayerProtocol> _audioPlayer;
    CHHapticEngine *_hapticEngine;
    NSObject<OS_dispatch_queue> *_audioPlaybackQueue;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _liveRenderSuperViewFame;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *processQueue;
@property (retain, nonatomic) IESLiveVideoGiftMetalView *videoGiftMetalView;
@property (retain, nonatomic) NSError *renderError;
@property (retain, nonatomic) IESLiveAssetReaderOutput *readerOutput;
@property (retain, nonatomic) IESLiveVideoGiftMetalConfiguration *configuration;
@property (retain, nonatomic) id<IESLiveVideoGiftAudioPlayerProtocol> audioPlayer;
@property (retain, nonatomic) CHHapticEngine *hapticEngine;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *audioPlaybackQueue;
@property (readonly, nonatomic) UIView *view;
@property (weak, nonatomic) id<IESLiveVideoGiftControllerDelegate> delegate;
@property (retain) IESLiveVideoGiftResourceModel *model;
@property (nonatomic) unsigned long long contentMode;
@property unsigned long long state;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } liveRenderSuperViewFame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setLiveRenderSuperViewFame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)playWithConfiguration:(id)arg0;
- (void)pr_addNotification;
- (void)reportVibrateSceneError:(id)arg0;
- (void)destroyHapticEngine;
- (id)renderError;
- (void)startPlayAudioResources;
- (id)readerOutput;
- (void)stopWithFinishPlayingCallback;
- (void)didApplicationDidBecomeActive:(id)arg0;
- (void)audioPlayer:(id)arg0 prepareWithSampleRate:(double)arg1 channels:(unsigned int)arg2;
- (void)audioPlayer:(id)arg0 processAudioFrameWithRawData:(float **)arg1 samples:(int)arg2 timestamp:(long long)arg3;
- (void)audioPlayer:(id)arg0 didOccurError:(id)arg1;
- (void)playWithResourceDirectory:(id)arg0 orientation:(unsigned long long)arg1 loop:(BOOL)arg2 maskResourceDic:(id)arg3;
- (void)pr_play:(BOOL)arg0;
- (void)playWithResourceDirectory:(id)arg0 orientation:(unsigned long long)arg1 loop:(BOOL)arg2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })pr_updateMetalViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 error:(id *)arg1;
- (void)renderCompletion;
- (void)pr_updateMetalViewFrame:(id *)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_realDisplayFrameOnScreen:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_getMetalViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 displayFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg1;
- (void /* unknown type, empty encoding */)_getRenderPositionMultiFactor:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 displayFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg1;
- (void)pr_playOnMetalWithLoop:(BOOL)arg0;
- (void)runSyncSafeOnAudioPlaybackQueue:(id /* block */)arg0;
- (void)playWithResourceDirectory:(id)arg0 orientation:(unsigned long long)arg1;
- (struct CGSize { double x0; double x1; })originVideoSizeOfRGBChannels;
- (void)setProcessQueue:(id)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })liveRenderSuperViewFame;
- (void)setVideoGiftMetalView:(id)arg0;
- (id)videoGiftMetalView;
- (void)createAudioPlayBackQueueIfNeeded;
- (void)pr_configRenderViewContentModeFromModel;
- (void)pauseAudioPlayerIfNeeded;
- (void)resumeAudioPlayerIfNeeded;
- (void)_startPlayAudioResources;
- (void)seekAudioPlayerToTimeIfNeeded:(double)arg0;
- (void)stopAudioPlayerIfNeeded;
- (void)startPlayAudioPlayerFromBeginning;
- (void)setReaderOutput:(id)arg0;
- (void)pr_didFinishPlayingWithError:(id)arg0;
- (id)audioPlaybackQueue;
- (void)reportAt:(unsigned long long)arg0 sceneError:(id)arg1;
- (void)pr_playingWithNonFatalError:(id)arg0;
- (void)setRenderError:(id)arg0;
- (void)setAudioPlaybackQueue:(id)arg0;
- (double)totalDurationOfPlayingEffect;
- (void)setModel:(id)arg0;
- (id)init;
- (void)setContentMode:(unsigned long long)arg0;
- (BOOL)resume;
- (void).cxx_destruct;
- (unsigned long long)state;
- (void)flush;
- (id)audioPlayer;
- (id)model;
- (void)setState:(unsigned long long)arg0;
- (id)initWithDelegate:(id)arg0;
- (void)close;
- (void)stop;
- (id)delegate;
- (id)configuration;
- (double)currentTime;
- (void)willResignActive:(id)arg0;
- (BOOL)isPlaying;
- (void)setAudioPlayer:(id)arg0;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (BOOL)pause;
- (void)seekToTime:(double)arg0;
- (id)view;
- (void)setConfiguration:(id)arg0;
- (unsigned long long)contentMode;
- (id)hapticEngine;
- (void)setHapticEngine:(id)arg0;
- (id)processQueue;

@end
