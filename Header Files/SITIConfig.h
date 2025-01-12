//
//     Generated by private class-dump
//

@class NSString;

@interface SITIConfig : NSObject {
    BOOL _usingGPU;
    BOOL _usingARM;
    BOOL _interactDisableSiti;
    BOOL _dropEncodeFps;
    int _sitiStrategyVer;
    int _threadCount;
    int _periodMS;
    int _extractDuration;
    int _framesCountsCalcSiti;
    int _qulityMode;
    int _strategyAdjustMode;
    NSString *_categoryParams;
    NSString *_bitrateRatios;
    NSString *_fpsRatios;
}

@property (nonatomic) int sitiStrategyVer;
@property (nonatomic) BOOL usingGPU;
@property (nonatomic) BOOL usingARM;
@property (nonatomic) int threadCount;
@property (nonatomic) int periodMS;
@property (nonatomic) int extractDuration;
@property (nonatomic) int framesCountsCalcSiti;
@property (nonatomic) int qulityMode;
@property (nonatomic) BOOL interactDisableSiti;
@property (nonatomic) BOOL dropEncodeFps;
@property (nonatomic) int strategyAdjustMode;
@property (copy, nonatomic) NSString *categoryParams;
@property (copy, nonatomic) NSString *bitrateRatios;
@property (copy, nonatomic) NSString *fpsRatios;

- (void)setThreadCount:(int)arg0;
- (BOOL)interactDisableSiti;
- (void)setSitiStrategyVer:(int)arg0;
- (void)setUsingGPU:(BOOL)arg0;
- (void)setUsingARM:(BOOL)arg0;
- (void)setPeriodMS:(int)arg0;
- (void)setExtractDuration:(int)arg0;
- (void)setFramesCountsCalcSiti:(int)arg0;
- (void)setQulityMode:(int)arg0;
- (void)setInteractDisableSiti:(BOOL)arg0;
- (void)setDropEncodeFps:(BOOL)arg0;
- (void)setCategoryParams:(id)arg0;
- (void)setBitrateRatios:(id)arg0;
- (void)setFpsRatios:(id)arg0;
- (BOOL)dropEncodeFps;
- (int)sitiStrategyVer;
- (BOOL)usingGPU;
- (BOOL)usingARM;
- (int)periodMS;
- (int)framesCountsCalcSiti;
- (int)extractDuration;
- (int)qulityMode;
- (int)strategyAdjustMode;
- (id)categoryParams;
- (id)bitrateRatios;
- (id)fpsRatios;
- (void)setStrategyAdjustMode:(int)arg0;
- (void).cxx_destruct;
- (int)threadCount;
- (id)description;

@end
