//
//     Generated by private class-dump
//

@class NSString, NSDictionary, TSPKDelayDetectSchduler;

@interface TSPKDetectReleaseBadCaseTask : TSPKDetectReleaseTask <TSPKDelayDetectDelegate> {
    long long _detectTime;
    long long _remainDetectTime;
    TSPKDelayDetectSchduler *_delayScheduler;
    NSString *_delayCloseInstanceAddress;
    double _timeDelay;
    double _firstDetectTimestamp;
    NSString *_anchorPage;
    NSDictionary *_params;
}

@property (nonatomic) long long detectTime;
@property (nonatomic) long long remainDetectTime;
@property (retain, nonatomic) TSPKDelayDetectSchduler *delayScheduler;
@property (copy, nonatomic) NSString *delayCloseInstanceAddress;
@property (nonatomic) double timeDelay;
@property (nonatomic) double firstDetectTimestamp;
@property (copy, nonatomic) NSString *anchorPage;
@property (copy, nonatomic) NSDictionary *params;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setTimeDelay:(double)arg0;
- (double)timeDelay;
- (void)decodeParams:(id)arg0;
- (long long)detectTime;
- (void)setDetectTime:(long long)arg0;
- (void)setDelayScheduler:(id)arg0;
- (void)executeDetectWithActualTimeGap:(double)arg0;
- (id)getComparePage;
- (void)setAnchorPage:(id)arg0;
- (void)setFirstDetectTimestamp:(double)arg0;
- (void)setRemainDetectTime:(long long)arg0;
- (long long)remainDetectTime;
- (id)delayCloseInstanceAddress;
- (void)handleDetectResult:(id)arg0 detectTimeStamp:(double)arg1 store:(id)arg2 info:(id)arg3;
- (void)notifyExecuteReleaseDetect:(id)arg0;
- (BOOL)isFirstDetect;
- (BOOL)isFinalDetect;
- (void)addExtraInfoToEventData:(id)arg0 isDelayColse:(BOOL)arg1;
- (void)markRuleInfoToEventData:(id)arg0;
- (void)notifyBadcaseDetected:(id)arg0;
- (void)setDelayCloseInstanceAddress:(id)arg0;
- (double)firstDetectTimestamp;
- (void)repeatExecute;
- (void)execute;
- (void).cxx_destruct;
- (void)setup;
- (id)delayScheduler;
- (id)params;
- (void)setParams:(id)arg0;
- (id)anchorPage;

@end