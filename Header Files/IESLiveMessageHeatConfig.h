//
//     Generated by private class-dump
//

@class NSNumber;

@interface IESLiveMessageHeatConfig : NSObject {
    NSNumber *_heatUpThreshold;
    NSNumber *_coolDownThreshold;
    double _stableTimeDuration;
}

@property (retain, nonatomic) NSNumber *heatUpThreshold;
@property (retain, nonatomic) NSNumber *coolDownThreshold;
@property (nonatomic) double stableTimeDuration;

- (void)setHeatUpThreshold:(id)arg0;
- (void)setCoolDownThreshold:(id)arg0;
- (id)heatUpThreshold;
- (id)coolDownThreshold;
- (double)stableTimeDuration;
- (void)setStableTimeDuration:(double)arg0;
- (id)init;
- (void).cxx_destruct;

@end
