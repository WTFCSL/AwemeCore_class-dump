//
//     Generated by private class-dump
//

@class NLEInterface_OC, RACSignal, NSString, NSMutableArray;
@protocol DVEEditingContextProtocol, IESServiceProvider;

@interface DVEPlayerService : NSObject <DVEPlayerServiceProtocol> {
    BOOL _isPlayComplete;
    BOOL _autoResetPauseTime;
    BOOL _forceToPlayFromTargetStart;
    double _currentPlayerTime;
    long long _status;
    double _needPausePlayerTime;
    id<IESServiceProvider> _serviceProvider;
    NSMutableArray *_playerTimeChangeBlocks;
    NSMutableArray *_statuseChangeBlocks;
    NLEInterface_OC *_nle;
    id<DVEEditingContextProtocol> _mediaContext;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _startPlayTime;
}

@property (retain, nonatomic) NSMutableArray *playerTimeChangeBlocks;
@property (retain, nonatomic) NSMutableArray *statuseChangeBlocks;
@property (nonatomic) BOOL isPlayComplete;
@property (nonatomic) double currentPlayerTime;
@property (nonatomic) long long status;
@property (weak, nonatomic) NLEInterface_OC *nle;
@property (weak, nonatomic) id<DVEEditingContextProtocol> mediaContext;
@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (nonatomic) double needPausePlayerTime;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } startPlayTime;
@property (nonatomic) BOOL autoResetPauseTime;
@property (nonatomic) BOOL forceToPlayFromTargetStart;
@property (readonly, nonatomic) RACSignal *playerTimeDidChangeSignal;
@property (readonly, nonatomic) RACSignal *playerCompleteSignal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setStartPlayTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0;
- (id)initWithNLEInterface:(id)arg0;
- (void)setPlayerTimeChangBlock:(id /* block */)arg0;
- (void)setPlayerStatuseChangBlock:(id /* block */)arg0;
- (void)playFrom:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0 duration:(double)arg1 completeBlock:(id /* block */)arg2;
- (void)playForSlot:(id)arg0 completeBlock:(id /* block */)arg1;
- (void)seekToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0 isSmooth:(BOOL)arg1;
- (void)seekToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0 isSmooth:(BOOL)arg1 completionHandler:(id /* block */)arg2;
- (double)maxTrackDuration;
- (void)resetAutoPauseTime;
- (void)resetPlayerWithViews:(id)arg0;
- (double)currentPlayerTime;
- (double)needPausePlayerTime;
- (void)setNeedPausePlayerTime:(double)arg0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })startPlayTime;
- (BOOL)isPlayComplete;
- (BOOL)autoResetPauseTime;
- (void)setAutoResetPauseTime:(BOOL)arg0;
- (BOOL)forceToPlayFromTargetStart;
- (void)setForceToPlayFromTargetStart:(BOOL)arg0;
- (id)playerTimeDidChangeSignal;
- (id)playerCompleteSignal;
- (id)mediaContext;
- (void)setMediaContext:(id)arg0;
- (id)nle;
- (void)setNle:(id)arg0;
- (void)initRACObserve;
- (void)setPlayerCompleteBlockForVE;
- (void)setCurrentPlayerTime:(double)arg0;
- (void)notifyTimeChangeEvent;
- (void)setIsPlayComplete:(BOOL)arg0;
- (void)notifyStatuesEvent;
- (id)playerTimeChangeBlocks;
- (id)statuseChangeBlocks;
- (void)setPlayerTimeChangeBlocks:(id)arg0;
- (void)setStatuseChangeBlocks:(id)arg0;
- (void).cxx_destruct;
- (long long)status;
- (void)setServiceProvider:(id)arg0;
- (void)setStatus:(long long)arg0;
- (id)serviceProvider;
- (BOOL)isPlaying;
- (void)dealloc;
- (void)play;
- (void)pause;

@end
