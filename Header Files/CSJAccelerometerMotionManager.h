//
//     Generated by private class-dump
//

@class NSOperationQueue, NSMapTable, NSMutableDictionary;

@interface CSJAccelerometerMotionManager : NSObject {
    BOOL _triggerFromWeb;
    long long _calculationMethod;
    double _amplitude;
    NSMapTable *_managerContainer;
    NSOperationQueue *_updatesQueue;
    NSMutableDictionary *_triggerFromWebInfo;
}

@property (retain, nonatomic) NSMapTable *managerContainer;
@property (retain, nonatomic) NSOperationQueue *updatesQueue;
@property (nonatomic) double amplitude;
@property (nonatomic) BOOL triggerFromWeb;
@property (retain, nonatomic) NSMutableDictionary *triggerFromWebInfo;
@property (nonatomic) long long calculationMethod;

+ (id)sharedInstance;

- (id)managerContainer;
- (id)triggerFromWebInfo;
- (void)outputAccelertionData:(struct { double x0; double x1; double x2; })arg0 amplitude:(double)arg1 scence:(id)arg2 calculateMethod:(long long)arg3 acceleroMotionAction:(id /* block */)arg4;
- (void)stopAccelerometerWithScence:(id)arg0;
- (void)startAccelerometerWithAmplitude:(double)arg0 triggerFromWeb:(BOOL)arg1 scence:(id)arg2 calculateMethod:(long long)arg3 acceleroMotionAction:(id /* block */)arg4;
- (BOOL)accelerometerActiveWithScence:(id)arg0;
- (BOOL)triggerFromWebWithScence:(id)arg0;
- (void)setManagerContainer:(id)arg0;
- (id)updatesQueue;
- (void)setUpdatesQueue:(id)arg0;
- (BOOL)triggerFromWeb;
- (void)setTriggerFromWeb:(BOOL)arg0;
- (void)setTriggerFromWebInfo:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)setAmplitude:(double)arg0;
- (double)amplitude;
- (long long)calculationMethod;
- (void)setCalculationMethod:(long long)arg0;

@end
