//
//     Generated by private class-dump
//

@class IESLiveScreenshotAudioContext, NSString;
@protocol IESLiveRoomExtensionCommunicator, IESLiveScreencastPushStreamer, IESLivePushStreamLifeCycle, IESScreenshotTimeline, IESLiveRoomService;

@interface IESLiveScreenshotHubImpl : NSObject <IESLiveScreencastLiveInjectService, IESLiveScreenshotHub> {
    BOOL pushStreamSuccessed;
    BOOL _isLiving;
    id<IESLiveRoomService> _room;
    long long _liveState;
    id<IESLiveRoomExtensionCommunicator> _extensionCommunicator;
    id<IESScreenshotTimeline> _timeline;
    IESLiveScreenshotAudioContext *_audioContext;
    id<IESLivePushStreamLifeCycle> _pushStreamLifeCycle;
}

@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (nonatomic) BOOL isLiving;
@property (nonatomic) long long liveState;
@property (retain, nonatomic) id<IESLiveRoomExtensionCommunicator> extensionCommunicator;
@property (retain, nonatomic) id<IESScreenshotTimeline> timeline;
@property (retain, nonatomic) IESLiveScreenshotAudioContext *audioContext;
@property (retain, nonatomic) id<IESLivePushStreamLifeCycle> pushStreamLifeCycle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<IESLiveScreencastPushStreamer> pushStreamer;
@property BOOL pushStreamSuccessed;

+ (id)sharedInstance;

- (BOOL)isLiving;
- (long long)liveState;
- (void)setLiveState:(long long)arg0;
- (void)appWillTerminateNotification;
- (void)setIsLiving:(BOOL)arg0;
- (void)pauseLive;
- (void)resumeLive;
- (void)stopLive;
- (id)pushStreamLifeCycle;
- (void)setPushStreamLifeCycle:(id)arg0;
- (void)audioSessionRouteDidChange;
- (void)startLiveWithRoom:(id)arg0 trackContext:(id)arg1;
- (long long)currentMicVolumePower;
- (id)extensionCommunicator;
- (id)pushStreamer;
- (BOOL)pushStreamSuccessed;
- (void)setPushStreamSuccessed:(BOOL)arg0;
- (void)setExtensionCommunicator:(id)arg0;
- (void)listenExtensionState;
- (void)setupLiveCoreSession;
- (void)startAudioRecord;
- (void)addObserverForWillTerminate;
- (void)addObserverForDidBecomeActive;
- (void)headsetNotificationMethod;
- (void)passVideoEncoderParams;
- (void)listenStreamData;
- (void)passPauseBackgroundImage;
- (id)fillColorWithImage:(id)arg0 imageScale:(double)arg1 imageCenterOffset:(struct CGPoint { double x0; double x1; })arg2 fillColor:(id)arg3 reSize:(struct CGSize { double x0; double x1; })arg4;
- (void)loadPauseWebImageWithCompletion:(id /* block */)arg0;
- (id)currentClarityConfigParamsDict;
- (id)init;
- (void)setTimeline:(id)arg0;
- (void)releaseResources;
- (void).cxx_destruct;
- (id)timeline;
- (void)applicationDidBecomeActive:(id)arg0;
- (id)room;
- (void)setRoom:(id)arg0;
- (void)setAudioContext:(id)arg0;
- (id)audioContext;

@end
