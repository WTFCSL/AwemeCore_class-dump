//
//     Generated by private class-dump
//

@class BDWebImageRequest, NSMutableDictionary, TTVideoEngine, NSDictionary, BDXAudioModel, NSString;
@protocol BDXAudioModelPlayerDelegate;

@interface BDXAudioModelPlayer : NSObject <TTVideoEngineDelegate> {
    BOOL _loop;
    BOOL _needNowPlayingInfo;
    BOOL _asyncPrepare;
    BOOL _wasInteraction;
    BOOL _globalPlayCommandEnable;
    BOOL _globalPauseCommandEnable;
    BOOL _globalPreviousTrackCommandEnable;
    BOOL _globalNextTrackCommandEnable;
    BOOL _globalPlaybackPositionCommand;
    id<BDXAudioModelPlayerDelegate> _delegate;
    NSDictionary *_headers;
    double _updateInterval;
    BDXAudioModel *_curModel;
    TTVideoEngine *_engine;
    unsigned long long _curPlayerType;
    NSMutableDictionary *_nowPlayingInfo;
    BDWebImageRequest *_req;
    id _playCommandTarget;
    id _pauseCommandTarget;
    id _previousCommandTarget;
    id _nextCommandTarget;
    id _seekCommandTarget;
}

@property (retain, nonatomic) TTVideoEngine *engine;
@property (nonatomic) unsigned long long curPlayerType;
@property (retain, nonatomic) NSMutableDictionary *nowPlayingInfo;
@property (retain, nonatomic) BDWebImageRequest *req;
@property (nonatomic) BOOL wasInteraction;
@property (retain, nonatomic) id playCommandTarget;
@property (retain, nonatomic) id pauseCommandTarget;
@property (retain, nonatomic) id previousCommandTarget;
@property (retain, nonatomic) id nextCommandTarget;
@property (retain, nonatomic) id seekCommandTarget;
@property (nonatomic) BOOL globalPlayCommandEnable;
@property (nonatomic) BOOL globalPauseCommandEnable;
@property (nonatomic) BOOL globalPreviousTrackCommandEnable;
@property (nonatomic) BOOL globalNextTrackCommandEnable;
@property (nonatomic) BOOL globalPlaybackPositionCommand;
@property (weak, nonatomic) id<BDXAudioModelPlayerDelegate> delegate;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) double currentTime;
@property (readonly, nonatomic) double cacheTime;
@property (readonly, nonatomic) long long status;
@property (readonly, nonatomic) long long loadStatus;
@property (readonly, nonatomic) long long playBitrate;
@property (nonatomic) BOOL loop;
@property (retain, nonatomic) NSDictionary *headers;
@property (nonatomic) BOOL needNowPlayingInfo;
@property (nonatomic) double updateInterval;
@property (retain, nonatomic) BDXAudioModel *curModel;
@property (nonatomic) BOOL asyncPrepare;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)playBitrate;
- (void)refreshNowPlayingInfo;
- (double)cacheTime;
- (void)mute:(BOOL)arg0;
- (void)videoEngine:(id)arg0 loadStateDidChanged:(unsigned long long)arg1;
- (void)videoEngineUserStopped:(id)arg0;
- (void)videoEngineDidFinish:(id)arg0 error:(id)arg1;
- (void)videoEngineDidFinish:(id)arg0 videoStatusException:(long long)arg1;
- (void)videoEngineCloseAysncFinish:(id)arg0;
- (void)videoEngine:(id)arg0 playbackStateDidChanged:(long long)arg1;
- (void)videoEnginePrepared:(id)arg0;
- (void)videoEngineReadyToPlay:(id)arg0;
- (BOOL)asyncPrepare;
- (void)setAsyncPrepare:(BOOL)arg0;
- (id)playCommandTarget;
- (void)setPlayCommandTarget:(id)arg0;
- (id)pauseCommandTarget;
- (void)setPauseCommandTarget:(id)arg0;
- (id)previousCommandTarget;
- (void)setPreviousCommandTarget:(id)arg0;
- (id)nextCommandTarget;
- (void)setNextCommandTarget:(id)arg0;
- (id)seekCommandTarget;
- (void)setSeekCommandTarget:(id)arg0;
- (void)setPlayModel:(id)arg0;
- (void)updateTag:(id)arg0;
- (BOOL)needNowPlayingInfo;
- (void)setNeedNowPlayingInfo:(BOOL)arg0;
- (id)transferStatusDesByStatus:(long long)arg0;
- (id)transferLoadStatusDesByStatus:(long long)arg0;
- (void)setCurPlayerType:(unsigned long long)arg0;
- (void)setGlobalPlayCommandEnable:(BOOL)arg0;
- (void)setGlobalPauseCommandEnable:(BOOL)arg0;
- (void)setGlobalPreviousTrackCommandEnable:(BOOL)arg0;
- (void)setGlobalNextTrackCommandEnable:(BOOL)arg0;
- (void)setGlobalPlaybackPositionCommand:(BOOL)arg0;
- (BOOL)globalPlayCommandEnable;
- (BOOL)globalPauseCommandEnable;
- (BOOL)globalPreviousTrackCommandEnable;
- (BOOL)globalNextTrackCommandEnable;
- (BOOL)globalPlaybackPositionCommand;
- (void)setupNowPlayingInfo:(id)arg0;
- (void)setWasInteraction:(BOOL)arg0;
- (void)clearRemoteCommand;
- (unsigned long long)curPlayerType;
- (void)storeGlobalCommandStatus;
- (void)restoreGlobalCommandStatus;
- (void)setupRemoteCommand;
- (void)preRemoteCommandEnable:(BOOL)arg0;
- (void)nextRemoteCommandEnable:(BOOL)arg0;
- (BOOL)wasInteraction;
- (id)nowPlayingInfo;
- (void)setUpdateInterval:(double)arg0;
- (void)setCurModel:(id)arg0;
- (void)debugLog:(id)arg0;
- (void)resume;
- (double)updateInterval;
- (void)setHeaders:(id)arg0;
- (void).cxx_destruct;
- (long long)status;
- (id)headers;
- (long long)loadStatus;
- (void)stop;
- (id)engine;
- (double)duration;
- (id)delegate;
- (void)prepare;
- (double)currentTime;
- (void)setNowPlayingInfo:(id)arg0;
- (void)setVolume:(float)arg0;
- (id)curModel;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (void)play;
- (void)pause;
- (void)setEngine:(id)arg0;
- (BOOL)loop;
- (void)seekTo:(double)arg0;
- (void)setLoop:(BOOL)arg0;
- (id)initWithPlayerType:(unsigned long long)arg0;
- (id)req;
- (void)setReq:(id)arg0;

@end
