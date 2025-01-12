//
//     Generated by private class-dump
//

@class NSDate;

@interface AWECloudAlbumCostTimer : NSObject {
    BOOL _paused;
    BOOL _pausedManually;
    double _total;
    NSDate *_startDate;
}

@property (nonatomic) double total;
@property (retain, nonatomic) NSDate *startDate;
@property (readonly, nonatomic, getter=isPaused) BOOL paused;
@property (readonly, nonatomic, getter=isPausedManually) BOOL pausedManually;

- (void)didBecomeActiveNotification:(id)arg0;
- (void)didEnterBackgroundNotification:(id)arg0;
- (void)p_pauseManually:(BOOL)arg0;
- (BOOL)isPausedManually;
- (double)total;
- (id)init;
- (void)resume;
- (void).cxx_destruct;
- (long long)duration;
- (id)startDate;
- (void)setStartDate:(id)arg0;
- (BOOL)isPaused;
- (void)start;
- (void)dealloc;
- (void)pause;
- (void)setTotal:(double)arg0;

@end
