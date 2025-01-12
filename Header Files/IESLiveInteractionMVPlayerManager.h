//
//     Generated by private class-dump
//

@class NSString, IESLiveVideoPlayerController, UIView;
@protocol IESLiveRoomService, IESLiveInteractionMVPlayerManagerDelegate;

@interface IESLiveInteractionMVPlayerManager : NSObject <IESLiveVideoPlayerControllerDelegate> {
    BOOL _isPushingVideoFrames;
    BOOL _needPush;
    BOOL _needUpdateAudioLayout;
    BOOL _needResumeAudioLayout;
    BOOL _readyToResetPushStream;
    BOOL _cameraOpen;
    id<IESLiveInteractionMVPlayerManagerDelegate> _delegate;
    IESLiveVideoPlayerController *_player;
    unsigned long long _currentResolution;
    UIView *_playerView;
    id<IESLiveRoomService> _roomModel;
}

@property (retain, nonatomic) IESLiveVideoPlayerController *player;
@property (nonatomic) unsigned long long currentResolution;
@property (nonatomic) BOOL needPush;
@property (nonatomic) BOOL needUpdateAudioLayout;
@property (nonatomic) BOOL needResumeAudioLayout;
@property (weak, nonatomic) id<IESLiveRoomService> roomModel;
@property (weak, nonatomic) UIView *playerView;
@property (nonatomic) BOOL readyToResetPushStream;
@property (nonatomic) BOOL isPushingVideoFrames;
@property (nonatomic) BOOL cameraOpen;
@property (weak, nonatomic) id<IESLiveInteractionMVPlayerManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)pushVideoBuffer:(struct __CVBuffer { } *)arg0 andCMTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg1;
- (id)roomModel;
- (void)playerController:(id)arg0 currentPlayTime:(double)arg1 playableTime:(double)arg2 duration:(double)arg3;
- (BOOL)isPause;
- (void)mute:(BOOL)arg0;
- (void)setRoomModel:(id)arg0;
- (void)seekToProgress:(double)arg0;
- (id)initWithRoomModel:(id)arg0;
- (void)videoReadyToDisPlayOfPlayerController:(id)arg0;
- (void)playerController:(id)arg0 updateProgress:(double)arg1 duration:(double)arg2;
- (void)playerController:(id)arg0 loadStateDidChange:(unsigned long long)arg1;
- (void)playerController:(id)arg0 playbackStateDidChange:(unsigned long long)arg1;
- (void)playerController:(id)arg0 playerDidFinishError:(id)arg1;
- (void)loadLocalVideoURL:(id)arg0;
- (void)loadVideoURL:(id)arg0 cacheKey:(id)arg1;
- (BOOL)needPush;
- (void)reloadVideoURLs:(id)arg0 cacheKey:(id)arg1;
- (void)reloadVideoURLs:(id)arg0 cacheKey:(id)arg1 needPush:(BOOL)arg2 needUpdateAudioLayout:(BOOL)arg3;
- (void)reloadVideoURLs:(id)arg0 cacheKey:(id)arg1 needPush:(BOOL)arg2;
- (BOOL)isPushingVideoFrames;
- (id)createMVPlayerWithFeature:(unsigned long long)arg0 scalingMode:(long long)arg1;
- (void)setReadyToResetPushStream:(BOOL)arg0;
- (void)setNeedPush:(BOOL)arg0;
- (void)setNeedUpdateAudioLayout:(BOOL)arg0;
- (BOOL)readyToResetPushStream;
- (void)stopPushCheckStreamVideoFrames;
- (void)startPushCheckStreamVideoFrames;
- (void)setIsPushingVideoFrames:(BOOL)arg0;
- (BOOL)needUpdateAudioLayout;
- (void)setNeedResumeAudioLayout:(BOOL)arg0;
- (BOOL)isKTVCapturing;
- (BOOL)needResumeAudioLayout;
- (void)setCameraOpen:(BOOL)arg0;
- (BOOL)cameraOpen;
- (void)updateScalingModeFillOption:(long long)arg0;
- (void)loadVideoVid:(id)arg0 token:(id)arg1;
- (void)cameraCaptureDidStart;
- (void)cameraCaptureDidStop;
- (void).cxx_destruct;
- (BOOL)isAnchor;
- (void)close;
- (void)stop;
- (void)setPlayer:(id)arg0;
- (double)duration;
- (id)delegate;
- (BOOL)isPlaying;
- (id)playerView;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (void)play;
- (void)setPlayerView:(id)arg0;
- (void)pause;
- (id)player;
- (void)prepareToPlay;
- (id)videoID;
- (unsigned long long)currentResolution;
- (void)setCurrentResolution:(unsigned long long)arg0;

@end
