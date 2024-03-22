//
//     Generated by private class-dump
//

@class NSMutableArray, NSLock, NSString, VEFPSCalculator, VEVideoDecimator;

@interface VEAdaptiveFrameRateController : NSObject <VEFrameRateSignalReceiver> {
    BOOL _isActive;
    BOOL _needReset;
    double _maxFPS;
    double _desiredFPS;
    double _currentFPS;
    double _lastDiscardSignalTime;
    unsigned long long _discardSignalCount;
    double _lastMoreFrameSignalTime;
    double _signalInterval;
    double _keepStartTime;
    unsigned long long _controlType;
    VEFPSCalculator *_fpsCalculator;
    VEVideoDecimator *_videoDecimator;
    NSMutableArray *_fpsArray;
    unsigned long long _fpsMaxSize;
    NSLock *_lock;
}

@property BOOL isActive;
@property (nonatomic) double maxFPS;
@property (nonatomic) double desiredFPS;
@property (nonatomic) double currentFPS;
@property (nonatomic) double lastDiscardSignalTime;
@property (nonatomic) unsigned long long discardSignalCount;
@property (nonatomic) double lastMoreFrameSignalTime;
@property (nonatomic) double signalInterval;
@property (nonatomic) double keepStartTime;
@property unsigned long long controlType;
@property (retain, nonatomic) VEFPSCalculator *fpsCalculator;
@property (retain, nonatomic) VEVideoDecimator *videoDecimator;
@property (retain, nonatomic) NSMutableArray *fpsArray;
@property (nonatomic) unsigned long long fpsMaxSize;
@property (retain, nonatomic) NSLock *lock;
@property (nonatomic) BOOL needReset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setMaxFPS:(double)arg0;
- (double)maxFPS;
- (void)setCurrentFPS:(double)arg0;
- (void)setLastDiscardSignalTime:(double)arg0;
- (void)setLastMoreFrameSignalTime:(double)arg0;
- (void)setSignalInterval:(double)arg0;
- (void)setKeepStartTime:(double)arg0;
- (void)setFpsCalculator:(id)arg0;
- (void)setVideoDecimator:(id)arg0;
- (void)setFpsArray:(id)arg0;
- (void)setFpsMaxSize:(unsigned long long)arg0;
- (void)setNeedReset:(BOOL)arg0;
- (id)fpsCalculator;
- (id)videoDecimator;
- (id)fpsArray;
- (BOOL)frameArrived;
- (double)desiredFPS;
- (double)currentFPS;
- (double)keepStartTime;
- (unsigned long long)fpsMaxSize;
- (double)lastDiscardSignalTime;
- (double)signalInterval;
- (unsigned long long)discardSignalCount;
- (void)setDiscardSignalCount:(unsigned long long)arg0;
- (void)discardFrameSignalWithCurrentFPS:(double)arg0;
- (void)needMoreFrameSignalWithCurrentFPS:(double)arg0;
- (void)receiveCurrentFrameRate:(double)arg0;
- (void)activeController:(BOOL)arg0;
- (void)setDesiredFPS:(double)arg0;
- (double)lastMoreFrameSignalTime;
- (BOOL)needReset;
- (id)init;
- (void).cxx_destruct;
- (void)setIsActive:(BOOL)arg0;
- (void)setControlType:(unsigned long long)arg0;
- (id)lock;
- (unsigned long long)controlType;
- (BOOL)isActive;
- (void)reset;
- (void)setLock:(id)arg0;

@end