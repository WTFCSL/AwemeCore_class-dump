//
//     Generated by private class-dump
//

@class NSString, BDPAudioInterruptionConfig, BDPUniqueID, BDPAudioSessionLock;
@protocol BDPBackgroundAudioAVPlayerProtocol;

@interface BDPBackgroundAudioAVPlayer : AVPlayer <BDPAudioInterruptionDelegate> {
    BOOL _needPlay;
    BOOL _isStopping;
    double _currentOffset;
    NSString *_src;
    id<BDPBackgroundAudioAVPlayerProtocol> _delegate;
    id _timeObserve;
    BDPAudioSessionLock *_audioSessionLock;
    BDPAudioInterruptionConfig *_audioInterruptionConfig;
    BDPUniqueID *_currentUniqueID;
    double _realRate;
}

@property (retain, nonatomic) id timeObserve;
@property (nonatomic) double currentOffset;
@property (nonatomic) BOOL needPlay;
@property (retain, nonatomic) BDPAudioSessionLock *audioSessionLock;
@property (retain, nonatomic) BDPAudioInterruptionConfig *audioInterruptionConfig;
@property (retain, nonatomic) BDPUniqueID *currentUniqueID;
@property (nonatomic) double realRate;
@property (nonatomic) BOOL isStopping;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) double buffered;
@property (copy, nonatomic) NSString *src;
@property (weak, nonatomic) id<BDPBackgroundAudioAVPlayerProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupObserver;
- (id)timeObserve;
- (void)setTimeObserve:(id)arg0;
- (BOOL)needPlay;
- (void)setNeedPlay:(BOOL)arg0;
- (void)heapPhonesUnavailable;
- (void)pauseByInterrupt;
- (void)resumeByInterrupt;
- (void)setAudioInterruptionConfig:(id)arg0;
- (id)audioInterruptionConfig;
- (void)setAudioSessionLock:(id)arg0;
- (id)audioSessionLock;
- (void)p_resetStatus;
- (id)currentUniqueID;
- (void)onRateChange:(id)arg0;
- (void)onWaitingState:(id)arg0;
- (void)offWaitingState:(id)arg0;
- (void)onAudioStateChange:(id)arg0;
- (void)onPlayEndNotification:(id)arg0;
- (void)p_stateChange:(id)arg0 data:(id)arg1;
- (double)realRate;
- (void)setRealRate:(double)arg0;
- (void)postPlayEvent;
- (void)setCurrentUniqueID:(id)arg0;
- (void)removeAudioObserver;
- (void)addAudioObserver;
- (void)setSrc:(id)arg0 headers:(id)arg1 uniqueID:(id)arg2;
- (double)currentOffset;
- (id)init;
- (void).cxx_destruct;
- (void)stop;
- (double)duration;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (void)play;
- (void)pause;
- (id)src;
- (void)setSrc:(id)arg0;
- (void)setCurrentOffset:(double)arg0;
- (void)playImmediatelyAtRate:(double)arg0;
- (double)buffered;
- (BOOL)isStopping;
- (void)seekToTime:(double)arg0 completion:(id /* block */)arg1;
- (void)setIsStopping:(BOOL)arg0;

@end