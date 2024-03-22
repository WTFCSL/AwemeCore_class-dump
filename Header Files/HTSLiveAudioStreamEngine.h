//
//     Generated by private class-dump
//

@class NSString, UIImageView, IESLiveRecordCountDownView, IESLiveNormalStreamConfigFactory, IESLiveBackgroundStrategyFactory;
@protocol HTSLiveMediaStreamEngineDelegate, IESLivePushStreamLifeCycle, IESLiveFullLinkMonitor, IESLiveRoomService, IESLiveRealStreamingProvider;

@interface HTSLiveAudioStreamEngine : NSObject <IESLiveStreamStateProtocol, HTSLiveMediaStreamEngine> {
    BOOL _hideLiveRecordLoadingView;
    BOOL _started;
    id<HTSLiveMediaStreamEngineDelegate> _delegate;
    id<IESLiveRoomService> _room;
    UIImageView *_bgPreviewView;
    IESLiveRecordCountDownView *_liveRecordLoadingView;
    IESLiveNormalStreamConfigFactory *_streamConfigFactory;
    id<IESLiveRealStreamingProvider> _streamingProvider;
    id<IESLivePushStreamLifeCycle> _pushStreamLifeCycle;
    id<IESLiveFullLinkMonitor> _fullLinkMonitor;
    long long _engineState;
    IESLiveBackgroundStrategyFactory *_bgStrategyFactory;
}

@property (retain, nonatomic) UIImageView *bgPreviewView;
@property (retain, nonatomic) IESLiveRecordCountDownView *liveRecordLoadingView;
@property (retain, nonatomic) IESLiveNormalStreamConfigFactory *streamConfigFactory;
@property (retain, nonatomic) id<IESLiveRealStreamingProvider> streamingProvider;
@property (retain, nonatomic) id<IESLivePushStreamLifeCycle> pushStreamLifeCycle;
@property (retain, nonatomic) id<IESLiveFullLinkMonitor> fullLinkMonitor;
@property (nonatomic) long long engineState;
@property (nonatomic) BOOL started;
@property (retain, nonatomic) IESLiveBackgroundStrategyFactory *bgStrategyFactory;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (nonatomic) BOOL hideLiveRecordLoadingView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<HTSLiveMediaStreamEngineDelegate> delegate;

- (id)fullLinkMonitor;
- (void)setFullLinkMonitor:(id)arg0;
- (void)setEngineState:(long long)arg0;
- (void)setHideLiveRecordLoadingView:(BOOL)arg0;
- (void)startLiveStreamIfNeeded;
- (id)streamingProvider;
- (void)setStreamingProvider:(id)arg0;
- (void)stopLiveStream;
- (void)pr_showCountDownLoadingView;
- (void)loadStreamer;
- (id)streamConfigFactory;
- (id)pushStreamLifeCycle;
- (void)setBgPreviewView:(id)arg0;
- (id)bgStrategyFactory;
- (id)bgPreviewView;
- (void)setStreamConfigFactory:(id)arg0;
- (id)liveRecordLoadingView;
- (void)setLiveRecordLoadingView:(id)arg0;
- (BOOL)hideLiveRecordLoadingView;
- (void)onPushStreamStateChange:(long long)arg0;
- (void)onPushStreamLogDictCallback:(id)arg0;
- (void)onPushStreamStateError:(long long)arg0;
- (void)showAudioBackgroundView;
- (void)hideAudioBackgroundView;
- (void)setPushStreamLifeCycle:(id)arg0;
- (void)setBgStrategyFactory:(id)arg0;
- (void).cxx_destruct;
- (BOOL)started;
- (void)setStarted:(BOOL)arg0;
- (id)delegate;
- (void)prepare;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (id)room;
- (void)setRoom:(id)arg0;
- (long long)engineState;

@end
