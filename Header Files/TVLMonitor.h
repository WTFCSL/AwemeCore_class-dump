//
//     Generated by private class-dump
//

@interface TVLMonitor : NSObject {
    BOOL _shouldReportTimeSeries;
    double _playingEventTimeInterval;
}

@property (nonatomic) BOOL shouldReportTimeSeries;
@property (nonatomic) double playingEventTimeInterval;

+ (id)defaultMonitor;

- (void)setShouldReportTimeSeries:(BOOL)arg0;
- (BOOL)shouldReportTimeSeries;
- (void)setPlayingEventTimeInterval:(double)arg0;
- (id)reportDataWithLogType:(id)arg0 userInfo:(id)arg1;
- (id)reportDataWithUserInfo:(id)arg0;
- (id)liveSdkVersion;
- (double)playingEventTimeInterval;

@end
