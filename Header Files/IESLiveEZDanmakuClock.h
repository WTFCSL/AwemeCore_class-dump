//
//     Generated by private class-dump
//

@class CADisplayLink;

@interface IESLiveEZDanmakuClock : NSObject {
    CADisplayLink *_displayLink;
    id /* block */ _updater;
    unsigned long long _clockState;
    double _lastTimeDate;
    double _time;
    double _pausingSpeed;
    double _speed;
}

@property (nonatomic) double speed;
@property (readonly, nonatomic) double currentTime;

+ (id)danmakuClockWithUpdater:(id /* block */)arg0;

- (void)p_refresh;
- (void)p_reset;
- (id)initWithUpdater:(id /* block */)arg0;
- (void)end;
- (void)resume;
- (void).cxx_destruct;
- (void)setSpeed:(double)arg0;
- (double)currentTime;
- (void)start;
- (void)dealloc;
- (void)pause;
- (double)speed;

@end
