//
//     Generated by private class-dump
//

@class NSError, NSDictionary;

@interface AWELiveStreamNotRenderTraceElement : AWELiveBaseElement {
    BOOL _hasReceiveFirstFrame;
    BOOL _isAppear;
    BOOL _isActive;
    BOOL _isScrolling;
    double _startTime;
    NSError *_pullStreamError;
    long long _resumeType;
    long long _willResumeType;
    long long _sceneErrorCode;
    NSDictionary *_playerStateDetailInfo;
}

@property (nonatomic) double startTime;
@property (retain, nonatomic) NSError *pullStreamError;
@property (nonatomic) BOOL hasReceiveFirstFrame;
@property (nonatomic) long long resumeType;
@property (nonatomic) long long willResumeType;
@property (nonatomic) long long sceneErrorCode;
@property (copy, nonatomic) NSDictionary *playerStateDetailInfo;
@property (nonatomic) BOOL isAppear;
@property (nonatomic) BOOL isActive;
@property (nonatomic) BOOL isScrolling;

- (void)initializeElement;
- (BOOL)isAppear;
- (void)setIsAppear:(BOOL)arg0;
- (void)viewController_viewWillAppear;
- (void)viewController_viewDidAppear;
- (void)viewController_viewWillDisAppear;
- (void)viewController_viewDidDisAppear;
- (void)prepareForDisPlay;
- (BOOL)hasReceiveFirstFrame;
- (void)setHasReceiveFirstFrame:(BOOL)arg0;
- (void)onUserEnterLiveRoom:(id)arg0;
- (void)streamPlayer_finish;
- (void)streamPlayer_firstFrame;
- (void)streamPlayer_startToPlay;
- (void)onUserQuitLiveRoom;
- (void)streamPlayer_error:(id)arg0;
- (void)viewController_endDecelerating;
- (void)viewController_willBeginDragging;
- (void)application_WillResignActive;
- (void)application_DidBecomeActive;
- (void)application_DidEnterBackground;
- (void)streamPlayer_willStop;
- (id)firstFrameLogInfo;
- (void)preCheckPlayerStateIfNeeded;
- (void)setWillResumeType:(long long)arg0;
- (void)setSceneErrorCode:(long long)arg0;
- (long long)willResumeType;
- (BOOL)isTracing;
- (void)startMonitorWithResumeType:(long long)arg0;
- (long long)sceneErrorCode;
- (void)clearTrace;
- (void)setPullStreamError:(id)arg0;
- (void)reportMonitorEventIfNeeded:(long long)arg0;
- (long long)resumeType;
- (id)resumeTypeString:(long long)arg0;
- (id)playerStateDetailInfo;
- (id)checkPlayerStateInfo;
- (id)pullStreamError;
- (id)netQualityInfo;
- (void)setPlayerStateDetailInfo:(id)arg0;
- (BOOL)isNoRender;
- (id)playerLoadStateString:(unsigned long long)arg0;
- (id)playerPlaybackString:(unsigned long long)arg0;
- (BOOL)ignorePlayerViewCheck;
- (id)playerViewTreeInfo:(id)arg0;
- (void)trackAppLeave:(BOOL)arg0;
- (void)setResumeType:(long long)arg0;
- (void)setIsScrolling:(BOOL)arg0;
- (void)setStartTime:(double)arg0;
- (id)requestID;
- (void).cxx_destruct;
- (void)setIsActive:(BOOL)arg0;
- (void)setData:(id)arg0;
- (BOOL)isScrolling;
- (double)startTime;
- (BOOL)isActive;
- (void)reset;

@end