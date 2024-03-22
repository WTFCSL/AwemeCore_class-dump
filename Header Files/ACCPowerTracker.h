//
//     Generated by private class-dump
//

@class NSDictionary;

@interface ACCPowerTracker : NSObject {
    double _startTime;
    NSDictionary *_startTrackInfo;
}

@property (nonatomic) double startTime;
@property (retain, nonatomic) NSDictionary *startTrackInfo;

- (long long)currentThermalState;
- (void)beginTrack;
- (void)completeTrackWithPublishModel:(id)arg0 extraParams:(id)arg1;
- (void)setStartTrackInfo:(id)arg0;
- (id)startTrackInfo;
- (void)setStartTime:(double)arg0;
- (void).cxx_destruct;
- (double)startTime;

@end