//
//     Generated by private class-dump
//

@interface AWENearbyC2InnerFmpTrackerModel : AWENearbyC2TrackerModel {
    BOOL _interrupted;
    double _totalTime;
    double _visibleTime;
    double _jumpPageTime;
    long long _awemeType;
    unsigned long long _interruptedReason;
    long long _pageType;
}

@property (nonatomic) double totalTime;
@property (nonatomic) double visibleTime;
@property (nonatomic) double jumpPageTime;
@property (nonatomic) long long awemeType;
@property (nonatomic) BOOL interrupted;
@property (nonatomic) unsigned long long interruptedReason;
@property (nonatomic) long long pageType;

- (long long)awemeType;
- (void)setAwemeType:(long long)arg0;
- (void)setJumpPageTime:(double)arg0;
- (void)setVisibleTime:(double)arg0;
- (void)setInterruptedReason:(unsigned long long)arg0;
- (double)jumpPageTime;
- (unsigned long long)interruptedReason;
- (long long)pageType;
- (double)totalTime;
- (void)setInterrupted:(BOOL)arg0;
- (void)setPageType:(long long)arg0;
- (void)setTotalTime:(double)arg0;
- (BOOL)interrupted;
- (double)visibleTime;

@end