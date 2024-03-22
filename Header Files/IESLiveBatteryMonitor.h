//
//     Generated by private class-dump
//

@interface IESLiveBatteryMonitor : NSObject {
    float _cursorLevel;
    float _costSummary;
    float _levelDeltaSummary;
    double _cursorTime;
}

@property (nonatomic) float cursorLevel;
@property (nonatomic) double cursorTime;
@property (nonatomic) float costSummary;
@property (nonatomic) float levelDeltaSummary;

- (void)recordBatteryChangeIfNeed;
- (void)setCursorLevel:(float)arg0;
- (void)setCursorTime:(double)arg0;
- (float)cursorLevel;
- (double)cursorTime;
- (float)levelDeltaSummary;
- (void)setLevelDeltaSummary:(float)arg0;
- (float)costSummary;
- (void)setCostSummary:(float)arg0;
- (id)levelChangePer100Seconds;
- (id)init;
- (void)setup;
- (void)dealloc;
- (void)reset;

@end
