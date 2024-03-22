//
//     Generated by private class-dump
//

@class NSDictionary, NSString, BDByteScreenCastContext;
@protocol BDSCPlayerProtocol;

@interface BDByteScreenCastDurationHeartbeatTracker : NSObject <BDSCPlayerDelegate> {
    BOOL _stalled;
    BDByteScreenCastContext *_context;
    id<BDSCPlayerProtocol> _player;
    double _lastTrackTime;
    NSDictionary *_commonParams;
    NSDictionary *_playParams;
    long long _videoPlayStartTime;
    long long _currentVideoTotalDuration;
    long long _errorTimes;
}

@property (nonatomic) BOOL stalled;
@property (nonatomic) double lastTrackTime;
@property (copy, nonatomic) NSDictionary *commonParams;
@property (copy, nonatomic) NSDictionary *playParams;
@property (nonatomic) long long videoPlayStartTime;
@property (nonatomic) long long currentVideoTotalDuration;
@property (nonatomic) long long errorTimes;
@property (weak, nonatomic) BDByteScreenCastContext *context;
@property (retain, nonatomic) id<BDSCPlayerProtocol> player;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setCommonParams:(id)arg0;
- (id)commonParams;
- (void)setPlayParams:(id)arg0;
- (long long)errorTimes;
- (void)setErrorTimes:(long long)arg0;
- (long long)videoPlayStartTime;
- (void)trackVideoPlay;
- (void)setVideoPlayStartTime:(long long)arg0;
- (void)onPlayProgressChanged:(id)arg0;
- (void)setCurrentVideoTotalDuration:(long long)arg0;
- (long long)currentVideoTotalDuration;
- (void)trackDurationHeartbeat;
- (double)lastTrackTime;
- (void)updateCommonParamsIfNeeded;
- (void)setLastTrackTime:(double)arg0;
- (void)castPlayStalled;
- (void)castPlayResumed;
- (BOOL)hasCastLaunch;
- (void)stopDurationHeartbeatTrack;
- (void)player:(id)arg0 onError:(id)arg1;
- (void)player:(id)arg0 playStatus:(unsigned long long)arg1;
- (void)player:(id)arg0 progressInfo:(id)arg1;
- (void)player:(id)arg0 dlnaMediaInfo:(id)arg1;
- (void)player:(id)arg0 changeCharity:(id)arg1;
- (void)player:(id)arg0 onCMDErrorCode:(long long)arg1;
- (void)player:(id)arg0 onPushCompletionWithError:(id)arg1;
- (void)playerStatusCallbackException:(id)arg0;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (void)setPlayer:(id)arg0;
- (id)context;
- (void)reset;
- (id)player;
- (BOOL)stalled;
- (id)playParams;
- (void)setStalled:(BOOL)arg0;

@end