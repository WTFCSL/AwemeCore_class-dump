//
//     Generated by private class-dump
//

@class NSDictionary, CMMotionManager, NSMutableArray, NSObject;
@protocol IInferenceEngine, OS_dispatch_source, OS_dispatch_queue;

@interface HARService : NSObject {
    BOOL _predicting;
    BOOL _isEnableControlOnMac;
    BOOL _isEnableCollectSensorData;
    BOOL _prohibit;
    int _maxRange;
    int _maxSensorDataRange;
    double _interval;
    double _threshold;
    id<IInferenceEngine> _delegate;
    id /* block */ _predictCB;
    CMMotionManager *_motionManger;
    NSObject<OS_dispatch_source> *_timer;
    NSMutableArray *_inputParams;
    NSMutableArray *_arrayWithResults;
    NSMutableArray *_arrayWithResultsDic;
    NSDictionary *_lastResult;
    NSMutableArray *_accelerometerDataArray;
    NSMutableArray *_gyroscopeDataArray;
    NSObject<OS_dispatch_queue> *_getResultQueue;
    NSObject<OS_dispatch_queue> *_processInputQueue;
    NSObject<OS_dispatch_queue> *_helperQueue;
}

@property (nonatomic) double interval;
@property (nonatomic) double threshold;
@property (nonatomic) int maxRange;
@property (nonatomic) int maxSensorDataRange;
@property (retain, nonatomic) id<IInferenceEngine> delegate;
@property (copy, nonatomic) id /* block */ predictCB;
@property (nonatomic) BOOL predicting;
@property (nonatomic) BOOL isEnableControlOnMac;
@property (nonatomic) BOOL isEnableCollectSensorData;
@property (retain, nonatomic) CMMotionManager *motionManger;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (retain, nonatomic) NSMutableArray *inputParams;
@property (retain, nonatomic) NSMutableArray *arrayWithResults;
@property (retain, nonatomic) NSMutableArray *arrayWithResultsDic;
@property (retain, nonatomic) NSDictionary *lastResult;
@property (retain, nonatomic) NSMutableArray *accelerometerDataArray;
@property (retain, nonatomic) NSMutableArray *gyroscopeDataArray;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *getResultQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *processInputQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *helperQueue;
@property (nonatomic) BOOL prohibit;

+ (id)sharedInstance;

- (id)getLastResultsDicOfRange:(long long)arg0;
- (long long)getLastRangeMostIntStatus:(long long)arg0;
- (void)setMaxSensorDataRange:(int)arg0;
- (void)setArrayWithResults:(id)arg0;
- (void)setArrayWithResultsDic:(id)arg0;
- (void)setAccelerometerDataArray:(id)arg0;
- (void)setGyroscopeDataArray:(id)arg0;
- (void)setProcessInputQueue:(id)arg0;
- (void)setGetResultQueue:(id)arg0;
- (void)setIsEnableControlOnMac:(BOOL)arg0;
- (void)setIsEnableCollectSensorData:(BOOL)arg0;
- (BOOL)prohibit;
- (BOOL)isEnableControlOnMac;
- (BOOL)isOnMacDevice;
- (id)getResultQueue;
- (void)setMotionManger:(id)arg0;
- (id)motionManger;
- (id)processInputQueue;
- (BOOL)isEnableCollectSensorData;
- (id)accelerometerDataArray;
- (void)addOneSensorData:(id)arg0 toRecordArray:(id)arg1;
- (id)gyroscopeDataArray;
- (unsigned long long)inputParamsCount;
- (id)getInputArrayCopy;
- (id /* block */)predictCB;
- (void)addResultToDicArray:(id)arg0;
- (id)getLastStatus;
- (void)addResultToArray:(id)arg0;
- (void)setPredicting:(BOOL)arg0;
- (int)maxSensorDataRange;
- (void)setProhibit:(BOOL)arg0;
- (void)stopPredicting;
- (id)arrayWithResults;
- (id)arrayWithResultsDic;
- (BOOL)startPredicting;
- (BOOL)predicting;
- (void)setPredictCB:(id /* block */)arg0;
- (id)formatCorrectionWith:(id)arg0;
- (id)currentTimeStr;
- (id)getLastResultsOfRange:(long long)arg0;
- (id)findMostFrequentElementInArray:(id)arg0;
- (void)setupWithEngine:(id)arg0;
- (void)setEnableControlOnMacFlagWithBool:(BOOL)arg0;
- (void)setEnableCollectSensorData:(BOOL)arg0;
- (void)setProhibitEnable:(BOOL)arg0;
- (BOOL)isPredicting;
- (void)setPredictCallback:(id /* block */)arg0;
- (id)getLastSensorValueWithDataType:(unsigned long long)arg0 range:(long long)arg1;
- (id)timer;
- (double)threshold;
- (id)init;
- (void).cxx_destruct;
- (void)clearData;
- (double)interval;
- (void)setInterval:(double)arg0;
- (id)helperQueue;
- (id)delegate;
- (void)setTimer:(id)arg0;
- (void)setThreshold:(double)arg0;
- (void)setDelegate:(id)arg0;
- (int)maxRange;
- (void)setMaxRange:(int)arg0;
- (void)setHelperQueue:(id)arg0;
- (id)inputParams;
- (void)setInputParams:(id)arg0;
- (id)getLastResult;
- (id)lastResult;
- (void)setLastResult:(id)arg0;

@end