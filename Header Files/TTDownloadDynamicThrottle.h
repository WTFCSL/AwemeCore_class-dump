//
//     Generated by private class-dump
//

@class TTObservationBuffer;

@interface TTDownloadDynamicThrottle : NSObject {
    unsigned char _observationBufferLength;
    unsigned char _checkObservationBufferLength;
    unsigned char _measureTimes;
    unsigned char _measureTimesMax;
    BOOL _isDynamicBalance;
    unsigned char _rttGap;
    unsigned char _speedGap;
    float _matchConditionPercent;
    float _bandwidthDeltaCoefficient;
    id /* block */ _onDoThrottle;
    TTObservationBuffer *_observationBuff;
    TTObservationBuffer *_checkObservationBuff;
    long long _bandWidth;
    long long _startThrottleBandWidthMin;
    long long _reserveBandWidth;
    long long _dynamicBalanceDivisionThreshold;
    long long _bandwidthDeltaConstant;
}

@property (copy) id /* block */ onDoThrottle;
@property (retain) TTObservationBuffer *observationBuff;
@property unsigned char observationBufferLength;
@property (retain) TTObservationBuffer *checkObservationBuff;
@property unsigned char checkObservationBufferLength;
@property unsigned char measureTimes;
@property unsigned char measureTimesMax;
@property long long bandWidth;
@property long long startThrottleBandWidthMin;
@property BOOL isDynamicBalance;
@property long long reserveBandWidth;
@property unsigned char rttGap;
@property unsigned char speedGap;
@property float matchConditionPercent;
@property long long dynamicBalanceDivisionThreshold;
@property float bandwidthDeltaCoefficient;
@property long long bandwidthDeltaConstant;

- (unsigned char)observationBufferLength;
- (void)setObservationBufferLength:(unsigned char)arg0;
- (unsigned char)checkObservationBufferLength;
- (void)setCheckObservationBufferLength:(unsigned char)arg0;
- (long long)startThrottleBandWidthMin;
- (void)setStartThrottleBandWidthMin:(long long)arg0;
- (unsigned char)rttGap;
- (void)setRttGap:(unsigned char)arg0;
- (unsigned char)speedGap;
- (void)setSpeedGap:(unsigned char)arg0;
- (float)matchConditionPercent;
- (void)setMatchConditionPercent:(float)arg0;
- (long long)dynamicBalanceDivisionThreshold;
- (void)setDynamicBalanceDivisionThreshold:(long long)arg0;
- (float)bandwidthDeltaCoefficient;
- (void)setBandwidthDeltaCoefficient:(float)arg0;
- (long long)bandwidthDeltaConstant;
- (void)setBandwidthDeltaConstant:(long long)arg0;
- (void)setOnDoThrottle:(id /* block */)arg0;
- (void)setIsDynamicBalance:(BOOL)arg0;
- (void)setMeasureTimesMax:(unsigned char)arg0;
- (unsigned char)measureTimesMax;
- (void)setMeasureTimes:(unsigned char)arg0;
- (void)setReserveBandWidth:(long long)arg0;
- (void)setObservationBuff:(id)arg0;
- (void)setCheckObservationBuff:(id)arg0;
- (id /* block */)onDoThrottle;
- (id)observationBuff;
- (id)checkObservationBuff;
- (void)startMeasureBandwidth;
- (id)createObservation:(id)arg0 netQualityType:(long long)arg1 speed:(long long)arg2 throttleSpeed:(long long)arg3;
- (unsigned char)measureTimes;
- (void)doThrottle:(id)arg0;
- (void)createObservationAndCheck:(id)arg0;
- (BOOL)isDynamicBalance;
- (void)doDynamicBalance:(id)arg0;
- (long long)reserveBandWidth;
- (void)doReserveBandWidth:(id)arg0;
- (id)initWithOutputAction:(id /* block */)arg0 params:(id)arg1 throttleSpeed:(long long)arg2;
- (void)setDynamicThrottleSpeed:(long long)arg0;
- (void)dynamicCheckAndThrottle:(id)arg0 netQualityType:(long long)arg1 speed:(long long)arg2 throttleSpeed:(long long)arg3;
- (void)inputUserRtt:(unsigned long long)arg0;
- (void)inputTcpRtt:(unsigned long long)arg0;
- (long long)bandWidth;
- (void)setBandWidth:(long long)arg0;
- (void).cxx_destruct;

@end
